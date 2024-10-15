#include <iostream>

using namespace std;

int main() {
	string cell;

	cin >> cell;

	if (cell[0] == 'A' || cell[0] == 'C' || cell[0] == 'E' || cell[0] == 'G') {
		if (cell[1] == '1' || cell[1] == '3' || cell[1] == '5' || cell[1] == '7') {
			cout << "BLACK";
		}
		else {
			cout << "WHITE";
		}
	} else if (cell[0] == 'B' || cell[0] == 'D' || cell[0] == 'F' || cell[0] == 'H') {
		if (cell[1] == '2' || cell[1] == '4' || cell[1] == '6' || cell[1] == '8') {
			cout << "BLACK";
		}
		else {
			cout << "WHITE";
		}
	}
	return 0;
}