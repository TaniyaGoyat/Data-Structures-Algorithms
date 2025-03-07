class Solution {
public:
//sieve of eratosthenes approach for marking the prime numbers
    vector<int> closestPrimes(int left, int right) {
        int n=right;
          vector<int>primes(n+1,1);
       for(int i=2;i*i<=n;i++){
        if(primes[i]){
        for(long long j=i*i;j<=n;j+=i){
            primes[j]=0;
        }
        }
       }
       primes[0]=0;
       primes[1]=0;

       vector<int>ans;
      int prev=-1;
      int minDiff=INT_MAX;
      int ans1=-1;
      int ans2=-1;
    for(int i=left;i<=right;i++){
      if(primes[i]){
        if(prev!=-1){
        int diff=i-prev;
        if(diff<minDiff){
        minDiff=diff;
          ans1=prev;
          ans2=i;   
        }
        }
          prev=i;
      }
    }
     ans.push_back(ans1);
     ans.push_back(ans2);
     return ans;
    }
    };
