Solution 1-:
Case-:
1)n==1 
2)nums[0]=0


Code-: Leetcode
 int jump(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return 0;
        int jumps=1;
        int steps=nums[0];
        int max_reach=nums[0];
        for(int i=1;i<n-1;i++)
        {
           max_reach=max(max_reach,i+nums[i]);
           if(max_reach==i) return 0;

           steps--;
           if(steps==0)
           {
              jumps++;
              steps=max_reach-i;
           }
        }
        return jumps;
    }


GFG
int minJumps(int nums[], int n){
        if(n==1)
        return 0;
        if(nums[0]==0)
        return -1;
        int jumps=1;
        int steps=nums[0];
        int max_reach=nums[0];
        for(int i=1;i<n-1;i++)
        {
           max_reach=max(max_reach,i+nums[i]);
           if(max_reach==i) return -1;

           steps--;
           if(steps==0)
           {
              jumps++;
              steps=max_reach-i;
           }
        }
        return jumps;
}