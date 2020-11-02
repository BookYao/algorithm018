


/*
** Leetcode 242 .判断有效的字母异位词
** 
** 时间：两数组长度之和
** 空间：两数组长度之和
**
*/

package main

import (
        "fmt"
        "reflect"
       )

func isAnagram(s , t string) bool {
    if len(s) != len(t) {
        return false
    }

    m1 := make(map[rune]int)
    for _, v := range s {
        m1[v]++
    }

    m2 := make(map[rune]int)
    for _, v := range t {
        m2[v]++
    }

    return  reflect.DeepEqual(m1, m2)
}

func main() {
    fmt.Println(isAnagram("anagram", "nagaram"));
}
