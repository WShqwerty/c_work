#ifndef _Test1_H_
#define _Test1_H_

struct ListNode{
    int val;
    struct ListNode *next;
};

struct ListNode *lst = nullptr;

class Solution{
public:
    ListNode* reverseList(ListNode*);
    ListNode* reverseBetween(ListNode*, int, int);
    ListNode* reverseKGroup(ListNode*, int);
};

void create_list();
void display_list();

#endif