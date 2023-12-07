/*EX.1) pattern printing (rectangle)
#include <iostream>
using namespace std;
int main() {
 int row,col;
 cout<<"Enter rows and column"<<endl;
 cin>>row>>col;
 for(int i=1;i<=row;i++){
     for(int j=1;j<=col;j++){
         cout<<"*";
     }
     cout<<endl;
 }

    return 0;
}*/


/*ex.2)// pattern printing  hollow rectangle
#include <iostream>
using namespace std;
int main() {
 int row,col;
 cout<<"Enter rows and column"<<endl;
 cin>>row>>col;
 for(int i=1;i<=row;i++){
     for(int j=1;j<=col;j++){
         if(i==1 || i==row || j==1 || j==col){
             cout<<"*";
         }
        
         else {
             cout<<" ";
         }
     }
     
     cout<<endl;
 }

    return 0;
}*/

/*Ex.3)sPattern prinitng no.:

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of rows you want"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
       
        for(int j=1;j<=i;j++){  //rows=1 to n
                                //coloumns= 1 to row no.
        cout<<j;
    }
    cout<<endl;
    }
   
 

	return 0;
}*/

/*Ex.4Inverted half piramid

#include <iostrieam>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of rows you want"<<endl;
    cin>>n;
    for(int i=n;i>=1;--i){
       
        for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
    }
   
 

	return 0;
}*/

/*Ex.5)half pyramid after 180 rotation
#include <iostream>
using namespace std;
int main() {
     int n;
    cout<<"Enter the no. of rows you want"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
        if(j<=n-i){
            cout<<" ";
        }else{
            cout<<"*";
        }
    }
    cout<<endl;
    }

    return 0;
}*/