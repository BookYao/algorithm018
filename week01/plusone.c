
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  * Note: The returned array must be malloced, assume caller calls free().
 *   */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    if (!digits || digitsSize < 0) {
        return NULL;
    }

    int i;
    for (i = digitsSize - 1; i >= 0; i--) {
        if ((digits[i] + 1) == 10) {
            digits[i] = 0;
        } else {
            digits[i] = digits[i] + 1;
            *returnSize = digitsSize;
            return digits;
        }
    }

    int *newArr = (int *)malloc(sizeof(int)*(digitsSize+1));
    if (newArr) {
        memset(newArr, 0, sizeof(int)*(digitsSize+1));
        newArr[0] = 1;
    } else {
        return NULL;
    }

    *returnSize = digitsSize+1;
    return newArr;
}

int main() {
    int size = 0;
    int digits[1] = {9};
    int *arr = plusOne(digits, sizeof(digits)/sizeof(int), &size);
    int i;
    for (i = 0; i <size; i++) {
        printf("i:%d\n", arr[i]);
    }
    return 0;
}
