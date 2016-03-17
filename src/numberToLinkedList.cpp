/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

typedef struct node *lptr;
lptr insertend(lptr first, int x);
struct node * numberToLinkedList(int N) {
	int r;
	lptr first= NULL;
	if (N < 0){
		N = -N;
	}
	if (N==0 ) 
		first = insertend(first, N);
	while (N != 0){
		r = N % 10;
	first=insertend(first, r);
	N = N / 10;
	} 
	return first;
}
lptr insertend(lptr first, int x){
	lptr p, t;
	p = (lptr)malloc(sizeof(struct node));
	p->num = x;
	p->next = first;
	return p;

}