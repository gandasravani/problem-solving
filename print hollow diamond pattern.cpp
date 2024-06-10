//printing hollow diamond pattern
/*given n print n rows such as
 if n=3
 *
* *
 *
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
        cout<<"Case #"<<p<<":"<<endl;
        int n;
        cin>>n;
        int l=(n+1)/2,k=(n+1)/2;
        for(int i=1;i<(n+1)/2;i++){
            for(int j=1;j<=n;j++){
                if(j==l||j==k)
                    cout<<"*";
                else 
                    cout<<" ";
                
            }
            l++;k--;
            cout<<endl;
           
        }
        for(int i=(n+1)/2;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j==l||j==k)
                    cout<<"*";
                else 
                    cout<<" ";
               
            }
             l--;k++;
            cout<<endl;
           
        }
     
       
    }
    return 0;
}

