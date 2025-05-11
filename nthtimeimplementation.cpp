#include "nthtime.h"


#include <iostream>
using namespace std;

string number_suffix(int a) {
	if (a <= 0) return "";

	const int lastsecondpairdigits = a % 100;
	if (lastsecondpairdigits >= 11 && lastsecondpairdigits <= 13) {
		return "th";
	}

	const int lastpairdigits = a % 10;
	if (lastpairdigits == 1) {
		return "st";
	}
	if (lastpairdigits == 2) {
		return "nd";
	}
	if (lastpairdigits == 3) {
		return "rd";
	}
	else {
		return "th";
	}
}