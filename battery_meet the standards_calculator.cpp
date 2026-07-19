#include <iostream>

using namespace std;

bool datchuan(int pin){
    return pin >= 80 && pin <= 100;
}

int main(){
    int n;
    cin >> n;

    int pin = 0;
    int dem = 0;
    int tong = 0;
    int maxpin = -1;

    for (int i = 1; i <= n; i++){
        cin >> pin;

        if(datchuan(pin)){
            dem++;

            tong += pin;

            if (pin > maxpin)
                maxpin = pin;
        }
    }

    if (dem == 0){
        cout << 0 << endl;
        cout << 0 << endl;
        cout << -1 << endl;
    } else {
        cout << dem << endl;
        cout << tong << endl;
        cout << maxpin;
    }

    return 0;
}
