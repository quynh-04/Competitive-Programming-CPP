#include <iostream>

using namespace std;

int tinhdungluong(int gb){
    if(gb <= 100)
        return gb * 150;
    else
        return 100 * 150 + (gb - 100) * 250;
}

int main(){
    int n;
    cin >> n;

    int gb = 0;
    int tong = 0;
    int dem = 0;
    int chiphimax = -1;

    for (int i = 1; i <= n; i++){
        cin >> gb;

        int chiphi = tinhdungluong(gb);

        tong += chiphi;

        if(gb > 100)
            dem++;

        if(chiphi > chiphimax)
            chiphimax = chiphi;
    }
    cout << tong << endl;
    cout << dem << endl;
    cout << chiphimax;

    return 0;
}
