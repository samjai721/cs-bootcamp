#include<stdio.h>

int main(){
	int age = 25;

	//宣告一個指標變數(POINTER VARIABLE)
	//int*意思:這個變數專門用來存"整數的地址"
	int *ptr;

	//把 age 的地址指派給 ptr
	ptr = &age;

	printf("Age value: %d\n", age);
	printf("Age address: %p\n", &age);

	//直接印出拍標變數裡的內容(它存的就是地址)
	printf("pointer stores: %p\n", ptr);

	//關鍵操作 解引月(dereference)
	//*ptr 的意思是 靖去 PTR 紀錄的地址,把東西拿出
	printf("Value via pointer: %d\n", *ptr);

	//透過指標修改變數
	*ptr = 100;
	printf("New Age value: %d\n", age);

	return 0;
}

