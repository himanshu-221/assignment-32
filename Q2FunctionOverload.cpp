/*Define a class Rectangle and overload area function for different types of data type.
*/
#include<iostream>
using namespace std;

class Rectangle
{
    float a,b;
    public:
        Rectangle()
        {}
        Rectangle(float a,float b) : a(a), b(b)
        {}
        //Taking one arrgument to distinguis area function;
        double area(double x)
        {
            //Typecast float into double
            return static_cast<double>(a*b);
        }

        int area(int y)
        {
            //Typecast float into int
            return static_cast<int>(a*b);
        }
};
int main()
{
    Rectangle R1(10.20,30.3);
    cout<<"Float area : "<<R1.area(12.787);
    cout<<"\nInteger area : "<<R1.area(2);
    return 0;
}