# LemonOS
An operating system based on OrangeS.

# 开发环境说明
`开发系统环境：Ubuntu-16.04 32位
开发相关软件：Bochs
开发语言：C语言、汇编
项目管理平台：Github`

# 操作系统组成
- boot（引导）
- kernel（内核） 
- command（应用集） 
- fs（文件系统） 
- lib（可用代码库） 
- include（头文件集） 
- mm（内存调度系统）

# 主要功能实现
 ## 文件系统
 `
 文件系统运行界面指令：
-help：输出文件操作命令列表\
-create：创建新文件\
-read：读取文件内容\
-write：在文件末尾写入信息\
-delete：删除文件
`
 ## 进程管理
`分为系统进程和用户进程。\
系统进程有HD、TTY、FS、SYS。\
用户进程有TESTA（主控界面），用户进程有TESTB（文件管理界面），TESTC（闲置）。\
进程调度算法采用优先级调度，系统进程和用户进程处于不同的优先级。\
可以输出当前系统的进程调度情况。
`
