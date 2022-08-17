#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b, c;
    cin >> a >> b >> c;
    if( a >= 1000 && a <=1 && b >= 1000 && b <=1 && c >= 1000 && c <=1 ){
        cout << "Values must be greater than 1 and lesser than 1000";
    }
    cout << a+b+c;
    return 0;
}