#include "EntireTexturePNG_.h"

EntireTexturePNG_::EntireTexturePNG_() {
}

EntireTexturePNG_::~EntireTexturePNG_() {
	delete[] this->memblock;
}