#include <iostream>
#include <string>
using namespace std;

int to_dec_sys(int num[], int a, int qua) {
	int ans = 0;
	for (int i = 0; i < qua; ++i) {
		ans = ans * a + num[i];
	}
	return ans;
}

string to_a_sys(int num, int a) {
	string ans = "";
	while (num) {
		ans = to_string(num % a) + ans;
		num /= a;
	}
	return ans;
}

int main() {
	int qua;
	cin >> qua;
	int* num = new int[qua];
	for (int i = 0; i < qua; i++) {
		cin >> num[i];
	}
	int a, b;
	cin >> a >> b;
	cout << to_a_sys(to_dec_sys(num, a, qua), b);
	return 0;
}
