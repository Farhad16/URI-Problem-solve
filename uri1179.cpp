
#include<iostream>
using namespace std;
int main()
{
    int a[15],i,j,par[5],impar[5];
    for(i = 0;i < 15 ;i++){
        cin >> a[i];
    }

    j = 0;
    for(i = 0;i < 15 ;i++){
        if (a[i] % 2 == 0)
        {
            par[i] = a[i];
            cout << "par["<<j<<"] = "<<par[i] <<endl;
            j++;
            if(j >= 5){
                j = 0;
            }

        }
    }
    j = 0;
     for(i = 0;i < 15 ;i++){
        if (a[i] % 2 != 0)
            {
                impar[i] = a[i];
                cout << "impar["<<j<<"] = "<<impar[i] <<endl;
                j++;
                if(j >= 5){
                    j = 0;
                }

            }
    }

    return 0;
}
