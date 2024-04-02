#include <stdio.h>
#include <iostream>

/*
變數、常數命名規則:
1. 不能是關鍵字 (ex. int)
2. 字母、數字、下引線
3. 第一個字元不能為數字
4. 敏感於大小寫

數據類型的意義: 給變數分配適合的儲存空間
1. 區域變數(local variable): 於區塊內有效
2. 全域變數(global variable): 作用範圍包含整個程式
*/

int main(void)
{
    int a = 1;

    int b;
    b = 2;

    int c, d;
    c, d = 3, 4;

    int e, f = 5;

    int& g = a; //指派g為a(g隨a改變)
    printf("g: %d\n", g);

    int *h = nullptr; //宣告指標變數為"空指標"
    int *i = &a; //宣告指標變數，並指向變數a
    printf("i: %d\n", i);
    
    system("pause");
    return 0;

}