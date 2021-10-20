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
    bool hasCycle(ListNode *head){
        ListNode *twoStep = head;
        ListNode *oneStep = head;
        while(twoStep != NULL && twoStep->next != NULL)
        {
            twoStep = twoStep->next->next;
            oneStep = oneStep->next;
            if(twoStep == oneStep) return true;
        }    
        return false;
    }
};