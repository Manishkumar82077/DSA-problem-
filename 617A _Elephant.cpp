#include <iostream>
using namespace std;

int main() {
    int x;
    cin >>x;
    int current=x;
    int res=0;
     
        res += current/5;
        current %= 5;
  
         res += current/4;
         current %= 4;
 
         res += current/3;
         current %= 3;    
 
         res += current/2;
         current %= 2;
  
         res += current/1;
         current %= 1;
 
    cout<<res<<endl;
    return 0;
}
