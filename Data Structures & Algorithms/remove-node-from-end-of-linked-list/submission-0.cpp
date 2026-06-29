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
    int len(ListNode* head){
        int ct = 0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            ct++;
        }
        return ct;
    }
    ListNode* removerK(ListNode* head, int k){
    if(head==NULL) return head;
    if(k==1){
        ListNode* temp = head;
        head = head -> next;
        free(temp);
        return head;
    }
    int ct = 0;
    ListNode* temp = head;
    ListNode* prev = NULL;
    while(temp){
        ct++;
        if(ct==k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp -> next;

    }
    return head;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
            int x = len(head) - n + 1;

            return removerK(head, x);
    }
};
