#include "Contac.h"


int main()
{
    int input = 0;
    //创建通讯录
    Contact con;//
    //初始化通讯录
    InitContact(&con);
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d", &input);
        switch (input)
        {
        case ADD:
            AddContact(&con);
            break;
        case DEL:
            DelContact(&con);
            break;
        case SEARCH:
            FindContact(&con);
            break;
        case SORT:
            SortContact(&con);
            break;
        case MODIFY:
            ModifyContact(&con);
            break;
        case SHOW:
            ShowContact(&con);
            break;
        case CLEAR:
            ClearContact(&con);
            break;
        case EXIT:
            printf("退出程序\n");
            return 0;
        default:
            printf("输入有误，请重新输入\n");
            break;
        }
    } while (input);
    return 0;
}