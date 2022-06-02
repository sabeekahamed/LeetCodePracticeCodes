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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return false;
        ListNode* slowPtr=head,*fastPtr=head->next;
        while(slowPtr != NULL && fastPtr != NULL && slowPtr != fastPtr)
        {
            slowPtr = slowPtr->next;
            if(fastPtr->next != NULL)
            {
                fastPtr = fastPtr->next->next;
            }
            else
            {
                return false;
            }
        }
        return fastPtr == slowPtr;
    }
};