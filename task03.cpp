#include <iostream>
using namespace std;
class Employee {
private:
    int empID;
    float salary;
public:
    void setData() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void display() {
        cout << "\nEmployee ID: " << empID << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main() {
    Employee data;
    data.setData();
    data.display();
    return 0;
}
