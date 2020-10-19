

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

int climbStairs2(int n) { 
    int first = 0, second = 1, tmp = 0;
    while (n--) {
        tmp = first + second;
        first = second;
        second = tmp;
    }
    return tmp;
}

int main(void) {
    printf("result:%d\n", climbStairs(10));
    printf("result2:%d\n", climbStairs2(10));
    return 0;
}
