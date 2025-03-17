/*Write a C++ program to implement a class called Employee that has private
 member variables for name, employee ID, and salary. Include member functions
 to calculate and set salary based on employee performance.*/


#include<iostream>
#include<string>
using namespace std ;

class Employee {

    private :
        string name ;
        double salary ;
        int ID ;

    public :
        void setterFunction(string n , int id , double sal){
            name = n ;
            ID = id ;
            salary = sal ;
        }

        double calculateSalary(char Category){
            Category = toupper(Category) ;

            double increment = 0.0  ;

            switch(Category){
            case 'A' : increment = 0.2 ;
                     break ;
            case 'B' : increment = 0.15 ;
                     break ;
            case 'C' : increment = 0.1 ;
                     break ;
            case 'D' : increment = 0.05 ;
                     break ;
            default  :
                cout << "Invalid permformance catagory" << endl ;
                return salary ;
          }

            salary = salary +(salary * increment) ;
            return salary ;
        }

        void getSalary(){
            cout << "Salary = " << salary << endl ;
        }

};

int main(){

    string n ;
    cout << "Enter employee's name : " ;
    cin >> n ;

    int id ;
    cout << "Enter employee's id : " ;
    cin >> id ;

    double sal ;
    cout << "Enter employee's base salary : " ;
    cin >> sal ;

    char Category ;
    cout << "Enter employee's catagory (A/B/C/D) : " ;
    cin >> Category ;
    cout << endl ;

    Employee e1 ;
    e1.setterFunction(n, id, sal) ;
    e1.calculateSalary(Category) ;
    e1.getSalary() ;

    return 0 ;
}
