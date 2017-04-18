//接收用户输入的小写字母，转换成大写字母并显示
#include <stdio.h>
int main()
{
    char ch ;
    printf("请输入小写字母:");//注意，不要写成printf("请输入小写字母：%c",ch);因为是从scaf输入的，所以放在scanf中即可。
    scanf("%c",&ch);
    printf("转换成大写字母：%c",ch-32);
    return 0;
}
