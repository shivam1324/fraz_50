https://leetcode.com/problems/flipping-an-image/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++)
        {
            int size=image[i].size();
            size--;
            for(int j=0;j<(size+1)/2;j++)
            {
                int temp=image[i][j];
                image[i][j]= image[i][size-j];
                image[i][size-j]=temp;
            }
            for(int j=0;j<=size;j++)
            {
                if(image[i][j]==0)
                {
                    image[i][j]=1;
                }
                else if(image[i][j]==1)
                {
                    image[i][j]=0;
                }
            }
        }
        return image;
    }
};