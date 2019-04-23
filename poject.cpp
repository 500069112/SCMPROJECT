

=======
=======
#include<cstdio>

#include<cstdlib>

/*

 * Node Declaration

 */

using namespace std;

struct node

{

    int info;

    struct node *next;

    struct node *prev;

}*start;
class circular_llist

{

    public:

        void create_node(int value);

        void add_begin(int value);

        void add_after(int value, int position);

        void delete_element(int value);

        void search_element(int value);

        void display_list();

        void update();

        void sort();

        circular_llist()

        {

            last = NULL;

        }

};
int main()

{

    int choice, element, position;

    circular_llist cl;

    while (1)

    {

        cout<<endl<<"---------------------------"<<endl;

        cout<<endl<<"Circular singly linked list"<<endl;

        cout<<endl<<"---------------------------"<<endl;

        cout<<"1.Create Node"<<endl;

        cout<<"2.Add at beginning"<<endl;

        cout<<"3.Add after"<<endl;

        cout<<"4.Delete"<<endl;

        cout<<"5.Search"<<endl;

        cout<<"6.Display"<<endl;

        cout<<"7.Update"<<endl;

        cout<<"8.Sort"<<endl;

        cout<<"9.Quit"<<endl;

        cout<<"Enter your choice : ";

        cin>>choice;
      void circular_llist::create_node(int value)

{
struct node *temp;
        void circular_llist::add_begin(int value)

{

    if (last == NULL)

    {

        cout<<"First Create the list."<<endl;

        return;

    }

    temp = new(struct node);

    temp->info = value;

    temp->next = last->next;

    last->next = temp;

    if (last == NULL)

    {

        last = temp;

        temp->next = last;

    }

    else

    {

        temp->next = last->next;

        last->next = temp;

        last = temp;

    }

void circular_llist::display_list()

{

    struct node *s;

    if (last == NULL)

    {

        cout<<"List is empty, nothing to display"<<endl;

        return;

    }

    s = last->next;

    cout<<"Circular Link List: "<<endl;

    while (s != last)

    {

        cout<<s->info<<"->";

        s = s->next;

    }

    cout<<s->info<<endl;


}
