#include<iostream>

using namespace std;

class base
{
    public:
    void show()
    {
        cout<<"base class show fucntion\n";
    }
     void print()
    {
        cout<<"base class print fucntion\n";
    }
};

class derived : public base
{
    public:
    void show()
    {
        cout<<"child class show fucntion\n";
    }
    void print()
    {
        cout<<"child class print fucntion\n";
    }
};

int main()
{
    derived obj;
    obj.show();
    
    return 0;
}