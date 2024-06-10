//Day 10
//Question 52
//https://leetcode.com/problems/middle-of-the-linked-list/description/

//Brute Force

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
    int countLength(ListNode* head){
        int count=0;
        ListNode* dummy = head;
        while(dummy!=NULL){
            dummy=dummy->next;
            count++;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int length = countLength(head);

        int half = length / 2;
        ListNode* dummy = head;
        for (int count = 0; count < half; count++) {
            dummy = dummy->next;
        }
        return dummy;
    }
};

//Tortoise and Hare method

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
    ListNode* middleNode(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
