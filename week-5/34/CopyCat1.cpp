 #include "CopyCat.ih"

CopyCat::CopyCat(int argc, char **argv)      // constructor that copies argv
{
    d_size = argc;
    d_data = duplicate(argv);
}
