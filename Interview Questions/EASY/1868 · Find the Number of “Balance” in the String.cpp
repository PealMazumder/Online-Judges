class Solution {
public:
    /**
     * @param S: the string
     * @return: return the number of “Balance” in the string
     */
    int find(string &s) {
        // write your code here
        int left = 0, right = 0, ans = 0, freqLeft[27] = {0}, freqRight[27] = {0};
        int n = s.size();
        for(int i = 0; i < n; i++) {
            int ch = s[i] - 'a';
            if(!freqRight[ch]) right++;
            freqRight[ch]++;
        }
        for(int i = 0; i < n; i++) {
            int ch = s[i] - 'a';
            if(freqLeft[ch] == 0) left++;
            freqLeft[ch]++;
            freqRight[ch]--;
            if(freqRight[ch] == 0) right--;

            if(left == right) ans++;
        }
        return ans;
    }
};