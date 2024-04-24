#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    
    map<string,int> v;
    
    for (int i=0;i<n;i++) {
        int m;
        cin >> m;
        
    if (m==1) {
        string name;
        int marks;
        cin >> name >> marks;
        v[name] += marks;
    }else if (m==2) {
        string name;
        cin >> name;
        v.erase(name) ;
    }else if (m==3){
        string name;
        cin >> name;
        cout << v[name] << endl;
    }
    }  
    return 0;
}



