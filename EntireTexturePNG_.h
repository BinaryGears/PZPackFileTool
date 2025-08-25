#pragma once

#include <cstdint>
#include <string>
class EntireTexturePNG_ {
public:
	EntireTexturePNG_();
	~EntireTexturePNG_();

private:
	uint32_t name_char_count = 0;
	std::string name = {};
	uint32_t total_sub_textures = 0;
	uint32_t unknown1 = 0;

	char* memblock;
};
