class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int mini=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i] < mini)
            {
                mini=prices[i];
            }
            if(prices[i]-mini > maxi)
            {
				maxi =prices[i]-mini;
			}
			if(maxi<0)
            {
                maxi=0;
            }
        }
        return maxi;     
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int mini=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            mini=min(mini,prices[i]);
            maxi=max(maxi,prices[i]-mini);
        }
        return maxi;
        
    }
};


