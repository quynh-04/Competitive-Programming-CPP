#include <iostream>

using namespace std;

int tinhtiennuoc(int nuoc){
    if(nuoc <= 30)
        return nuoc * 12000;
    else
        return 30 * 12000 + (nuoc - 30) * 18000;
}

int main(){
    int n;
    cin >> n;

    int nuoc = 0;
    int tong = 0;
    int dem = 0;
    int maxtien = 0;

    for (int i = 1; i <= n; i++){
        cin >> nuoc;

        int tien = tinhtiennuoc(nuoc);

        tong += tien;

        if(nuoc > 30)
            dem++;

        if(tien > maxtien)
            maxtien = tien;
    }
    cout << tong << endl;
    cout << dem << endl;
    cout << maxtien;


    return 0;
}
