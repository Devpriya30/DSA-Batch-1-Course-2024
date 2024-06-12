// Brute force
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int n=0;
        ListNode *ptr=head;
        while(ptr != NULL)
        {
            n++;
            ptr=ptr->next;
        }
        n=(n/2)+1;
        ptr=head;
        while(n>1)
        {
            ptr=ptr->next;
            n--;
        }
        return ptr;
    }
};

Time Complexity : O(n)
Space Complexity : O(1)

// Using two pointer
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast->next != NULL && fast->next->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast->next == NULL)
            return slow;
        else
            return slow->next;
    }
};

Time Complexity : O(n)
Space Complexity : O(1)
