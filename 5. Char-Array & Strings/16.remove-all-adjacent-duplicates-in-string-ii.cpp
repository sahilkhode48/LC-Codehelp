//two ptr best approach

// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/description/

class Solution {
public:

    // two pointer optimized approach
    string removeDuplicates(string s, int k) {
        int i=0, j=0;
        vector<int>count(s.size());

        while(j<s.size()){
            s[i]=s[j];
            count[i]=1;//if new element found
            if(i>0 && s[i]==s[i-1]){
                count[i]=count[i]+count[i-1];
            }
            if(count[i]==k){
                i=i-k;//take the pointer back k location
            }
            i++; j++;
        }
        return s.substr(0,i);//retrun from 0 to the latest i
    }
};
