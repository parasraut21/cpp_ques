//Check if given no. is amsrtong (153 is a amsrtong no.)
//If we cube every number and sum is same no. then the no. is amsrtong
//For ex. 153=1+  5(5^3=125)+  3(3^3=27)=153
#include <iostream>
#include<math.h>
using namespace std;
int main() {
int n;
cout<<"Enter The no....";
cin>>n;
int sum=0;
int originaln=n;
while(n!=0){
    int rem=n%10;
     sum=sum+pow(rem,3);
  n=n/10;
   
}
 if(originaln==sum){
     cout<<"The No.is amrsstrong...."<<sum<<endl;
 }
 else{
     cout<<"not amstrong";
 }
    return 0;
}