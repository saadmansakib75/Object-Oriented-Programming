/*A C++ program to implement a class called Circle that hasprivate member variables for 
 radius. Include member functions to calculate the circle's area and circumference.*/

 #include<iostream>
 using namespace std;
 
 class circle {
   private:
            float radius;
 
   public:
         double pi = 3.1416;
         double area , circumfrerence;
 
         circle(float rad){
             radius = rad;
         }
         
         double getArea(){
             area = pi * radius * radius;
             return area;
         }
         double getCircumfrerence(){
             circumfrerence = 2 * pi * radius;
             return circumfrerence;
         }
 
         void Display(){
             cout << "Radius = " << radius << endl;
             cout << "Area = " << getArea() << endl;
             cout << "Cirmunference = " << getCircumfrerence() << endl;
         }
 
 };
 
 
 int main(){
     float r;
     cout << "Entetr r : "  ;
     cin >> r ;
     cout << endl ;
     circle r1(r);
     r1.Display();
     return 0;
 }
//# Object-Oriented-Programming
