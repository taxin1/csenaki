#include<iostream>
using namespace std;

class RationalNumber
{
private:
    int a, b;
public:
    void assign(int numerator, int denominator)
    {
        if(denominator==0)
        {
            cout<<"Error in storing\n";
        }
        else{
            a=numerator;
            b=denominator;
        }
    }
    void invert()
    {
        if(a==0)
        {
            cout<<"Error in inversion\n";
        }
        else{
            int temp=a;
            a=b;
            b=temp;
        }
    }
    double convert()
    {
        return a/(b*1.0);
    }
    void print()
    {
        cout<<"The Rational Number is "<<a<<"/"<<b;
    }
};
 int main()
 {
     RationalNumber num;
     num.assign(2,3);
     cout<<num.convert()<<endl;
     num.invert();
     num.print();
 }
