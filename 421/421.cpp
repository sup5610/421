#include <iostream>
#include <cmath>
#include <sstream>
#include <string>

using namespace std;


void even(int x) {
	x = (x * 3) + 1;
}

void odd(int x) {
	x = (x / 2);
}


int main() {
	string si;
	stringstream ss;
	int ii;


	cout << "What number would you like to start with?" << endl;
	getline(cin, si);
	ss << si;
	ss >> ii;

	cout << ii << endl;


	while (ii != 1) {
		if (ii % 2 == 0) {
			even(ii);
			cout << ii << endl;
		}
		else if (ii % 2 == 1) {
			odd(ii);
			cout << ii << endl;
		}
	}


	return 0;
}