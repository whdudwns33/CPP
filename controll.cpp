#include <iostream>;
using namespace std;

// int main(void) {
//     int a;
//     // printf : ǥ�� ���
//     printf("������ �Է��ϼ��� : ");
//     // scanf : ǥ�� �Է� - int a => &a�� �Է�
//     scanf("%d", &a);

//     if (a > 0) {
//         printf("�Է��Ͻ� ���ڴ� ����Դϴ�.\n");
//     }
//     if (a < 0)
//         printf("�Է��Ͻ� ���ڴ� �����Դϴ�.\n");
//     if (a == 0)
//         printf("�Է��Ͻ� ���ڴ� 0�Դϴ�.\n");
//     return 0;
// }

// int main() {
//     int input;
//     printf("���� �Է��Ͻÿ� : ");
//     scanf("%d", &input);

//     if (input > 100) {
//         printf("�Է°��� 100���� Ŀ��.\n");
//     } else if (input == 100) {
//         printf("�Է°��� 100�� ���ƿ�.\n");
//     } else {
//         printf("�Է°��� 100���� �۾ƿ�.\n");
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
    printf("����ġ ���̽� ���� �Դϴ� : 1.a 2.b 3.c ");
    scanf("%d", &num);
    switch (num) {
        case 1: 
        printf("ù��°");
        break;
        case 2:
        printf("�ι�°");
        break;
        case 3:
        printf("����°");
        break;
        default:
        cout << num << endl;
    }
    return 0;
}