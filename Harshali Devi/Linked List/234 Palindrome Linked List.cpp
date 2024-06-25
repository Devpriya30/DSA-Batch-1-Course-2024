//Day 12
//Question 62
//https://leetcode.com/problems/palindrome-linked-list/description/

class Solution {
public:
    bool isPalindrome(ListNode* head) {

        //edge case
        if (head == NULL || head->next == NULL) {
            return true;
        }
        
        ListNode* slow = head;
        ListNode* fast =head;
    
        //find mid
        while(fast!=NULL && fast->next != NULL){
            fast=fast->next->next;
            slow=slow->next;
        }

        ListNode* curr=slow;
        ListNode* prev = nullptr;

        //revrese the second half
        while(curr!=NULL){
            ListNode* nextNode = curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }

        //Compare the reversed half and first half
        ListNode* firstHalf = head;
        ListNode* secondHalf = prev;
        while(secondHalf!=NULL){
            if(firstHalf->val != secondHalf->val){
                return false;
            }
            secondHalf=secondHalf->next;
            firstHalf=firstHalf->next;
        }

        //Make the second half straight again
        curr = prev;
        prev = nullptr;
        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return true;

    }
};
