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
    void reorderList(ListNode* head) {
            int lenght = len(head);
    int ct = 0;
    ListNode* temp = head;
    ListNode* list1 = head;
    ListNode* list2 = nullptr;

    while(temp){
       ct++;
       
       if(ct==((lenght+1)/2)+1){
        list2 = temp;
         ListNode* prev = head;
            for (int i = 1; i < (lenght+1)/2; i++) prev = prev->next;
            prev->next = nullptr; 
        break;
       }
       temp = temp->next;
    }
    list2 = reverse(list2);
    ListNode* dummy = new ListNode(-1);
    ListNode* t = dummy;
    while(list1 ){
        if(list1){
             t->next = list1;
             list1 = list1->next;
             t = t -> next;
        }
        if(list2){
            t->next = list2;
            list2 = list2->next;
            t = t -> next;
        }
       
    }
    }
};
