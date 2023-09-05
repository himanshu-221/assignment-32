/*C++ Program to illustrate the use of Constructors in multilevel inheritance of your choice.
*/
#include<iostream>
using namespace std;
class A
{
    public:
        A()
        {
            cout<<"class A's Default constructor called\n";
        }
        A(int a,int b=0)
        {
            cout<<"\nClass A's perameterised constructor with values : "<<a<<" , "<<b;
        }
        A(string name)
        {
            cout<<"\nClass A's single Perameter constructor with string : "<<name;
        }
};
class B:public A
{
    public:
        B()
        {
            cout<<"Class B's default constructor called\n";
        }
        B(float a) : A(a)
        {
            cout<<"\nClass B's perameterised constructor with value : "<<static_cast<int>(a);
        }
        B(string name) : A(name)
        {
            cout<<"\nClass B's Single perameter constructor : "<<name;
        }
};
class C : public B
{
    public:
        C()
        {
            cout<<"\nClass c's Default constructor called\n";
        }
        C(float a) : B(a)
        {
            cout<<"\nClass C's Single perameter constructor with value : "<<a;
        }
};
int main()
{
    // B b1;
    // B b2("Himanshu");
    // B b3(2.9);
    C c1(20.89);
    return 0;
}