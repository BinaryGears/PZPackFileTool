/*
 * Copyright (c) 2025 BinaryGears. All rights reserved.
 *
 * This software is licensed under the MIT License.
 * See the accompanying LICENSE file for details
 */

#include "SubtexturePNG_.h"

SubtexturePNG_::SubtexturePNG_() {

}

SubtexturePNG_::~SubtexturePNG_() {
	delete[] this->memblock;
}

uint32_t SubtexturePNG_::mGetCharCount() {
	return this->name_char_count;
}

std::string SubtexturePNG_::mGetName() {
	return this->name;
}

uint32_t SubtexturePNG_::mGetX() {
	return this->x;
}

uint32_t SubtexturePNG_::mGetY() {
	return this->y;
}

uint32_t SubtexturePNG_::mGetWidth() {
	return this->width;
}

uint32_t SubtexturePNG_::mGetHeight() {
	return this->height;
}

void SubtexturePNG_::mSetCharCount() {

}

void SubtexturePNG_::mSetName() {

}

void SubtexturePNG_::mSetX() {

}

void SubtexturePNG_::mSetY() {

}

void SubtexturePNG_::mSetWidth() {

}

void SubtexturePNG_::mSetHeight() {

}