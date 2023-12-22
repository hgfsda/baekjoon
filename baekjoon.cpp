#include <iostream>
using namespace std;

int main() {
	int A[100], N, M, i, j, k;
	cin >> N >> M;
	for (int s = 0; s < N; ++s)
		A[s] = 0;
	for (int s = 0; s < M; ++s) {
		cin >> i >> j >> k;
		for (int t = i - 1; t < j; ++t)
			A[t] = k;
	}
	for (int s = 0; s < N; ++s)
		cout << A[s] << ' ';

	return 0;
}