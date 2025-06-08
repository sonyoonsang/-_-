#include <stdio.h>
main() {
	//1.직접 배열에 값을 입력하여 넣기
	printf("숫자 9개를 입력하시면 순서대로 3x3 배열을 생성합니다.\n");
	int arr0[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &arr0[i][j]);
		}

	}
	printf("==입력한 배열(arr0) 출력==\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr0[i][j]);
		}
		printf("\n");
	}
	//2.배열간 사칙연산으로 새로운 배열만들기 
	int arr1[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	printf("==arr1 출력==\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}

	int arr2[3][3] = {
		{9,8,7},
		{6,5,4},
		{3,2,1}
	};
	printf("==arr2 출력==\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}



	int arr3[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr3[i][j] = arr1[i][j] * arr2[i][j];
		}
	}
	printf("==arr3(arr1 * arr2) 출력==\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}



	//3.90도 회전시키기
	int arr90[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr90[i][j] = arr1[2-j][i];
		}
	}
	printf("==arr90(arr1 90도 회전) 출력==\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr90[i][j]);
		}
		printf("\n");
	}


	//3-2.180도 회전
	int arr180[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr180[i][j] = arr1[2-i][2-j];
		}
	}

	printf("==arr180(arr1 180도 회전) 출력==\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr180[i][j]);
		}
		printf("\n");
	}

	//3-3.270도(반대 90도) 회전
	int arr270[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr270[i][j] = arr1[j][2-i];
		}
	}
	printf("==arr270(arr1 270도 회전) 출력==\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr270[i][j]);
		}
		printf("\n");
	}


	//4.작은순 정리
	int arr5[5];
	printf("무작위로 숫자 5개를 입력하시면 내림차로 정리합니다.\n");
	printf("==기존 배열 입력==\n");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr5[i]);
	}
	printf("==기존 배열 출력==\n");

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr5[i]);
	}
	printf("\n");

	int tmp = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5; j++) {
			if (arr5[i] > arr5[j]) {
				tmp = arr5[i];
				arr5[i] = arr5[j];
				arr5[j] = tmp;
			}
		}
	}
	printf("==내림순 정리한 배열 출력==\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr5[i]);
	}
	printf("\n");
	//4-2.큰 순서 정리
  tmp = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5; j++) {
			if (arr5[i] < arr5[j]) {
				tmp = arr5[i];
				arr5[i] = arr5[j];
				arr5[j] = tmp;
			}
		}
	}
	printf("==큰순 정리한 배열 출력==\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr5[i]);
	}
}