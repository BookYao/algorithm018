

#include <stdio.h>

typedef struct ListNode {
    int val;
    struct ListNode *next;
}T_ListNode;

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if (!l1 && !l2) {
        return NULL;
    }

    if (!l1) {
        return l2;
    }

    if (!l2) {
        return l1;
    }

    struct ListNode *newList = NULL;
    if (l1->val < l2->val) {
        newList = l1;
        newList->next = mergeTwoLists(l1->next, l2);
    } else {
        newList = l2;
        newList->next = mergeTwoLists(l2->next, l1);
    }
}

int main(void) {
    return 0;
}
