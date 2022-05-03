https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int z = 0;
        unordered_map<int, int> m;
        int l = nums.size();
        for (int i = 0; i < l; ++i)
        {
            m[nums[i]]++;
        }
        for (auto it : m)
        {
            if (it.second > (l/2)) 
                z = it.first;
        }
        return z;
    }
};