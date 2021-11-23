#include "numbers.ih"
#include "numbers.h"

Numbers::Numbers(size_t count)
:
d_count(count),
d_storage(new int[count])
{
}



