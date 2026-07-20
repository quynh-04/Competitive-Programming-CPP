#include <iostream>

using namespace std;

int diemAl(int kitu){
    if(kitu <= 8)
        return kitu * 5;
    else
        return 8 * 5 + (kitu - 8) * 8;
}

int main(){
    int n;
    cin >> n;

    int kitu = 0;
    int tong = 0;
    int dem = 0;
    int baomatmax = -1;

    for (int i = 1; i <= n; i++){
        cin >> kitu;

        int matkhau = diemAl(kitu);

        tong += matkhau;

        if(kitu > 8)
            dem++;

        if(matkhau > baomatmax)
            baomatmax = matkhau;
    }

    cout << tong << endl;
    cout << dem << endl;
    cout << baomatmax;

    return 0;
}
