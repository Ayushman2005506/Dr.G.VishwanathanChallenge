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
    ListNode* removeElements(ListNode* head, int val) {
        while( head!=nullptr && head->val==val){
            ListNode* b= head;
            head=head->next;
            delete b;
        }
        ListNode* temp=head;
        while(temp){
        if(temp->next!=nullptr && temp->next->val==val){
            ListNode* a=temp->next;
            temp->next=temp->next->next;
            delete a;
        }
        else{
         temp=temp->next;
        }
        }
        return head;
    }
};
