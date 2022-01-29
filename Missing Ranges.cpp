class Solution {
public:
    /*
     * @param nums: a sorted integer array
     * @param lower: An integer
     * @param upper: An integer
     * @return: a list of its missing ranges
     */
    string range(int x, int y)
    {
        return x==y?to_string(x):to_string(x)+"->"+to_string(y);
    }
    vector<string> findMissingRanges(vesctor<int> &nums, int lower, int upper) {
        // write your code here
        vector<string>ans;
        int next=lower;
        for(int i=0;i<nums.size();i++)
        {
            if(lower==INT_MAX || upper==INT_MIN)
            return ans;
            if(next>nums[i])
            continue;
            if(next==nums[i])
            {
                next++;
                continue;
            }
            ans.push_back(range(next,nums[i]-1));
            if(nums[i]==INT_MAX)
            return ans;
            next=nums[i]+1;
            
        }

        if(next<=upper)
        ans.push_back(range(next,upper));
        return ans;
    }
};