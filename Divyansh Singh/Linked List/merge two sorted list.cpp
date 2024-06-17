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
        map<int,int>mpp;
        ListNode*t1=list1;
        ListNode*t2=list2;
        while(t1!=NULL){
           mpp[t1->val]++;
           t1=t1->next;
        }
        while(t2!=NULL){
           mpp[t2->val]++;
           t2=t2->next;
        }


        ListNode* temp=new ListNode(-1);
        ListNode* head=temp;
        for(auto i:mpp){
            while(i.second!=0){
                ListNode* t=new ListNode(i.first);
                temp->next=t;
                temp=t;
                i.second--; 
            }


        }

        return head->next;

    }
};
