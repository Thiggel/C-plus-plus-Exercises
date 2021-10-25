#include "finder.ih"

    // private backdoor: returns modifiable Pair or 0 if not found
Finder::Pair *Finder::finder(string const &key) const
{
    for (unsigned idx = 0; idx != d_size; ++idx)
    {
        if (d_pair[idx].key == key)
            return &d_pair[idx];
    }

    return 0;
}
