# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:
        left =0 
        if not root:
            return 0
        if root.left and root.left.left is None and root.left.right is None:
            left+= root.left.val
        left+=self.sumOfLeftLeaves(root.left)
        left +=self.sumOfLeftLeaves(root.right) 

        return left 