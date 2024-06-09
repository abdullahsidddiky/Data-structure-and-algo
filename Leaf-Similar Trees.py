# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        def trav(root, leaf):
            if root is None:
                return 
            if not root.right and not root.left:
                leaf.append(root.val)
            trav(root.left, leaf)
            trav(root.right, leaf)
        leaf1 , leaf2 = [] ,[]
        trav(root1, leaf1)
        trav(root2, leaf2)
        return leaf1 == leaf2