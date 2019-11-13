#include "calculator.h"
#include <iostream>

Calculator::Calculator()
{
    _state = 0;
    _currentValue = 0;
    _operand1 = 0;
    _operator = "";
    _result = 0;
}

void Calculator::processUserInput(QString in)
{
    switch (_state) {
    case 0:
         std::cout << "state 0" << std::endl;
        for (int i=1;i <10;i++) {
            if(in == "C" || in == "0"){
                _currentValue = 0;
                i = 10;

            }
            else if (in.toInt() == i) {
                _currentValue = in.toInt();
                _state = 1;
            }
            else if((in == "+") ||(in == "-") ||(in == "/")||(in == "X") ){
                _operand1 = _currentValue;
                _operator = in;

            }
        }
        break;
    case 1:
         std::cout << "state 1" << std::endl;
        for (int i=0;i <10;i++) {
            if (in == "C"){
                _state = 0;
                _currentValue = 0;
                i= 10;
            }
            if((in.toInt() ==i) &&((in != "+") &&(in != "-") &&(in != "/")&&(in != "X"))){
                _currentValue = (_currentValue*10)+ in.toInt();
            }
            else if ((in == "+") ||(in == "-") ||(in == "/")||(in == "X")) {
                _operand1 = _currentValue;
                std::cout << "here "  << _currentValue << std::endl;
                _operator = in;
                _state= 2;
                i = 10;
            }
        }
        break;
    case 2:
         std::cout << "state 2" << std::endl;
        for (int i=0;i <10;i++) {
            if(in.toInt() == i &&((in != "+") &&(in != "-") &&(in != "/")&&(in != "X"))){
                _currentValue = in.toInt();
                _state = 3;
            }
            else if ((in == "+") ||(in == "-") ||(in == "/")||(in == "X")) {
                _operator = in;
                i = 10;
            }
        }
        break;
    case 3:
         std::cout << "state 3 " << _currentValue << std::endl;
        for (int i=0;i <10;i++) {
            if(in.toInt() == i &&((in != "+") &&(in != "-") &&(in != "/")&&(in != "X"))){
                _currentValue = (_currentValue*10)+in.toInt();
                std:: cout <<  _currentValue <<"gotem" << std::endl;
            }
            else  if ((in == "+") ||(in == "-") ||(in == "/")||(in == "X")) {
                if(in == "+"){
                    _result = _operand1 + _currentValue;
                    std::cout << _operand1 << " + " << _currentValue << " " << _result << std::endl;
                    _operand1 = _result;
                    _currentValue = _result;
                    _operator = in;
                    _state = 2;
                    i = 10;
                }
                if(in == "-"){
                    _result = _operand1 - _currentValue;
                     std::cout << _operand1 << " - " << _currentValue << " " << _result << std::endl;
                    _operand1 = _result;
                    _currentValue = _result;
                    _operator = in;
                    _state = 2;
                    i = 10;
                }
                if(in == "/"){
                    _result = _operand1 / _currentValue;
                     std::cout << _operand1 << " / " << _currentValue << " " << _result << std::endl;
                    _operand1 = _result;
                    _currentValue = _result;
                    _operator = in;
                    _state = 2;
                    i = 10;
                }
                if(in == "X"){
                    _result = _operand1 * _currentValue;
                     std::cout << _operand1 << " X " << _currentValue << " " << _result << std::endl;
                    _operand1 = _result;
                    _currentValue = _result;
                    _operator = in;
                    _state = 2;
                    i = 10;
                }
            }
            else if (in == "=") {
                _currentValue = _currentValue/10;
                if(_operator == "+"){
                    std::cout <<  "second "<< _operand1 << " + " << _currentValue << " " << _result << std::endl;
                    _result = _operand1 + _currentValue;
                    _currentValue = _result;
                    _state = 0;
                    i = 10;
                }
                if(_operator == "-"){
                    std::cout << "second" << _operand1 << " - " << _currentValue << " " << _result << std::endl;
                    _result = _operand1 - _currentValue;
                    _currentValue = _result;
                    _state = 0;
                    i = 10;
                }
                if(_operator == "/"){
                    std::cout << "second "<< _operand1 << " / " << _currentValue << " " << _result << std::endl;
                    _result = _operand1 / _currentValue;
                    _currentValue = _result;
                    _state = 0;
                    i = 10;
                }
                if(_operator == "X"){
                    std::cout << "second" << _operand1 << " X " << _currentValue << " " << _result << std::endl;
                    _result = _operand1 * _currentValue;
                    _currentValue = _result;
                    _state = 0;
                    i = 10;
                }
            }
        }
        break;
    }
    std::cout <<" "  << _currentValue << std::endl << " state " << _state << std::endl;
}

QString Calculator::getCurrentValue()
{
    QString value = convertCurrentValue(_currentValue);
    return value;
}

QString Calculator::convertCurrentValue(int a)
{
    QString value = QString::number(a);
    return value;
}



