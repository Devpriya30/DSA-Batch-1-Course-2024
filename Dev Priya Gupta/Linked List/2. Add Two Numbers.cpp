class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head=new ListNode(0);
        ListNode *ptr=head;
        int c=0,d1=0,d2=0,sum=0;
        while(l1 != NULL || l2 != NULL || c != 0)
        {
            d1=(l1 != NULL) ? l1->val : 0;
            d2=(l2 != NULL) ? l2->val : 0;
            sum=d1+d2+c;
            c=sum/10;
            ListNode *node=new ListNode(sum%10);
            ptr->next=node;
            ptr=ptr->next;
            l1=(l1 != NULL) ? l1->next : NULL;
            l2=(l2 != NULL) ? l2->next : NULL;
        }
        return head->next;
    }
};
