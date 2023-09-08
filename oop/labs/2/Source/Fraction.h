#pragma once
class Fraction
{
private:
    long long integerPart;
    unsigned short fractionalPart;

public:
    // ������ �������
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

    // ����� �������� � ���������
    void Read(long long integerPart, unsigned short fractionalPart);

    // ����� ��������� �� �����
    void Display();

    //����� �����������
    bool Init(long long integerPart, unsigned short fractionalPart);

};

