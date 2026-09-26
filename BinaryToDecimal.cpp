#include "BinaryToDecimal.h"

bool BinaryToDecimal::isValid(string binaryNumber)
{
	for (int i = 0; i < binaryNumber.length(); i++)
	{
		if (binaryNumber[i] != '0' && binaryNumber[i] != '1')
		{
			return false;
		}
	}
	return true;
}

int BinaryToDecimal::convert(string binaryNumber)
{
	int decimalValue = 0;
	for (int i = 0; i < binaryNumber.length(); i++)
	{
		decimalValue = decimalValue * 2;
		
		if (binaryNumber[i] == '1')
		{
			decimalValue = decimalValue + 1;
		}
	}

	return decimalValue;
}