
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
  //creation of nodes
 struct ListNode*addnode(int data)
 {
     struct ListNode*new=(struct ListNode*)malloc(sizeof(struct      ListNode));
     new->next=NULL;
     new->val=data;
     return new;

 }
 struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode*t1=l1;
    struct ListNode*t2=l2;
    int carry=0;
    int sum=0;
           //for dummy node 
    struct ListNode*dummy=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode*temp=dummy;
    while(t1!=NULL||t2!=NULL)
    {
         sum=carry;
        if(t1!=NULL)
        sum+=t1->val;
        if(t2!=NULL)
        sum+=t2->val;
     
        temp->next=addnode(sum%10);
        temp=temp->next;
        carry=sum/10;
        if(t1!=NULL)t1=t1->next;
        if(t2!=NULL)t2=t2->next;
         }       
           //last carry remaining , creation of last node 
            if(carry>0)
            {
            struct ListNode*last=(struct ListNode*)malloc(sizeof(struct ListNode));
            last->val=carry;
            last->next=NULL;
            temp->next=last;
        }

        return dummy->next;
        }


Time complexity:O(N)
space complexity:O(N)
