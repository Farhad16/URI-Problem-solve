#include<iostream>
using namespace std;

int main(){
    int n=0,i=0;
    float num,sum = 0,avg;
    while(n<3){
    cin >> num;
    if(num >=0 && num <= 10)
    {
        i++;
        n++;
        sum += num;
    }
    else{
        cout << "nota invalida" << endl;
    }
    if(i == 2){
        avg = sum/i;
        cout << "media = " << avg << endl;
        break;
    }
}
}

