/*
 * Copyright (c) 2025 BinaryGears. All rights reserved.
 *
 * This software is licensed under the MIT License.
 * See the accompanying LICENSE file for details
 */

#include "EntireTexturePNG_.h"

EntireTexturePNG_::EntireTexturePNG_() {

}

EntireTexturePNG_::~EntireTexturePNG_() {
	delete[] this->memblock;
}

uint32_t EntireTexturePNG_::mGetCharCount() {
	return this->name_char_count;
}

std::string EntireTexturePNG_::mGetName() {
	return this->name;
}

uint32_t EntireTexturePNG_::mGetTotalSubtextures() {
	return this->total_sub_textures;
}

void EntireTexturePNG_::mSetCharCount(uint32_t name_char_count) {
	this->name_char_count = name_char_count;
}

void EntireTexturePNG_::mSetName(char name) {
	this->name = this->name + name;
}

void EntireTexturePNG_::mSetTotalSubtextures(uint32_t total_sub_textures) {
	this->total_sub_textures = total_sub_textures;
}