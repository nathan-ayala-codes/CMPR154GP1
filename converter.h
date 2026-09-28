#ifndef CONVERTER_H
#define CONVERTER_H

#include <string>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
class Converter
{
public: 
Converter();
void menu();
void BtoD(std::string input);//chris
void DtoB(std::string input);//juan
void DtoH(std::string input);//juan
void HtoD(std::string input);//chris
void BtoH(std::string input);//nate
void HtoB(std::string input);//nate
void binaryInput();// Nate
void decimalInput();// Juan
void hexadecimalInput();// Chris

private:
char userInput; // menu choice for what user wants to do
string valueInput; // binary, decimal, or hexadecimal input from user

};

#endif