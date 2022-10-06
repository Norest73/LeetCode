/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* deleteDuplicates(struct ListNode* head){

    if (head == NULL || head->next == NULL)
        return head;

    struct ListNode* n = head;
    while (n->next != NULL) {
        if (n->val == n->next->val)
            n->next = n->next->next;
        else
            n = n->next;
    }
    return head;    
}