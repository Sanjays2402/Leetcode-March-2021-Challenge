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
        
        vector<int> a;
        while(head)
        {
            a.push_back(head->val);
            head = head->next;
        }
        
        swap(a[k-1], a[a.size()-k]);
        ListNode* start = new ListNode(-1);
        ListNode* result = start;
        
        int i = 0;
        while(i < a.size())
        {
            start -> next = new ListNode(a[i]);
            start = start -> next;
            i++;
        }
        
        return result->next;
    }
};
