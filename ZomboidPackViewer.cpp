/*
 * Copyright (c) 2025 BinaryGears. All rights reserved.
 *
 * This software is licensed under the MIT License.
 * See the accompanying LICENSE file for details 
 */

#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
    std::streampos size;
    char* memblock;
    uint32_t value = 0;
    bool foundpng = false;

    std::ifstream file("pack.pack", std::ios::in|std::ios::binary|std::ios::ate);
    if (file.is_open()) {
        size = file.tellg();
        memblock = new char[size];
        file.seekg(0, std::ios::beg);
        file.read(memblock, size);
        file.close();

        int index = 0;
        for(;index < size; index++) {
            value = memblock[index] << 24 | memblock[index + 1] << 16 | memblock[index + 2] << 8 | memblock[index + 3];
            if (value == 0x89504E47) {
                foundpng = true;
                std::cout << "Found the png file \n";
                break;
            }
        }

        std::ofstream outputfile("output.png", std::ios::out|std::ios::binary);
        
        for (int i = index; i < size; i++) {
            const char* c = &memblock[i];
            outputfile.write(c, sizeof(char));
        }

        delete[] memblock;
        outputfile.close();
    }

    else {
        std::cout << "Can't open file" << std::endl;
    }

    return 0;
}

