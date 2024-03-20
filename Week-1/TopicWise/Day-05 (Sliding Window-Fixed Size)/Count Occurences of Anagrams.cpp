#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	int search(string pat, string txt) {
	    unordered_map<char,int>mp;
        int n=txt.size();
        int k=pat.size();
        for(auto it:pat) mp[it]++;
        int size=mp.size();
        int i=0,j=0,ans=0;
        while(j<n){
            if(mp.find(txt[j])!=mp.end()){
                mp[txt[j]]--;
                if(mp[txt[j]]==0) size--;
            }
            if(j-i+1==k){
                if(size==0) ans++;
                if(mp.find(txt[i])!=mp.end())
                {
                    mp[txt[i]]++;
                    if(mp[txt[i]]==1) size++;
                }
                i++;j++;
            }
            else j++;
        }
    return ans;
	}
};