#include<iostream>
using namespace std;
class Number{
   private:
   int x,y,z;
   public:
   void display(){
       cout<<x<<"," << y<<","  << z<<endl;
       
   }
   
   Number(int a , int b,int c){
       x=a;
       y=b;
       z=c;
   }
   
   void operator -()
   {
       
       x=-x;
       y=-y;
       z=-z;
      
   }
};

int main(){
    Number n1(12,33,5);
    cout<<"numbers are"<<endl;
    n1.display();
    -n1;
        cout<<"After negate the numbers."<<endl;

    n1.display();
}