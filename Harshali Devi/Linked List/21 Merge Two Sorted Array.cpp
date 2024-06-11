//Day 11
//Question 58
//https://leetcode.com/problems/merge-two-sorted-lists/description/

//Do not create a complete new node everytime , 
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;

        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        while(temp1!=nullptr && temp2!=nullptr){
            if(temp1->val>=temp2->val){
                curr->next = temp2;
                temp2=temp2->next;
            }
            else{
                curr->next = temp1;
                temp1=temp1->next;
            }
            curr=curr->next;
        }
        // Attach the remaining elements
            if (temp1 != nullptr) {
                curr->next = temp1;
            } else {
                curr->next = temp2;
            }

        return dummy->next;
    }
};
