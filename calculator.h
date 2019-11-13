#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QString>

class Calculator
{
public:
    Calculator();
    void processUserInput(QString in);
    QString getCurrentValue();

private:
    int _state;
    int _currentValue;
    int _operand1;
    int _result;

    QString _operator;

    QString convertCurrentValue(int a);
};

#endif // CALCULATOR_H
