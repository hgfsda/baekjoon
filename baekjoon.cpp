#include <iostream>
using namespace std;

int main() {
	int N[30], cnt;
	for (int i = 0; i < 30; ++i) {
		N[i] = 0;
	}
	for (int i = 0; i < 28; ++i) {
		cin >> cnt;
		N[cnt - 1] = 1;
	}
	for (int i = 0; i < 30; ++i)
		if (N[i] == 0)
			cout << i + 1 << '\n';
	return 0;
}