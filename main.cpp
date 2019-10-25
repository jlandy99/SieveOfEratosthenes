/*
This program allows the user to pick an upper bound
for the computer to find all primes
*/

#include <string>
#include <iostream>

#include "Sieve.h"

int main() {
  std::string input;
  // Get the user's input
  std::cout << "Enter a number between 2 and 1B: ";
  std::cin >> input;
  long long upperBound = stoi(input);
  // Create an object of type Sieve
  Sieve s(upperBound);
  // Run the sieve
  std::cout << "Calculating...\n";
  std::vector<long long> primes = s.run();
  // Print output
  std::sort(primes.begin(), primes.end());
  for (int i = 0; i < primes.size(); ++i)
    std::cout << primes[i] << std::endl;
  std::cout << "There are " << primes.size() << " primes less than or equal to " << upperBound << std::endl;
  // Ask the user if they want to run again
  while (true) {
    std::string again;
    std::cout << "Do you want to enter a new number (y/n)? ";
    std::cin >> again;
    if (again == "n") break;
    // Repeat the process indefinitely
    std::string input;
    // Get the user's input
    std::cout << "Enter a number between 2 and 1B: ";
    std::cin >> input;
    long long upperBound = stoi(input);
    // Create an object of type Sieve
    Sieve s(upperBound);
    // Run the sieve
    std::cout << "Calculating...\n";
    std::vector<long long> primes = s.run();
    // Print output
    std::sort(primes.begin(), primes.end());
    for (long long i = 0; i < primes.size(); ++i)
      std::cout << primes[i] << std::endl;
    std::cout << "There are " << primes.size() << " primes less than or equal to " << upperBound << std::endl;
  }
  return 0;
}
