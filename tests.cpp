/** 
* Spring 2023 - Lab 04
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
*/

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

// Task A
TEST_CASE("Divisible By")
{
    CHECK(isDivisibleBy(25,5) == true);
    CHECK(isDivisibleBy(67,32) == false);
}

TEST_CASE("Yes/No output of booleans")
{
    CHECK(booleanOutput(true) == "Yes");
    CHECK(booleanOutput(false) == "No");
}

// Task B
TEST_CASE("Is Prime")
{
    CHECK(isPrime(0) == false);
    CHECK(isPrime(1) == false);
    CHECK(isPrime(2) == true);
    CHECK(isPrime(41) == true);
}

// Task C
TEST_CASE("Next Prime Number")
{
    CHECK(nextPrime(1) == 2);
    CHECK(nextPrime(2) == 3);
    CHECK(nextPrime(3) == 5);
    CHECK(nextPrime(55) == 59);
}

// Task D
TEST_CASE("Prime Counter")
{
    CHECK(countPrimes(1,3) == 2);
    CHECK(countPrimes(1,30) == 10);
}

// Task E
TEST_CASE("Is a Twin Prime")
{
    CHECK(isTwinPrime(1) == false);
    CHECK(isTwinPrime(23) == false);
    CHECK(isTwinPrime(41) == true);
}

// Task F
TEST_CASE("Next Twin Prime")
{
    CHECK(nextTwinPrime(1) == 3);
    CHECK(nextTwinPrime(19) == 29);
}

// Task G
TEST_CASE("Largest Twin Prime")
{
    CHECK(largestTwinPrime(5, 18) == 17);
    CHECK(largestTwinPrime(1, 31) == 31);
    CHECK(largestTwinPrime(14, 16) == -1);
}