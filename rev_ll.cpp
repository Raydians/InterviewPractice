/*
 * rev_ll.cpp
 *
 *  Created on: Jun 12, 2014
 *      Author: jlin
 */

#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node *next;

	Node(int i) : data(i), next(NULL) {}
};

void reverse_iterative(Node **head) {
	if (!*head) return;
	Node *cur = *head;
	Node *next = cur->next;
	(*head)->next = NULL;
	while (next) {
		Node *nextnext = next->next;
		next->next = cur;
		cur = next;
		next = nextnext;
	}
}

void reverse_iterative2(Node **head) {
	if (!*head) return;
	Node *prev = NULL;
	Node *curr = *head;
	while (curr) {
		Node *next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
}

void reverse_recursive(Node **head) {
	if (!*head) return;
	Node *rest = (*head)->next;
	if (!rest) return;
	reverse_recursive(&rest);
	(*head)->next->next = *head;
	(*head)->next = NULL;
	*head = rest;
}

int main() {

}

