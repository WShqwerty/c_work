# c_work
## 自己的编程文件，尝试保存在github上，学习使用git。

## 1:使用git，推荐使用vscode。（顺便一说，vscode是真的好用，以前真笨。）
###     1）首先clone，然后进行编辑。

###     2）使用commit，和push进行推送。

###     3）使用pull，进行拉取。

## 2：c语言程序编辑。
###     1）排序算法
排序算法是c语言中的大块，是非常经典的算法。
排序算法分为：冒泡排序，选择排序，归并排序，快速排序等等。。。。。。
在sort.c程序中给出的排序算法是冒泡排序、简单选择排序。
开始写归并排序，首先是归并排序的思想
        将数组分开层层分开最后到只剩两个元素进行比较，然后将数组合并。需要使用递归。（以前没研究清楚这个排序方式，这次好好的实验一下）对此新建文件merge_sort.c来处理本函数，并使用宏文件在sort.c中调用，巩固宏文件的定义和编辑。
        


# 学cpp找工作：
##      1：student姓名，id，分数。分开写，使用子对象。详情见Student1文件夹。

##      2:同样所是上诉情况，使用继承类。详情见Student2文件夹。

##      3:n*n矩阵，元素0或1(详情见other文件夹中的matrix_get_max文件夹，matrix为可执行文件)
        通过移动元素，求每一行的最大值，转化为十进制。
        例：0，1，1，0，0 -> 1,1,0,0,0 -> 24。
        将每行结果加在一起得到矩阵的最大值。
        例：
        {{1,0,0,0,0},    -> 1,0,0,0,0 -> 16
         {0,1,0,0,0},    -> 1,0,0,0,0 -> 16
         {0,0,1,0,0},    -> 1,0,0,0,0 -> 16
         {0,0,0,1,0},    -> 1,0,0,0,0 -> 16
         {0,0,0,0,1}}    -> 1,0,0,0,0 -> 16
                                                =80;
        示例输入：
        5
        1,0,0,1,0
        0,0,1,0,1
        1,1,0,1,0
        0,1,1,1,0
        0,0,0,1,1
        输出：
        118
![example2](https://user-images.githubusercontent.com/51808365/157044818-4d0b3595-805b-4fc7-9a2f-125c03bdd57c.png)


##      4:病毒感染，穷举算法，n*n的地图。（详情见other文件夹中的matrix_get_virus文件夹，main为可执行文件。)
        1表示被感染区域，0表示未被感染区域。
        1的区域每天感染其上下左右区域。
        问几天能感染地图全部区域。
        输入：1，0，0，0，0，1，0，0，0
        结果：2天
![example1](https://user-images.githubusercontent.com/51808365/157042843-66b28d83-5e8c-4631-81b4-db00dd967eae.png)
