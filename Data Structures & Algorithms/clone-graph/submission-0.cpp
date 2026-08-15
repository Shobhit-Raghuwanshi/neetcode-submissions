/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {

        if(node == NULL){
            return NULL;
        }

        Node* temp = new Node(node->val);

        queue<Node*> q;

        map<int, Node*> mp;

        q.push(node);

        mp[node->val] = temp;

        while(!q.empty()){
            vector<Node*> vec = q.front()->neighbors;
            Node* x = mp[q.front()->val];
            q.pop();

            for(int i = 0 ; i < vec.size(); i++){
                if(mp[vec[i]->val]){
                    x->neighbors.push_back(mp[vec[i]->val]);
                    continue;
                }

                Node* temp1 = new Node(vec[i]->val);
                mp[temp1->val] = temp1;
                x->neighbors.push_back(temp1);
                q.push(vec[i]);
            }
        }

        return temp;


    }
};
