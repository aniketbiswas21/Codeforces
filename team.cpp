#include <iostream>
using namespace std;
 
//Compiler version g++ 6.3.0
 
int main()
{
    int t;
    cin>>t;
    int no=0;
    while(t--){
      int a[10];
      int count=0;
      
      for(int i=0;i<3;i++){
        cin>>a[i];
        if(a[i]==1){
          count++;
        }
        
        }
        if(count>=2){
          no++;
        }
      }
      cout<<no<<endl;
    }
    