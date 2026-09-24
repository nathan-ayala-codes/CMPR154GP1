
#include <string>
#include <iostream>
#include <cmath>
#include <vector>
class Converter
{
public: 
Converter();
void menu();
void BtoD(std::string valueInput);//chris
void DtoB(std::string valueInput);//juan
void DtoH(std::string valueInput);//juan
void HtoD(std::string valueInput);//chris
void BtoH(std::string valueInput);//nate
void HtoB(std::string valueInput);//nate
void binaryInput();// nate
void decimalInput();// juan
void hexadecimalInput();// chris

private:
char userInput; // menu choice for what user wants to do
std::string valueInput; // binary, decimal, or hexadecimal input from user

};