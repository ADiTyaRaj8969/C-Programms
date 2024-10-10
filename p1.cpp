#include <iostream>
using namespace std;
class employee{
    double salary; //private variable
public:
    string name;
    char gender;
    int empID;

    void salary_set(double s){
        salary = s;
    }
    //to fetch the salary, we need to make another function for it
    void salary_display(){
        cout<<"the salary is: "<<salary;
    }
};
int main(){
	employee e1;
    e1.name = "Rahul";
    e1.gender = 'M';
    e1.salary_set(15000);
    e1.salary = 150000;
    e1.empID = 1;

    cout << "Name of employee is: " << e1.name << endl;
    cout << "Gender of employee is: " << e1.gender << endl;
    cout << "Salary of employee is: " << e1.salary << endl;
    cout << "empID of employee is: " << e1.empID << endl;
    e1.salary_display();
    cout << "Address of salary variable: " << &e1.salary <<endl;
    e1.salary = 50000;
    cout << "The salary is: " << e1.salary;
	return 0;
}

