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
    ListNode* sortList(ListNode* head) {
        vector<int> Elements;
        while(head){
            Elements.push_back(head->val);
            head = head->next;
        }
        sort(Elements.begin(), Elements.end());
        if(Elements.size() <= 0){
            return nullptr;
        }
        ListNode* Sorted = new ListNode(Elements[0]);
        ListNode* temp = Sorted;
        for(int i = 1; i < Elements.size(); i++){
            Sorted->next = new ListNode(Elements[i]); 
            Sorted = Sorted->next;
        }
        return temp;
    }
};