#include<iostream.h>
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
