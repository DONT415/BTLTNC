#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    set<int> v;
    
    for (int i=0;i<n;i++) {
        int c,p;
        cin >> c >> p;
        if (c==1) {
            v.insert(p);
        }else if (c==2) {
            v.erase(p);
        }else if (c==3) {
            set<int>::iterator itr=v.find(p);
            if (itr != v.end()) {
                cout << "Yes" << endl;;
            }else {
                cout << "No" << endl;
            }
        }
        
            
    }   
    
    
    return 0;
}



