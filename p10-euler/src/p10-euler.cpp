#include <iostream>

#include "SumPrimeNumbers.h"



int main(int argc, char **argv)
{
	unsigned long long p10_answ = 0;

	SumPrimeNumbers sum_primes;

	p10_answ = sum_primes.get_sum_of_primes(2000000);


	std::cout << "The answer to the 10th problem of ProjectEuler.Net is " << p10_answ << ".\n";


	return 0;
}