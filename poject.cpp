#include<iostream.h>
void circular_llist::add_begin(int value)

{

    if (last == NULL)

    {

        cout<<"First Create the list."<<endl;

        return;

    }

    struct node *temp;

    temp = new(struct node);

    temp->info = value;

    temp->next = last->next;

    last->next = temp;

}
