#include <iostream>
using namespace std;

int main() {
	int N, score[1000], max = 0;
	float total = 0;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> score[i];
		if (score[i] > max) max = score[i];
	}
	for (int i = 0; i < N; ++i) {
		total += score[i] / static_cast<float>(max) * 100;
	}
	cout << total / N;
	return 0;
}