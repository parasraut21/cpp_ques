/* print this for n=5
//*
//**
//***
//****
//*****
//****
//***
//**
//*
#include <iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;
    
    for(int row=0;row<2*n;row++)
    {
        int totalcol=row>n ? (2*n-row) : row;
      for (int col=1;col<=totalcol;col++){
            
                cout<<"*  ";
            
        }
        cout<<endl;
   }
    return 0;
}*/