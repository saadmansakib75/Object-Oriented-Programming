/*A C++ program to create a class called Person that has private member variables for name, age and country. 
Implement member functions to set and get the values of these variables.*/

#include <iostream>
#include <string>
using namespace std;

class person {

    private :
        string name ;
        int age ;
        string country ;
    
    public :
        person( string name , int age , string country)  {
            this -> name = name ;
            this -> age = age ;
            this -> country = country ;
        }
        
    void getInfo(){
        cout << "Name : " << name << endl ;
        cout << "Age : " << age << endl ;
        cout << "Country : " << country << endl ;

    }    
};

int main(){

    string name, country;
    int age;
    cout << "Enter name , age and country :" << endl ;
    cin >> name >> age >> country ;

    person p1(name , age , country);
    p1.getInfo();
    return 0;
}
