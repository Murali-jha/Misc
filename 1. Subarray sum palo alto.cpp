/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int> x,vector<int> y){
    vector<int> a,b,c,d,ans;
    int n = x.size();
    int num = 0;
    for(int i=0;i<n;i++){
        num += x[i];
        a.push_back(num);
        cout<<num<<endl;
    }
    cout<<"-----------"<<endl;
    num = 0;
    for(int i=n-1;i>=0;i--){
        num += x[i];
        b.push_back(num);
        cout<<num<<endl;
    }
    reverse(b.begin(),b.end());
    cout<<"-----------"<<endl;
    num = 0;
    for(int i=0;i<n;i++){
        num += y[i];
        c.push_back(num);
        cout<<num<<endl;
    }
    cout<<"-----------"<<endl;
    num = 0;
    for(int i=n-1;i>=0;i--){
        num += y[i];
        d.push_back(num);
        cout<<num<<endl;
    }
    reverse(d.begin(),d.end());
    cout<<"-----------"<<endl;
    for(int i=1;i<n;i++){
        int temp  = a[i-1];
        if(b[i] == temp && c[i-1] == temp && d[i] == temp){
            ans.push_back(i);
        }
    }
    return ans;
}

int main()
{
    // vector<int> A = {2,-2,-3,3};
    // vector<int> B = {0,0,4,-4};
    vector<int> A = {4,-1,0,3};
    vector<int> B = {-2,5,0,3};
    vector<int> ans = solve(A,B);
    for(auto it:ans){
        cout<<it<<endl;
    }
    return 0;
}
