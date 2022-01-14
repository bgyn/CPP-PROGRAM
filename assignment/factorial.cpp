#include<iostream>
using namespace std;
int fac(int n)
{
    int i,f,j;
    for(i=1; i<=n; i++)
    {
        f=1;
        for(j=1; j<=i; j++)
        {
            f=f*j;
        }
    }
    return f;
}
int main()
{
    int i;
    for(i=1; i<=5; i++)
    { 
        cout << "\nFactorial of " << i << " is " << fac(i);
    }
    return 0;
}
