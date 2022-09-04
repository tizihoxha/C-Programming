#include "c_programming.h"

/**
 * temp_info - Function that finds the lowest, highest and the amplitude of temp
 * @temp: the temperatures, given elements
 * Return: hottest,coldest & amplitude
 */
void temp_info(int * temps)
{
	int i, hottest, coldest, amplitude;

	hottest = coldest = temps[0];

	for (i = 0; temps[i] ; i++)
	{
		if (temps[i] > hottest)
			hottest = temps[i];
		else if (temps[i] < coldest)
			coldest = temps[i];
	}
	amplitude =  hottest - coldest;
	printf("Hottest day is: %i\nColdest day is: %i\nAmplitude is: %i\n", hottest, coldest, amplitude);
	
}

int main()
{
	int arr[] ={20, 17, 13, 32,'\0'};

	temp_info(arr);
	return 0;
}
