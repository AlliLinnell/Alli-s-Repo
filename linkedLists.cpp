#include <iostream>

using namespace std;

struct node //components of a node
{
	int data; //data component of a node
	node *next; //next pointer component of a node
};

int main()
{
	
	node *head; //head pointer
	node *temp; //temp poitner
	node *current; //current pointer

	temp = new node;
	temp->next = NULL;

	head = temp;
	current = temp;
	
	temp->data = 0;
	cout << temp->data << endl;

	for(int i = 1 ; i < 5 ; i++)
	{
		temp = new node;
		temp->next = NULL;
		current->next = temp;
		current = temp;
		temp->data = i;
		cout << temp->data << endl;
	}

	
		
}
