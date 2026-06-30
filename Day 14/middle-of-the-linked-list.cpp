// Problem: Middle of the Linked List
// Difficulty: Easy
// Status: Accepted
// Submitted: June 30, 2026
// URL: https://leetcode.com/problems/middle-of-the-linked-list/submissions/2051532792/
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
        ListNode* temp = head;
        int cnt = 0;
        while(temp!=NULL)
        {
            cnt++;
            temp = temp->next;
        }

        int middlenode = (cnt/2)+1;
        temp = head;

        while(temp != NULL)
        {
            middlenode = middlenode-1;
            if(middlenode == 0)
            {
                break;
            }
            temp = temp->next;
        }
        return temp;
    }
};