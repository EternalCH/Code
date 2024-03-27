#include <stdio.h> //预处理命令，基本的输入输出函数库
#include <stdlib.h>//随机函数rand()所在库
#include <time.h>  //库里面时间相关的函数，初始化随机数种子时用到
int main()
{
  double num;   //保存随机数
  double down=0.2,top=2.4;//区间范围
  double a[100];
  int i;    //
  srand((unsigned int)time(NULL));//设置当前时间为随机数种子
  for(i=0;i<100;i++)
  {
    num=(double)rand()/RAND_MAX;
    //产生0-1之间的随机数，RAND_MAX是生成随机数的最大值
    a[i]=down+num*(-0.2-0.2);
    printf("a[%d]=%f\n",i,a[i]);
  }
  return 0;
}