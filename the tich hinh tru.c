//
//  main.c
//  the tich hinh tru
//
//  Created by Hiếu Hee on 03/06/2022.
//

#include <stdio.h>
int main(void)
{
    float hight;
    float radius;
    float V;
        printf("nhap chieu cao\n");
        scanf("%f",&hight);
        printf("nhap ban kinh\n");
        scanf("%f",&radius);
    V = 3.14*(radius*radius)*hight;
        printf("V is %f\n",V);
   return 0;
}
