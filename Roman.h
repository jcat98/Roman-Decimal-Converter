#ifndef RDCONVERTOR_ROMAN_H
#define RDCONVERTOR_ROMAN_H


class Roman {
public:
    void Converter(int decimalInput);
    void AddToString(int num, int interation);
    void PrintDecimal();
    void Clear();
private:
    std::vector<std::string> numeral;
};


#endif //RDCONVERTOR_ROMAN_H
