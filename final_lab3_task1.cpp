#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* before;


	Node(int val, Node* link = 0)
		: data(val), before(link)
	{
	}
};

Node* head = new Node(23);


void printList(Node* n)
{

	while (n != NULL) {


		cout << n->data << " ";
		n = n->before;
	}
}


Node* addNewnode(Node* given_node, int val)
{

	if (head == given_node) {

		Node* n = new Node(val);
		n->before = head;
		head = n;
		return n;
	}

	else {
		Node *p, *n = head;


		for (n, p; n != given_node;
			p = n, n = n->before)
			;


		Node* m = new Node(val);
		m->before = p->before;
		p->before = m;

		return m;
	}
}

int main()
{

	head->before = new Node(4);
	addNewnode(head->before,44);
	addNewnode(head->before,77);
	addNewnode(head->before,77);


	printList(head);
}
