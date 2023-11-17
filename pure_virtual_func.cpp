#include<iostream>

using namespace std;

class base
{
    public:
    virtual void print()= 0;
};

class derived : public base
{
    public:
    void print()
    {
        cout<<"child class print fucntion\n";
    }
};

int main()
{
    derived d1;
    d1.print();
    return 0;
}