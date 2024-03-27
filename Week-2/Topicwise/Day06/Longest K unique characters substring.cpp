#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    int i=0,j=0,m=-1;
    unordered_map<char,int>mp;
    int n=s.length();
    
    while(j<n){
        mp[s[j]]++;
        
        if(mp.size()<k)
          j++;
        else if(mp.size()==k){
            m=max(m,j-i+1);
            j++;
        }  
        else{
            while(mp.size()>k){
                mp[s[i]]--;
                
                if(mp[s[i]]==0)
                  mp.erase(s[i]);
                i++;  
                
            }
            j++;
        }
    }
    return m;
    }
};