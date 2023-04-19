#include "linkedlist.h"
linkedlist::linkedlist() {
	Head = NULL;
}
void linkedlist::add(int v, int o) {
	Node* n = new Node;
	n->value = v;
	n->occ = o;
	n->next = Head;
	Head = n;
}
void linkedlist::remove(int v) {
	Node* current, * previous;
	current = Head;
	previous = NULL;
	while (current != NULL && current->value != v) {
		previous = current;
		current = current->next;
	}
	if (current != NULL) {
		if (previous != NULL) {
			previous->next = current->next;
		}
		else {
			Head = current->next;
		}
		delete current;
	}
}
void linkedlist::print() {
	Node* current;
	current = Head;
	while (current != NULL)
	{
		cout << "The value is " << current->value << ", and the occurance is " << current->occ << endl;
		current = current->next;
	}
}
void linkedlist::create(vector<int>& vec) {
	for (int i = 0; i < vec.size(); i++) {
		int v = vec[i];
		int occ = 1;
		for (int j = i + 1; j < vec.size(); j++) {
			if (vec[j] == v) {
				occ++;
			}
		}
		add(v, occ);
	}
}
int linkedlist::sum() {
	Node* current;
	current = Head;
	int sum = 0;
	while (current != NULL)
	{
		sum = sum + (current->value * current->occ);
		current = current->next;
	}
	return sum;
}
