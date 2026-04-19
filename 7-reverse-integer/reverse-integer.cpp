class Solution {
public:
    int reverse(int x) {
        int rev_int = 0;
        for (int i = 0; x != 0; i++)
        {
            int digit = x % 10;
            if (rev_int > INT32_MAX / 10 || rev_int <INT32_MIN / 10)
            {
                return 0;
            }
            rev_int = (rev_int * 10) + digit;
            x = x / 10;
        }
        return rev_int;
    }
};