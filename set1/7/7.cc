#include <iostream>

using namespace std;

union S						// initialize union
{
	struct					// initialize bitmap
	{
        	uint32_t z : 1;			// bit 0 is empty

        	uint32_t a : 3 = 7;		// bits 1-3 is 7
        	uint32_t b : 4 = 15;		// next 4 bits are 15
        	uint32_t c : 5 = 10;		// next 5 bits are 10
        	uint32_t d : 4 = 6;		// next 4 bits are 6
        	uint32_t e : 4 = 7;		// next 4 bits are 7
        	uint32_t f : 4 = 15;		// next 4 bits are 15
        	uint32_t g : 4 = 15;		// next 4 bits are 15
        	uint32_t h : 4 = 7;		// next 4 bits are 7
        	uint32_t i : 5 = 0;		// next 5 bits are 0
        	uint32_t j : 2 = 3;		// next 2 bits are 3
	};
	size_t value;				// size_t variable to represent the bitmap as a number
};


int main()
{
	S cool;					// initialize the union
		
	cout << hex << cool.value; 		// print the hex value
}


