#include<iostream.h>
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
