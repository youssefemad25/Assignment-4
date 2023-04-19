#include <iostream>
#include<vector>
#include "Node.h"
using namespace std;
class linkedlist
{
private:
	Node* Head;
public:
	linkedlist();
	void add(int v, int o);
	void remove(int v);
	void print();
	void create(vector<int>& vec);
	int sum();
};
