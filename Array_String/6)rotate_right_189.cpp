Solution 1-:
Steps-:
1)Simple

Code-: Time->O(N*K)
void helper(vector<int>&nums)
{
        int n=nums.size();
        int temp=nums[n-1];
        for(int i=n-1;i>=1;i--)
        {
            nums[i]=nums[i-1];
        }
        nums[0]=temp;
}

void rotate(vector<int>& nums, int k) {
        for(int i=0;i<k;i++)
        {
            helper(nums);
        }
}


Solution 2-:
Steps-:
1)same as left rotate 

Code-:
void reverse(vector<int>&nums,int low,int high)
{
        while(low<high)
        {
            swap(nums[low],nums[high]);
            low++;
            high--;
        }
}

void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;

        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
}