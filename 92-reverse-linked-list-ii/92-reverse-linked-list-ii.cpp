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
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        if (!head || l == r)
      return head;
    ListNode dummy(0, head);
    ListNode* prev = &dummy;
    for (int i = 0; i < l - 1; ++i)
      prev = prev->next;  // point to the node before the sublist [l, r]
    ListNode* tail = prev->next;  // will be the tail of the sublist [l, r]
    // reverse the sublist [l, r] one by one
    for (int i = 0; i < r - l; ++i) {
      ListNode* cache = tail->next;
      tail->next = cache->next;
      cache->next = prev->next;
      prev->next = cache;
    }
    return dummy.next;
    }
};