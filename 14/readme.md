**题目：**将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。

思想：将数从二开始除，如果能够整除，则将数除以2，然后接着判断能否继续整除以2.若能则继续除以2；再从二开始加，一直加到这个数本身。