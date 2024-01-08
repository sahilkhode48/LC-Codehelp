// https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	    if(A==0)return B;
	    if(B==0)return A;
	    
	    while(A>0 && B>0){
	        if(A>B){
	            A=A-B;
	        }
	        else{
	            B=B-A;
	        }
	    }
	    return A==0? B:A;
	      
	} 
};
