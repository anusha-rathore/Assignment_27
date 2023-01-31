#include<iostream>
#include<string.h>
using namespace std;
class Mytring{
   public:
 char str[20];
   public:
   
   void accept_string(){
       cout<<"enter string"<<endl;
       cin>>str;
       
   }
   void display(){
       cout<<str<<endl;
       
   }
 void operator!(){
     for(int i=0; str[i]!='\0'; i++){
         
    if (str[i]>=65 && str[i] <=90)
    {
        str[i]=str[i]+32;

    }
    else if (str[i]>=97 && str[i] <=122){
        str[i]=str[i]-32;
    }
   
    
    
     
 }
      cout<<str;
 }
};


int main(){
    Mytring m1,m2;
    m1.accept_string();
    
    m1.display();
    !m1;
    
}
    
    