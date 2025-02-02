class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int result = 0;
        
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                int last=-1,flag=1;
                for(int k=0;k<nums.size();k++){
                    if(k>=i && k<=j)
                        continue;
                    if(nums[k]<=last){
                        flag=0;
                        break;
                    }
                    last=nums[k];
                }
                if(flag)
                    result++;
            }
        }
        return result;
    }
};