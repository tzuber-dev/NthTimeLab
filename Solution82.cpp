// test file

#include "nthtime.h"

#include <cassert>

using namespace std;

int main() {

	assert(number_suffix(0) == "");


	assert(number_suffix(-2) == "");

	assert(number_suffix(1) == "st");

	assert(number_suffix(2) == "nd");

	assert(number_suffix(3) == "rd");

	assert(number_suffix(7) == "th");

	assert(number_suffix(90) == "th");


	assert(number_suffix(75) == "th");

	assert(number_suffix(21) == "st");

	assert(number_suffix(42) == "nd");

	return 0;
}