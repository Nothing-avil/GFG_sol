// struct Node {
//     int val;
//     vector<Node*> neighbors;
//     Node() {
//         val = 0;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val) {
//         val = _val;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val, vector<Node*> _neighbors) {
//         val = _val;
//         neighbors = _neighbors;
//     }
// };

class Solution {
public:

    Node* solve(Node* node, vector<Node*>& visit){
        Node* graph= new Node(node->val);
        visit[node->val]= graph;
        for(auto it: node->neighbors){
            if(!visit[it->val]){
                solve(it, visit);
            }
            
            graph->neighbors.push_back(visit[it->val]);
        }
        return graph;
    } 
    
    Node* cloneGraph(Node* node) {
        vector<Node*> visit(10001, NULL);
        return solve(node, visit);
    }
};
