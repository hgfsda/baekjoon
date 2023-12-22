#include <iostream>
using namespace std;

int main() {

	int A, B, C;
	cin >> A >> B >> C;

	B += C;
	while (B >= 60) {
		B -= 60;
		A += 1;
		if (A >= 24)
			A -= 24;
	}

	cout << A << " " << B << endl;
	return 0;
}