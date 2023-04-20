#include <string.h>
#include <iostream>
using namespace std;

string suffixWithUnit ( double number ) {
    if (number == 0.0)
        return "0";

    //STEP 1
    string res = to_string(number);
    res = res.substr(res.find('.') + 1);
    int n = 0;

    //STEP 2
    while ((long long)(number) / 1000 != 0){
        res = to_string((long long)number % 1000) + res;
        number = (long long)number / 1000;
        n++;
    }

    //STEP 3
    while (res.length() != 0 && res.back() == '0')
        res.pop_back();
    if (res.length() != 0){
        res = "." + res;
    }

    //STEP 4
    res = to_string(int(number)) + res;
    switch (n)
    {
    case 1:
        res += " Kilo";
        break;
    case 2:
        res += " Mega";
        break;
    case 3:
        res += " Giga";
        break;
    case 4:
        res += " Tera";
        break;
    case 5:
        res += " Peta";
        break;
    case 6: 
        res += " Exa";
        break;
    case 7:
        res += " Zetta";
        break;
    default:
        break;
    }
    return res;
}

int main(){
    double test[] = {1000, 1.234, 12345678, 12345678910111100, 12345.678 };
    int len = sizeof(test)/sizeof(double);
    for (int i = 0; i < len; i++)
        cout << to_string(test[i]) << ":\t" << suffixWithUnit(test[i]) << endl;
}