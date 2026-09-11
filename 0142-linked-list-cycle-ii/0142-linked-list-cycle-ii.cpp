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
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr){
            return nullptr;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                break;
            }
        }
        if(fast == nullptr || fast->next == nullptr){
            return nullptr;
        }
        ListNode* p1 = slow;
        ListNode *p2 = head;
        while(p1 != p2){
            p1 = p1->next;
            p2 = p2->next;
        }
        return p1;
    }
};