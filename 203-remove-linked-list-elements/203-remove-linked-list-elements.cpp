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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return NULL;
        ListNode* newHead = NULL,*tempHead=head;
        while(head && head->val == val)
        {
            ListNode*remNode=head;
            head = head->next;
            delete remNode;
            remNode = NULL;
        }
        newHead = head;
        tempHead=head;
        while(head != NULL)
        {
            while(head && head->val == val)
            {
                ListNode*remNode=head;
                tempHead->next=head->next;         
                head = head->next;
                delete remNode;
                remNode = NULL;
            }
            tempHead=head;
            if(head)
            head = head->next;
        }
        return newHead;
    }
};