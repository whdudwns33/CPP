#include <iostream>;
using namespace std;

// int main(void) {
//     int a;
//     // printf : 표준 출력
//     printf("정수를 입력하세요 : ");
//     // scanf : 표준 입력 - int a => &a로 입력
//     scanf("%d", &a);

//     if (a > 0) {
//         printf("입력하신 숫자는 양수입니다.\n");
//     }
//     if (a < 0)
//         printf("입력하신 숫자는 음수입니다.\n");
//     if (a == 0)
//         printf("입력하신 숫자는 0입니다.\n");
//     return 0;
// }

// int main() {
//     int input;
//     printf("수를 입력하시오 : ");
//     scanf("%d", &input);

//     if (input > 100) {
//         printf("입력값이 100보다 커요.\n");
//     } else if (input == 100) {
//         printf("입력값이 100과 같아요.\n");
//     } else {
//         printf("입력값이 100보다 작아요.\n");
//     }
//     return 0;
// }

// int main() {
//     int num = 10;
//     string result = (num > 5) ? "true" : "false";
//     cout << result << endl;
//     return 0;
// }

int main() {
    int num;
    printf("스위치 케이스 예제 입니다 : 1.a 2.b 3.c ");
    scanf("%d", &num);
    switch (num) {
        case 1: 
        printf("첫번째");
        break;
        case 2:
        printf("두번째");
        break;
        case 3:
        printf("세번째");
        break;
        default:
        cout << num << endl;
    }
    return 0;
}