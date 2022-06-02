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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        if(list1->val > list2->val) return mergeTwoLists(list2,list1);
        ListNode* headNode = list1;
        while(list1 != NULL && list2 != NULL)
        {
            ListNode *tempNode = NULL;
            while(list1 != NULL && list1->val <= list2->val)
            {
                tempNode = list1;
                list1 = list1->next;   
            }
            tempNode->next =list2;
            swap(list1,list2);
        }
        return headNode;
    }
};