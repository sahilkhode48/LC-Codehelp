//kinda tough

//https://leetcode.com/problems/reorganize-string/

class Solution {
public:
    string reorganizeString(string s) {
        //my intuition if a char is s.size()/2 times occuring return false;

        //storing in a count hash
        //try plaing most occurent in 1 go--> if not possible(return null)
        //place other with 1 index gap;


        int hash[26]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i] - 'a']++;
        }
        //find the most freq chara
        char max_freq_char;
        int max_freq=INT_MIN;
        for(int i=0;i<26;i++){
            if(hash[i]>max_freq){
                max_freq=hash[i];
                max_freq_char=i+'a';
            }
        }
        
        int index=0;
        while(max_freq>0 && index<s.size()){
            s[index]=max_freq_char;
            max_freq--;
            index+=2;
        }

        if(max_freq!=0)return "";
        hash[max_freq_char - 'a']=0;//manually setting it 0
        for(int i=0;i<26;i++){
            while(hash[i]>0){
                index= index>=s.size() ?1:index;
                s[index]=i+'a';
                hash[i]--;
                index+=2;
            }
        }
        return s;

    }
};
