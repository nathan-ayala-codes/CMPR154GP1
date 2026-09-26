#include "converter.h"

using namespace std;

Converter::Converter()
{

}

void Converter::menu()
{
    do
    {
        system("cls");
        
        cout << "====================================" << endl;
        cout << "      NUMBER SYSTEM CONVERTER       " << endl;
        cout << "====================================" << endl;
        cout << "\n1. Binary to Decimal\n";
        cout << "2. Decimal to Binary\n";
        cout << "3. Decimal to Hexadecimal\n";
        cout << "4. Hexadecimal to Decimal\n";
        cout << "5. Binary to Hexadecimal\n";
        cout << "6. Hexadecimal to Binary\n";
        cout << "7. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> userInput;

        while (userInput != '1' &&
            userInput != '2' &&
            userInput != '3' &&
            userInput != '4' &&
            userInput != '5' &&
            userInput != '6' &&
            userInput != '7')
        {
            cout << "Error: Invalid input, try again: ";
            cin >> userInput;
        }

        switch (userInput)
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

        case '7':
            cout << "Exiting program..." << endl;
            break;
        }

        if (userInput != '7')
        {
            system("pause");
        }

    } while (userInput != '7');
}


void Converter::BtoD(string input) // Chris
{

}


void Converter::DtoB(string input) // Juan
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


void Converter::DtoH(string input) // Juan
{
    int decimal = stoi(input);
    string hexadecimal = "";
}


void Converter::HtoD(string input) // Chris
{

}


void Converter::BtoH(string input) // Nathan
{

}


void Converter::HtoB(string input) // Nathan
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
    // i.e. 0-9 only
    // then update the valueInput variable to this value

    cout << "Enter a decimal number: ";
    cin >> valueInput;
}


void Converter::hexadecimalInput()
{
    // should ask for a hexadecimal input
    // then check to see if it satisfies what a hexadecimal input can be
    // i.e. 0-9 and A-F
    // then update the valueInput variable to this value
}
