#include <stdio.h>
main() {
	//1.���� �迭�� ���� �Է��Ͽ� �ֱ�
	printf("���� 9���� �Է��Ͻø� ������� 3x3 �迭�� �����մϴ�.\n");
	int arr0[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &arr0[i][j]);
		}

	}
	printf("==�Է��� �迭(arr0) ���==\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr0[i][j]);
		}
		printf("\n");
	}
	//2.�迭�� ��Ģ�������� ���ο� �迭����� 
	int arr1[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	printf("==arr1 ���==\n");
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
	printf("==arr2 ���==\n");
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
	printf("==arr3(arr1 * arr2) ���==\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}



	//3.90�� ȸ����Ű��
	int arr90[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr90[i][j] = arr1[2-j][i];
		}
	}
	printf("==arr90(arr1 90�� ȸ��) ���==\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr90[i][j]);
		}
		printf("\n");
	}


	//3-2.180�� ȸ��
	int arr180[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr180[i][j] = arr1[2-i][2-j];
		}
	}

	printf("==arr180(arr1 180�� ȸ��) ���==\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr180[i][j]);
		}
		printf("\n");
	}

	//3-3.270��(�ݴ� 90��) ȸ��
	int arr270[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr270[i][j] = arr1[j][2-i];
		}
	}
	printf("==arr270(arr1 270�� ȸ��) ���==\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr270[i][j]);
		}
		printf("\n");
	}


	//4.������ ����
	int arr5[5];
	printf("�������� ���� 5���� �Է��Ͻø� �������� �����մϴ�.\n");
	printf("==���� �迭 �Է�==\n");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr5[i]);
	}
	printf("==���� �迭 ���==\n");

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
	printf("==������ ������ �迭 ���==\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr5[i]);
	}
	printf("\n");
	//4-2.ū ���� ����
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
	printf("==ū�� ������ �迭 ���==\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr5[i]);
	}
}