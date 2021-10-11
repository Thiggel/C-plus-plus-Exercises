#include "main.ih"
// get a requested value from argv in a ReturnValues object
ReturnValues combine(int argc, char *argv[])
{
    struct ReturnValues store;  // initialize returnValues Object

    // get the index of the requested argument
    store.nr = stoi(argv[1]) - 1;

    // store whether that index exists in the argv array
    store.ok = argv[store.nr] ? true : false;

    // store the value if it exists
    store.value = argv[store.nr] ? argv[store.nr] : "";

    return store;       // return the returnValues object
}