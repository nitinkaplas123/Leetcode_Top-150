Code-:
bool canJump(vector<int>& nums) {
        int n=nums.size();
        int reach=0;
        for(int i=0;i<n-1;i++)
        {
          reach=max(reach,i+nums[i]);
          if(reach==i)
          return false;
        }
        return true;
}