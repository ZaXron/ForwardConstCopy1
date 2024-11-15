#include "ForwardList.h"
#include <iostream>
using namespace std;

ForwardList::ForwardList(const ForwardList& obj)
{
	if (obj.size == 0) {
		return;
	}
	Node* current = obj.head;
	Node* x;
	Node* y = new Node(current->value);
	head = y;
	tail = y;
	current = current->next;
	while (current) {
		x = y;
		y = new Node(current->value, x);
		x->next = y;
		tail = y;
		current = current->next;
		size++;
	}
}

void ForwardList::operator=(const ForwardList& obj) {
	if (obj.size == 0) {
		return;
	}
	Node* current = obj.head;
	Node* x;
	Node* y = new Node(current->value);
	head = y;
	tail = y;
	current = current->next;
	while (current) {
		x = y;
		y = new Node(current->value, x);
		x->next = y;
		tail = y;
		current = current->next;
		size++;
	}
}
void ForwardList::PushBack(int value)
{

	if (head and tail) {
		Node* new_node = new Node(value);
		tail->next = new_node;
		tail = new_node;
	}
	else {
		Node* new_node = new Node(value);
		head = new_node;
		tail = new_node;
	}
	size++;
}
void ForwardList::Print()
{
	if (head && tail) {
		Node* current = head;
		while (current != nullptr)
		{
			cout << current->value << endl;
			current = current->next;
		}
	}
	cout << "Size - " << size;
}
void ForwardList::PopFront()
{
	if (head and tail) {
		Node* temp = head->next;
		delete head;
		if (!temp) {
			tail = temp;
		}
		head = temp;
	}
	size++;
}
const Node* ForwardList::find(int value)
{
	Node* current = head;
	while (current != nullptr)
	{
		if (current->value == value) {
			return current;
		}
		current = current->next;
	}
	return nullptr;
}
ForwardList::~ForwardList()
{
	Node* current = head;
	while (current != nullptr) {
		Node* next = current->next;
		delete current;
		current = next;
	}
	size = 0;
	head = tail = nullptr;
	cout << "\nDestructor";
}
void ForwardList::operator=(const ForwardList& obj)
{
}