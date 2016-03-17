/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};
typedef struct node *lptr;
void sll_012_sort(struct node *head){
	
	lptr p = head;
	int c = 0, i = 0;
	while (p != NULL)
	{
		c++;
		p = p->next;
	}
	for (i = 0; i<c; i++)
	{
		p = head;
		for (int j = 0; j<c - i - 1; j++)
		{
			if (p->data > p->next->data){
				int temp;
				temp = p->data;
				p->data = p->next->data;
				p->next->data = temp;
			}
			p = p->next;
		}

	}
	
}