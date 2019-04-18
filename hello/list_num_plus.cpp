#include "stdafx.h"

struct ListNode {
	int val;
	struct ListNode *next;
};

int main() {
	struct ListNode *head, *p, *q;
	head = p = q = (struct ListNode*)malloc(sizeof(struct ListNode));
	int i = 0;
	scanf_s("%d", &head->val);
	scanf_s("%d", &i);
	while (i!=0)
	{
		q = (struct ListNode*)malloc(sizeof(struct ListNode));
		p->next = q;
		q->val = i;
		p = q;
		scanf_s("%d", &i);
	}
	p->next = NULL;
	p = head;
	while (p!=NULL)
	{
		printf("%d->", p->val);
		p = p->next;
	}
	scanf_s("%d",&i);

}

