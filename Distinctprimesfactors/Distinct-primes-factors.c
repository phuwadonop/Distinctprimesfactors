#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int findvafact();
int main() {
    int number = 0;
    while (1) {
        if (findvafact(++number) == 4) {
            if (findvafact(number + 1) == 4 && findvafact(number + 2) == 4 && findvafact(number + 3) == 4) break;
        }
    }
    printf("%d", number);
}
int findvafact(int x) {
    int checkpoint = 0;
    int div = 2;
    int repeat = 0;
    while (1) {
        if (x % div == 0) {
            x /= div;
            repeat++;
            if (repeat == 1) checkpoint++;
            if (x == 1) break;
        }
        else { div++; repeat = 0; }
    }
    return checkpoint;
}
