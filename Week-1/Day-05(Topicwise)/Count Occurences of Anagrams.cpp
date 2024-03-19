#include<bits/stdc++.h>
using namespace std;


class Solution{
public:
	int search(string word, string text) {
int n = text.size(), m = word.size();
unordered_map<char, int> freqWord, freqText;
int count = 0;

for (char c : word)
    freqWord[c]++;

for (int i = 0; i < n; i++) {
    freqText[text[i]]++;

    if (i >= m) {
        if (freqText[text[i - m]] == 1)
            freqText.erase(text[i - m]);
        else
            freqText[text[i - m]]--;
    }

    if (i >= m - 1 && freqText == freqWord)
        count++;
}

return count;

	}

};