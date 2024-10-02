#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int ma[n]; 
    int mb[n]; 
    int t = 0; 

    for (int i = 0; i < n; ++i) {
        ma[i] = i + 1;
    }

 
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            mb[t++] = ma[i / 2]; 
        } else {
           
            for (int j = t; j > 0; --j) {
                mb[j] = mb[j - 1];
            }
            mb[0] = ma[i / 2 + 1];
            t++;
        }
    }

    for (int i = 0; i < t; i++) {
        cout << mb[i] << " ";
    }

    return 0;
}
