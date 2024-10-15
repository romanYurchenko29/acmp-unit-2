#include <iostream>
using namespace std;
int main() {
	int a1,b1,a2,b2,a3,b3,a4,b4, result = 0;
	/*int a, b; 
	for (int i = 0; i < 4; i++) {
		cin >> a >> b;
		result += a - b;
	}*/
    //оставил код, т.к хотел на паре показать, что если можно было циклы, то не надо выделять больше памяти
	cin >> a1 >> b1 >> a2 >> b2;
	cin >> a3 >> b3 >> a4 >> b4;
	result = (a1 + a2 + a3 + a4) - (b1 + b2 + b3 + b4);

	if (result > 0) {
		cout << 1;
	}
	else if (result < 0) {
		cout << 2;
	}
	else if (result == 0) {
		cout << "DRAW";
	}
	return 0;
}