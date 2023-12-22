#include <iostream>
using namespace std;

int main() {

	int A, B, C;
	cin >> A >> B >> C;
	
	if (A == B && A == C && B == C)
		cout << 10000 + A * 1000 << endl;
	else if (A != B && A != C && B != C) {
		if (A >= B && A >= C)
			cout << A * 100 << endl;
		else if (B >= A && B >= C)
			cout << B * 100 << endl;
		else if (C >= B && C >= A)
			cout << C * 100 << endl;
	}
	else if (A == B && A != C)
		cout << 1000 + A * 100 << endl;
	else if (A == C && A != B)
		cout << 1000 + A * 100 << endl;
	else if (C == B && B != A)
		cout << 1000 + B * 100 << endl;

	return 0;
}