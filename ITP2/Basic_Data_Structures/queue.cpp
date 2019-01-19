#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <list>
#include <iterator>
#define rep(i, n) for(long long i = 0; i < (long long)(n); i++)
using namespace std;
typedef long long int LL;
typedef unsigned long long int ULL;

int main() {
    int n, q;
    cin >> n >> q;
    vector<queue<LL> > vq(n);
    rep(i, q) {
        int cmd;
        cin >> cmd;
        if (cmd == 0) {
            int t;
            LL x;
            cin >> t >> x;
            vq[t].push(x);
        } else if (cmd == 1) {
            int t;
            cin >> t;
            if (not vq[t].empty()) {
                cout << vq[t].front() << endl;
            }
        } else if (cmd == 2) {

        }

    }
    return 0;
}
