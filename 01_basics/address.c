#include<stdio.h>

int main() {
	int age = 25;

	//1.印出值(VALUE)- 房子裡住遑誰?
	printf("Value of age: %d\n", age);

	//2.印出地址(ADDRESS) - 房子在哪裡?
	printf("address of age: %p\n", &age);

	return 0;
}

