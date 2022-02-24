#include <iostream>
#include "test1.h"
using namespace std;

int main(void){
    create_list();
    display_list();
    Solution s;
    lst = s.reverseBetween(lst, 2, 6);
    display_list();
    return 0;
}

/* 列表的倒置*/
ListNode* Solution::reverseList(ListNode* pHead){
    if(pHead==NULL||pHead->next==NULL)
        return pHead;
    ListNode* cur = pHead;
    ListNode* pre = NULL;
    ListNode* nx = NULL;
    while(cur->next!=NULL){
        nx = cur->next;
        cur->next = pre;
        pre = cur;
        cur = nx;
    }
    cur->next = pre;
    return cur;
}

/* 截取列表的一段进行倒置*/
ListNode* Solution::reverseBetween(ListNode* head, int m, int n){
    if(head==NULL||head->next==NULL)
        return head;
    ListNode *Nhead = (struct ListNode *)malloc(sizeof(struct ListNode));
    Nhead->next = head;
    ListNode *start = head;
    ListNode *preStart = Nhead;
    for(int i = 1;i < m;i++){
        preStart = start;
        start = start->next;
    }
    for(int j = 0;j < n-m;j++){
        ListNode *temp = start->next;
        start->next = temp->next;
        temp->next = preStart->next;
        preStart->next = temp;
    }
    return Nhead->next;
}

/* 取k值，倒置每一段k值的部分。*/
ListNode* Solution::reverseKGroup(ListNode* head, int k){
    if(head==NULL||head->next==NULL)
        return head;
    return head;
}

/* 创建链表*/
void create_list(){
    int i;
    struct ListNode *p;
    for(i = 0;i<8;i++){
        p = (struct ListNode *)malloc(sizeof(struct ListNode));
        printf("please num:");
        scanf("%d",&(p->val));
        p->next = lst;
        lst = p;
    }
}

/* 输出链表*/
void display_list(){
    ListNode *p = lst;
    while(p!=NULL){
        printf("%d",p->val);
        p = p->next;
    }
    printf("\n");
}