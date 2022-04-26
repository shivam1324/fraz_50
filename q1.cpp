https://leetcode.com/problems/two-sum/submissions/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> s;
        int size=nums.size();
        for(int i=0;i<size-1;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    s.push_back(i);
                    s.push_back(j);
                }
            }
        }
        return s;
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> s;
        int size=nums.size();
        int diff;
        unordered_map<int,int>m;
        for(int i=0;i<size;i++)
        {
            diff=target-nums[i];
            if(m.find(diff)!=m.end() && m.find(diff)->second !=i)
            {
                s.push_back(i);
                s.push_back(m.find(diff)->second);
                return s;
            }
            m[nums[i]]=i;
        }
        return s;
    }
};