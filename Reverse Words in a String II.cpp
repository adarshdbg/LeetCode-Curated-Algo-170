class Solution {
public:
    /**
     * @param str: a string
     * @return: return a string
     */


    string reverseWords(string &str) {
       reverse(str.begin(),str.end());
        //cout<<str<<endl;
        int k=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]!=' ')
                k++;
            else if(str[i]==' ')
                {
                    reverse(str.begin()+i-k,str.begin()+i);
                    k=0;
                }
            
        }
        reverse(str.begin()+str.size()-k,str.end());
        return str;
    }
};