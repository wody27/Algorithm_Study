//
//  N과 M (2).cpp
//  codingtest
//
//  Created by 이재용 on 2020/08/10.
//  Copyright © 2020 jaeyong Lee. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void dfs(int n, vector<int> p, vector<int> v, int m) {
    if (n == m) {
        // 출력
        for (int i = 0; i < p.size(); i++) {
            cout << p[i] << " ";
        }
        cout << "\n";
    }
    int smallest = p.empty() ? 0 : p.back();
    for (int i = smallest; i < v.size(); i++) {
        p.push_back(v[i]);
        dfs(n+1, p, v, m);
        p.pop_back();
    }
}
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    
    for (int i = 1; i <= n; i++) {
        v[i-1] = i;
    }
    
    vector<int> p;
    dfs(0, p, v, m);
    
    
    return 0;
}

