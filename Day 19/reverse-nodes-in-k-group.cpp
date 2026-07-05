// Problem: Reverse Nodes in k-Group
// Difficulty: Hard
// Status: Accepted
// Submitted: July 5, 2026
// URL: https://leetcode.com/problems/reverse-nodes-in-k-group/submissions/2057046327/
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
    ListNode* reverseLinkedList(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    ListNode* getKthNode(ListNode* temp, int k) {
        k--;
        while (temp && k > 0) {
            temp = temp->next;
            k--;
        }
        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = nullptr;

        while (temp) {
            ListNode* kThNode = getKthNode(temp, k);

            if (kThNode == nullptr) {
                if (prevLast)
                    prevLast->next = temp;
                break;
            }

            ListNode* nextNode = kThNode->next;
            kThNode->next = nullptr;

            reverseLinkedList(temp);

            if (temp == head)
                head = kThNode;
            else
                prevLast->next = kThNode;

            prevLast = temp;
            temp = nextNode;
        }

        return head;
    }
};