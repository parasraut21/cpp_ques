#include<iostream>
using namespace std;
 int main() {
   int n;
   cin>>n;
int arr[n];
for(int i=1;i<=n;i++){
cin>>arr[i];
}

int max=0;
int min=n;
for(int i=1;i<=n;i++){
   if(arr[i]>max){
      max=arr[i];
      
   }
   if(arr[i]<min){
      min=arr[i];
   
   }
}
cout<<max<<" "<<min;
  
    return 0;
 }
// }   int arr[n];
//    for(int i=1;i<=n;i++){
//     cin>>arr[i];
//      }
//      int max=0;
//      int min=n;
//      for(int i=1;i<=n;i++){
//         if(arr[i]>max){
//            max=arr[i];
//         }
//         if(arr[i]<min){
//             min=arr[i];
//         }

//      }
//      cout<<max<<" "<<min<<" "<<endl;