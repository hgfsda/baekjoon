#include <iostream>
using namespace std;

int main() {
	int N[10], total[42], cnt = 0;
	for (int i = 0; i < 42; ++i) {
		total[i] = 0;
	}
	for (int i = 0; i < 10; ++i) {
		cin >> N[i];
		N[i] = N[i] % 42;
		total[N[i]] += 1;
	}
	for (int i = 0; i < 42; ++i) {
		if (total[i] != 0)
			++cnt;
	}
	cout << cnt;
	return 0;
}