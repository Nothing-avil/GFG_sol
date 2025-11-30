class Solution {
  public:
   struct Node{
        Node *Links[26];
        
        Node *containsKey(char ch){
            return Links[ch-'a'];
        }
        
        Node *put(char ch, Node *new_node){
            Links[ch-'a'] = new_node;
        }
        
        Node *get(char ch){
            return Links[ch-'a'];
        }
    };
    
    int countSubs(string& s){
        Node *root;
        root = new Node();
        int count = 0;
        for(int i = 0; i < s.size(); i++){
            Node *temp = root;
            for(int j = i; j < s.size(); j++){
                if(temp->containsKey(s[j]) == NULL){
                    count++;
                    temp->put(s[j], new Node());
                }
                temp = temp->get(s[j]);
            }
        }
        return count;
    }
};
