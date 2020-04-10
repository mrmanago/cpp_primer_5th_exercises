#include <iostream>

#include "Chapter6.h"

int fact(int v) {
	if (v == 0 || v == 1) {
		return 1;
	} else {
		return v * fact(v - 1);
	}
}