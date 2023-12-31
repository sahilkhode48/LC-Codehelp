// https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;//multiple values for same keys
        vector<vector<string>>ans;///take str as we can perform
        for(auto str:strs){
            string s=str;
            sort(s.begin(),s.end());
            mp[s].push_back(str);
        }
        
        for(auto it=mp.begin();it!=mp.end();it++){
            
            ans.push_back(it->second);
        }
        return ans;
    }
};
