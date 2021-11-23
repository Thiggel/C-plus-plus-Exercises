#include "strings.ih"

Strings::iterate(char **environLike)
{
    for (int index = 0; index < d_nIterations; ++index)
        add(environLike[index]);
}