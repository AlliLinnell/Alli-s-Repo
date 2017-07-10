//List.cpp (IMP File)

#include "list.h"
using namespace std;

linked_list::linked_list()
{
//	int count = 0;
	return;
}

linked_list::~linked_list()
{
	delete head;
	//delete myList;
	return;
}

int linked_list::newList(node *head, int count)
{
	node *temp = new node;
	temp->data = count; 
	
	if(!head)
	{
		head = temp; //if no head, set head = temp
	}
	if(count != 10)
	{
		head->next = temp;
		count++;
	}
	return (newList(head->next, count));
}
int linked_list::displayAll(node *head)
{
	if(!head)
	{
		return 0;
	}
	cout << head->data << endl; //work
	return (displayAll(head->next)); //recurse
}

	
