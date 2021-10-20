#ifndef INCLUDED_COPYCAT_
#define INCLUDED_COPYCAT_


class CopyCat {
    size_t d_size;
    char **d_data

public:
    CopyCat() { d_data = **environ; };                        // copies environ
    CopyCat(int argc, char **argv);
    {
        d_size = argc;
        d_data = argv;
    }
    CopyCat(char **data);            // cp. any environ-like variable]

  private:
};
// https://www.geeksforgeeks.org/shallow-copy-and-deep-copy-in-c/

#endif
