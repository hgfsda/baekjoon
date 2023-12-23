#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T, R;
	string str, result[1001];
	cin >> T;
	for (int i = 0; i < T; ++i) {
		int cnt = -1;
		cin >> R >> str;
		for (int j = 0; j < R * str.length(); ++j) {
			if (j % R == 0)
				++cnt;
			result[i] += str[cnt];
		}
		cout << result[i] << '\n';
	}
	return 0;
}