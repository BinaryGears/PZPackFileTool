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