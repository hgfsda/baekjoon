#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int T;
	char S[10][1000], s[10], e[10];
	cin >> T;
	for (int i = 0; i < T; ++i) {
		cin >> S[i];
		s[i] = S[i][0];
		e[i] = S[i][strlen(S[i]) - 1];
	}
	for (int i = 0; i < T; ++i)
		cout << s[i] << e[i] << '\n';
	return 0;
}