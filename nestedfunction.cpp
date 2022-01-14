#include <iostream>
using namespace std;
class costumer
{
private:
    int id;
    char name[30];
    char address[30];
    int ph_number;

public:
    void read_costumer();
    void display_costumer();
};
void costumer ::read_costumer()
{
    cout << "Enter coustumer ID: ";
    cin >> id;
    cout << "Enter costumer name: ";
    cin >> name;
    cout << "Enter coustumer address: ";
    cin >> address;
    cout << "Enter coustumer phone-number: ";
    cin >> ph_number;
    display_costumer();
}
void costumer ::display_costumer()
{
    cout << "Cosutmer Information:\n";
    cout << "ID: \n" << id;
    cout << "Name: \n" << name;
    cout << "Address: \n" << address;
    cout << "Phone-Number: \n" << ph_number;
}
int main()
{
    class costumer c;
    c.read_costumer();
    return 0;
}
