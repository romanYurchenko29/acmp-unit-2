#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b,c,d;
	cin >> a >> b >> c >> d;
	if (abs(a-c) == abs(d-b)) {
		cout << "YES";
	}
	else {
		cout<<"NO";
	}
}