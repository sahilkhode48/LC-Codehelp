// gfg fast exp
class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    // Code here
		    long long int ans=1;
		    while(n>0){
		        if(n & 1){
		            ans=(ans*x)%M;
		            
		        }
		        x=(x*x)%M;
		        n>>=1;// rightshit by 1 means n=n/2;
		    }
		    return ans%M;
		}
};
