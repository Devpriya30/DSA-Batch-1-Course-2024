//Day 11
//Question 58
//https://leetcode.com/problems/intersection-of-two-linked-lists/description/


//Optimized Solution

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {       
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        while(temp1!=temp2){            //If no intersection of temp1 and temp2 , both will become null .Therefore the loop will end!
            if(temp1!=NULL){
                temp1=temp1->next;
            }
            else{
                temp1=headB;
            }
            if(temp2!=NULL){
                temp2=temp2->next;
            }
            else{
                temp2=headA;
            }
        }
        return temp1;
    }
};
