#include <iostream>
#include <iomanip>

using namespace std;

double tinhtrungbinh(double tong, int n){
    return tong / n;
}

int main(){
    int n;
    cin >> n;

    double diem = 0;
    double tong = 0;
    int dem = 0;
    double maxdiem = -1;

    for (int i = 1; i <= n; i++){
        cin >> diem;

        tong += diem;

        if(diem >= 8)
            dem++;

        if(diem > maxdiem)
            maxdiem = diem;
    }
    cout << fixed << setprecision(2) << tinhtrungbinh(tong, n) << endl;
    cout << dem << endl;
    cout << fixed << setprecision(2) << maxdiem;
    return 0;
}
