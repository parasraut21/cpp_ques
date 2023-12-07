//isdigit
#include <iostream>
#include<cstring>
using namespace std;
int main() {

  char str[]="12dsvsv";
  for(int  i=0;i<strlen(str);i++){
      int check=isdigit(str[i]);
      if(check){
          cout<<str[i]<<endl;
      }
      else{
          cout<<str[i];
      }
  }
    return 0;
}