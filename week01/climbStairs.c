

#include <stdio.h>

int climbStairs(int n){
    if (n < 0) {
        return 0;
    }

    if (n <= 2) {
        return n;
    }

    int first  = 1, second = 2;
    int i, tmp = 0;
    for (i = 3; i <= n; i++) {
        tmp = first + second;
        first = second;
        second = tmp;
    }

    return tmp;
}

int main(void) {
    printf("result:%d\n", climbStairs(5));
    return 0;
}
