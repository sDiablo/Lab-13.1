#include "dod.h"
#include "var.h" 

using namespace nsVar;

void nsDod::dod() {
	double R = -(x * x / (4 * n * n + 2 * n));
	a *= R;
}

