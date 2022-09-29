bool isPalindrome(int x){
    
    if (x < 0)
        return false;
    else if (x == 0)
        return true;
    
    size_t reverse = 0, before = x;
    while (x > 0)
    {
        reverse = reverse*10 + x%10;
        x /= 10;
    }
    
    return reverse == before;
}