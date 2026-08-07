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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int c = 0;
        while(temp){
            temp = temp->next;
            c++;
        }
        if(c == n){
            return head->next;
        }
        ListNode* temp1 = head;
        int trav = c - n - 1;
        while(trav--){
            temp1 = temp1->next;
        }
        temp1->next = temp1->next->next;
        return head;
    }
};