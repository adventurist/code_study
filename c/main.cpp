#include <string>
#include <iostream>

int bytes[4];

void fill_array(int32_t n) {
	bytes[0] = (n >> 24)  & 0xFF;
	bytes[1] = (n >> 16)  & 0xFF;
	bytes[2] = (n >> 8)   & 0xFF;
	bytes[3] = (n)        & 0xFF;
}

int32_t get_num()
{
	return (bytes[0] << 24 | bytes[1] << 16 | bytes[2] << 8 | bytes[3]);
}

void print_values()
{
	for (int i = 0; i <= 8; i++)
	{
		std::cout << (4096 >> i) << std::endl;
	}
}

int main(int argc, char* argv[])
{
	fill_array(524288);
	int32_t value = get_num();
	// print_values();
	return 0;
}
