#include <iostream>

void func()
{
    static int static_var = 0;
    int local_var = 0;
    local_var++;
    static_var++;
    std::cout << "local_var = " << local_var << std::endl;
    std::cout << "static_var = " << static_var << std::endl;
}

int main(int argc, char** argv)
{
	for (int i = 0; i < 10; i++)
	{
        func();
        std::cout << std::endl;
	}
	
    return 0;
}