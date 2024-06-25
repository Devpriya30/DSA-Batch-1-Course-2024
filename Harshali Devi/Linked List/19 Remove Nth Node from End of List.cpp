//Day 11
//Question 58
//https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

//Brute Force
//Count all in first loop.In second loop do total minus n and delete it.

//Optimized Solution

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast=head;
        ListNode* slow=head;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }  

        //if first node is n
        if(fast==NULL) {
            ListNode* deleteNode = head;
            head=head->next;
            delete deleteNode;
            return head;
        }

        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

        //as slow reached the prev pt to delete node
        ListNode* deleteNode = slow->next;
        slow->next=slow->next->next;
        delete deleteNode;

        return head;

    }
};

//Time Complexity-> O(len)
