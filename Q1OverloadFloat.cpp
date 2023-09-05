/*Create a class FLOAT that contains one float data member. Overload all the four 
arithmetic operators so that they can operate on the objects of FLOAT.
*/
#include<iostream>
using namespace std;
class Float
{
    float num;
    public:
        Float()
        {
    
        }
        Float(float a)
        {
            num=a;
        }
        float operator+(Float F)
        {
            return(num+F.num);  
        }
        float operator-(Float F)
        {
            return (num-F.num);
        }
        float operator*(Float F)
        {
            return (num*F.num);
        }
        float operator/(Float F)
        {
            return (num/F.num);
        }
};
int main()
{
    Float f2(7),f3(10.5);
    float f=10.22;
    cout<<"\nOperator + :"<<f3+f;
    cout<<"\nOperator / : "<<f3/f2;
    return 0;

}