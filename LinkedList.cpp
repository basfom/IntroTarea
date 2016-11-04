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

    system("clear");
    cin.clear();
    cout << "LISTA ENLAZADA" << endl;
    cout << "==============" << endl;
    cout << "\t1 .- Mostrar valores a la lista" << endl;
    cout << "\t2 .- Agregar valor de la lista" << endl;
    cout << "\t3 .- Eliminar valor de la lista" << endl;
    cout << "\t4 .- Localizar valor de la lista" << endl;
    cout << "ELije una opcion: ";

    cin >> tecla;

    switch(tecla)
    {
      system("clear");
      case 1:
        cout << "== Valores de la lista ==" << endl;
        cout << "En construcción" << endl;
      case 2:
        cout << "== Agregar un valor de la lista ==" << endl;
        cout << "En construcción" << endl;
      case 3:
        cout << "== ELiminar un valor de la lista ==" << endl;
        cout << "En construcción" << endl;
      case 4:
        cout << "== Localizar un valor de la lista ==" << endl;
        cout << "En construcción" << endl;
    }

    node *ptr;
    cout << ptr << endl;
    ptr = new node;
    ptr -> value = 1;
    ptr -> next = NULL;
    add_node(ptr, 2);
    cout << ptr->value << ptr->next->value<<endl;
    return 0;
}
