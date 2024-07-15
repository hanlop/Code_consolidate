#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode* next;
};
typedef struct ListNode List;

struct ListNode* removeElements(struct ListNode* head, int val) {
    List* newhead = NULL;
    List* tail = NULL;
    List* cur = head;

    while (cur)
    {
        if (cur->val != val)
        {
            if (newhead == NULL)
            {
                List* new = (List*)malloc(sizeof(List));
                new->val = head->val;
                new->next = NULL;

                newhead = new;
                tail = new;
            }
            else
            {
                tail->next = cur;
                tail = tail->next;
            }
        }

        cur = cur->next;
    }

    tail->next = NULL;

    return newhead;

}
void test()
{
    List* plist = (List*)malloc(sizeof(List));
    plist->val = 1;
    List* plist1 = (List*)malloc(sizeof(List));
    plist1->val = 2;
    List* plist2 = (List*)malloc(sizeof(List));
    plist2->val = 6;
    List* plist3 = (List*)malloc(sizeof(List));
    plist3->val = 3;
    List* plist4 = (List*)malloc(sizeof(List));
    plist4->val = 4;
    List* plist5 = (List*)malloc(sizeof(List));
    plist5->val = 5;
    List* plist6 = (List*)malloc(sizeof(List));
    plist6->val = 6;

    plist->next = plist1;
    plist1->next = plist2;
    plist2->next = plist3;
    plist3->next = plist4;
    plist4->next = plist5;
    plist5->next = plist6;
    plist6->next = NULL;

    removeElements(plist, 6);
}

int main()
{
    test();
	return 0;
}