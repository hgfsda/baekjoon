#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	int cnt = 1;
	getline(cin, str);
	for (int i = 0; i < str.length(); ++i) {
		if (str[i] == ' ' && i != str.length() - 1)
			++cnt;
	}
	if (str[0] == ' ') --cnt;
	cout << cnt;
	return 0;
}