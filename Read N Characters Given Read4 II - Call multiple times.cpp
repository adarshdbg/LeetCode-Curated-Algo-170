// Forward declaration of the read4 API.
int read4(char *buf);

class Solution {
public:
    /**
     * @param buf destination buffer
     * @param n maximum number of characters to read
     * @return the number of characters read
     */
     char buf4[4];
     int buf4index=4;
     int buf4size=4;
    int read(char *buf, int n) {
        // Write your code here
        int i=0;
        while(i<n)
        {
            if(buf4index>=buf4size)
            {
                buf4size=read4(buf4);
                if(buf4size==0)
                break;
                buf4index=0;
            }
            buf[i++]=buf4[buf4index++];
        }
        
        return i;
    }
};