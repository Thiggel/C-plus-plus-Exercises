#include <iostream>

using namespace std;

void printArray(string array[], size_t size)
{
    for (size_t index = 0; index < size; ++index)
        cout << array[index] << ' ';

    cout << '\n';
}

size_t partition(string array[], size_t left, size_t right)
{
    string pivot = array[left];
    size_t pivotIndex = left;

    ++left;

    cout << left << " " << right << " " << '\n';

    while (left != right)
    {
        if (array[left] > pivot)
        {
            --right;
            swap(array[left], array[left - 1]);
        }
        else
        {
            if(array[left] < pivot)
                swap(pivot, array[left]);

            pivotIndex = left;
            ++left;
        }
    }

    return pivotIndex;
}

void quicksort(string array[], size_t first, size_t last)
{
    if (first >= last)
        return;

    printArray(array, 5);

    size_t pivotIndex = partition(array, first, last);

    printArray(array, 5);
    cout << pivotIndex << "\n\n";

    quicksort(array, first, pivotIndex - 1);
    quicksort(array, pivotIndex + 1, last);
}

int main()
{
    string values[] = {"A", "e", "F", "d", "c"};

    for(int index = 0; index < 5; ++index)
        for(size_t character = 0; character < values[index].length(); character++)
            values[index][character] = tolower(values[index][character]);

    quicksort(values, 0, 4);

    printArray(values, 5);
}