//main 
#include "nthtime.h"
#include <iostream>

using namespace std;
int main() {

	int a;
	cout << "Provide a non-negative number (0 to leave program): ";
	for (int a; cin >> a && a && a > 0;) {
		cout << a << number_suffix(a) << "\n";
		cout << "Thanks for using this program.\n";
	}
	return 0;
}