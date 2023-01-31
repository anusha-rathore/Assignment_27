#include<iostream>
using namespace std;

class Matrix {
    int a[3][3];
    int sum[3][3];
    public:
    void  setmatrix(){
        cout<<"enter matrix  elements(3x3)"<<endl;
        
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
    // friend Matrix operator +(Matrix x1, Matrix x2);
    
    Matrix operator +(Matrix m){
        Matrix temp;
         
        for (int i=0 ; i<3; i++)
        {
            for (int j=0;j<3;j++){
                temp.a[i][j]=a[i][j]+ m.a[i][j];
                
            }
            
    }
    return temp;
    }
    
};

int main (){
     Matrix m1,m2,m3;
     
     m1.setmatrix();
     cout<<"first Matrix"<<endl;
     m1.display();
    m2.setmatrix();
     cout<<"first Matrix"<<endl;
     m2.display();
     m3=m1+m2;
     cout<<"addition Matrix"<<endl;
     m3.display();
     
}