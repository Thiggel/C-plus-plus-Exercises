#include "dataImp.ih"

bool DataImp::read()
{   
    d_text.clear();
    cin >> d_value;
    return cin.good();
}
