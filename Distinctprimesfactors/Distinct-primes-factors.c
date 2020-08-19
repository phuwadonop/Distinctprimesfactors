#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int findvafact();
int main() {
    int number = 0,n;
    scanf("%d",&n);
    while (1) {
        if (findvafact(++number) == n) {
            int dist = 0;
            for (int i = 1; i < n; i++) {
                if (findvafact(number + i) == n) dist++;
            }
            if (dist == n-1) break;
        }
    }
    printf("%d", number);
}
int findvafact(int x) {
    int checkpoint = 0;
    int div = 2;
    int repeat = 0;
    while (x!=1) {
        if (x % div == 0) {
            x /= div;
            repeat++;
            if (repeat == 1) checkpoint++;
        }
        else { div++; repeat = 0; }
    }
    return checkpoint;
}
