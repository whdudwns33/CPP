#include <iostream>
using namespace std;

// int main() {
//     int num1 = 10;
//     int num2 = 4;

//     // 표준 출력: cout (자바의 system.out)
//     // 줄 바꿈: endl (자바의 println)
//     cout << "+ : " << num1 + num2 << endl;
//     cout << "- : " << num1 - num2 << endl;
//     cout << "* : " << num1 * num2 << endl;
//     cout << "/ : " << num1 / num2 << endl;
//     cout << "% : " << num1 % num2 << endl;
//     return 0;
// }

// int main() {
//     int num1 = 10;
//     int num2 = 4;

// 	cout << "+= : " << (num1 += 2) << endl;
//     cout << "-= : " << (num1 -= 2) << endl;
//     cout << "*= : " << (num1 *= 2) << endl;

//     return 0;
// }

// int main() {
//     int x = 10;
//     int y = 20;

//     printf("x > y : %d\n", x > y);
//     printf("x < y : %d\n", x < y);
//     printf("x == y : %d\n", x == y);
//     printf("x != y : %d\n", x != y);
//     printf("x >= y : %d\n", x >= y);
//     printf("x <= y : %d\n", x <= y);

//     return 0;
// }

// int main() {
//     int x = 10;
//     int y = 20;
//     int z = 30;
//     int result1, result2, result3;

//     result1 = (x > 0) && (x < y);
//     result2 = (x > 0) || (x > y); 
//     result3 = !((x > 0) || (x > y));
//     printf("result1 : %d\n", result1);
//     printf("result2 : %d\n", result2);
//     printf("result3 : %d\n", result3);

//     return 0;
// }

int main() {
    int year;
    cout << "년도를 입력하세요 : ";
    cin >> year;
    if ((year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0)) {
        printf("true");
        return 0;
    }
    else {
        printf("false");
        return 1;
    }
}