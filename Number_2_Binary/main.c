#include <stdio.h>

//bin compute binary equivalent of a number like 10 into 64-bit binary number, eg. 10 => 101000000000...0
void bin(int x) {
    int divisor = 2;
    int num[64] = {0};
    int i = 63;
    int remaining = 0;

    while (x > 0) {
        x = x / 2;
        remaining = x % 2;
        num[i] = remaining;
        i -= 1;
    }

    for (int j = 63; j >= 0; j-=1) {
        printf("%d", num[j]);
    }
    printf("\n");
}

int main(void) {
    int x;
    scanf("%d", &x);
    printf("num=%d, bin=", x);
    bin(x);
    return 0;
}
