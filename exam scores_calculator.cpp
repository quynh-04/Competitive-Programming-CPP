#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;

    double a[100];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    double tong = 0;
    double maxx = a[0];
    double minn = a[0];
    int dem8 = 0;
    int dem5 = 0;

    for (int i = 0; i < n; i++){
        tong += a[i];

        if(a[i] > maxx)
            maxx = a[i];

        if(a[i] < minn)
            minn = a[i];

        if(a[i] >= 8)
            dem8++;

        if(a[i] < 5)
            dem5++;
    }

    cout << tong << endl;
    cout << fixed << setprecision(2) << tong / n << endl;
    cout << maxx << endl;
    cout << minn << endl;
    cout << dem8 << endl;
    cout << dem5;

    return 0;
}
