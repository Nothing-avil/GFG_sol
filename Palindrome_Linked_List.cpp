/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        long one=0,two=0,prime=1009,mod=(long)1e9+7,power=1;
        while(head!=nullptr){
            one=(one+head->data*power)%mod;
            two=(two*prime+head->data)%mod;
            power=(power*prime)%mod;
            head=head->next;
        }
        if(one==two) return true;
        return false;
    }
};
