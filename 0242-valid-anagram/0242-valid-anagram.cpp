class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int n = s.size();

        vector<char> str1(n) ;
        vector<char> str2(n) ;

        for(int i=0;i<n;i++){
            str1.push_back(s[i]);
            str2.push_back(t[i]);
        }
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());

        return(str1 == str2);
    }
};