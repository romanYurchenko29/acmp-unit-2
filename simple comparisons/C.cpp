#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
    int left = (a / 1000) / 100 + ((a / 1000) / 10) % 10 + (a / 1000) % 10;
    int right = (a % 1000) / 100 + ((a % 1000) / 10) % 10 + (a % 1000) % 10;
	if (left == right){
		cout << "YES";
	}
	else cout << "NO";
}