#include <iostream>

using namespace std;

struct node
{
    int value;
    node *next;
};


void add_node( node *ptr, int value  )
{
    node *new_node = new node;
    new_node -> value =  value;
    new_node -> next = (ptr -> next);
    ptr -> next = new_node;
}

int main()
{
    node *ptr;
    ptr = new node;
    ptr -> value = 1;
    ptr -> next = NULL;
    add_node(ptr, 2);
    cout << ptr->value << ptr->next->value<<endl;
    return 0;
}
