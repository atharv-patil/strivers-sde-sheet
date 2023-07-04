class TrieNode:
    def __init__(self):
        self.children = {}
        self.endOfWord = 0
        self.present = 0

class Trie:
    def __init__(self):
        self.root = TrieNode()

    def insert(self, word):
        curr = self.root
        for c in word:
            if c not in curr.children:
                curr.children[c] = TrieNode()
            curr = curr.children[c]
            curr.present += 1
        curr.endOfWord += 1

    def countWordsEqualTo(self, word):
        curr = self.root
        for c in word:
            if c not in curr.children:
                return 0
            curr = curr.children[c]
        return curr.endOfWord

    def countWordsStartingWith(self, word):
        curr = self.root
        for c in word:
            if c not in curr.children:
                return 0
            curr = curr.children[c]
        return curr.present

    def erase(self, word):
        if self.countWordsEqualTo(word) > 0:
            curr = self.root
            for c in word:
                curr.children[c].present -= 1
                curr = curr.children[c]
            curr.endOfWord -= 1
