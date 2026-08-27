class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;

        while(curr != NULL && curr->next != NULL) {
            int g = gcd(curr->val,curr->next->val);

            ListNode* Node = new ListNode(g);

            Node->next = curr->next;
            curr->next = Node;

            curr = Node->next;
        }

        return head;
    }
};