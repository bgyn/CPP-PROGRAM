#include<iostream>
using namespace std;
int main()
{
    int i,num[10];
    cout << "Enter any 10 numbers: \n";
    for(i=0; i<10; i++)
    {
        cin >> num[i];
    }
    for(i=0; i<10; i++)
    {
        cout << "\n\nValue at num[" << i <<"] : " << num[i];
        cout << "\nAddress of num[" << i << "] : " << &num[i];
    }
    return 0;
}