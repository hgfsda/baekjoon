#include <iostream>
using namespace std;

int main() {

	int A[10000], B[10000], T;
	cin >> T;
	
	for (int i = 0; i < T; ++i) {
		cin >> A[i] >> B[i];
	}
	for (int i = 0; i < T; ++i)
		cout << A[i] + B[i] << endl;

	return 0;
}