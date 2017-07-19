#include "list.h"

list::list(int size) //constructor
{
    srand(time(NULL));
    head = NULL; //every new list will have this
    if (!size || size < 0)
    {
        build(size);
    }
	count = 0;
	
}
list::~list() //destructor
{
    remove_all();//frees up memory
}

int list::add(int to_add)
{
    if (!head)
    {
        node * temp;
        temp = new node;
        temp->data = to_add;
        temp->next = NULL;
        head = temp;
        return 0;
    }
    else
    {
        node * temp;
        temp = new node;
        temp->data = to_add;
        temp->next = NULL;
        
        node * current;
        current = head;
        while (current->next)
        {
            current = current->next;
        }

        current->next = temp;
           return 0;
    }
}
int list::display_all()
{
    if(!head)
    {
        cout << "Empty list." << endl;
        return 0;
    }
    node *current = head;
    while(current) //While current->next points to a node
    {
        cout << current->data << " ";
        current = current->next;
    }
	cout << endl;
    return 0;
}
int list::remove_all()
{
    while(head)
    {
        node *temp = head->next;
        delete head;
        head = temp;
    }
    head = NULL;
    return 0;
}
int list::remove(int to_remove)
{
    if(!head)
    {
        cout << "Empty list." << endl;
    return 0;
    }
    node * current = head;
    node  * previous = head;
    while(current && current->data != to_remove)
    {
        previous = current;
        current = current->next;
    }
    if(current)
    {
        if(head == current) //if value is in the first node
        {
            node * temp = head->next;
            delete head;
            head = temp;
            return to_remove;
        }
        previous->next = current->next;
        delete current;
        current = NULL;
       return to_remove;
     }
            
    
    
    cout << "We didn't find it." << endl;

    return 0;
}
int list::build(int size)
{
    remove_all();
    
    if(size== 0)
    {
        return 0;
    }
    srand(time(NULL));
for(int i = 0 ; i < size ; ++i)
    {
        add(rand() % 150 + 1);
    }
return 0;
}
int list::build()
{
    remove_all();
    srand(time(NULL));
    build(rand() % 25 + 1);
    return 0;

}
int list::insert_after_two(int number)
{
    if(!head)
    {
        return 0;
    }
    node *current = head;
    while(current)
    {
        if(current->data % 2 == 0)
        {
            node *temp = new node;
            temp->data = number;
            temp->next = current->next;
            current->next = temp;

            if(number % 2 == 0)
            {
                current = current->next;
            }
        }
        current = current->next;
    }
    return 0;
}
int list::delete_two()
{
    if(!head)
    {
        return 0;
    }
    while(head && head->data % 2 == 0)
    {
        node *temp = head->next;
        delete head;
        head = temp;

    }
    node *previous = head;
    node *current = head->next;
    while(current)
    {
        if(current->data % 2 == 0)
        {
            current = current->next;
            delete previous->next;
            previous->next = current;
        }
        else
        {
        previous = current;
        current = current->next;
        }
    }
    return 0;
}
int list::display()
{
    return display(head);
}
int list::display(node *head)
{
    if(!head)
    {
        cout << "NULL" << endl;

        return 0;
    }
        
    cout << head->data << " -> " ;
    display(head->next);
    return 1;

}
int list::back_display()
{
    int result = back_display(head);//call the private function
    cout << endl;

    return result;
}
int list::back_display(node *head)
{
    if(!head)
    {
        cout << "NULL" ;
        return 0;
    }
        int count = back_display(head->next);
        cout << " <- " << head->data;
        return count + 1;

}
int list::display_divisible(int number)
{
    return display_divisible(head, number);
}
int list::display_divisible(node *head, int number)
{
    if(!head)
    {
        return 0;
    }
    if(head->data % number == 0)
    {
        cout << head->data << " is divisible by "<< number << endl;
        int count = display_divisible(head->next, number);
        return count + 1;
    }
    int count = display_divisible(head->next, number);
    3;
    return count;
}
int list::display_every_other()
{
	return display_every_other(head, count);
}
int list::display_every_other(node *head, int &acount) //skip every other node and return number of nodes skipped
{
	if(!head) //base case, if no list
	{
		return 0;
	}
	if(!head->next)
	{
		return 0;
	}
	cout << head->data << " SKIP " ;
	count++;
	
	display_every_other(head->next->next, count);
//	cout << count << endl;
	return count;
} 
