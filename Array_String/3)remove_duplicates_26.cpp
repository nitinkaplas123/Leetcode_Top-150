Solution 1-:
Steps-:
1)Using i and index pointers.

Code-:
int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int index=1;
        if(n<=1) return n;
        for(int i=1;i<n;i++)
        {
            if(nums[index-1]!=nums[i])
            {
                nums[index]=nums[i];
                index++;
            }
        }
        return index;
}