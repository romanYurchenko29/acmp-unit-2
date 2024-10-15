#include <stdio.h>
#include <cmath>
using namespace std;

int main(){
	int x1, y1, x2, y2;
	scanf_s("%i %i %i %i", &x1, &y1, &x2, &y2);
	printf_s("%4f", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) ));
	return 0;
}