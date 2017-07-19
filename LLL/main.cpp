#include "list.h"

int main()
{
//    list my_list; //makes a new list, statically
list * my_list = new list;

    my_list->build();
    cout << "My List " << endl;
	my_list->display_all();
/*    cout << my_list->back_display() << endl;
    my_list->insert_after_two(4);
    cout << "*****" << endl;
    my_list->display();
    cout << my_list->back_display() << endl;
    cout << "*****" << endl;
    my_list->delete_two();
    my_list->display();
    cout << my_list->back_display() << endl;
 */
 //  cout << my_list->display_divisible(3) << endl;
    cout << "Function Test " << endl;
	 int skips = my_list->display_every_other();
	cout << endl<< "Skips:" << skips << endl;
	

    delete my_list;
    my_list = NULL;

return 0;
}
