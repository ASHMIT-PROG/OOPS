#include <iostream>
using namespace std;

template<typename T>
T adddd(T x, T y) {
    return x + y;
}

int main() {
    cout << adddd<int>(5532, 362);  // Output: 5894
    return 0;
}
