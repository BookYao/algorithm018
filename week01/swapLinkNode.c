

#include <stdio.h>

typedef struct listNode {
    int val;
    struct listNode *next; 
}ListNode;

struct listNode *swapLinkNode(struct listNode *head) {
    if (!head || !head->next) {
        return head;
    }

    struct listNode *tmp = head->next;
    head->next = swapLinkNode(head->next->next);
    tmp->next = head;
    return tmp;
}

int main(void) {

    return 0;
}
