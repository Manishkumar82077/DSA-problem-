#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;

    vector<vector<int>> v(n, vector<int>(3));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += v[i][j];
        }
        if (sum >= 2) count++;
    }

    cout << count << endl;
    return 0;
}
