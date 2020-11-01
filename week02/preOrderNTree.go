
/*
** LeetCode 589. N叉树的前序遍历
**
** 时间：O(N)  N为节点数
** 空间：O(N) N为节点数
**
 */

package main

import (
    "fmt"
)


/**
 * Definition for a Node.
 * type Node struct {
 *     Val int
 *     Children []*Node
 * }
 */

func preorder(root *Node) []int {
    if root == nil {
        return nil
    }
    
    var res []int
    res = append(res, root.Val)
    for _, node := range root.Children {
        res = append(res, preorder(node)...)
    } 

    return res 
}


func main() {
    fmt.Println("NTree preOrder travel")
}
