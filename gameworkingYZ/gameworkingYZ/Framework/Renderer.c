#include "stdafx.h"
#include "Renderer.h"
#include <Windows.h>

#define MAP_SIZE 24

static char s_backBuffer[MAP_SIZE][MAP_SIZE];

static char s_map[MAP_SIZE][MAP_SIZE] = {
	"*************",
	"*  SOKOBAN  *",
	"*************"
};
static HANDLE s_consoleHandle;

bool InitializeRenderer()
{
	s_consoleHandle = GetStdHandle
	(STD_OUTPUT_HANDLE);

	if (INVALID_HANDLE_VALUE == s_consoleHandle)
	{
		return false;
	}

	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = false;

	if (false == SetConsoleCursorInfo
	(s_consoleHandle, &info))
	{
		return false;
	}
	return true;
}

void RenderMap()
{
	Sleep(10000);

	system("cls");
	const static COORD initialize
	SetConsoleCursorPosition(s_consoleHandle,
		COORD{ 0,0 });

	memcpy(s_map, s_backBuffer, sizeof(s_map));

	for (int i = 0; i < 24; ++i)
	{
		puts(s_map[i]);
	}
}