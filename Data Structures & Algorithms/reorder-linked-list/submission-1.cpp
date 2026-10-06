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
ListNode* reverse(ListNode* root){
    ListNode* pre = NULL;
    ListNode* cur = root;
    while(cur){
        ListNode* n = cur->next;
        cur->next = pre;
        pre = cur;
        cur = n;
    }
    return pre;
}
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL) return;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* pre = head;
        while(fast && fast->next){
            pre = slow ;
            slow = slow->next;
            fast = fast->next->next;
        }

        pre->next = NULL;
        ListNode* l1 = head;
        slow = reverse(slow);

        while(l1 && slow){
            ListNode* l2 = l1->next;
            l1->next = slow;
            l1 = l2;
            if(l1 == NULL) break;
            l2 = slow->next;
            slow->next = l1;
            slow = l2;
            if(slow == NULL) break;
        }


    }
};
