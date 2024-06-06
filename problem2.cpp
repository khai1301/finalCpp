#include <iostream>
using namespace std;

template <typename T> T sum(T a, T b, T c) {
    return a+b+c;
}
int sumDQ(int n) {
    if(n>0) {
        return n+sumDQ(n-1);
    } else if(n==0){
        return 0;
    }else if(n<0) {
        throw "Loi";
    }
}
int main() {
    cout << sum(1.2, 2.1, 8.3) << endl;
    try {
        int sum = sumDQ(1);
        cout << sum << endl;
    } catch(const char* message) {
        cerr << message << endl;
    }
    return 0;
}