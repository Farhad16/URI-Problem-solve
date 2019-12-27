#include<iostream>
using namespace std;
int main()
{
    int N[10],i,T,j;
    cin >> T;
    j = 0;
    if(T >=2 && T <= 50){
        for(i= 0; i < 1000 ; i++){
        cout << "N["<<i<<"] = " <<j<<  endl;
            j++;
            if(j >= T){
            j=0;
            }
        }
    }
  return 0;
}

