#include <iostream>
using namespace std;

int main() {
	int arr;
	cin >> arr;
	if (arr < 1000 || arr > 3000)
		return 1;
	cout << arr - 543 << endl;
	
	return 0;
}