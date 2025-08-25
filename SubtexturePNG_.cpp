#include "SubtexturePNG_.h"

SubtexturePNG_::SubtexturePNG_() {

}

SubtexturePNG_::~SubtexturePNG_() {
	delete[] this->memblock;
}