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
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *rev = NULL;
        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            ListNode *tmp = slow;
            slow = slow->next;
            tmp->next = rev;
            rev = tmp;            
        }
        if(fast) slow = slow->next;//if odd length palindrome
        while(slow)
        {
            if(slow->val != rev->val) return false;
            slow = slow->next;
            rev = rev->next;
        }
        return true;
    }
};