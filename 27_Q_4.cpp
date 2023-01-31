/*Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.*/
// Create a class Time which contains:
// - Hours
// - Minutes
// - Seconds
// Write a C++ program using operator overloading for the following:
// 1. = = : To check whether two Times are the same or not.
// 2. >> : To accept the time.
// 3. << : To display the time.

#include<iostream>
using namespace std;
class Time {
    private:
    int h,m,s;
    public :
    void settime(int x,int y,int z){
        h=x;
        m=y;
        s=z;
    }
    
       int operator ==(Time t)
    {
        if (h==t.h && m==t.h && s==t.s)
        {
            return 1;
        }
        else {
            return 0;
        }
    }
    friend void operator <<(ostream &os ,Time t);
     friend void operator >>(istream &is ,Time t);
};
     void operator <<(ostream &os ,Time t){
         os<<"operator"<<endl;;
         os<<t.h << "hours " << t.m <<"min "  << t . s <<"Seconds"<<endl;
         
     }
      void operator >>(istream &is ,Time t){
          
         is>>t.h >>t.m >>t.s;
         cout<<t.h << "hours " << t.m <<"min "  << t . s <<"Seconds"<<endl;;
         
     }
    


int main(){
    Time t1,t2;
    t1.settime(1,25,20);
    cout<<t1;
    cin>>t2;
    if(t1==t2)
    {
        cout<<"equal";
    }
    else{
        cout<<"not equal";
    }
    
}