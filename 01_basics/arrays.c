#include<stdio.h>

int main(){
	// 向系統申請3個連續的整數空間(3X4 bytes=12bytes)
	int numbers [3] = {10, 20, 30};

	printf("Array address (numbers): %p\n", numbers);
	printf("First element address (&numbers[0]): %p\n", &numbers[0]);

	//證明陣列名稱就是指標
	if (numbers == &numbers[0]) {
		printf("--> they are the same location!\n");
	}

	printf("\n--- Magic of Pointer Arithmetic ---\n");

	// 用傳統方式讀取
	printf("Index 0: %d\n", numbers[0]);

	//用拍標方式讀取 (Pointer Arithmetic)
	//*(numbers + 1) 意思是:從起點往後跳手格(4 bytes) , 然後讀馭內容
	printf("Index 1 (via pointer): %d\n", *(numbers +1));
	printf("Index 2 (via pointer): %d\n", *(numbers +2));

	return 0;
}

