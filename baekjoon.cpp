#include <iostream>
using namespace std;

int main() {
	int N, A, min, max;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> A;
		if (i == 0)
			min = max = A;
		if (A < min) min = A;
		if (A > max) max = A;
	}
	cout << min << ' ' << max;
	return 0;
}