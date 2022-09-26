class Solution {
public:
    int lengthOfLastWord(string s) {

        while (s.back() == ' ') {
            s.pop_back();
        }

        size_t cnt = 0;
        
        while (!(s.empty()) && (s.back() != ' ')) {
            s.pop_back();
            cnt++;
        }

        return cnt;
    }
};