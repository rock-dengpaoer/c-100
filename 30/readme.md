**题目：**一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。

scanf失效，是因为是读取缓冲区的数据来获得数据，要在下次循环前，将缓冲区的数据清除掉，才能正常运行

另外一种解决办法是，限制输入的数据是数字。

目前程序仍有bug，暂不清楚解决办法。