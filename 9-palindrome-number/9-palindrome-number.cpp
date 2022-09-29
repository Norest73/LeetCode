class Solution {
public:
    bool isPalindrome(int x) {
        
        string temp = std::to_string(x);
        int left = 0;
        int right = temp.size() - 1;
        
        while (left <= right)
        {
            if (temp[left++] != temp[right--])
                return false;
        }     
        return true;
    }
    
};