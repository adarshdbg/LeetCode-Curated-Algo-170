class Solution {
public:
    /**
     * @param strings: a string array
     * @return: return a list of string array
     */
    vector<vector<string>> groupStrings(vector<string> &strings) {
        // write your code here
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>m;
    
         string s;  
        for(auto &i:strings)
        {
            s="0";

            for(int j=1;j<i.size();j++)
            {
                s+=i[j]>i[j-1]?(i[j]-i[j-1]+'a'):(i[j]-i[j-1]+26+'a');
            } 
            m[s].push_back(i);

        }
        // for(auto &i:m)
        // {
        //     cout<<i.first<<" ";
        //     for(auto &j:i.second)
        //     {
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }
        for(auto &i:m)
        {
            ans.push_back(i.second);
        } 

        return ans;
    }
};