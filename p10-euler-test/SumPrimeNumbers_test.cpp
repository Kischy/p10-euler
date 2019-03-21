#include "pch.h"

#include "../p10-euler/src/SumPrimeNumbers.h"


TEST(SumPrimesExists, DoesTheClassExist)
{
	SumPrimeNumbers sum_primes;
}


TEST(SumPrimesExists, GetSumOfPrimesBelow10)
{
	SumPrimeNumbers sum_primes;

	ASSERT_EQ(sum_primes.get_sum_of_primes(10), 17);
}

TEST(SumPrimesExists, SpecialCases)
{
	SumPrimeNumbers sum_primes;

	ASSERT_EQ(sum_primes.get_sum_of_primes(1), 0);
	ASSERT_EQ(sum_primes.get_sum_of_primes(0), 0);
	ASSERT_EQ(sum_primes.get_sum_of_primes(2), 2);
	ASSERT_EQ(sum_primes.get_sum_of_primes(3), 5);
	ASSERT_EQ(sum_primes.get_sum_of_primes(5), 5);
}


