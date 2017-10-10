//William Anderson 15494372

#include <iostream>

using namespace std;

void print_string_array(char str[])
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		cout << str[i];
	}

	cout << endl;
}

void print_string_ptr(char* str)
{
	while (*str != '\0') 
	{
		cout << *str;
		*str++;
	}

	cout << endl;
}

int main() 
{
	char str[6] = {'H', 'e', 'l', 'l', 'o'};
	char* ptr = str;

	print_string_array(str);
	print_string_ptr(ptr);

	return 0;
}