class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        ListNode*prev=NULL;
        ListNode*curr=slow;
        while(curr!=NULL){
            ListNode*nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        
        ListNode*temp=head;
        ListNode*temp1=prev;
        
        while(temp!=NULL && temp1!=NULL){
            if(temp->val!=temp1->val){
                return false;
            }
            temp=temp->next;
            temp1=temp1->next;
        }
        return true;
        
        
    }
};
