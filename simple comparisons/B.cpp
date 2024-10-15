#include <stdio.h>

int main() {
    int a, b,c ;
    scanf_s("%i %i %i", &a,&b, &c);
    if (a * b == c) {
        printf("YES");
    }
    else {
        printf("NO");
    }
}