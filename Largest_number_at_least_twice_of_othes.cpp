class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int m = INT_MIN;
        int index;
        for(int i=0; i<nums.size(); i++){
            if(m<nums[i]){
                m=nums[i];
                index = i;
            }
        }
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(m>=nums[i]*2 && i!=index){
                continue;
            }
            else{
                count++;
            }
        }
        if(count>1){
            return -1;
        }
        return index;
    }
};
