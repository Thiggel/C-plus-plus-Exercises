
namespace cppmath
{
    int lookupSqrt(int arg)
    {
        int lookupTable = {
           0,
           1, 1, 1,
           2, 2, 2, 2, 2,
           3, 3, 3, 3, 3, 3, 3,
           4, 4, 4, 4, 4, 4, 4, 4, 4,
           5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
           6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
           7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
           8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
           9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9
        };

        return lookupTable[arg];
    }

    int sqrt(int arg)
    {
        int argCropped = arg / 100;
        if (argCropped < 100)
        {
            return lookupSqrt(argCropped);
        }

        int currentSqrt = arg - 100 * argCropped;

        int previousRoot = recursiveSqrt(argCropped);

        currentSqrt = 100 * previousRoot + currentSqrt;

        int b_est =
            (currentSqrt - 100 * (previousRoot << 1)) /
            (20 * previousRoot);

        while (b_est << 1 > arg)
            --b_est;
    }

    size_t sqrt(size_t arg)
    {

    }

    unsigned long long sqrt(unsigned long long arg)
    {

    }

    double sin(size_t degrees)
    {

    }

    double tan(size_t degrees)
    {

    }

    double sin(size_t degrees, size_t minutes, size_t seconds)
    {

    }

    double cos(size_t degrees, size_t minutes, size_t seconds)
    {

    }

    double tan(size_t degrees, size_t minutes, size_t seconds)
    {

    }
}