class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> st1;  // Stack for the first number
        stack<int> st2;  // Stack for the second number
        stack<int> result;  // Stack to store the result
        ListNode* temp1 = l1;
        while (temp1 != nullptr) {
            st1.push(temp1->val);
            temp1 = temp1->next;
        }


        ListNode* temp2 = l2;
        while (temp2 != nullptr) {
            st2.push(temp2->val);
            temp2 = temp2->next;
        }

        int carry = 0;
        while (!st1.empty() || !st2.empty() || carry) {
            int a = st1.empty() ? 0 : st1.top();
            int b = st2.empty() ? 0 : st2.top();
            
            if (!st1.empty()) st1.pop();
            if (!st2.empty()) st2.pop();
            
            int sum = a + b + carry;
            carry = sum / 10;
            result.push(sum % 10);
        }

        ListNode* head = new ListNode(0);
        ListNode* current = head;
        while (!result.empty()) {
            current->next = new ListNode(result.top());
            result.pop();
            current = current->next;
        }

        return head->next;
    }
};
