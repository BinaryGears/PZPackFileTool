/*
 * Copyright (c) 2025 BinaryGears. All rights reserved.
 *
 * This software is licensed under the MIT License.
 * See the accompanying LICENSE file for details 
 */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdint>

#include "EntireTexturePNG_.h"

void extractPNG_(char* &memblock, int size, int index);

int main() {
    std::streampos size;
    char* memblock;
    //skip the header information that is not needed
    int skip_bytes = 12;
    int index = skip_bytes;

    EntireTexturePNG_ oPNG_;

    std::ifstream file("pack.pack", std::ios::in|std::ios::binary|std::ios::ate);
    if (file.is_open()) {
        size = file.tellg();
        memblock = new char[size];
        file.seekg(0, std::ios::beg);
        file.read(memblock, size);
        file.close();
        
        //find out how many characters are in the PNG files name
        oPNG_.mSetCharCount(memblock[index]);
        index = index + 4;
        
        //use index as an offset
        for (int i = 0; i < oPNG_.mGetCharCount(); i++) {
            uint32_t value = memblock[i+index];
            oPNG_.mSetName(memblock[i+index]);
        }
        
        //update the index
        index = index + oPNG_.mGetCharCount();

        std::cout << oPNG_.mGetName() << "\n";


        extractPNG_(memblock, size, index);

        delete[] memblock;
    }

    else {
        std::cout << "Can't open file" << std::endl;
    }

    return 0;
}

void extractPNG_(char* &memblock, int size, int index) {
    //magic number to find start of the PNG file
    uint32_t png_magic = 0x89504E47;
    uint32_t value = 0;

    for (; index < size; index++) {
        value = memblock[index] << 24 | memblock[index + 1] << 16 | memblock[index + 2] << 8 | memblock[index + 3];
        if (value == png_magic) {
            std::cout << "Found the png file \n";
            break;
        }
    }

    std::ofstream outputfile("output.png", std::ios::out | std::ios::binary);

    for (int i = index; i < size; i++) {
        const char* c = &memblock[i];
        outputfile.write(c, sizeof(char));
    }

    outputfile.close();
}

