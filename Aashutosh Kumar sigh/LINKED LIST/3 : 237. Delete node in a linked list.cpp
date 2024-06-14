class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

TIME COMPLEXITY : O(1)
SPACE COMPLEXITY : O(1)
