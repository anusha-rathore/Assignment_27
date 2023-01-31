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
  public:
    int a,b;
    public:
    void setdata(int x ,int y){
        a=x;
        b=y;

    }
    int operator ==(Complex c)
    {
        if (a==c.a && b==c.b)
        {
            return 1;
        }
        else {
            return 0;
        }
    }

};


    int main(){
    Complex c1 ,c2,c3;
    c1.setdata(2,3);
    c2.setdata(2,3);
    if(c1==c2)
    {
        cout<<"equal";
    }
    else{
        cout<<"not equal";
    }
    
    
    }