#include <iostream>

using namespace std;

union S
{
	struct
	{
        	uint32_t  z : 1;

        	uint32_t a : 3;
        	uint32_t b : 4;
        	uint32_t c : 5;
        	uint32_t d : 4;
        	uint32_t e : 4;
        	uint32_t f : 4;
        	uint32_t g : 4;
        	uint32_t h : 4;
        	uint32_t i : 5;
        	uint32_t j : 2;
	};
	size_t value;
};


int main()
{
	S cool =
       	{
		.a = 7,
		.b = 15,
		.c = 10,
		.d = 6,
		.e = 7,
		.f = 15,
		.g = 15,
		.h = 7,
		.i = 0,
		.j = 3
	};
		
	cout << hex << cool.value; 
}


