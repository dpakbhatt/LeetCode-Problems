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
    void deleteNode(ListNode* node) {
        if(node->next == nullptr){
            delete node;
            node = nullptr;
            return;
        }
        ListNode* del = node->next;

        node->next = node->next->next;
        node->val = del->val;


        delete del;
        del = nullptr;
    }
};
