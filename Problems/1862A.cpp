#include <iostream>
#include <vector>
using namespace std;

bool canFormVika(vector<string>& carpet, int n, int m) {
    string target = "vika";
    int index = 0;
    
    for (int col = 0; col < m; ++col) {
        for (int row = 0; row < n; ++row) {
            if (carpet[row][col] == target[index]) {
                index++;
                break; 
            }
        }
        if (index == 4) return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> carpet(n);
        for (int i = 0; i < n; ++i) {
            cin >> carpet[i];
        }
        
        cout << (canFormVika(carpet, n, m) ? "YES" : "NO") << endl;
    }
    return 0;
}
