#include "main.ih"

void printHistogram(Char *ptr)
{
    if (ptr == nullptr)
        return;

    cout << "char '" << ptr->d_ch << "': " << ptr->d_count << " times\n";

    printHistogram(ptr + 1);
}

int main()
{   
    CharCount histogram;

    histogram.count(cin);

    cout << histogram.info.nCharObj << endl;
    cout << histogram.info.ptr << endl;

    printHistogram(histogram.info.ptr);

}

