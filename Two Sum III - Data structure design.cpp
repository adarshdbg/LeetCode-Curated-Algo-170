class TwoSum {
public:
    /**
     * @param number: An integer
     * @return: nothing
     */
     unordered_multiset<int>s;
    void add(int number) {
        // write your code here
        s.insert(number);
    }

    /**
     * @param value: An integer
     * @return: Find if there exists any pair of numbers which sum is equal to the value.
     */
    bool find(int value) {
        // write your code here
        for(auto it=s.begin();it!=s.end();it++)
        {
            int p=*it==value-*it?2:1;
            if(s.count(value-*it)>=p)
            return true;
        }
        return false;
    }
};