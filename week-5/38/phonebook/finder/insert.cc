#include "finder.ih"

    // if key is present, change its value, otherwise add a new Pair
void Finder::insert(string const &key, string const &value) 
{                                                   
    if (Pair *pair = finder(key); pair != 0)        
        pair->value = value;                        
    else
        add(key, value);
}
