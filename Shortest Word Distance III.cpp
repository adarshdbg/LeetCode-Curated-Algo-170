class Solution {
public:
    /**
     * @param words: a list of words
     * @param word1: a string
     * @param word2: a string
     * @return: the shortest distance between word1 and word2 in the list
     */
    int shortestWordDistance(vector<string> &words, string &word1, string &word2) {
        int ans=words.size();
        int a=-1;
        int b=-1;
        for(int i=0;i<words.size();i++){
            if(words[i]==word1) 
                a=i;
            else if(words[i]==word2) 
                b=i;
            
            if(word1==word2 && words[i]==word1)
            {
                swap(a,b);
            }
            if(a!=-1  &&  b!=-1)
                ans=min(abs(a-b),ans);
        }
        if(ans==words.size()) 
            ans=0;


        return ans;
    }
};