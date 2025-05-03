// User function Template for C++

/*
class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};
*/

class Solution {
  public:
    bool isprime(int val){
        if(val <= 1){
            return false;
        }
        if(val == 2){
            return true;
        }
        if(val % 2 == 0){
            return false;
        }
        for(int i = 3; i <= sqrt(val); i++){
            if(val % i == 0){
                return false;
            }
        }
        return true;
    }
  
    int change(int val){
        if(isprime(val)){
            return val;
        }
        int l = val - 1, r = val + 1;
        while(true){
            if( l >= 1 && isprime(l)){
                return l;
            }
            if(isprime(r)){
                return r;
            }
            l--;
            r++;
        }
        return 1;
    }
    
    Node *primeList(Node *head) {
        Node *temp = head;
        while(temp != NULL){
            temp->val = change(temp->val);
            temp = temp->next;
        }
        return head;
    }
};
