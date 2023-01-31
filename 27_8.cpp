#include<iostream>
using namespace std;

class Matrix {
    int a[3][3];
    public:
    void  setmatrix(){
        cout<<"enter matrix"<<endl;
        
        for (int i=0 ; i<3; i++)
        {
            for (int j=0;j<3;j++){
            cout<<" ";
            cin>>a[i][j];
        }
    }}
    void display(){
         for (int i=0 ; i<3; i++)
        {
            for (int j=0;j<3;j++){
            cout<<" ";
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
        
    }
    void operator -(){
        for (int i=0 ; i<3; i++)
        {
            for (int j=0;j<3;j++){
                 a[i][j]=-a[i][j];
                
            }
    }
    }
};

int main (){
     Matrix m1;
     m1.setmatrix();
     m1.display();
     -m1;
     m1.display();
     
}