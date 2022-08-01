class Solution {
public:
    bool isDigit(char c) {
        if (c >= '0' && c <= '9') return true;
        return false;
    }
    int calculate(string s) {
        stack <int> pre, pre_sign;
        long long sum = 0;
        short sign = 1;
        for (int i=0; i<s.length(); ++i) {
            if (isDigit(s[i])) {
                long long num = 0;
                while (isDigit(s[i])) {
                    num = num*10 + s[i] - '0';
                    ++i;
                } 
                --i;
                sum+= num*sign;
                sign = 1;
            }
            if (s[i] == '(') {
                pre.push(sum);
                pre_sign.push(sign);
                sum = 0;
                sign = 1;
            }
            if (s[i] == ')') {
                sum = pre_sign.top()*sum + pre.top();
                pre.pop();
                pre_sign.pop();
                sign = 1;
            }
            if (s[i] == '-') {
                sign = -1;
            }
        }
        return sum;
    }
};