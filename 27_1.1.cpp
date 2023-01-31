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
    Complex operator + (Complex c){
        Complex t;
    t.a=a+c.a;
        t.b=b+c.b;
        return t;
    }
    void showdata(){
        cout<<a<<"+"<<b<<"i";
    }

};
int main(){
    Complex c1 ,c2,c3;
    c1.setdata(2,3);
    c2.setdata(5,6);
    c3=c1+c2;
    c3.showdata();
}