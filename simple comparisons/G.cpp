#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a < 2) {
		cout << 0;
    } else{
		if (a % 2 == 0) {
			cout << a / 2;
		} else {
			cout << a;
    	}
    }
	return 0;
}