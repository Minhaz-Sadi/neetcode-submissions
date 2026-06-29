/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:

    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* temp = head;
        while(temp){
            ListNode* front = temp->next;
            temp -> next =  prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        int x1 = 0;
        int x2 = 0;
        while(temp1){
            x1 = x1*10 + temp1->val;
            temp1 = temp1->next;
        }
        while(temp2){
            x2 = x2*10 + temp2->val;
            temp2 = temp2->next;
        }

        int sum = x1 + x2;

        ListNode* head = new ListNode(sum%10);
        ListNode* mover = head;
        sum = sum / 10;

        while(sum!=0){
            ListNode* temp = new ListNode(sum%10);
            sum = sum  / 10;
            mover->next = temp;
            mover = temp;
        }

        return head;
            
    }
};
