class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0)
        {
            return false;
        }
        unsigned int count = 0;
        while (n) {
           n= n&(n - 1);
            count++;
        }
        
        if(count==1) return true;
        else return false;
         
        
    }
};