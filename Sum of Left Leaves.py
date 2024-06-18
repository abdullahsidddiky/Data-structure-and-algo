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
        if root.left:
            if not root.left.left and not root.left.right:
                left += root.left.val
        else:
            left +=  self.sumOfLeftLeaves(root.left)
        left +=  self.sumOfLeftLeaves(root.right)
        return left