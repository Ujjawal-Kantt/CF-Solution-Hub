#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int a, b;
        cin >> a >> b;
        int side = max(2 * min(a, b), max(a, b));
        cout << side * side << endl;
    }
    return 0;
}
