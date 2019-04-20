# USTCPV工程目录说明
该工程实现了一个RISCV指令集（RV32I）构架的CPU内核，并通过了简易的由riscv-gcc编译链编译成的C语言程序。（高性能体系结构大作业）
## 文档结构
* ise_pro----ise工程文件夹   
* rtl----verilog实现源文件   
* sim----verilog仿真源文件   
* src----hex例化文件生成文件夹（内含使用README）   
* doc----USTCPV实验报告书及答辩PPT   
## 使用方式
* 1.CPU核编译：直接在rtl根目录下执行make指令即可完成编译。   
* 2.仿真代码的编译：直接在sim文件目录下执行make指令即可完成编译。
* 3.测试c程序的编译：调整src目录下的boot.c文件，再执行make指令即可生成例化的hex文件（需先完成riscv-gcc编译链的构建）。