#include <stdint.h>
#include <iostream>

typedef struct s_data
{
	int	a;
	int	b;
}	Data;

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data	yep;
	Data	*ptr1;
	Data	*ptr2;
	uintptr_t serialized;

	yep.a = 123;
	yep.b = 321;
	ptr1 = &yep;
	std::cout << "Start a: " << ptr1->a << " b: " << ptr1->b << std::endl;
	serialized = serialize(ptr1);
	std::cout << serialized << std::endl;
	ptr2 = deserialize(serialized);
	std::cout << "End a: " << ptr2->a << " b: " << ptr2->b << std::endl;

	return 0;
}