/*
This class contains operations, variables and data structures required
to perform a prime calculation based on the Sieve of Eratosthenes, which
is the most efficient algorithm for calculating primes below 10 million
*/

#include <unordered_map>
#include <vector>

class Sieve {
  // Holds upper bound
  long long bound;
  // Array (hash)
  std::unordered_map<long long, bool> map;
  // Helper function to handle hashing all values
  void hashValues();
public:
  // Constructor
  Sieve(long long upperBound);
  // Run function
  std::vector<long long> run();
};
