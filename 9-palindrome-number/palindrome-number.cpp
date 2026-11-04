class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        {
            return false;
        }
        int pall = x;
        int rev_int = 0;
        for (int i = 0; x != 0; i++)
        {
            int digit = x % 10;
            if(rev_int > INT_MAX/10 || rev_int < INT_MIN/10)
            {
                return false;
            }
            rev_int = (rev_int * 10) + digit;
            x = x / 10;
        }
        if(pall == rev_int )
        {
            return true;
        }
        return false;
    }
};