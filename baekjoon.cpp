#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, total = 0;
	char arr[101];
	cin >> N;
	cin >> arr;
	for (int i = 0; i < N; ++i) {
		total += arr[i] - '0';
	}
	cout << total;
	return 0;
}