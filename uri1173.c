
#include<iostream>
 using namespace std;
 int main()
 {
     int num[10],i,n,mul=1;
     float avg;
     for(i=0;i<10;i++){
        cin >> n;
            mul *= n;
            cout << "X["<<i<<"] = "<< mul << endl;
     }
     return 0;
 }


