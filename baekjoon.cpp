#include <iostream>
using namespace std;

int main() {
	int X, N, a[100], b[100], total = 0;
	cin >> X >> N;
	for (int i = 0; i < N; ++i) {
		cin >> a[i] >> b[i];
		total += a[i] * b[i];
	}
	if (total == X)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}