/*Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/
#include<iostream>
using namespace std;
class Complex {
   private:
    int a,b;
    public:
    void setdata(int x ,int y){
        a=x;
        b=y;

    }
     friend Complex  operator + (Complex , Complex);
       
    void showdata(){
        cout<<a<<"+"<<b<<"i";
    }

};

 Complex  operator + (Complex x, Complex y){
       
 Complex t;
    t.a=x.a +y.a;
        t.b=x.b+y.b;
        return t;
    }
int main(){
    Complex c1 ,c2,c3;
    c1.setdata(2,3);
    c2.setdata(5,6);
    c3=c1+c2;
    c3.showdata();
}