/*Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/
#include<iostream>
using namespace std;
class person {
  private :
    int age;
    public:
    void setdata(int a){
        age=a;
    }person operator --(int a)
    {cout<<"post decrement"<<endl;
        person temp ;
        temp.age= age--;
        return temp;
    }
    person operator ++()
    {cout<<"pre Increment"<<endl;
        person temp ;
        temp.age= ++age;
        return temp;
    }
    person operator --()
    {cout<<"pre decrement"<<endl;
        person temp ;
        temp.age= --age;
        return temp;
    }
    
    person operator ++(int a)
    {
        cout<<"post Increment"<<endl;;
        person temp ;
        temp.age= age++;
        return temp;
    }
    void  display(){
        
        cout<<"person age :"<<age<<endl; ;
    }
};
 int main(){
     person p1,p2,p3,p4 ;
     p1.setdata(18);
     p2.setdata(21);
     p4.setdata(16);
     p3.setdata(25);

     (++p1).display();
     (p2++).display();
     (--p3).display();
     (p4--).display();
     
     
 }