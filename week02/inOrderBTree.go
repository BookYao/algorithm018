
/* 
**  LeetCode 94. 二叉树的中序遍历
**  
** 时间：O(N) N为节点数
** 空间：O(N) N为节点数
**
*/

package main

import (
    "fmt"
)

/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func inorderTraversal(root *TreeNode) []int {
    if root == nil {
        return []int{}
    }

    res := []int{}
    res = append(res, inorderTraversal(root.Left)...)
    res = append(res, root.Val)
    res = append(res, inorderTraversal(root.Right)...)

    return res
}


func main()  {
    fmt.Println("Binary tree inorder travel")
}

