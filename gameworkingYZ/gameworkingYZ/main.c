#include "stdafx.h"
#include "Framework/Game.h"

int main()
{
	if (false == Initialize())
	{
		puts("������ �ε��ϴ� �� ������ ������ϴ�.");
		return 1;
	}

	return Run();
}