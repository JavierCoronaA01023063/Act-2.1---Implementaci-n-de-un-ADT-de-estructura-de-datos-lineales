#include "list.h"

using namespace std;

int main()
{    
    try
    {
        LinkedList<int> list;

        list.push(2);
        list.push(3);
        list.push(4);
        list.push(5);
        list.push(6);
        list.push(7);
        list.push(9);
        list.push(9);

        cout << "Imprime lista #1: " << endl;
        list.print();

        cout << "Agrega item (34) a la lista: " << endl;
        list.append(34);
        list.print();


        cout << "Agrega item 39: " << endl;
        list.insert_item(39, 1);
        list.print();

        cout << "Borra item 39: " << endl;
        list.delete_item(1);
        list.print();


        cout << "Imprime en reversa la lista: " << endl;
        //list.Reverse()
        list.count(8);
        list.print();

        //remove duplicates
        cout << "Imprime en la lista sin duplicados " << endl;
        list.RemoveDuplicates();
        list.print();

        //sorted 
        cout << "Imprime en sorted la lista: " << endl;
        Node<int> *newNode = new Node<int>(8, NULL);
        list.SortedInsert(newNode);
    
        //delete list
        cout << "Borra la lista " << endl;
        list.DeleteList();
        list.print();
        

        

        // for (size_t i = 0; i < list.length(); i++)
        // {
        //     int item;
        //     list.get_nth(i, item);
        //     cout << item << ", ";
        // }
        // cout << endl;        
    }
    catch(const char* e)
    {
        std::cerr << "ERROR caught: " << e << std::endl;
    } 

    return 0;
}