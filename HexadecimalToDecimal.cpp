#include "HexadecimalToDecimal.h"

bool HexadecimalToDecimal::isValid(string hexadecimalNumber)
{
	for (int i = 0; i < hexadecimalNumber.length(); i++)
	{
		char digit = hexadecimalNumber[i];

			bool validNumber = (digit >= '0' && digit <= '9');
			bool validUppercase = (digit >= 'A' && digit <= 'F');
			bool validLowercase = (digit >= 'a' && digit <= 'f');

			if (!validNumber && !validUppercase && !validLowercase)
			{
				return false;
			}
	}
	return true;
}

int HexadecimalToDecimal::convert(string hexadecimalNumber)
{
	int decimalValue = 0;

	for (int i = 0; i < hexadecimalNumber.length(); i++)
	{
		char digit = hexadecimalNumber[i];
		int digitValue;

		if (digit >= '0' && digit <= '9')
		{
			digitValue = digit - '0';
		}
		else if (digit >= 'A' && digit <= 'F')
		{
			digitValue = digit - 'A' + 10;
		}
		else
		{
			digitValue = digit - 'a' + 10;
		}
		decimalValue = decimalValue * 16 + digitValue;
	}
	return decimalValue;
}