#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct node 
{
    int data;
    node * next;

};

class list 
{
    public:
    	list(int size= 0);
    	~list();

    	int add(int to_add);
    	int display_all();
    	int remove_all();
    	int remove(int to_remove);
    	int build();
    	int build(int size);
    /////////////
    	int insert_after_two(int number);
    	int delete_two();
   	int display();
   	int back_display(); //wrapper function
    	int display_divisible(int number);
	int display_every_other(); //wrapper function 	
	int count;

    private:
    	node * head;
    	int display(node *head);
    	int back_display(node *head);//recursive function
    	int display_divisible(node *head, int number);
	int display_every_other(node *head, int &count);
	
};

