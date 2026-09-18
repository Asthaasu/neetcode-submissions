class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> Optional[TreeNode]:

        pos = {val: i for i, val in enumerate(inorder)}

        def dfs(preL, inL, inR):
            if inL > inR:
                return None

            root = TreeNode(preorder[preL])
            mid = pos[preorder[preL]]

            left = mid - inL

            root.left = dfs(preL + 1, inL, mid - 1)
            root.right = dfs(preL + left + 1, mid + 1, inR)

            return root

        return dfs(0, 0, len(inorder) - 1)