/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    if (head==NULL)  return NULL;
    struct ListNode *p=head->next;
    struct ListNode *q=head;
    struct ListNode *tmp;
    while(p!=NULL){
        if(p->val==val){
            tmp=p;
            p=p->next;
            q->next=p;
            free(tmp);
        }
        else{
            p=p->next;
            q=q->next;
        }
    }
    if(head->val==val) head=head->next;
    return head;
}