class Solution {
public:
    /**
     * @param k: the number of auction participants
     * @return: the number of confusing numbers
     */
    unordered_map<int,int>m={{0,0},{1,1},{6,9},{8,8},{9,6}};
    void find_all(int &k,int value,int &ans)
    {
        if(value>k)
            return;

        string s=to_string(value);
        string t=string(s.rbegin(),s.rend());
        if(t[0]=='0')
            ans--;
        for(int i=0;i<t.size();i++)
            t[i]='0'+m[t[i]-'0'];

        if(s!=t)
        {
            if(stoi(t)>k)
                ans--;
            //cout<<"{"<<s<<","<<t<<"}";
            ans++;
        }
            
        for(auto &i:m)
        {
            find_all(k,(value*10)+i.first,ans);
        }
    }
    int theConfusingNumbers(int k) {
        // write your code here
        
        int ans=0;
        find_all(k,1,ans);
        find_all(k,6,ans);
        find_all(k,8,ans);
        find_all(k,9,ans);
        return ans;

    }
};