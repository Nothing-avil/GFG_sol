// trie node
/*
struct TrieNode {
    struct TrieNode *children[ALPHABET_SIZE];

    // isLeaf is true if the node represents
    // end of a word
    bool isLeaf;
};
*/
class Solution
{
    public:
        //Function to insert string into TRIE.
        void insert(struct TrieNode *root, string key)
        {
            TrieNode *temp= root;
            int n= key.size();
            for(int i=0; i<n; i++){
                if(!temp->children[key[i]-'a']){
                    temp->children[key[i]-'a']= getNode();
                }
                temp=temp->children[key[i]-'a'];
            }
            temp->isLeaf=true;
        }
        
        //Function to use TRIE data structure and search the given string.
        bool search(struct TrieNode *root, string key) 
        {
            TrieNode *temp= root;
            int n= key.size();
            for(int i=0; i<n; i++){
                if(!temp->children[key[i]-'a']){
                    return false;
                }
                temp=temp->children[key[i]-'a'];
            }
            return (temp!=NULL && temp->isLeaf);
        }
};
