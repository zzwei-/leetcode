/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if (head==NULL)  return NULL;
    if (head->next==NULL){  //only one node : head;
        return head;
    }
    struct ListNode *p,*q;
    p=head->next;
    head->next=NULL;
    while(p&&p->next){
        q=p->next;
        p->next=head;
        head=p;
        p=q;
    }
    p->next=head;
    head=p;
    return head;
}


