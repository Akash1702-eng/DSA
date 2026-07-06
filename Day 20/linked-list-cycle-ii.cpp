// Problem: Linked List Cycle II
// Difficulty: Medium
// Status: Accepted
// Submitted: July 6, 2026
// URL: https://leetcode.com/problems/linked-list-cycle-ii/submissions/2058379090/
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
ListNode *detectCycle(ListNode *head)
{
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            slow = head;

            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }

            return slow;
        }
    }

    return NULL;
}
};