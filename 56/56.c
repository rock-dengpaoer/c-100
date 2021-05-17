#include <graphics.h> //VC6.0中是不能运行的，要在Turbo2.0/3.0中  
int main()   
{  
    int driver,mode,i;   
    float j=1,k=1;   
    driver=VGA;  
    mode=VGAHI;   
    initgraph(&driver,&mode,"");   
    setbkcolor(YELLOW);   
    for(i=0;i<=25;i++)   
    {   
        setcolor(8);   
        circle(310,250,k);   
        k=k+j;   
    j=j+0.3;   
    }   
    return 0;  
}


// 题目：画图，学用circle画圆形。

// 程序分析：无。

// // Created by www.runoob.com on 15/11/9. // Copyright © 2015年 菜鸟教程. All rights reserved. //