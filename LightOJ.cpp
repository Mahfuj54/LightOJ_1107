#include <iostream>
using namespace std;
int main() {
    int t, i, j;
    cin>>t;

    for (i=1; i<= t; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int m;
        cin >> m;
        cout << "Case: " << i << endl;
        for (j=0; j<m; j++) {
            int x,y;
            cin >> x >> y;
            if (x1 < x && x < x2 && y1 < y && y < y2) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}