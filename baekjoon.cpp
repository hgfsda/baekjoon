#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, arr[100], v, cnt = 0;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> arr[i];
	}
	cin >> v;
	for (int i = 0; i < N; ++i)
		if (v == arr[i])
			++cnt;
	cout << cnt;
	return 0;
}