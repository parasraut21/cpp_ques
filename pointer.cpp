#include<iostream>
using namespace std;
int main(){
    int age=34;
    int *ptr=&age;
    int **pts=&ptr;
    cout<<*ptr<<*ptr;
}