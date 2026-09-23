class Codec:
    def serialize(self, root):
        res, q = [], deque([root])
        while q:
            node = q.popleft()
            if node:
                res.append(str(node.val))
                q.append(node.left)
                q.append(node.right)
            else:
                res.append("null")
        
        while res and res[-1] == "null":
            res.pop()
        return ','.join(res)

    def deserialize(self, data):
        return TreeNode(data) if data else None