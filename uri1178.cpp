#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N[100],i;
    double T;
    cin >> T;
    for(i= 0; i < 100 ; i++){
        cout<<"N["<<i<<"] = " ; std::cout<<std::setprecision(4)<<T<<endl;
        T = T/2;
    }
  return 0;
}


