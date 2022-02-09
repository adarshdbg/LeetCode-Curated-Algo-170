class Solution {
public:
    /**
     * @param words: a list of string
     * @return: a boolean
     */
    bool validWordSquare(vector<string> &words) {
        // Write your code here

        for(int i=0;i<(words.size()+1)/2;i++)
        {
            for(int j=0;j<words[i].size();j++)
                if(j<words.size() && i<words[j].size() && words[i][j]!=words[j][i])
                    return false;
        }

        return true;
    }
};