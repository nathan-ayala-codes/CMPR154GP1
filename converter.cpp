#include "converter.h"

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
    while(input.size() % 4 != 0)
    {
        input.insert(0,1,'0');
    }
    string hexadecimal = "";
    vector<int> vec;
    vector<int> hexaDigitTotal;
    int sum = 0;
    for(int i = 0; i < input.size();i++)
    {
        vec.push_back(input[i] - '0');
    }
    for(int i = 0;i<input.size();i++)
    {


        if(i % 4 == 0)
            sum += vec[i] * pow(2,3);
        else if (i % 4 == 1)
            sum += vec[i] * pow(2,2);
        else if (i % 4 == 2)
            sum += vec[i] * pow(2,1);
        else if (i % 4 == 3)
            sum += vec[i] * pow(2,0);

        if (i % 4 == 3)
        {
            hexaDigitTotal.push_back(sum);
            sum = 0;
        }
    }
    for (int i = 0; i < hexaDigitTotal.size();i++)
    {
        switch (hexaDigitTotal[i])
        {
            case 0:
            hexadecimal += "0";
            break;
            case 1:
            hexadecimal += "1";
            break;
            case 2:
            hexadecimal += "2";
            break;
            case 3:
            hexadecimal += "3";
            break;
            case 4:
            hexadecimal += "4";
            break;
            case 5:
            hexadecimal += "5";
            break;
            case 6:
            hexadecimal += "6";
            break;
            case 7:
            hexadecimal += "7";
            break;
            case 8:
            hexadecimal += "8";
            break;
            case 9:
            hexadecimal += "9";
            break;
            case 10:
            hexadecimal += "A";
            break;
            case 11:
            hexadecimal += "B";
            break;
            case 12:
            hexadecimal += "C";
            break;
            case 13:
            hexadecimal += "D";
            break;
            case 14:
            hexadecimal += "E";
            break;
            case 15:
            hexadecimal += "F";
            break;
            default:
            cout << "ERROR" << endl;
            break;
        }

    }
    cout << "Hexadecimal Conversion: " + hexadecimal << endl;
}


void Converter::HtoB(string input) // Nathan
{
    string output = "";
    for (int i = 0; i < input.length();i++)
    {
        int num = 0;
        switch (input[i])
        {
            case '0':
            num = 0;
            break;
            case '1':
            num = 1;
            break;
            case '2':
            num = 2;
            break;
            case '3':
            num = 3;
            break;
            case '4':
            num = 4;
            break;
            case '5':
            num = 5;
            break;
            case '6':
            num = 6;
            break;
            case '7':
            num = 7;
            break;
            case '8':
            num = 8;
            break;
            case '9':
            num = 9;
            break;
            case 'A':
            case 'a':
            num = 10;
            break;
            case 'B':
            case 'b':
            num = 11;
            break;
            case 'C':
            case 'c':
            num = 12;
            break;
            case 'D':
            case 'd':
            num = 13;
            break;
            case 'E':
            case 'e':
            num = 14;
            break;
            case 'F':
            case 'f':
            num = 15;
            break;
            default:
            cout << "ERROR" << endl;
            break;
        }
        if(num / 8 >= 1)
        {
            output += "1";
            num -= 8;
        }
        else
        {
            output += "0";
        }
        if(num / 4 >= 1)
        {
            output += "1";
            num -= 4;
        }
        else
        {
            output += "0";
        }
        if(num / 2 >= 1)
        {
            output += "1";
            num -= 2;
        }
        else
        {
            output += "0";
        }
        if(num / 1 >= 1)
        {
            output += "1";
            num -= 1;
        }
        else
        {
            output += "0";
        }
    }
}


void Converter::binaryInput()
{
    bool flag = true;
    do
    {
        flag = true;
        cout << "Enter a binary input:";
        cin >> valueInput;
        for(int i = 0;i<valueInput.size();i++)
        {
            if(valueInput[i] != '0' && valueInput[i] != '1')
            flag = false;
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
