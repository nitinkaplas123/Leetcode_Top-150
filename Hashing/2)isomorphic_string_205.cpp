Solution 1-:
Steps-:
1)Make two map m1 and m2.
2)Doing to the mapping m1[s1]=t1 and m2[t1]=s1;
3)If now m1[s1] is present and if its not equal to t[i] and vice versa return false.


Time ->O(N) Space ->O(N)
bool isIsomorphic(string s, string t) {
        unordered_map<char,char>m1;
        unordered_map<char,int>m2;

        for(int i=0;i<s.length();i++)
        {
            if(m1[s[i]] and m1[s[i]]!=t[i]) return false;
            if(m2[t[i]] and m2[t[i]]!=s[i]) return false;

            m1[s[i]]=t[i];
            m2[t[i]]=s[i];
        }
        return true;
}


Solution 2-:
Steps-:
1)Using count[256] size.
2)Here we use 256 size bcz in question we are given string take any ascii value.
  ASCII range is from (0,255)

Code-: Time->O(N) Space->O(1)
bool isIsomorphic(string s, string t) {
        int count1[256]={0};
        int count2[256]={0};

        for(int i=0;i<s.length();i++)
        {
            if(count1[s[i]]!=0 and count1[s[i]]!=t[i])
            return false;

            if(count2[t[i]]!=0 and count2[t[i]]!=s[i])
            return false;

            count1[s[i]]=t[i];
            count2[t[i]]=s[i];
        }
        return true;
}