Solution 1-:
Code-:
int trap(vector<int>& height) {
        int n=height.size();
        int left[n];

        left[0]=height[0];
        int maxx=height[0];
        for(int i=1;i<n;i++)
        {
           maxx=max(maxx,height[i]);
           left[i]=maxx;
        }

        int right[n];
        right[n-1]=height[n-1];
        maxx=height[n-1];

        for(int i=n-2;i>=0;i--)
        {
            maxx=max(maxx,height[i]);
            right[i]=maxx;
        }
        
        int ans=0;
        for(int i=1;i<n-1;i++)
        {
           int val=min(left[i],right[i]);
           ans+=(val-height[i]);
        }
        return ans;
}



Solution 2-:
Code-:
 int trap(vector<int>& height) {
        int n=height.size();
        int lmax=height[0];
        int rmax=height[n-1];

        int low=1;
        int high=n-2;
        int ans=0;
        while(low<=high)
        {
            lmax=max(lmax,height[low]);
            rmax=max(rmax,height[high]);

            if(rmax>lmax)
            {
                ans+=lmax-height[low];
                low++;
            }
            else
            {
                ans+=rmax-height[high];
                high--;
            }
        }
        return ans;
}