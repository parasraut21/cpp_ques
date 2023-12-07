//Prime between two numbers
#include <iostream>
#include<math.h>
using namespace std;
int isprime(int n){
for(int i=2;i*i<=n;i++)
{
    if(n%i==0){
        return 0;
    }
}

return 1;
}
int main() {
    int n1,n2;
    cout<<"Enter the first no...."<<endl;
    cin>>n1;
     cout<<"Enter the first no...."<<endl;
     cin>>n2;
   cout<<"The prime no. between"<<" "<<n1<<" "<<"and"<<" "<<n2<<" "<<"are..."<<endl;
   
   for(int i=n1;i<=n2;i++){
       if(isprime(i)){
           cout<<i<<endl;
       }
   }
    return 0;
}