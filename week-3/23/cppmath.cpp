
namespace cppmath
{
    int recursiveSqrt(int arg, int previousRoot, int p)
    {
        int argCropped = arg / 100;
        if (argCropped > 0)
        {

        }

        int previousRoot = recursiveSqrt(argCropped, 0, 0);

        p = 100 * previousRoot + p;

        int b_est =
            (p - 100 * (previousRoot << 1)) /
            (20 * previousRoot);

        while (b_est << 1 > arg)
            --b_est;
    }

    int sqrt(int arg)
    {

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