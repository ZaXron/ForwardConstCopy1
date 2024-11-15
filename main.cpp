#include <iostream>
#include "ForwardList.h"
using namespace std;

int main()
{
	ForwardList list;
	list.PushBack(1);
	list.PushBack(2);
	list.PushBack(3);
	list.PushBack(4);
	list.PushBack(5);
	list.PushBack(6);
	list.Print();
	const Node* result = list.find(2);
	if (result != nullptr) {
		cout << "\nResult - " << result->value << endl;
	}
	return 0;
}
