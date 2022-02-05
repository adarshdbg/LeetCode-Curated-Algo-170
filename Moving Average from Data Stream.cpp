class MovingAverage {
public:
    int size1=0;
    double sum=0;
    queue<int>q;
    /*
    * @param size: An integer
    */MovingAverage(int size) {
        // do intialization if necessary
        size1=size;
        sum=0;
    }

    /*
     * @param val: An integer
     * @return:  
     */
    double next(int val) {
        // write your code here
       // cout<<size<<" ";
        if(q.size()<size1)
        {
            q.push(val);
            sum+=val;
            return sum/q.size();
        }
        
            sum-=q.front();
            q.pop();
            q.push(val);
            sum+=val;
            return sum/size1;
        
        
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage obj = new MovingAverage(size);
 * double param = obj.next(val);
 */