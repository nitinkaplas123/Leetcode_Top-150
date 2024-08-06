Solution 1-:
Steps-:
1)Put all the elements of num2 in num1.
2)Sort the num1.

C++ 
Code -: Time->O(M+N)log(M+N)
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
       for(int i=0;i<n;i++)
       {
          nums1[m+i]=nums2[i];
       }
       sort(nums1.begin(),nums1.end());
}

Java -:
Code-:

public void merge(int[] nums1, int m, int[] nums2, int n) {
        for(int i=0;i<n;i++)
        {
            nums1[m+i]=nums2[i];
        }
        Arrays.sort(nums1);
}

Javascript -:
Code-:

var merge = function(nums1, m, nums2, n) {
    for(let i=0;i<n;i++)
    {
        nums1[m+i]=nums2[i];
    }
    nums1.sort((a,b)=>a-b);
};


Solution 2-:
Steps-:
1)Make two pointer i and j on end points of both array.
2)Make index variable which is pointing to last index of num1.
3)Compare i and j value and update accordingly.

Code-: Time->O(M+N)
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
       int i=m-1;
       int j=n-1;
       int index=m+n-1;

       while(i>=0 and j>=0)
       {
          if(nums1[i]<nums2[j])
          nums1[index--]=nums2[j--];
          else
          nums1[index--]=nums1[i--];
       }

       while(j>=0)
       {
          nums1[index--]=nums2[j--];
       }
}


Java -:
Code-:

public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i=m-1;
        int j=n-1;
        int index=m+n-1;

        while(i>=0 && j>=0)
        {
            if(nums1[i]<nums2[j])
            nums1[index--]=nums2[j--];
            else
            nums1[index--]=nums1[i--];
        }

        while(j>=0)
        {
            nums1[index--]=nums2[j--];
        }
    }


JS-:
Code-:
var merge = function(nums1, m, nums2, n) {
    let i=m-1;
    let j=n-1;
    let index=m+n-1;

    while(i>=0 && j>=0)
    {
        if(nums1[i]<nums2[j])
        nums1[index--]=nums2[j--];
        else
        nums1[index--]=nums1[i--];
    }

    while(j>=0)
    {
        nums1[index--]=nums2[j--];
    }
};