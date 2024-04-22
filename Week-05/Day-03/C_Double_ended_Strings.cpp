#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

string LCS(string X, string Y, int m, int n)
{
    int maxlen = 0;         // stores the max length of LCS
    int endingIndex = m;    // stores the ending index of LCS in `X`
 
    // `lookup[i][j]` stores the length of LCS of substring
    // `X[0…i-1]`, `Y[0…j-1]`
    int lookup[m + 1][n + 1];
 
    // initialize all cells of the lookup table to 0
    memset(lookup, 0, sizeof(lookup));
 
    // fill the lookup table in a bottom-up manner
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // if the current character of `X` and `Y` matches
            if (X[i - 1] == Y[j - 1])
            {
                lookup[i][j] = lookup[i - 1][j - 1] + 1;
 
                // update the maximum length and ending index
                if (lookup[i][j] > maxlen)
                {
                    maxlen = lookup[i][j];
                    endingIndex = i;
                }
            }
        }
    }
 
    // return longest common substring having length `maxlen`
    return X.substr(endingIndex - maxlen, maxlen);
}

int main()
{
faster;
ll t;
//t=1;
cin>>t;

while(t--){
    string X,Y;
    cin>>X>>Y;
    ll m = X.size(), n = Y.size();
    string ans=LCS(X, Y, m, n);
    //cout<<ans<<endl;
    cout<<m+n-(2*ans.size())<<endl;

}
return 0;
}