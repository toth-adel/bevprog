#include <iostream>

int main()
{
	int i = 1;	
	int db = 0;

	while(i != 0)
	{
		i<<=1;
		++db;
	}
	std::cout<<db<<'\n';
}
