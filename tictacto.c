#include <stdio.h>

int main() {
  int a, b;
  char arr[3][3] = {
      {'0', '0', '0'},
      {'0', '0', '0'},
      {'0', '0', '0'}
  };

  printf("==틱택토 게임 시작==\n");
  printf("좌표 안내:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d %d   ", i, j);
    }
    printf("\n\n");
  }

  while (1) {
    // 1번 플레이어
    printf("==1번 플레이어 차례==\n");
    scanf_s("%d %d", &a, &b);
    if (a < 0 || a > 2 || b < 0 || b > 2 || arr[a][b] != '0') {
      printf("잘못된 좌표입니다. 다시 입력하십시오.\n");
      continue;
    }
    arr[a][b] = 'O';

    // 현재상황
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        printf("%c   ", arr[i][j]);
      }
      printf("\n\n");
    }

    // 승리 확인
    if ((arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O') ||
        (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O') ||
        (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O') ||
        (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O') ||
        (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O') ||
        (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O') ||
        (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O') ||
        (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')) {
      printf("1번 플레이어 승리!\n");
      break;
    }

    // 2번 플레이어
    printf("==2번 플레이어 차례==\n");
    scanf_s("%d %d", &a, &b);
    if (a < 0 || a > 2 || b < 0 || b > 2 || arr[a][b] != '0') {
      printf("잘못된 좌표입니다. 다시 입력하십시오.\n");
      continue;
    }
    arr[a][b] = 'X';

    // 현재상황
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        printf("%c   ", arr[i][j]);
      }
      printf("\n\n");
    }

    // 승리 확인
    if ((arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X') ||
        (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X') ||
        (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X') ||
        (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') ||
        (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X') ||
        (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X') ||
        (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X') ||
        (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X')) {
      printf("2번 플레이어 승리!\n");
      break;
    }
  }

  return 0;
}
