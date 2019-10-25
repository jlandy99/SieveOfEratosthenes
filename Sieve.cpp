#include "Sieve.h"
#include <iostream>

// Helper function to handle hashing all values
void Sieve::hashValues() {
  for (long long i = 2; i <= bound; ++i) {
    // Whenever we find a new value, mark all multiples
    // as found in the hash
    if (map.find(i) == map.end()) {
      // Mark number as prime
      map[i] = true;
      // Mark all multiples as composite
      for (long long j = 2 * i; j <= bound; j += i)
        map[j] = false;
    }
  }
}

// Constructor
Sieve::Sieve(long long upperBound) {
  bound = upperBound;
}

// Run function
std::vector<long long> Sieve::run() {
  // Set all values in hash map
  hashValues();
  // Create return vector
  std::vector<long long> primes;
  // Iterate through hash
  for (auto m : map)
    if (m.second)
      primes.push_back(m.first);
  return primes;
}
