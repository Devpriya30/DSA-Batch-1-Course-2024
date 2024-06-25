class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* slow=head;
        ListNode* fast=head;
        int cnt=n;
        while(cnt!=0){
            fast=fast->next;
            cnt--;
        }
        
        if(fast==NULL){
            return slow->next;
        }
        
        
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        
        ListNode* temp=slow;
        temp=slow->next;
        slow->next=temp->next;
        temp->next=NULL;
        delete(temp);
        
        return head;
        
        
        
        
        
        
        
        
        
        
        
    }
};
