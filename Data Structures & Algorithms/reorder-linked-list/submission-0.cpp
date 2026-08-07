
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* curr=slow->next;
        slow->next=NULL;

        ListNode* prev=NULL;
        while(curr!=NULL){
           ListNode* nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }

        ListNode* first=head;
        ListNode* second=prev;
        while(second){
            ListNode* temp1=first->next;
            ListNode* temp2=second->next;

            first->next=second;
            second->next=temp1;

            first=temp1;
            second=temp2;
        }
       

    }
};
