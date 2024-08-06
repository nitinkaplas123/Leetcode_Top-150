Solution 1-:
Code-:
bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;

        unordered_map<char,int>m1;
        unordered_map<char,int>m2;

        for(int i=0;i<s.length();i++)
        {
            m1[s[i]]++;
            m2[t[i]]++;
        }
        return (m1==m2);
}


Solution 2-:
Code-:
bool isAnagram(string s, string t) {
         int count[26]={0};

         int n1=s.length();
         int n2=t.length();
         if(n1!=n2) return false;

         for(int i=0;i<n1;i++)
         {
            count[s[i]-'a']++;
            count[t[i]-'a']--;
         }         

         for(int i=0;i<26;i++)
         {
            if(count[i]!=0)
            return false;
         }
         return true;
}