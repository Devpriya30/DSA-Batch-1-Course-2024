/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
    
    Set<ListNode> set = new HashSet<ListNode>(); 
    

    for (ListNode current = head; current != null; current = current.next)
    {
        if(set.contains(current))
        {
           return current;
        }
         set.add(current);
      
    }
    return null;
        
    }

}

 //T.C = O(n)

  //S.C = O(n)
