#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int arrA[n];
    int arrB[n+1];
    
    for (int i=0;i<n;i++) {
        cin >> arrA[i];
    }
    for (int i=0;i<n+1;i++) {
        cin >> arrB[i];
    }
    sort(arrA,arrA+n);
    sort(arrB,arrB+n+1);
    for (int i=0;i<n+1;i++) {
        if (arrB[i]!=arrA[i]) {
            cout << arrB[i];
            return 0;
        }
    }
    cout << arrB[n];
    return 0;
}
