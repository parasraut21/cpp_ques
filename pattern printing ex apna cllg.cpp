/*// ex.1)pattern printing o-1 pattern
#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
      if((i+j)%2==0){
          cout<<" 1";
      }
      else{
          cout<<" 0";
  }
      }
  cout<<endl;
  }
    return 0;
}*/

/*// Ex2)pattern printing - Rhombus pattern
#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
     for(int j=1;j<=n-i;j++){
      cout<<" ";
         
     }
     
      for(int j=1;j<=n;j++){
      cout<<"* ";
  }
  
  
      
  cout<<endl;
  }
    return 0;
}*/