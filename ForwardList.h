#pragma once

class Node
{
public:
	int value;
	Node* next;
	Node() {
		this->value = 0;
		next = nullptr;
	}
	Node(int value) {
		this->value = value;
		next = nullptr;
	}
	Node(int value, Node* prev) {
		this->value = value;
		next = nullptr;
	}
	Node(Node* next, int value) {
		this->value = value;
		this->next = next;
	}
};

class ForwardList
{
	Node* head;
	Node* tail;
	int size;
public:
	ForwardList(const ForwardList& obj);
	ForwardList() : head(nullptr), tail(nullptr), size(0) {}
	void PushBack(int value);
	void Print();
	void PopFront();
	const Node* find(int value);
	void operator=(const ForwardList& obj);
	/*void popBack();*/
	~ForwardList();
	void operator=(const ForwardList& obj);
};