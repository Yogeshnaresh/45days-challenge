class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
      map<int,int>find;
      for(int i=0;i<nums.size();i++){
          find[nums[i]]++;
          if(find[nums[i]]>1){
              return nums[i];
          }
      }
      
        return 0;
    }
};
