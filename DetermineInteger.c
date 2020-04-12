/*
 C言語による整数の判定(奇数・偶数・負の数)
 https://neguse-atama.hatenablog.com
*/

#include <stdio.h>
int main(void)
{
    int seisuu;
    printf("整数を入力してください:");
    scanf("%d",&seisuu);
    if(seisuu<0)
        printf("負の数です。");
    else if(seisuu%2)
        printf("奇数です。");
    else
        printf("偶数です。");
    return (0);
}