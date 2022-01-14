#include<iostream>
using namespace std;
void prime(int n)
{
    int c=0;
    for(int j=1; j<=n; j++)
    {
        if(n%j==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        cout << "\n" << n;
    }
}
int main()
{
    int i;
    for(i=1; i<=100; i++)
    {
        prime(i);
    }
    return 0;
}