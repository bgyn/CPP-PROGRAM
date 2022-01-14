#include<iostream>
#include<string.h>
using namespace std;
void sort(char ch[10][20],int n)
{
    int i,j;
    char temp[20];
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if((strcmp(ch[i],ch[j]))>0)
            {
                strcpy(temp,ch[i]);
                strcpy(ch[i],ch[j]);
                strcpy(ch[j],temp);
            }
        }
    }
    cout << "After sorting name in ascending order: \n";
    for(i=0; i<n; i++)
    {
        cout <<"\n"<< ch[i];
    }
}
int main()
{
    int n,i;
    char name[10][20];
    cout << "Enter numbers of student: ";
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> name[i];
    }
    sort(name,n);
    return 0;
}   