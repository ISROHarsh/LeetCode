#include <bits/stdc++.h>
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map <int, int> mp;
        for(int i : nums)
        {
            mp[i]++;
        }
        int count = 0;
        for(auto i: mp)
        {
            if(i.second > 1)
            {
                count++;
            }
        }
        vector<int> dup;
        for(auto i: mp)
        {
            if(i.second > 1)
            {
                dup.push_back(i.first);
            }
        }
        return dup;        
    }
};