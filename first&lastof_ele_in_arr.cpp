class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        if(!(binary_search(nums.begin(),nums.end(),target)))
        { v.push_back(-1);
          v.push_back(-1);
        }
        else
        {   int l=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
            int u=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
            v.push_back(l);
         v.push_back(u);
        }
        
        return v;
         
    }
};
