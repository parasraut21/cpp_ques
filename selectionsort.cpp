#include <iostream>
//Selection sort
using namespace std;
int main() {

   int n;
cin>>n;
int arr[n];
 int i=0;
while(i<n){
     cin>>arr[i];
     i++;
}
cout<<"The Entered array is..";
for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"The sorted array is...";

for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[i]){
           int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
       
        }
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;



}