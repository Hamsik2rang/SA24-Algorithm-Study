#include <stdio.h>

int main(void)
{
    int h, ha, m, ma;
    printf("시: ");
    scanf_s("%d", &h);
    printf("\n분: ");
    scanf_s("%d", &m);
    ma = m - 45;
    ha = h;
        if (ma < 0) {
            ma = ma + 60;
            ha = ha - 1;
        }
        if(ha < 0){
            ha = ha + 24;
        }
    printf("\n%d:%d", ha, ma);

    return 0;
}