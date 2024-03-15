class Solution
{
    public:
    // your task is to complete this function
    void sort(Node **head)
    {
        if (head == nullptr || *head == nullptr) {
            return;
        }
        vector<int> res;
        Node *temp= *head;
        while(temp!=NULL){
            res.push_back(temp->data);
            temp=temp->next;
        }
        temp=*head;
        std::sort(res.begin(), res.end());
        for(int i=0; i<res.size(); i++){
            temp->data= res[i];
            temp=temp->next;
        }
    }
};
