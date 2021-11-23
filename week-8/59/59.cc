#include "strings/strings.h"

extern char **environ;

int main(int argc, char *argv[])
{
    size_t iterations = static_cast<size_t>(argv[1]);
    bool copy = true;

    if (argc > 2)
        copy = false;

    Strings str{};
}