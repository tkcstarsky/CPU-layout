# MIPS CPU v1.8
## 更新日期：2018.6.7
## 更新日志：
1、大幅调整数据通路
2、增加链接和转跳分支类指令
3、具体实现的指令：
add、addu、sub、subu、and、or、nor、xor
addi、addiu、andi、ori、xori、lui
sll、sllv、srl、srlv、sra、srav
slt、sltu、slti、sltui
bltz、beq、bne、blez、bgtz、bgezal、bltzal
sw、sb、sbu
lw、lb、lbu、lh、lhu
j、jr、jal、jalr
halt
4、实现下载：
（1）可切换的双模式
（2）自动运行斐波拉契指令
（3）可手动输入查看存储器内数字
（4）可自动顺序显示存储器内数字
