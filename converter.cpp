#include "converter.h"
Converter::Converter()
{
    this->menu();
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
        while(userInput != '1' && userInput != '2' && userInput != '3' && userInput != '4' && userInput != '5' && userInput != '6' && userInput != '7')
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

    }while(userInput != '7');
    
}


void Converter::BtoD(std::string valueInput) // Chris
{

}

void Converter::DtoB(std::string valueInput) // Juan
{

}

void Converter::DtoH(std::string valueInput) // Juan
{

}

void Converter::HtoD(std::string valueInput) // Chris
{

}

void Converter::BtoH(std::string valueInput) // Nathan
{
    
}

void Converter::HtoB(std::string valueInput) // Nathan
{

}

void Converter::binaryInput()
{
    bool flag = true;
    do
    {
        std::cout << "Enter a binary input:";
        std::cin >> valueInput;
        for(int i = 0;i<valueInput.size();i++)
        {
            if(valueInput[i] != '0' && valueInput[i] != '1')
            flag = false;
            else
            flag = true;
        }
    }
    while(flag == false);
}

void Converter::decimalInput()
{
    // should ask for a decimal input
    // then check to see if it satisfies what a decimal input can be
    //i.e. 0-9 only
    // then update the valueInput variable to this value
}

void Converter::hexadecimalInput()
{
    // should ask for a hexadecimal input
    // then check to see if it satisifes what a hexadecimal input can be
    // i.e. 0-9 and A-F
    // then update the valueInput variable to this value
}