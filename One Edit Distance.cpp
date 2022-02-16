class Solution {
public:
    /**
     * @param s: a string
     * @param t: a string
     * @return: true if they are both one edit distance apart or false
     */
    bool isOneEditDistance(string &s, string &t) {
        // write your code here
        int n=s.size(),m=t.size();

        if(abs(m-n)>1)
            return false;
        int i=0,j=0;
        int count=0;
        while(i<n || j<m)
        {
            if(i>n || j>m)
                break;
            if(i<n && j<m && s[i]==t[j])
                i++,j++;
            else
            {
                count++;
               
                if(m==n)
                {
                    i++,j++;
                }
                else if(m<n)
                {
                    i++;
                }
                else
                    j++;

            }
           // cout<<count<<" ";
        }

        return count==1?true:false;


    }
};