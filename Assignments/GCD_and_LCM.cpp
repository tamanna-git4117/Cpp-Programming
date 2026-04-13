#include <iostream>
using namespace std;
int GCD(int a, int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int LCM(int a, int b)
{
    int p=a*b;
    int g=GCD(a,b);

    return(p/g);
}
int main()
{
    int n1, n2;

    cout<<"Enter two positive integers: ";
    cin>>n1>>n2;

    if(n1<=0 || n2<=0)
    {
        cout<<"Invalid input! GCD and LCM is valid for number greater than 0.";
        return 1;
    }

    cout<<"GCD of"<<n1<<" and "<<n2<<"= "<<GCD(n1,n2);
    cout<<"\nLCM of"<<n1<<" and "<<n2<<"= "<<LCM(n1,n2);

    return 0;
}