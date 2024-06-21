class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *slow = head;
        ListNode *fast = head;
        while(n>0){
            fast=fast->next;
            n--;
        }
        while(fast != nullptr && fast->next != nullptr){
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==nullptr)
        return head->next;
        slow->next=slow->next->next;
        return head;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)
