#include "c1.h"



c1::c1() {
	counter = 0;
}

c1::~c1() {}

void c1::adder(int num) {
	counter += num;
}

int c1::get() {
	return c1::counter;
}
