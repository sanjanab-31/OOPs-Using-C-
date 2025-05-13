// Create an Employee class with attributes like name, id, designation, and salary. Include methods
// to give a salary hike based on performance.
#include<iostream>
#include<string>
using namespace std;
class Employee
{
    private:
        int id;
        string name;
        string designation;
        float salary;
    public:
        void setDetails(int i, string n, string d, float s);
        void giveSalaryHike(float percentage);
        void displayDetails();
};

// Define the member functions of the Employee class
void Employee::setDetails(int i, string n, string d, float s) {
    id = i;
    name = n;
    designation = d;
    salary = s;
}

void Employee::giveSalaryHike(float percentage) {
    salary += salary * (percentage / 100);
}

void Employee::displayDetails() {
    cout << "Employee ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Designation: " << designation << endl;
    cout << "Salary: " << salary << endl;
}
int main()
{
    int id;
    string name;
    string designation;
    float salary;
    cout<<"Enter the employee id:";
    cin>>id;
    cout<<"Enter the employee name;";
    cin>>name;
    cout<<"Enter the employee designation:";
    cin>>designation;
    cout<<"Enter the employee salary:";
    cin>>salary;

}
