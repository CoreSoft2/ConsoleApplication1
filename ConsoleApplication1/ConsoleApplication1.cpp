// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Vpn.h"
#include <iostream>
#include <string>

int main()
{
	Vpn vpn;
	//vpn.createvpn(L"youxi_daili", L"104.207.148.70", L"", L"", L"l2tppass", l2tp_psk);
	//HRASCONN conn=vpn.connectvpn(L"youxi_daili", L"user", L"123456aA");
	RASCONN rasconn;
	//bool r = Vpn::getEntryConnection(L"VPN 连接", rasconn);
	//Vpn::disconnect(L"VPN 连接");
	std::cout << Vpn::deleteEntry(L"youxi_daili");
	
    return 0;
}

