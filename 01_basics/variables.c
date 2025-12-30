#include<stdio.h>

int main(){
	// 1. 宣告變數 (向系統申請記憶體)
	int age = 25; 		//整數(INTEGER)
	float height = 175.5;	//浮點數(floating Point)
	char grade = 'A'; 	//字元(character)

	//2. 印出變數的值
	printf("Age: %d\n", age);
	printf("Height: %.1f\n", height);
	printf("Grade: %c\n", grade);

	// 3.(進階)查看記憶體中小
	printf("Size of int: %lu bytes\n", sizeof(int));

	return 0;
}

