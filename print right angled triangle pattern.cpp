//printing mirror image of right angle triangle
/*given n print n rows such as
 if n=4
   *
  **
 ***
****
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++)//for t test cases
    {
        cin>>n;
        cout<<"Case #"<<i<<":"<<endl;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
               if(k<n-j-1)//print " " till n-j-1 positions
                   cout<<" ";
                else
                    cout<<"*";
                
            }
            cout<<endl;
        }
    }
    return 0;
}
