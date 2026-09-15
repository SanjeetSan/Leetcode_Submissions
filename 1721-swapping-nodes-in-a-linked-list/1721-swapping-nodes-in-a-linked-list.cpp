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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> arr;
        ListNode* temp = head;
        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int n = arr.size();
        int fromFirst = arr[k - 1];
        int fromLast = arr[n - k];
        // cout << fromFirst  << " " << fromLast << endl;
        arr[k - 1] = fromLast;
        arr[n - k] = fromFirst;
        ListNode* Answer = new ListNode();
        ListNode* dummy = Answer;
        for(int n : arr){
            Answer->next = new ListNode(n);
            Answer = Answer->next;
        }
        return dummy->next;        
    }
};