#include "define/stdafx.h"
#include "api/xor.h"
#include "api/api.h"
#include "driver/driver.h"
#include "inject/injector.h"
#include "api/drvutils.h"

int main()
{
	// driver init
	start_driver();
	cout << endl;

	TestInject(xor_a("Call of Duty® HQ"), xor_w(L"test.dll"));

	cout << endl;
	system("pause");
}