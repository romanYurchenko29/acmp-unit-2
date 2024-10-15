#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a == c && b == d) {
		cout << "NO";
		
    } else{
        if (abs(c - a) <= 1 && abs(b - d) <= 1) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
	return 0;
}