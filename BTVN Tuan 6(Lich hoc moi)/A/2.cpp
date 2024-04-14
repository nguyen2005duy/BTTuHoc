#include <iostream>
using namespace std;
long long factorial(int x) {
  
    cout << "x = " << x << " at " << &x << endl;

    if (x == 0 || x == 1) {
        return 1;
    } else {
        return x * factorial(x - 1);
    }
}

int main() {
    int N = 5;

   factorial(N);

    return 0;
}
/*Size cua stack frame cho hàm factorial sẽ bao gồm:

Kích thước của biến địa phương x 8 byte
Các thông tin khác như địa chỉ trả về và các biến khác nếu có.*/