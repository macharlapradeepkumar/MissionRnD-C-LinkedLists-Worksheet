/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};
typedef struct node *lptr;
struct node * removeEveryKthNode(struct node *head, int K) {
	lptr p = head, l = head;
	int c = 0;
	if (head == NULL || K <= 1) return NULL;
	
	while (p != NULL)
	{
		c++;
		if (c%K == 0)
		{
			l->next = p->next;

		}
		l = p;
		p = p->next;
	}
	
	return head;
}