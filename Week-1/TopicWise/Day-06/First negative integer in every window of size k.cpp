#include<bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int a[],long long int n, long long int k) {
        vector<long long int>v,v1;
        for(int i=0;i<n;i++)
            if(a[i]<0) v.push_back(i);
            int i=0,j=0;
        while(j<n){
            if(j-i+1==k){
                int f=0;
                for(auto it:v){
                    if(i<=it && j>=it){
                        f=1;
                        //cout<<a[it]<<" ";
                        v1.push_back(a[it]);
                        break;
                    }
                }
                if(f==0){
                    v1.push_back(0);
                }
                i++,j++;
            }
            else {
                j++;
            }
        }
        return v1;
 }