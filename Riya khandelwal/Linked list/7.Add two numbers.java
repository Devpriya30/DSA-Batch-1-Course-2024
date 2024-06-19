/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {

    
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode node = new ListNode();
        ListNode head = node;
        int carry = 0;
        
            while(l1 != null && l2 != null)
            {
                int sum = carry + l1.val+ l2.val;
                carry = sum/10 ;
                int digit = sum % 10;
                ListNode l = new ListNode(digit);
                node.next = l;
                node = l;
                l1= l1.next;
                l2 = l2.next;  
            }  

            while(l1 != null)
            {
                int sum = carry + l1.val;
                carry = sum/10 ;
                int digit = sum % 10;
                ListNode l = new ListNode( digit);
                node.next = l;
                node = l;
                l1= l1.next;

            }


            while(l2 != null)
            {
                int sum = carry + l2.val;
                carry = sum/10 ;
                int digit = sum % 10;
                ListNode l = new ListNode( digit);
                node.next = l;
                node = l;
                l2= l2.next;

            }

            while(carry !=0)
            {
                int sum = carry ;
                carry = sum/10 ;
                int digit = sum % 10;
                ListNode l = new ListNode( digit);
                node.next = l;
                node = l;
                
            }
        node.next=null; 
       return head.next;
        
    }
}

//T.C = O(n)

//S.C = O(n)
