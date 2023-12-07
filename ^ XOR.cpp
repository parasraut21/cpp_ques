// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int k=0;
int a[n];
for(int i=0;i <n;i ++)
    cin>>a[i];
for(int i=0;i <n;i ++)
    k=k^a[i];
cout<<k<<endl;
//1 1 2 2 3 ---input
//0^1=1 1^1=0 0^2=2 2^2=0 0^3=3--output
//1 2 1--input
//0^1=1 1^2=3 3^1=2---output
    return 0;
}