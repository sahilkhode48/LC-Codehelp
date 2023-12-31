// https://leetcode.com/problems/longest-palindromic-substring/
//barely runs, use dp to optimise;
class Solution {
public:
    bool isPalindrome(string s, int i, int j){
        //int start = i, end= j;
        if (j-i==1) return true;
        while(i<j){
            if(s[i]!=s[j] ){
                return false;
            }
            i++; j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        string ans;
        //find substring and check if palindromic and check max lengt one
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                // passing strings and endpoints
                if(isPalindrome(s , i , j)){
                    string t= s.substr(i,j-1+1);
                    ans = t.size()>ans.size() ? t:ans;

                }

            }
        }

        return ans;


    }
};
