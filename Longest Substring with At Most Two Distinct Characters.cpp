class Solution {
public:
    /**
     * @param s: a string
     * @return: the length of the longest substring T that contains at most 2 distinct characters
     */
    int lengthOfLongestSubstringTwoDistinct(string &s) {
        // Write your code here
        int n=s.size();
        int i=0,j=0;
        int ans=0;
        map<char,int>m;
        while(j<n)
        {
             
           if(m.size()<=2)
           {
               m[s[j]]++;
               
               j++;
           }
           if(m.size()>2)
           {
              m[s[i]]--;
              if(m[s[i]]==0)
                    m.erase(s[i]);
               i++;
           }
           ans=max(ans,j-i);
          
           
        }

        return ans;
    }
};
