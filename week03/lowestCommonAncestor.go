
/*
** 时间复杂度：O(N), 要遍历每一个节点
** 空间复杂度：O(N), 
**
*/



/**
 * Definition for TreeNode.
 * type TreeNode struct {
 *     Val int
 *     Left *ListNode
 *     Right *ListNode
 * }
 */

func lowestCommonAncestor(root, p, q *TreeNode) *TreeNode {
    if root == nil {
        return nil
    }

    if root == p || root == q {
        return root
    }

    // 左子树查找
    left := lowestCommonAncestor(root.Left, p, q)

    // 右子树查找
    right := lowestCommonAncestor(root.Right, p, q)

    if left == nil {
        return right
    } else if right == nil {
        return left
    } else {
        // 左右节点都找到，说明root就是公共祖先 
        return root
    }
}


func main() {
    return 0
}
