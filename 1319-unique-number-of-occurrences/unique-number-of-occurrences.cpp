#include <bits/stdc++.h>
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> fq;
        unordered_set<int> st;
        for(int i: arr)
        {
            fq[i]++;
        }
        for(auto i: fq)
        {
            st.insert(i.second);
        }
        return fq.size() == st.size();
    }
};