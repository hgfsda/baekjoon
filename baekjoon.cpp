#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	int alphabet[26];
	cin >> str;
	for (int i = 0; i < 26; ++i)
		alphabet[i] = -1;
	for (int i = 0; i < str.length(); ++i)
		if (alphabet[str[i] - 'a'] == -1) alphabet[str[i] - 'a'] = i;
	for (int i = 0; i < 26; ++i)
		cout << alphabet[i] << ' ';
	return 0;
}