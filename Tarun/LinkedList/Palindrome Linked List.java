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
    public boolean isPalindrome(ListNode head) {
        ArrayList<Integer> list = new ArrayList();
        while(head!=null)
        {
            list.add(head.val);
            head=head.next;
        }
        int start = 0;
        int end = list.size()-1;
        while (start<end)
        {
            if(list.get(start) == list.get(end))
            {
                start++;
                end--;
            }
            else 
            return false;
        }
        return true;
    }
}
