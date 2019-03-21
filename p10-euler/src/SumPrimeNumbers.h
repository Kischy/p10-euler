#pragma once

#include "PrimeChecker.h"



class SumPrimeNumbers
{
public:

	unsigned long long get_sum_of_primes(unsigned long long below_value)
	{
		if (value_low(below_value))
		{
			if (below_value <= 1) return 0;
			else if (below_value == 2) return 2;
			else if (below_value == 3) return 5;
		}


		unsigned long long  prime_sum = 5;		

		for (unsigned long long i = 5; i < below_value; i+=2)
		{
			if (is_a_prime_number(i)) prime_sum += i;
		}

		return prime_sum;
	}

private:

	PrimeChecker prime_checker;

	inline unsigned long long is_a_prime_number(unsigned long long val)
	{
		return prime_checker.is_prime_number(val);
	}

	bool value_low(unsigned long long val)
	{
		if (val <= 3) return true;

		return false;
	}



};