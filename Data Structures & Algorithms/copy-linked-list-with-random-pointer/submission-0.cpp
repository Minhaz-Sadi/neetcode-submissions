/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:

    Node* mover = nullptr;
    Node* copy = nullptr;
    void insert(Node* x){
        if(!copy){
            copy = new Node(x->val);
            mover = copy;
        }
        else{
            Node* temp = new Node(x->val);
            mover -> next = temp;
            mover = temp;
        }
    }


    Node* copyRandomList(Node* head) {

        Node* temp = head;
        map<Node*, Node*> m;
        while(temp){
            insert(temp);
            m[temp] = mover;
            temp = temp -> next;
        }

        temp = head;

        while(temp){

            if(temp->random){
                m[temp] -> random = m[temp->random];
            }
            else  m[temp] -> random = nullptr;

            temp = temp -> next;
        }

        return copy;
        
    }
};
