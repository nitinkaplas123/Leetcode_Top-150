Solution 1-:
Steps-:
1)Make vector and update vector accordingly.
2)At last just return the vector size and update the original vector.

Code-: Time->O(N) Space->O(N)
C++ 
int removeElement(vector<int>& nums, int val) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            v.push_back(nums[i]);
        }
        nums=v;
        return v.size();
}

Java -:
public int removeElement(int[] nums, int val) {
        int n=nums.length;
        ArrayList<Integer>arr=new ArrayList<>();
        int index=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=val)
            arr.add(nums[i]);
        }
        
        for(int i=0;i<arr.size();i++)
        {
            nums[i]=arr.get(i);
        }
        return arr.size();
}



Solution 2-:  Time->O(N)
Steps-:
1) Make index variable.

C++
Code-:

int removeElement(vector<int>& nums, int val) {
        int index=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            nums[index++]=nums[i];
        }
        return index;
}

Java -:
Code-:

public int removeElement(int[] nums, int val) {
        int index=0;
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]!=val)
            nums[index++]=nums[i];
        }
        return index;
}

Javascript-:

Code-:
var removeElement = function(nums, val) {
    let index=0;
    for(let i of nums)
    {
        if(i!=val)
        nums[index++]=i;
    }
    return index;
};