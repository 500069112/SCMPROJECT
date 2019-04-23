 * /Search element in the list

 
void circular_llist::search_element(int value)

{

    struct node *s;

    int counter = 0;

    s = last->next;

    while (s != last)

    {

        counter++;

        if (s->info == value)

        {

            cout<<"Element "<<value;

            cout<<" found at position "<<counter<<endl;

            return;

        }

        s = s->next;

    }

    if (s->info == value)

    {

        counter++;

        cout<<"Element "<<value;

        cout<<" found at position "<<counter<<endl;

        return;

    }

    cout<<"Element "<<value<<" not found in the list"<<endl;

}



/*

 * Display Circular Link List

 */

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



/*

 * Update Circular Link List

 */

void circular_llist::update()

{

    int value, pos, i;

    if (last == NULL)

    {

        cout<<"List is empty, nothing to update"<<endl;

        return;

    }

    cout<<"Enter the node position to be updated: ";

    cin>>pos;

    cout<<"Enter the new value: ";

    cin>>value;

    struct node *s;

    s = last->next;

    for (i = 0;i < pos - 1;i++)

    {

        if (s == last)

        {

            cout<<"There are less than "<<pos<<" elements.";

            cout<<endl;

            return;

        }

        s = s->next;

    }

    s->info = value;

    cout<<"Node Updated"<<endl;

}
