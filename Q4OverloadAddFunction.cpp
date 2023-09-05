/*Define a class Addition that can add 2 or 3 numbers of different data types using 
function overloading.
*/
#include<iostream>
using namespace std;
class Addition
{
    public:
        int Add(int x,int y,int z=0)
        {
            return x+y+z;
        }
        double Add(double x,double y,double z=0)
        {
            return x+y+z;
        }

};
int main()
{
    Addition A1;
    cout<<"\nSum of two integers = "<<A1.Add(2,5);
    cout<<"\nSum of three integers = "<<A1.Add(2,5,10);
    cout<<"\nSum of two floats = "<<A1.Add(2.9,5.3);
    cout<<"\nSum of three floats = "<<A1.Add(2.5,23.8,5.0);
    return 0;
}