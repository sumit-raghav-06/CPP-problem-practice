class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> freq;
        for(char ch : text){
            freq[ch]++;
        }
        int countB = freq['b'];
        int countA = freq['a'];
        int countL = freq['l'] / 2;
        int countO = freq['o'] / 2;
        int countN = freq['n'];
        return min({countB, countA, countL, countO, countN});
    }
};
