class Solution {
public:
    /**
     * @param s: the given string
     * @return: if a permutation of the string could form a palindrome
     */
    bool canPermutePalindrome(string &s) {
        // write your code here
        vector<int>count(26,0);

        for(auto &i:s)
        count[i-'a']++;
        int ans=0;
        for(auto &i:count)
            if(i%2==1)
            ans++;

        return ans>1?false:true;

    }
};