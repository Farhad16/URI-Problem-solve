
#include<iostream>
 using namespace std;
 int main()
 {
     int num[10],i,n,temp;
     cin >> n;
     temp = n;
     for(i=0;i<10;i++){
        if(temp == n){
           cout << "N["<<i<<"] = "<< temp << endl;
           n = n*2;
        }
        else{
            cout << "N["<<i<<"] = "<< n << endl;
            n = n*2;
        }

     }
     return 0;
 }


