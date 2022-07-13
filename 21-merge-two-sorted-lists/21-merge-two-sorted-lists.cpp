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
        if (list1 == NULL && list2 == NULL) return NULL;
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;
        ListNode *temp1 = list1, *temp2 = list2;
        vector <int> sorted;
        while (temp1 != NULL && temp2!= NULL) {
            if (temp1->val < temp2->val) {
                sorted.push_back(temp1->val);
                temp1=temp1->next;
            }
            else {
                sorted.push_back(temp2->val);
                temp2=temp2->next;
            }
        }
        while (temp1!=NULL) {
            sorted.push_back(temp1->val);
            temp1=temp1->next;
        }
        while (temp2!=NULL) {
            sorted.push_back(temp2->val);
            temp2=temp2->next;
        }
        temp1 = list1; temp2=list2; ListNode* prev = NULL;
        for (auto x: sorted) {
            if (temp1!=NULL) {
                temp1->val=x;
                prev = temp1;
                temp1=temp1->next;
            }
            else {
                temp2->val=x;
                temp2=temp2->next;
            }
        }
        prev -> next = list2;
        return list1;
    }
};