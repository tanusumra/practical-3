#include <iostream>
using namespace std;
 
struct Employee
 {
    string name;
    int salary;
    int employeeCode;
    string  branch;
};
 
int main() 
{
    Employee e;
     
    cout << "Enter name of employee : ";
    cin>>e.name;
    cout << "Enter branch: "<<endl;
    cin>>e.branch;
    cout << "Enter salary of employee : "<<endl;
    cin >> e.salary;
    cout << "Enter employee code : "<<endl;
    cin >> e.employeeCode;
     
    
    cout << "\n*** Employee Details ***" << endl;
    cout << "Name : " << e.name << endl << "Salary : "
        << e.salary << endl;
    cout << "Employee Code : " << e.employeeCode<<endl <<  "branch :" <<e.branch <<endl;
        
    return 0;
}
