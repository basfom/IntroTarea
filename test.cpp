// Borrar, duplicar, transpose,
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
    int tecla;

    system("cls")
    cin.clear()
    cout << "LISTA ENLAZADA" << endl;
    cout << "==============" << endl;
    cout << "\t1 .- Mostrar valores a la lista" << endl;
    cout << "\t2 .- Agregar valor de la lista" << endl;
    cout << "\t3 .- Eliminar valor de la lista" << endl;
    cout << "\t4 .- Localizar valor de la lista" << endl;
    cout << "ELije una opcion: ";

    cin >> tecla;

    cout << tecla << endl;

    node *ptr;
    cout << ptr << endl;
    ptr = new node;
    ptr -> value = 1;
    ptr -> next = NULL;
    add_node(ptr, 2);
    cout << ptr->value << ptr->ne  xt->value<<endl;
    return 0;
}
