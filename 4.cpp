#include <iostream>

using namespace std;

int tinhtien(int gia){
    if(gia <= 500000)
        return gia = 500000;
    else
        return gia / 10;
}

int main(){
    int n;
    cin >> n;

    int gia = 0;
    int tong = 0;
    int dem = 0;
    int giamax = -1;

    for (int i = 1; i <= n; i++){
        cin >> gia;

        tong += gia;

        if(tong > 500000)
            dem++;

        if(gia > giamax)
            giamax = gia;
    }
    cout << tong << endl;
    cout << dem << endl;
    cout << giamax;

    return 0;
}
