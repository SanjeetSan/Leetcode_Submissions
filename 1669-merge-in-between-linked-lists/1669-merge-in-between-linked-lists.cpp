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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* head = list1;
        ListNode* prev = list1;
        for(int i = 0; i < a - 1; i++){
            prev = prev->next;
        }
        ListNode* todelete = prev;
        for(int i = 0; i < b - a + 1; i++){
            todelete = todelete->next;
        }
        ListNode*curr = todelete->next;
        prev->next = list2;
        ListNode* tail2 = list2;
        while(tail2->next != nullptr){
            tail2 = tail2->next;
        }
        tail2->next = curr;
        return head;
    }
};