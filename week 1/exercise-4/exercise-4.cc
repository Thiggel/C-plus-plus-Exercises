#include <iostream>

const char text[] = 
R""(^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)"";

int main()
{
	std::cout << text;
}
