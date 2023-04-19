#include <iostream>
#include<vector>
#include "linkedlist.h"
using namespace std;

void print(vector <int> V) {
	for (vector<int>::iterator i = V.begin(); i != V.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
}
void insertAfter(vector<int>& V, int f, int s) {
	for (int i = 0; i < V.size(); i++) {
		if (V[i] == f) {
			V.insert(V.begin() + i + 1, s);
		}
	}
}

int main() {

	vector <int> V;
	V.push_back(10);
	V.push_back(40);
	V.push_back(10);
	V.push_back(30);
	V.push_back(5);
	print(V);
	insertAfter(V, 10, 20);
	print(V);
	linkedlist l;
	l.add(50, 3);
	l.print();
	l.create(V);
	l.print();
	cout << "The sum of the linked list is " << l.sum() << endl;
	l.remove(40);
	l.print();
	cout << "The sum of the linked list is " << l.sum() << endl;
	return 0;
}