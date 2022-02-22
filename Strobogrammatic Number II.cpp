class Solution {
public:
    /**
     * @param n: the length of strobogrammatic number
     * @return: All strobogrammatic numbers
     */

    vector<string> findStrobogrammatic(int n) {
        // write your code here
        vector<string>v;
        string s="";
        if(n&1)
        {
            v.push_back("0");
            v.push_back("1");
            v.push_back("8");
        }
        else 
            v.push_back("");
        for(int i=1;i<n;i+=2)
        {
            vector<string>temp;
            for(int j=0;j<v.size();j++)
            {
                if (i<n-2) {
                    temp.push_back("0" + v[j]+ "0");
                }
                temp.push_back('1'+v[j]+'1');
                temp.push_back('6'+v[j]+'9');
                temp.push_back('8'+v[j]+'8');
                temp.push_back('9'+v[j]+'6');

            }
            v=temp;
        }

        return v;

    }
};