// https://leetcode.com/problems/string-compression/description/

class Solution {
public:
    int compress(vector<char>& s) {
        char prev=s[0];
        int index=0;
        int count=1;
        for(int i=1;i<s.size();i++){
            
            if (s[i]== prev){
                count ++;
               
            }
            else{
                s[index++]=prev;
                
                if(count>1){
                    //ADD the number in front
                    int start=index;
                    while(count){
                        s[index++]= (count%10) +'0';//for converting int to char
                        count/=10;
                    }
                    reverse(s.begin()+start,s.begin()+index);
                }
                prev=s[i];
                count=1;
            }
        }
        //end case not store we store manually
        s[index++]=prev;
                
                if(count>1){
                    //ADD the number in front
                    int start=index;
                    while(count){
                        s[index++]= (count%10) +'0';//for converting int to char
                        count/=10;
                    }
                    reverse(s.begin()+start,s.begin()+index);
                }
        return index;
    }
};
