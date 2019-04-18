#include "stdafx.h"

typedef struct ListNode {
	int val;
	struct ListNode *next;
}*LNode;

void Creat_list(LNode &L) {
	int i = 0;
	struct ListNode *head , *p, *q;
	p = q = head = L;
	scanf_s("%d", &head->val);
	scanf_s("%d", &i);
	while (i != 0)
	{
		q = (struct ListNode*)malloc(sizeof(struct ListNode));
		p->next = q;
		q->val = i;
		p = q;
		scanf_s("%d", &i);
	}
	p->next = NULL;

}

void P_list(LNode L) {
	LNode p = L;
	while (p != NULL)
	{
		printf("%d->", p->val);
		p = p->next;
	}
}

int get_num(LNode L) {
	int i = 1, num = 0;
	LNode p = L;
	/*
	while (p!=NULL)
	{
		p = p->next;
		i = i * 10;
	}
	i = i / 10;
	p = L;
	*/
	while (p!=NULL)
	{
		num = num + i * p->val;
		i = i * 10;
		p = p->next;
	}
	return num;
}

void num_to_list(LNode &L, int num) {
	LNode p = L, q;
	int f_num = num % 10;
	num = num / 10;
	//printf("<-%d", f_num);
	p->val = f_num;
	while (num!=0)
	{
		q = (LNode)malloc(sizeof(struct ListNode));
		f_num = num % 10;
		num = num / 10;
		//printf("<-%d", f_num);
		q->val = f_num;
		p->next = q;
		p = q;
	}
	p->next = NULL;
}

int main() {
	struct ListNode *L1, *L2, *L3;
	int i = 0, num = 0;
	L1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	L2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	L3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	Creat_list(L1);
	Creat_list(L2);
	//P_list(L1);
	//P_list(L2);

	num = get_num(L1) + get_num(L2);
	num_to_list(L3, num);
	P_list(L3);

	scanf_s("%d",&i);
}

