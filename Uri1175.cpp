#include<iostream>
using namespace std;

int main()
{
    int i,n=0,a[20];
    for(i = 0; i < 20; i++){
        cin >> a[i];
    }

    for(i = 19; i >= 0; i--){
        cout << "N["<<n<<"] = " << a[i] << endl;
        n++;
    }
}
