class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL){
            return head;
        }
        
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* EvenConnect=even;
        
        
        while(even!=NULL && odd!=NULL){
            odd->next=even->next;
            odd=odd->next;
            if(odd!=NULL){
            even->next=odd->next;
            even=even->next;
            }
        }
        
        odd=head;
        ListNode* prev=NULL;
        while(odd!=NULL){
            prev=odd;
            odd=odd->next;
        }
        prev->next=EvenConnect;
        return head;
    }
};
