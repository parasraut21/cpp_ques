#include <bits/stdc++.h>
#include <cmath>
using namespace std;
// The std::abs() function is used to calculate the absolute value of the difference between a and b.
pair < int , int > findMinMax(int a , int b) 
{
	//   int max1 = max(a,b);
    //   int min1 = min(a,b);
	int max1 = (a + b + abs(a - b)) / 2;
    int min1 = (a + b - abs(a - b)) / 2;
      pair<int,int>p = make_pair(max1,min1);
	  return p;
}
int main() {
    int a = 5, b = 9;
    // int max = (a + b + abs(a - b)) / 2;
    // int min = (a + b - abs(a - b)) / 2;
    int max1 = max(a,b);
    int min1 = min(a,b);

    // cout << "Max: " << max1 << endl;
    // cout << "Min: " << min1 << endl;
   pair<int,int>p= findMinMax(a,b);
   cout<<p.first<<" "<<p.second;

    return 0;
}
