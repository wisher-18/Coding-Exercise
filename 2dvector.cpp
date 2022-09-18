#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k;
    int q1,q2;
    int n,q;
    cin >> n >> q;
    
    vector<vector<int>> arr(n);
    int s;
    for(i=0; i< n; i++)
    {
        cin >> s;
        arr[i] = vector<int>(s);
        for(j=0; j<s; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(k=0; k<q; k++)
    {
        cin >> q1 >> q2;
        cout << arr[q1][q2] << "\n";
    }
    
        
    return 0;
}