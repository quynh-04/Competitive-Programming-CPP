#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int tong = 0;
    int maxx = a[0];
    int minn = a[0];
    int vitrimax = 0;
    int vitrimin = 0;
    int dem = 0;
    int tongtren20 = 0;
    int demboi = 0;

    for (int i = 0; i < n; i++){
        tong += a[i];

        if(a[i] > maxx){
            maxx = a[i];
            vitrimax = i;
        }

        if(a[i] < minn){
            minn = a[i];
            vitrimin = i;
        }

        if(a[i] > 20000000){
            dem++;
            tongtren20 += a[i];
        }

        if(a[i] % 1000000 == 0)
            demboi++;
    }

    cout << tong << endl;
    cout << maxx << " " << vitrimax << endl;
    cout << minn << " " << vitrimin << endl;
    cout << dem << endl;
    cout << tongtren20 << endl;

    if(dem == 0)
        cout << 0 << endl;
    else
        cout << (double)tongtren20 / dem << endl;

    cout << demboi << endl;
    cout << maxx - minn << endl;

    return 0;
}

INPUT                                       OUTPUT
5                                           112000000
18000000                                    30000000 4 
22000000                                    17000000 3
25000000                                    3
17000000                                    77000000
30000000                                    2.56667e+07
                                            5
                                            13000000
                                            rocess returned 0 (0x0)   execution time : 34.203 s. Press any key to continue.
