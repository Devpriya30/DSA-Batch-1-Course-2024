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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=new ListNode(-1);
        ListNode*head=temp;
        ListNode*t1=l1;
        ListNode*t2=l2;
        int carry=0;
        while(t1!=NULL && t2!=NULL){
            int sum=carry+t1->val+t2->val;
            int digit=sum%10;
            carry=sum/10;
            ListNode* t= new ListNode(digit);
            temp->next=t;
            temp=t;
            t1=t1->next;
            t2=t2->next;
        }
        
        while(t1!=NULL){
            int sum=carry+t1->val;
            int digit=sum%10;
            carry=sum/10;
            ListNode* t= new ListNode(digit);
            temp->next=t;
            temp=t;
            t1=t1->next;
            
        }
        
        
        while(t2!=NULL){
            int sum=carry+t2->val;
            int digit=sum%10;
            carry=sum/10;
            ListNode* t= new ListNode(digit);
            temp->next=t;
            temp=t;
            t2=t2->next;
            
 
        }
        
        while(carry!=0){
            int sum=carry;
            int digit=sum%10;
            carry=sum/10;
            ListNode* t= new ListNode(digit);
            temp->next=t;
            temp=t;

        }
        
       temp->next=NULL; 
       return head->next;
        
             
        
        
        
        
    }
};
