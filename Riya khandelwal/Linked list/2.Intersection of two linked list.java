/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ListNode p1= headA;
        ListNode p2= headB;
        while(p1 != p2)
        {
            p1 = p1.next;
            p2 = p2.next;
            if(p1 == p2)
            {
                return p1;
            }
            if(p1 == null)
            {
                p1 = headB;
            }
            if(p2 == null)
            {
                p2 = headA;
            }
            
        }
        return p1;

        
    }
}

//T.C = O(n)

//S.C = O(1)
