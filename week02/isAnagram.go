

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
