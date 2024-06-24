
class Solution {
private:
    ListNode* reverse(ListNode *head){
        ListNode* curr=head;
        ListNode* prev=NULL;

        while(curr!=NULL){
            ListNode* a=curr->next;
            curr->next=prev;
            prev=curr;
            curr=a;
        }
        return prev;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=reverse(l1);
        ListNode* t2=reverse(l2);
        
        ListNode* temp= new ListNode(-1);
        ListNode* head=temp;
        int carry=0;
        while(t1!=NULL && t2!=NULL){
           int sum=t1->val+t2->val+carry;
           int digit=sum%10;
           carry=sum/10;
           ListNode* t=new ListNode(digit);
           temp->next=t;
           temp=t;
           t1=t1->next;
           t2=t2->next;
        }

        while(t1!=NULL){
           int sum=t1->val+carry;
           int digit=sum%10;
           carry=sum/10;
           ListNode* t=new ListNode(digit);
           temp->next=t;
           temp=t;
           t1=t1->next;

        }
        while(t2!=NULL){
           int sum=t2->val+carry;
           int digit=sum%10;
           carry=sum/10;
           ListNode* t=new ListNode(digit);
           temp->next=t;
           temp=t;
           t2=t2->next;
        }

        while(carry!=0){
           int sum=carry;
           int digit=sum%10;
           carry=sum/10;
           ListNode* t=new ListNode(digit);
           temp->next=t;
           temp=t;
        }

        temp->next=NULL;
        head=head->next;
        head=reverse(head);
        return head;


    }
};

T.C-O(N)
S.C-O(1)
