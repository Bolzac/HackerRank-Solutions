#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,i,j;
    cin >> n >> q;
    vector<vector<int>> main_array;
    for(i = 0; i<n;i++){
        int k;
        cin >> k;
        vector<int> temp_array;
        for(j = 0;j<k;j++){
            int c;
            cin >> c;
            temp_array.push_back(c);
        }
        main_array.push_back(temp_array);
    }
    for(i = 0;i<q;i++)
    {
        int a,b;
        cin >> a >> b;
        cout << main_array[a][b] << endl;
    }
    return 0;
}