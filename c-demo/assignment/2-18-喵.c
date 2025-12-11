// 自动生成的喵化副本，保留原逻辑
#define 喵头一 <stdio.h>
#define 喵头二 <string.h>
#define 喵头三 <math.h>
#define 喵头四 <stdlib.h>
#define 喵头五 <ctype.h>
#define 喵头六 <stdbool.h>
#include 喵头一
#include 喵头二
#include 喵头三
#include 喵头四
#include 喵头五
#include 喵头六

// 关键字喵化
#define 喵数 int
#define 喵短 short
#define 喵长整 long
#define 喵浮 float
#define 喵双 double
#define 喵空 void
#define 喵主 main
#define 喵开 {
#define 喵关 }

#define 喵圈 for
#define 喵若 if
#define 喵否则 else
#define 喵当 while
#define 喵做 do
#define 喵返 return
#define 喵换 switch
#define 喵案 case
#define 喵默 default
#define 喵休 break
#define 喵继 continue
#define 喵恒 const
#define 喵尺 sizeof
#define 喵构 struct
#define 喵型 typedef
#define 喵枚 enum

// 运算符和符号喵化
#define 喵左 (
#define 喵右 )
#define 喵左中 [
#define 喵右中 ]
#define 喵句 ;
#define 喵逗 ,
#define 喵冒 :

#define 喵是 =
#define 喵等 ==
#define 喵不等 !=
#define 喵小 <
#define 喵大 >
#define 喵小等 <=
#define 喵大等 >=
#define 喵加 +
#define 喵减 -
#define 喵乘 *
#define 喵除 /
#define 喵模 %
#define 喵步 ++
#define 喵退 --
#define 喵与 &&
#define 喵或 ||

// 常用函数喵化
#define 喵印 printf
#define 喵取 scanf
#define 喵长 strlen
#define 喵扫 gets
#define 喵出 puts
#define 喵取行 fgets
#define 喵置 memset
#define 喵拷 memcpy
#define 喵比 strcmp
#define 喵拷贝 strcpy
#define 喵得 getchar
#define 喵放 putchar
#define 喵幂 pow
#define 喵根 sqrt
#define 喵绝 abs

#include <stdio.h>
喵数 喵主 喵左  喵右 
 喵开 
    喵数 n 喵逗  cnt  喵是  0 喵句 
    喵圈  喵左 n  喵是  1 喵句  n  喵小等  1000 喵句  n 喵步  喵右 
     喵开 
        喵若  喵左 n  喵模  3  喵等  1  喵与  n  喵模  5  喵等  2  喵与  n  喵模  7  喵等  3 喵右 
         喵开 
            喵印 喵左 "%5d" 喵逗  n 喵右  喵句 
            cnt 喵步  喵句 
            喵若  喵左 cnt  喵模  5  喵等  0 喵右 
                喵放 喵左 '\n' 喵右  喵句 
         喵关 
     喵关 
    喵若  喵左 cnt  喵模  5  喵不等  0 喵右 
        喵放 喵左 '\n' 喵右  喵句 
    喵返 0 喵句 
 喵关 