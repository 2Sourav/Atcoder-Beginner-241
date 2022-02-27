#include <iostream>
#include <vector>
#include <set>
#include <numeric>
#include <cmath>
#include<map>
using namespace std;
#define pb push_back
#define mod 1000000007
#define ll          long long
#define endl        '\n'
#define vi          vector<int>
void solve()
{
  int n,m;
        cin >> n >> m;
        map<int,int> mp;
        vector<int> arr(n);
  for(int i=0;i<n;i++)
    cin >> arr[i];
        for(auto&x:arr) mp[x]++;
        vector<int> b(m);
  for(int i=0;i<m;i++)
        cin >> b[i];
        map<int,int> mp2;
        for(auto&x:b) mp2[x]++;

        for(int i =0; i < m; i++){
            int l= b[i];
            if(mp[b[i]]>0){
                mp[b[i]]--;
            }
            else{
                cout << "No";
                return;
            }
        }    
        cout << "Yes";
}
int main() {
    
    //int tc; cin >> tc;
    //while(tc--) {
        
          solve();
    //}
}