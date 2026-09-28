class WordDictionary:

    def __init__(self):
        self.t = {}

    def addWord(self, word):
        t = self.t
        for c in word:
            t = t.setdefault(c, {})
        t['#'] = 1

    def search(self, word):
        def dfs(t, i):
            if i == len(word):
                return '#' in t
            c = word[i]
            if c == '.':
                return any(dfs(v, i + 1) for k, v in t.items() if k != '#')
            return c in t and dfs(t[c], i + 1)
        return dfs(self.t, 0)