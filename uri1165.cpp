#include<iostream>

using namespace std;

int main()
{
    int n,i,num,j;
    cin >> n;
    for(j=1;j<=n;j++){
        cin >> num;
        for(i=2;i<=num;i++){
            if(i==num){
                cout << num <<" eh primo\n";
            }
            else if(num%i==0){
               cout << num <<" nao eh primo\n";
               break;
            }
        }
    }
    return 0;
}
