#include <stdio.h>

int main() {
    int a, b;
    scanf_s("%i %i", &a,&b);
    if (a > b) {
        printf(">");
    }
    else if(a<b){
        printf("<");
    }
    else {
        printf("=");
    }
}