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