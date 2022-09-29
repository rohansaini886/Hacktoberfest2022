#include<iostream>
#include<string.h>
using namespace std;

class Hero
{
    int health;
    char level;
    char* name;

    public:
    Hero()
    {
        cout<<"Default Constructor is called!"<<endl;
        name=new char[100];
    }
    Hero(int health, char level)
    {
        cout<<"Parameterized Constructor is called!"<<endl;
        this->health=health;
        this->level=level;
    }
    void setHealth(int health)
    {
        this->health=health;
    }
    void setLevel(char level)
    {
        this->level=level;
    }
    void setName(char name[])
    {
        this->name=name;
    }
    Hero(Hero& ob)
    {
        cout<<"Copy Constructor is called!"<<endl;
        char *ch=new char[strlen(ob.name)+1];
        strcpy(ch,ob.name);
        this->name=ch;
        this->health=health;
        this->level=level;
    }
    void showdata()
    {
        cout<<"Health: "<<this->health<<endl;
        cout<<"Level: "<<this->level<<endl;
        cout<<"Name: "<<this->name<<endl;
    }
};

int main()
{
    Hero ob1(100,'D');
    char name[7] = "Akshit";
    ob1.setName(name);
    ob1.showdata();
    // Hero ob2(ob1);
    // ob2.showdata();

    return 0;
}