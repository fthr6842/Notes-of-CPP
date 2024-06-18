#include <stdio.h>
#include <iostream>

/*
宣告:
1. auto -- 系統自動配置、釋放記憶體(預設)
2. register -- 以暫存器做為儲存空間，有較高的執行效率(不再建議使用)
3. static -- 程式結束才釋放記憶體
4. extern -- 來自另一檔案的變數，可跨檔案共用變數
*/

int main(void)
{
    auto a = 1;
    a = 2;
    printf("a: %d\n", a);

    static int b = 2;

    system("pause");
    return 0;
}