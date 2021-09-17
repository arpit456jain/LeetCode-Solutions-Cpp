class Solution {
public:
    int countPrimes(int n) {
                // Write Your Code here
        // Create a boolean array
        // "prime[0..n]" and initialize
        // all entries it as true.
        
        bool prime[n + 1];
        memset(prime, true, sizeof(prime));
        for (int i = 2; i < n; i++)
        {
            if (prime[i] == true)
            {
                // update to false all multiple of prime[i]
                for (int j = i * 2; j <= n; j = j + i)
                    prime[j] = false;
            }
        }
        vector<int> primes;
        // Print all prime numbers
        for (int p = 2; p <n; p++)
            if (prime[p])
                primes.push_back(p);

        return primes.size();
    }
};