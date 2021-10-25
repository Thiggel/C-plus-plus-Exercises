#include "finder.ih"

    // add element to d_pair
void Finder::add(string const &key, string const &value)
{                                                           
    Pair *next = new Pair[d_size + 1];              // enlarge & copy
    for (unsigned idx = 0; idx != d_size; ++idx)    // cp d_pair to next
        next[idx] = d_pair[idx];

    delete[] d_pair;                                // delete old d_pair
    d_pair = next;                                  // and use 'next'

    d_pair[d_size++] = Pair{ key, value };          // add new Pair to
                                                    // the end
}
