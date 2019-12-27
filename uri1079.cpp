#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    int n,i;
    float num1,num2,num3,sum = 0,avg;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> num1 >> num2 >> num3;
        sum = ((num1*2)+(num2*3)+(num3*5))/10;
        std::cout << std::fixed << std::setprecision(1) << sum << endl;
    }
}


