// level: easy
//platform : leetcode

class Solution {
public:
    bool checkGoodInteger(int n) {
        int formulasum = 0;
        while( n > 0) {
            int digit = n % 10;
            formulasum += digit *(digit-1);
                n/=10;
        }
        return formulasum >=50;
    }
};
