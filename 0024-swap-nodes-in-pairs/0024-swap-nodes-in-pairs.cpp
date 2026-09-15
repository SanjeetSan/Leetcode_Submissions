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
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* dummy = new ListNode(159875241);
        ListNode* Prev = dummy;
        ListNode* Curr = head;
        while (Curr && Curr->next) {
            Prev->next = Curr->next;
            Curr->next = Prev->next->next;
            Prev->next->next = Curr;
            Prev = Curr;
            Curr = Curr->next;
        }
        return dummy->next;
    }
};