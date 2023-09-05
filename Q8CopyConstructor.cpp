/*Write a C++ program to find the factorial of a number using copy constructor*/
#include<iostream>
using namespace std;
class A
{
    int num,fact,i;
    public:
        A()
        {
            cout<<"Default constructor called\n";
        }
        A(int num) : num(num), fact(1)
        {
            cout<<"Perameteried cunstructor called\n";
            //cout<<num;
        }
        A(const A &n1)
        {
            num=n1.num;
            fact = 1;
            for(i=1;i<=num;i++)
            {
                fact = fact*i;
            }
        }
        
        void display()
        {
            cout<<"Factorial of "<<num<<" is "<<fact<<endl;
        }
};
int main()
{
    A a2(5);
    A a3(a2);
    a3.display();
    return 0;
}