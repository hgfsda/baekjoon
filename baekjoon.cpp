#include <iostream>
using namespace std;

int main() {
	int B[100], N, M, s, e, temp;
	cin >> N >> M;
	for (int i = 0; i < N; ++i)
		B[i] = i + 1;
	for (int i = 0; i < M; ++i) {
		cin >> s >> e;
		for (int j = s - 1; j < e; ++j) {
			temp = B[j];
			B[j] = B[e - 1];
			B[e - 1] = temp;
			--e;
		}
	}
	for (int i = 0; i < N; ++i)
		cout << B[i] << ' ';
	return 0;
}