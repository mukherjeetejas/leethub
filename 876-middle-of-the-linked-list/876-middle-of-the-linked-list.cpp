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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head; ListNode *slow = head;
        
        while (temp!=NULL && temp->next!=NULL) {
            slow = slow->next;
            temp = temp -> next->next;
        }
        
        return slow;
    }
};