class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev=NULL;
        ListNode* curr=head;

        while(curr!=NULL){
            if(curr->val==val){
                ListNode*temp=curr;
                curr=curr->next;
                if(prev==NULL){
                    head=curr;
                    temp->next=NULL;
                    delete(temp);
                }
                else{
                    prev->next=curr;
                    temp->next=NULL;
                    delete(temp);                  

                }
            }

            else{ 
                prev=curr;
                curr=curr->next;

            }
        }
        return head;
    }
};
