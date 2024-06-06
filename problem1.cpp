#include <iostream>
using namespace std;

class HinhHoc {
    public:
        string mauSac;
    public:
        HinhHoc(){};
        HinhHoc(string _mauSac){
            mauSac = _mauSac;
        }
        string getmauSac() {
            return mauSac;
        }
        void setmauSac(string _mauSac){
            mauSac = _mauSac;
        };
        virtual float calculateArea() = 0;

};

class HinhChuNhat : public HinhHoc {
    public:
        float chieuDai;
        float chieuRong;
    public:
        HinhChuNhat(){
            chieuDai = 0;
            chieuRong = 0;
        };
        HinhChuNhat(float _chieuDai, float _chieuRong) {
            chieuDai = _chieuDai;
            chieuRong = _chieuRong;
        }
        float getchieuRong() {
            return chieuRong;
        }
        float getchieuDai() {
            return chieuDai;
        }
        void setchieuRong(float _chieuRong) {
            chieuRong = _chieuRong;
        }
        void setchieuDai(float _chieuDai) {
            chieuDai = _chieuDai;
        }
        float calculateArea() {
            return chieuDai*chieuRong;
        }
    
};

int main() {
    HinhChuNhat hcn1(3,5);
    HinhChuNhat hcn2(5.5, 10);
    float result = hcn2.calculateArea();
    cout << result << endl;
    return 0;
}