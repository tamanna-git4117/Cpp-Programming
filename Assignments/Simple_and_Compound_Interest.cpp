#include <iostream>
#include <math.h>
using namespace std;
double Simple_Interest(double x, double y, double z)
{
    return((x*y*z)/100);
}
double Compound_Interest(double x, double y, double z)
{
    return(x*pow((1+y/100),z)-x);
}
int main()
{
    double amt, rate, SI, CI;
    int time;

    printf("Enter the Principal Amount: ");
    scanf("%lf", &amt);
    printf("Enter the Interest Rate (in %): ");
    scanf("%lf", &rate);
    printf("Enter the Time (in years): ");
    scanf("%u", &time);

    if(time<=0)
    {
    printf("Invalid Number of Year! Year must be greater than 0.");
    return 1;
    }

    cout<<"Simple Interest= "<<Simple_Interest(amt,rate,time)<<"Rs.";
    cout<<"\nCompound Interest= "<<Compound_Interest(amt,rate,time)<<"Rs.";

    return 0;
}