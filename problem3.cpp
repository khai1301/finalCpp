#include <iostream>
using namespace std;

class NhanVien {
    public: 
        string name;
        float salary;
        float allowance;
        int *exp;
    public:
        NhanVien(string _name, float _salary, float _allowance, int _exp){
            name = _name;
            salary = _salary;
            allowance = _allowance;
            exp = new int(_exp);
        }
        NhanVien(const NhanVien& other) {
            name = other.name;
            salary = other.salary;
            allowance = other.allowance;
            exp = new int (*other.exp);
        }
        string getName() {
            return name;
        }
        void setName(string _name) {
            name = _name;
        }
        float getSalary() {
            return salary;
        }
        void setSalary(float _salary) {
            salary = _salary;
        }
        float getAllowance() {
            return allowance;
        }
        void setAllowance(float _allowance) {
            allowance = _allowance;
        }
        int getExp() {
            return *exp;
        }
        void setExp(int _exp) {
            *exp = _exp;
        }
        bool operator==(const NhanVien& other) {
            return (salary == other.salary) && (allowance == other.allowance) && (*exp == *(other.exp));
        }

};

int main() {
    NhanVien nv1("Bin", 7, 4,3);
    NhanVien nv2("Ben", 7, 4,2);
    if(nv1 == nv2) {
        cout << "2 nhan vien tuong dong";
    } else {
        cout <<" KHong tuong dong";
    }
}