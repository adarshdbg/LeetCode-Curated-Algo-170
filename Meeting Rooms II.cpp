/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param intervals: an array of meeting time intervals
     * @return: the minimum number of conference rooms required
     */
    int minMeetingRooms(vector<Interval> &intervals) {
        // Write your code here
        if(intervals.size()<2)
            return intervals.size();
        sort(intervals.begin(),intervals.end(),[](Interval &a, Interval &b)
        {
            if(a.start==b.start)
                return a.end>b.end;

            return a.start<b.start;
        });
        priority_queue<int,vector<int>,greater<int>>pq;
        pq.push(intervals[0].end);

        for(int i=1;i<intervals.size();i++)
        {
            if(!pq.empty() && pq.top()<intervals[i].start)
                pq.pop();
            
             pq.push(intervals[i].end);
            
        }
        return pq.size();


    }
};