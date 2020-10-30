

package main

import (
    "fmt"
)

func addDigits(num int) int {
    for num >= 10 {
        num = num/10 + num%10
    }

    return num
}

func main() {
    fmt.Printf("123 result num:%d\n", addDigits(123)) 
    fmt.Printf("10 result num:%d\n", addDigits(10)) 
}
