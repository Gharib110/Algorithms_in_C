#include <stdio.h>

//gcd is function that compute greatest common divisor of two number
int gcd(int x, int y) {
    int z;
    while (x > 0) {
        if (x < y) {
            z = x;
            x = y;
            y = z;
        }
        x = x - y;
    }
    return y;
}

int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0) {
        printf("x=%d y=%d gcd(x,y)=%d", x, y, gcd(x, y));
    }
    return 0;
}
