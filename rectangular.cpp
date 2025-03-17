#include<iostream>
using namespace std;


class rect {
    private :
       double length ;
       double width ;
    
    public :
        double area, perimeter ;

        rect (double l, double w){
            length = l ;
            width = w ;
        }

    double getArea(){
        area = length * width ;
        return area ;
    }  
    
    double getPerimeter(){
        perimeter = 2 * (length + width) ;
        return perimeter ;
    }
    
    void printingAns(){
        cout << "length = " << length << endl ;
        cout << "width = " << width << endl ;
        cout << "area = " << getArea() << endl ;
        cout << "perimeter = " << getPerimeter() << endl ;
    } 


};


int main(){
    
    double a , b ;
    cout << "Enter length and width : " << endl ;
    cin >> a >>  b ;

    rect r1(a,b);
    r1.printingAns();
    return 0;
}
