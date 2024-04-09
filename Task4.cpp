#include <iostream>
using namespace std;

int main() {
    int n[] = {5, 10, 24, 335, 10, 4, 90, 3245, 2, 1, 6, 9};
    
    n[5] = 100; 

    cout << "Array after changing the 6th element to 100:\n";
    for(int i = 0; i < 12; ++i) {
        cout << n[i] << " ";
    }

    return 0;
}
