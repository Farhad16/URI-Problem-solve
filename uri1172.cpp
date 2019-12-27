
#include<iostream>
 using namespace std;
 int main()
 {
     int num[10],i,n;
     float avg;
     for(i=0;i<10;i++){
        cin >> n;
        if(n<=0){
            num[i]=1;
            cout << "X["<<i<<"] = "<< num[i] << endl;
        }
        else{
            num[i]=n;
            cout << "X["<<i<<"] = "<< num[i] << endl;
        }

     }
     return 0;
 }

