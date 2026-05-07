class Solution:
    def cloneGraph(self, node):
        if not node:
            return None

        visited = {}

        def dfs(cur):
            if cur in visited:
                return visited[cur]

         
            clone = Node(cur.val)
            visited[cur] = clone

         
            for neighbor in cur.neighbors:
                clone.neighbors.append(dfs(neighbor))

            return clone

        return dfs(node)
