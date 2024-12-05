#include <iostream>
#include <cmath>
using namespace std;

bool Namnhuan(int nam) {
    if (nam % 400 == 0) return true;
    if (nam % 100 == 0) return false;
    return (nam % 4 == 0);
}
int Songay(int nam, int thang, int ngay) {
    int Tongsongay = 0;
    int Ngaytrongthang[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    for (int n = 1900; n < nam; n++) {
        Tongsongay += Namnhuan(n) ? 366 : 365;
    }
    for (int t = 1; t < thang; t++) {
        Tongsongay += Ngaytrongthang[t - 1];
        if (t == 2 && Namnhuan(nam)) {
            Tongsongay += 1;
        }
    }
    Tongsongay += ngay;
    return Tongsongay;
}
int main() {
    int nam1, thang1, ngay1;
    int nam2, thang2, ngay2;
    
    cin>>nam1>>thang1>>ngay1;
    cin>>nam2>>thang2>>ngay2;
    
    int Songay1 = Songay(nam1, thang1, ngay1);
    int Songay2 = Songay(nam2, thang2, ngay2);
    cout<<abs(Songay2 - Songay1)<<endl;
    return 0;
}
