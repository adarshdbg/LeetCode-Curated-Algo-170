class Solution {
public:
    /**
     * @param words1: a list of string
     * @param words2: a list of string
     * @param pairs: a list of string pairs
     * @return: return a boolean, denote whether two sentences are similar or not
     */
    bool isSentenceSimilarity(vector<string> &words1, vector<string> &words2, vector<vector<string>> &pairs) {
        // write your code here
        if(words1.size()!=words2.size())
            return false;

        map<string,string>m;
        // map<string,int>m1;
        // for(auto &i:words2)
        // {
        //     m1[i]++;
        // }
        for(auto &i:pairs)
        {
            m[i[0]]=i[1];
            m[i[1]]=i[0];
        }
        for(int i=0;i<words1.size();i++)
        {
           if(words1[i] != words2[i] && m[words1[i]] != words2[i])
                return false;
        }

        return true;
    }
};