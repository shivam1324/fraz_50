https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        for(int i=0;i<numRows;i++)
        {
            int j=0;
            vector<int> v1;
            v1.push_back(1);
            for(j=1;j<=i-1;j++)
            {
                v1.push_back(v[i-1][j-1]+v[i-1][j]);
            }
            if(j==i)
            {
                v1.push_back(1);
            }
            v.push_back(v1);
        }
        return v;
    }
};

