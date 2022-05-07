https://leetcode.com/problems/matrix-diagonal-sum/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int j=0,sum=0;
        for(int i=0;i<mat.size();i++)
        {
            sum=sum+mat[i][j];
            int s=mat[i].size();
            s--;
            int a=s-j;
            int r=a>0 ? a: -1*a;
            if(i!=r)
            {
                sum=sum+mat[i][r];
            }
            j++;
        }
        return sum;
    }
};