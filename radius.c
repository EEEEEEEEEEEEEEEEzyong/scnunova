#include <stdio.h>
#define PI = 3.142

int main(){

float radius;
float area;

printf("원의 면적을 입력하시오 :");
scanf("%f", &radius);

area = PI*radius*radius;
printf("원의 면적 : %f\n", area);

return 0;
}
