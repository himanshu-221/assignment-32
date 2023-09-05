/*Define a class A having multiple constructors. Define another class B derived from class 
A. Create derived class constructors and show use of constructor in this single 
inheritance.
*/
#include<iostream>
using namespace std;
class A
{
    public:
        A()
        {
            cout<<"class A's Default constructor\n";
        }
        A(int a,int b)
        {
            cout<<"\nClass A's perameterised constructor with value : "<<a<<" , "<<b;
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
            cout<<"Class B's default constructor\n";
        }
        B(float a,float b) : A(a,b)
        {
            cout<<"\nClass B's perametrised constructor with values : "<<a<<" , "<<b;
        }
        B(string name) : A(name)
        {
            cout<<"\nClass B's Single perameter constructor : "<<name;
        }
};
int main()
{
    B b1;
    B b2("Himanshu");
    B b3(2,5);
    return 0;
}