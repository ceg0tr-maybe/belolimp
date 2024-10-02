#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int a, b, c;
    int AN = -1;

    cin >> a >> b >> c;

    int ve[6] = {a*100 + b*10 + c, a*100 + c*10 + b, b*100 + a*10 + c, b*100 + c*10 + a, c*100 + a*10 + b, c*100 + b*10 + a};
    
    for (int i : ve) {
        if (i % 2 == 0 && (i / 100) != 0) 
            AN = max(AN, i);}
    cout << AN;

    return 0;
}
