

/*
** LeetCode 1. 两数之和
**
** 时间：O(N)
** 空间：O(1)
*/


package main

import (
    "fmt"
)

func twoSum(nums []int, target int) []int {
    m := map[int]int{}
    for k, v := range nums {
        if r, ok := m[target-v]; ok {
            return []int{r, k}
        }

        // 数组的值和下标存入map
        m[v] = k
    }

    return nil
}

func main() {
    nums := []int{2, 7, 11, 15}
    fmt.Println(twoSum(nums, 9))
}
