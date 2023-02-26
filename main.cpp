/** 
* Spring 2023 - Lab 05
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
*/

#include <iostream>
#include "funcs.h"

int main()
{
  // Task A
  std::cout << "isDivisibleBy(200,25) = " << booleanOutput(isDivisibleBy(200,25)) << "\n";
  std::cout << "isDivisiblyBy(36,17) = " << booleanOutput(isDivisibleBy(36,17)) << "\n";
  std::cout << "------------------------------------\n";

  // Task B
  std::cout << "isPrime(13) = " << booleanOutput(isPrime(13)) << "\n";
  std::cout << "isPrime(40) = " << booleanOutput(isPrime(40)) << "\n";
  std::cout << "------------------------------------\n";
  
  // Task C
  std::cout << "nextPrime(13) = " << nextPrime(13) << "\n";
  std::cout << "nextPrime(31) = " << nextPrime(31) << "\n";
  std::cout << "------------------------------------\n";
  
  // Task D
  std::cout << "countPrimes(5,15) = " << countPrimes(5,15) << "\n";
  std::cout << "countPrimes(17,45) = " << countPrimes(17,45) << "\n";
  std::cout << "------------------------------------\n";

  // Task E
  std::cout << "isTwinPrime(7) = " << booleanOutput(isTwinPrime(7)) << "\n";
  std::cout << "isTwinPrime(36) = " << booleanOutput(isTwinPrime(36)) << "\n";
  std::cout << "------------------------------------\n";

  // Task F
  std::cout << "nextTwinPrime(0) = " << nextTwinPrime(0) << "\n";
  std::cout << "nextTwinPrime(36) = " << nextTwinPrime(36) << "\n";
  std::cout << "------------------------------------\n";

  // Task G
  std::cout << "largestTwinPrime(19,30) = " << largestTwinPrime(19,30) << "\n";
  std::cout << "largestTwinPrime(37,40) = " << largestTwinPrime(37,40) << "\n";
  std::cout << "------------------------------------\n";
  return 0;
}
