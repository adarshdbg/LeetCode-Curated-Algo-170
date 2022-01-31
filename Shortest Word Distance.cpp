class Solution {
public:
    /**
     * @param words: a list of words
     * @param word1: a string
     * @param word2: a string
     * @return: the shortest distance between word1 and word2 in the list
     */
    int shortestDistance(vector<string> &words, string &word1, string &word2) {
        // Write your code here
        int p=-1,q=-1;
        for(int i=0;i<words.size();i++)
        {
            if(words[i]==word1)
                p=i;
            if(words[i]==word2)
                q=i;
            if(p!=-1 && q!=-1)
            return abs(p-q);

        }
        return {};
    }
};