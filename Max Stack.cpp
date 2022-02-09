class MaxStack {
public:
    stack<int>s1,s2;
    int max_v;
    MaxStack() {
        // do intialization if necessary
        max_v=INT_MIN;
    }

    /*
     * @param number: An integer
     * @return: nothing
     */
    void push(int number) {
        // write your code here
        s1.push(number);
        if(s2.empty())
        {
            s2.push(number);
        }
        else if(!s2.empty() && s2.top()<number)
            s2.push(number);
        else
            s2.push(s2.top());
    }

    /*
     * @return: An integer
     */
    int pop() {
        // write your code here
        int k=s1.top();
        
        s2.pop();
        s1.pop();
        return k;

    }

    /*
     * @return: An integer
     */
    int top() {
        // write your code here
        //cout<<s1.top()<<" ";
        return s1.top();
    }
    
    /*
     * @return: An integer
     */
    int peekMax() {
        // write your code here
        //cout<<s2.top()<<" ";
        return s2.top();
    }
    
    /*
     * @return: An integer
     */
    int popMax() {
        // write your code here
        int max = peekMax();
        stack<int>s3;
        while(top() != max)
        {
            s3.push(pop());
        }
        pop();
        while(!s3.empty())
            push(s3.top()),s3.pop();
        return max; 
       // cout<<k<<" ";

       
    }
};