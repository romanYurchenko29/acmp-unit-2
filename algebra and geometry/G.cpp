#include <iostream>

#include <string>
using namespace std;


int main() {
	int a, b, c;
	scanf_s("%i %i %i", &a, &b, &c);
	string ans = "";
	if (a == 0 && b == 0 && c == 0) {
		printf_s("%i", 0);
	}
	else {
		if (a != 0) {
			ans += to_string(a);
		}

		if (b != 0) {
			if (b < 0) {
				if (abs(b) == 1) {
					ans += "-x";
				}
				else {
					ans += to_string(b) + "x";
				}
			} else {
				if (abs(b) == 1) {
					ans += "+x";
				}
				else {
					ans += "+" + to_string(b) + "x";
				}
			}
		}

		if (c != 0) {
			if (c < 0) {
				if (abs(c) == 1) {
					ans += "-y";
				}
				else {
					ans += to_string(c) + "y";
				}
			} else {
				if (abs(c) == 1) {
					ans += "+y";
				}
				else {
					ans += "+" + to_string(c) + "y";
				}
			}
		}

		if (ans[0] == '+') {
			ans = ans.substr(1);
		}
		cout << ans;
	}

	return 0;
}