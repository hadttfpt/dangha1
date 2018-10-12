#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool validatedata(int a, int b) {
    if (a <= 0 || b <= 0) {
        printf("do dai canh tam giac phai lon hon 0");
        return false;
    }
    return true;
}
float tinhcanhhuyen(int a, int b) {
    return sqrt(a*a + b*b);

}

int main() {
    int a, b, c;
    printf("nhap vao do dai canh goc vuong 1\n");
    scanf("%d", &a);
    printf("nhap vao do dai canh goc vuong 2\n");
    scanf("%d", &b);
    bool isvalidatedata = validatedata(a, b);
    if (isvalidatedata) {
        printf("do dai canh huyen la %.2f", tinhcanhhuyen(a, b));
    }
    return 0;
}