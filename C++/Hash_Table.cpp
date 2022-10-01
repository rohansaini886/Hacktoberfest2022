#include <iostream>
#define size 7
using namespace std;

int arr[size];
void init()
{
    int i;
    for (i = 0; i < size; i++)
        arr[i] = -1;
}
void insert(int value)
{
    int key = value % size;
    if (arr[key] == -1)
    {
        arr[key] = value;
        cout << "%d inserted at arr[%d]\n", value, key ;
    }
    else
    {
        cout << "Collision : arr[%d] has element %d already!\n", key, arr[key] ;
        cout << "Unable to insert %d\n", value ;
    }
}
void del(int value)
{
    int key = value % size;
    if (arr[key] == value)
        arr[key] = -1;
    else
        cout << "%d not present in the hash table\n", value ;
}
void search(int value)
{
    int key = value % size;
    if (arr[key] == value)
        cout << "Search Found\n" ;
    else
        cout << "Search Not Found\n" ;
}
void print()
{
    int i;
    for (i = 0; i < size; i++)
        cout << "arr[%d] = %d\n", i, arr[i] ;
}
int main()
{
    init();
    insert(10); // key = 10 % 7 ==> 3
    insert(4);  // key = 4 % 7 ==> 4
    insert(2);  // key = 2 % 7 ==> 2
    insert(3);  // key = 3 % 7 ==> 3 (collision)
    cout << "Hash table\n" ;
    print();
    cout << "\n" ;
    cout << "Deleting value 10..\n" ;
    del(10);
    cout << "After the deletion hash table\n" ;
    print();
    cout << "\n" ;
    cout << "Deleting value 5..\n" ;
    del(5);
    cout << "After the deletion hash table\n" ;
    print();
    cout << "\n";
    cout << "Searching value 4..\n" ;
    search(4);
    cout << "Searching value 10..\n" ;
    search(10);
    return 0;
}
