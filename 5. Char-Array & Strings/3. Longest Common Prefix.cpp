// https://leetcode.com/problems/longest-common-prefix/class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string a;
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i])return a;
            a+=first[i];
        }
        return a;
    }
};
