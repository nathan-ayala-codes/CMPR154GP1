#include "converter.h"

Converter::Converter()
{

}
void Converter::menu()
{
     do
    {
        std::cout << "====================================" << std::endl;
        std::cout << "      NUMBER SYSTEM CONVERTER       " << std::endl;
        std::cout << "====================================" << std::endl;
        std::cout << "\n1. Binary to Decimal\n";
        std::cout << "2.Decimal to Binary\n";
        std::cout << "3. Decimal to Hexadecimal\n ";
        std::cout << "4. Hexadecimal to Decimal\n";
        std::cout << "5. Binary to Hexadecimal\n";
        std::cout << "6. Hexadecimal to Binary\n";
        std::cout << "7. Exit" << std::endl;

        std::cout << "Enter your choice:";
        std::cin >> userInput;
        while(userInput != '1' || '2' || '3' || '4' || '5' || '7')
        {
            std::cout << "Error: Invalid input, try again:";
            std::cin >> userInput;
        }
        switch(userInput)
        {
            case '1':
                binaryInput();
                BtoD(valueInput);
                break;
            case '2':
                decimalInput();
                DtoB(valueInput);
                break;
            case '3':
                decimalInput();
                DtoH(valueInput);
                break;
            case '4':
                hexadecimalInput();
                HtoD(valueInput);
                break;
            case '5':
                binaryInput();
                BtoH(valueInput);
                break;
            case '6':
                hexadecimalInput();
                HtoB(valueInput);
                break;
        }

    }while(userInput != 7);
    
}


void BtoD(int input) // Chris
{

}

void DtoB(int input) // Juan
{
int decimal = stoi(input);
string binary = "";

if (decimal == 0)
{
    binary = "0";
}

while (decimal > 0)
{
    int remainder = decimal % 2;

    if (remainder == 0)
    {
        binary = "0" + binary;
    }
    else
    {
        binary = "1" + binary;
    }

    decimal = decimal / 2;
}

while (binary.length() < 8)
{
    binary = "0" + binary;
}

cout << "Binary: " << binary << "\n";
}

void DtoH(int input) // Juan
{

}

void HtoD(int input) // Chris
{

}

void BtoH(int input) // Nathan
{

}

void HtoB(int input) // Nathan
{

}

void binaryInput()
{
    // should ask for a binary input
    //then check to see if it satisfies what a binary input can be
    //i.e. 1 and 0 only
    // then update the valueInput variable to this value
}

void decimalInput()
{
    // should ask for a decimal input
    // then check to see if it satisfies what a decimal input can be
    //i.e. 0-9 only
    // then update the valueInput variable to this value

     cout << "Enter a decimal number: ";
     cin >> valueInput;
}

void hexadecimalInput()
{
    // should ask for a hexadecimal input
    // then check to see if it satisifes what a hexadecimal input can be
    // i.e. 0-9 and A-F
    // then update the valueInput variable to this value
}
