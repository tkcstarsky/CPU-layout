# MIPS CPU v2.0
## 目录结构设计过程中的各个（最终实现为2.0版本）
更新日志：每个版本更新的记录

下载相关：最终实现下载时的顶层和功能模块

v1.0-v1.8：设计过程中的各个版本

v2.0:最终版本（内有合成实现分支）

report:实验报告

## 最终更新日期：
2018.6.8
## 数据通路：
### 标准设计通路
![流水线数据通路](https://github.com/tkcstarsky/Hello-Starsky/blob/master/myimage/流水线数据通路.png)
### 最终实现通路
![流水线手画数据通路](https://github.com/tkcstarsky/Hello-Starsky/blob/master/myimage/流水线实际通路.png)
## 具体实现功能：
1、实现流水线MIPS CPU构架，实现转发和暂停流水线

2、共实现46条指令：

add、addu、sub、subu、and、or、nor、xor

addi、addiu、andi、ori、xori、lui

sll、sllv、srl、srlv、sra、srav

slt、sltu、slti、sltui

bltz、beq、bne、blez、bgtz、bgezal、bltzal

sw、sb、sbu

lw、lb、lbu、lh、lhu

j、jr、jal、jalr

halt

3、实现下载：

(1)可以在板子上执行CPU运算

(2)可用数字管按顺序动态显示RAM内数据

(3)可用数字管按照开关输入内容显示RAM数据

## 下载部分
以下为实现斐波拉契数列运行后的下载图片
![下载图片1](https://github.com/tkcstarsky/Hello-Starsky/blob/master/myimage/下载1.png)
![下载图片2](https://github.com/tkcstarsky/Hello-Starsky/blob/master/myimage/下载2.png)
## 欠缺部分(后期可提升)：

1、可在CPU旁实现一个CP0存储

2、可设计第一周期即分支的分支策略或动态分支预测策略

3、中断为实现

4、矩阵乘法未实现


