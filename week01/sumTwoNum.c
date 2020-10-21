

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *  * Note: The returned array must be malloced, assume caller calls free().
 *   */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    if (!nums) {
        *returnSize = 0;
        return NULL;
    }
    int i, j = 0;
    for (i = 1; i < numsSize; ) {
        if ((nums[j] + nums[i]) == target) {
            int *result = (int *)malloc(2*sizeof(int));
            result[0] = j;
            result[1] = i;
            *returnSize = 2;
            return result;
        }

        if (i+1 == numsSize) {
            j++;
            i = j+1;
        } else {
            i++;
        }
    }

    *returnSize = 0;
    return NULL;
}

int main() {
    int *arr = NULL;
    int returnSize = 0;
    int nums[3] = {1, 2, 4};
    arr = twoSum(nums, sizeof(nums)/sizeof(int), 6, &returnSize);
    if (arr) {
        int i;
        for (i = 0; i < returnSize; i++) {
            printf("%d\t", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
