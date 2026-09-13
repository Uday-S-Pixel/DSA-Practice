class TrieNode {
public:
    TrieNode* children[26];
    bool isLeaf;

    TrieNode() {
        isLeaf = false;

        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
    }
};


class Trie {
private:
    TrieNode* root;

public:

    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {

        TrieNode* current = root;

        for (char c : word) {

            int i = c - 'a';

            if (current->children[i] == nullptr) {
                current->children[i] = new TrieNode();
            }

            current = current->children[i];
        }

        current->isLeaf = true;
    }

    bool search(string word) {

        TrieNode* current = root;

        for (char c : word) {

            int i = c - 'a';

            if (current->children[i] == nullptr) {
                return false;
            }

            current = current->children[i];
        }

        return current->isLeaf;
    }

    bool startsWith(string prefix) {

        TrieNode* current = root;

        for (char c : prefix) {

            int i = c - 'a';

            if (current->children[i] == nullptr) {
                return false;
            }

            current = current->children[i];
        }

        return true;
    }
};
