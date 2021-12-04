#include <iostream>
#include <string>
using namespace std;

int to_dec_sys(string num, int a) {
	int ans = 0;
	for (int i = 0; i < num.length(); ++i) {
		ans = ans * a + (int)(num[i] - '0');
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
	string num;
	int a, b;
	cin >> num >> a >> b;
	cout << to_a_sys(to_dec_sys(num, a), b);
	return 0;
}
