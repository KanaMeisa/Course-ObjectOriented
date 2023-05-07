#include <bits/stdc++.h>
using namespace std;

struct doll
{
    int ori;
    string prof;
};

int main(){
    int n, m;
    cin >> n >> m;

    doll dolls[n];
    for (int i = 0; i < n; i++) {
        cin >> dolls[i].ori >> dolls[i].prof;
    } 


    int now = 0;
    for (int i = 0; i < m; i++) {
        int ori, num = 0;
        cin >> ori >> num;

        //cout << "Get ori = " << ori << ", num = " << num << ", now i = " << i << endl;

        if ((ori == 0 && dolls[now].ori == 1) || (ori == 1 && dolls[now].ori == 0)) {
            now = now + num;
            if (now > n) {
                now = now - n;
            } else if (now < 0) {
                now = now + n;
            }

        } else if ((ori == 0 && dolls[now].ori == 0) || (ori == 1 && dolls[now].ori == 1)) {
            now = now - num;
            if (now > n) {
                now = now - n;
            } else if (now < 0) {
                now = now + n;
            }
        }
    }

    cout << dolls[now].prof;
    return 0;
}