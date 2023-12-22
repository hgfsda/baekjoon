#include <iostream>
using namespace std;

int main() {
	int A[9], max, cnt;
	for (int i = 0; i < 9; ++i) {
		cin >> A[i];
		if (i == 0) {
			max = A[0];
			cnt = 1;
		}
		if (A[i] > max) {
			max = A[i];
			cnt = i + 1;
		}
	}
	cout << max << '\n' << cnt;
	return 0;
}