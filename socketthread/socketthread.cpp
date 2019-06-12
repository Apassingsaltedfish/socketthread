// socketthread.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "socket.h"

int main()
{
	Server svr;
	svr.WaitForClient();
	system("pause");
	return 0;
}
