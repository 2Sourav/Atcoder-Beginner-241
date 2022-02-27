#include <iostream>
#include <vector>
#include <set>
#include <numeric>
#include <cmath>

using namespace std;
#define pb push_back
#define mod 1000000007
#define ll          long long
#define endl        '\n'
#define vi          vector<int>
int main() {
    
    ll n;
        cin>>n;
        vector<string>v(n);
        //fo(i,n)
        for(int i=0;i<n;i++)
        cin>>v[i];
        bool f=false;
        //fo(i,n)
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ll c=0;
                //fo(k,6)
                for(int k=0;k<6;k++){
                    if(j+k>=n){
                        c=0;
                        break;
                    }
                    if(v[i][j+k]=='#')
                        c++;
                }
                if(c>=4){
                    f=true;
                    break;
                }
            }
        }
        //fo(i,n)
        for(int i=0;i<n;i++){
            //fo(j,n)
            for(int j=0;j<n;j++){
                ll c=0;
                //fo(k,6)
                for(int k=0;k<6;k++){
                    if(j+k>=n){
                        c=0;
                        break;
                    }
                    if(v[j+k][i]=='#')
                        c++;
                }
                if(c>=4){
                    f=true;
                    break;
                }
            }
        }
        //fo(i,n)
        for(int i=0;i<n;i++){
            //fo(j,n)
            for(int j=0;j<n;j++){
                ll c=0;
                //fo(k,6)
                for(int k=0;k<6;k++){
                    if(j+k>=n || i+k>=n){
                        c=0;
                        break;
                    }
                    if(v[j+k][i+k]=='#')
                        c++;
                }
                if(c>=4){
                    f=true;
                    break;
                }
            }
        }
        //fo(i,n)
        for(int i=0;i<n;i++){
            //fo(j,n)
            for(int j=0;j<n;j++){
                ll c=0;
                //fo(k,6)
                for(int k=0;k<6;k++){
                    if(j-k<0 || i+k>=n){
                        c=0;
                        break;
                    }
                    if(v[j-k][i+k]=='#')
                        c++;
                }
                if(c>=4){
                    f=true;
                    break;
                }
            }
        }
        if(f)
            cout<<"Yes";
        else
            cout<<"No";
}