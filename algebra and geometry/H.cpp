#include <cmath>
#include <stdio.h>

int main() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("-1");
                
            }
            else {
                printf("0");
              
            }
        }
        else {
            printf("1\n%lf", -double(c) / double(b));
            
        }
    }
    else {
        long long d = b * b - 4 * a * c;
        if (d < 0) {
            printf("0");
        } else if (d == 0) {
            printf("1\n%lf", -double(b) / double(2 * a));
         
        }
        else {
            printf("2\n%lf\n%lf", (-double(b) + sqrt(d)) / (2 * double(a)), (-double(b) - sqrt(d)) / (2 * double(a)));
        }
        return 0;
    }
}
