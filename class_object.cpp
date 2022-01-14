#include<iostream>
using namespace std;
class student 
{
    private:
    int rollno;
    char name[20];
    int marks[3];
    public:
        void sgets()
        {
            cout << "Enter name: ";
            cin >> name;
            cout <<"Enter rollno: ";
            cin >> rollno;
            cout << "Enter marks of any three subjects: ";
            for(int i=0; i<3; i++)
            {
                cin >> marks[i];
            }
        }
        void sdisplay()
        {
            cout << "\n\nName: " << name;
            cout << "\nRollno: "<< rollno;
            cout << "\nMarks of three subjects:";
            for(int j=0; j<3; j++)
            {
                cout << "\t" << marks[j];
            }
        }
};
int main()
{
    int i;
    class student std[100];
    cout << "Enter information of 10 sudents: \n";
    for(i=0; i<10; i++)
    {
        std[i].sgets();
    }
    cout <<"Information of 10 student: \n";
    for(i=0; i<10; i++)
    {
        std[i].sdisplay();
    }
    return 0;
}