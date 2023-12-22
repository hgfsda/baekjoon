#include <iostream>
using namespace std;

int main() {
	int A[100], N, M, i, j, temp;
	cin >> N >> M;
	for (int s = 0; s < N; ++s)
		A[s] = s+1;
	for (int s = 0; s < M; ++s) {
		cin >> i >> j;
		temp = A[i - 1];
		A[i - 1] = A[j - 1];
		A[j - 1] = temp;
	}
	for (int s = 0; s < N; ++s)
		cout << A[s] << ' ';

	return 0;
}