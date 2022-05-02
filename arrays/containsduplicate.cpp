class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> Finder;
        for (const auto &i : nums) 
        {
            Finder.insert(i);
        }
        return Finder.size() == nums.size() ? false : true;
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l=nums.size(),i;
        for(i=0;i<l-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                return true;
            }
        }
        return false;
    }
};

