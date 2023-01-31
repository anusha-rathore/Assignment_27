#include<iostream>
using namespace std;

class fraction {
    private:
    long num,deno;
    public:
     fraction(long int n=0,long int d=0){
         num=n;
         deno=d;
     }
     friend void operator>>(istream &in ,fraction &f)
     { cout<<" Numerator  :";
      in>>f.num;
      cout<<"Denomerator   :";
      in>>f.deno;
      
         
     }
     friend void operator<<(ostream &out ,fraction &f)
     {
         out<<f.num<<"/"<<f.deno;
     }
     fraction operator ++()
     {
         ++num;
         ++deno;
         return(*this);
         
     }
     fraction operator ++(int)
     {
         fraction temp=*this;
         num++;
         deno++;
         return temp;
     }
};
    

int main (){
     fraction f1,f2;
     
     cout<<"\n f1  :";
     cout<<f1;
     cout<<"\n f2  :";
     cout<<f2;
     cout<<endl;
     cout<<"enter first fraction value :"<<endl;
     cin>>f1;
     
     
     cout<<" f++ = "<<endl;
     (f1++);
     cout<<f1;
     cout<<endl;
     cout<<" ++f1 ="<<endl;;
     (++f1);
     cout<<f1;
     cout<<endl;
     
     
}