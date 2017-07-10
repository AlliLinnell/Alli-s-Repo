//List.h (Header File)
//Function prototypes, class declaration

#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

class linked_list
{
	public:
		int displayAll(node *head);
		int newList(node *head, int count);
		int count = 0; //newList node counter
		node *head;

		linked_list();
		~linked_list();

	private:
		//node *head;
};
