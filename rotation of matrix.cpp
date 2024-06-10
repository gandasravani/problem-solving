//rotation of matrix
/*given n and array of size n*n
rotate the matrix such as rows will be columns and columns will be rows
3
1 2 3
8 9 4
7 6 5
output: 
7 8 1 
6 9 2 
5 4 3 
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    for(int p=1;p<=t;p++){
        cout<<"Test Case #"<<p<<":"<<endl;
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=0;j--){
                cout<<a[j][i]<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}


