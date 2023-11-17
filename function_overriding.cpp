#include<iostream>

using namespace std;

class base
{
    public:
    void print()
    {
        cout<<"Base class"<<endl;
    }
};

class child : public base
{
    public:
    void print()
    {
        cout<<"child class"<<endl;
    }
};

int main()
{
    child c1;
    c1.print();
    return 0;
}