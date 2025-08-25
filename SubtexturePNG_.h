/*
 * Copyright (c) 2025 BinaryGears. All rights reserved.
 *
 * This software is licensed under the MIT License.
 * See the accompanying LICENSE file for details
 */

#pragma once

#include <cstdint>
#include <string>

class SubtexturePNG_ {
public:
	SubtexturePNG_();
	~SubtexturePNG_();

	uint32_t mGetCharCount();
	std::string mGetName();
	uint32_t mGetX();
	uint32_t mGetY();
	uint32_t mGetWidth();
	uint32_t mGetHeight();

	void mSetCharCount();
	void mSetName();
	void mSetX();
	void mSetY();
	void mSetWidth();
	void mSetHeight();

private:
	uint32_t name_char_count = 0;
	std::string name = {};
	uint32_t x = 0;
	uint32_t y = 0;
	uint32_t width = 0;
	uint32_t height = 0;
	uint32_t unknown1 = 0;
	uint32_t unknown2 = 0;
	uint32_t unknown3 = 0;
	uint32_t unknown4 = 0;

	char* memblock;
};
