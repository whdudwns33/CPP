#include <iostream>

// 입력값 예제
// int main() {
//     int age;
//     while(1) {
//         printf("나이를 입력 하세요 : ");
//         scanf("%d", &age);
//         if (age > 0 && age < 200) break;
//         else printf("나이 입력 범위를 벗어 났습니다.");
//     }
// }

// 별찍기
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}