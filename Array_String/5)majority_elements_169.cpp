Solution 1-:
Steps-:
1)Using map.

Code-:
int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]>n/2)
            return nums[i];
        }
        return -1;
}


Solution 2-:
Steps-:


Code-:
int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        int count=1;
        for(int i=1;i<n;i++)
        {
            if(nums[res]==nums[i])
            count++;
            else
            {
                count--;
                if(count==0)
                {
                    res=i;
                    count=1;
                }
            }
        }

        count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==nums[res])
            count++;
        }
        return (count>n/2)?nums[res]:-1;
    }