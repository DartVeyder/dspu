#pragma once
class Fraction
{
private:
    long long integerPart;
    unsigned short fractionalPart;

public:
    // Методи доступу
    long long getIntegerPart() const {
        return integerPart;
    }

    unsigned short getFractionalPart() const {
        return fractionalPart;
    }

    void setIntegerPart(long long integer) {
        integerPart = integer;
    }

    void setFractionalPart(unsigned short fractional) {
        fractionalPart = fractional;
    }

    // Метод введення з клавіатури
    void Read(long long integerPart, unsigned short fractionalPart);

    // Метод виведення на екран
    void Display();

    //Метод ініціалізації
    bool Init(long long integerPart, unsigned short fractionalPart);

};

