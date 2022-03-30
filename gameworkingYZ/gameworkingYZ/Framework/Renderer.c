#include "stdafx.h"
#include "Renderer.h"


#define MAP_SIZE 24

//static char s_backBuffer[MAP_SIZE][MAP_SIZE];

static char s_map[MAP_SIZE][MAP_SIZE] = {
    "**",
    "  Sokoban  ",
    "**"
};

static HANDLE s_consoleHandle;

bool InitializeRenderer()
{
    // �ܼ� �ڵ��� ����
    s_consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    if (INVALID_HANDLE_VALUE == s_consoleHandle)
        return false;

    // ��� ���ŵǰ� �ִ� Ŀ���� ����� ������ �ʰ� ����
    /* CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = false;

    if (false == SetConsoleCursorInfo(s_consoleHandle, &info))
    {
        return false;
    } */

        return true;
}

void RenderMap()
{
    const static COORD initialPos = { 0,0 };
    const static CONSOLE_CURSOR_INFO info = { 100, false };

    SetConsoleCursorPosition(s_consoleHandle, initialPos);
    // Init���� ������ �� �ܼ� â�� ���ϰų� ��ȭ�� �����
    // �ٽ� �������� �����⿡ ���� ���� ������ �ʱⰪ���� ������
    SetConsoleCursorInfo(s_consoleHandle, &info);

    // ���� �� �׾ ������ �߻� �ϴ� ���� �����ϱ� ����
    // ���� ���۸��� ���� �ϳ��� �����ִ� ��, �ϳ��� ���������� ��
    //memcpy(s_map, s_backBuffer, sizeof(s_map));

    // Sleep �Լ� ����� �����ؾ� �ϴ� ����
    // �����尡 ������� -> ���α׷��� ����
    // ���ӿ����� ���α׷��� ���ߴ� ���� ����� ��
    // ���� �����ִ� ����� ��� �����ִ� ���� �� �����

    for (int i = 0; i < MAP_SIZE; ++i)
    {
        puts(s_map[i]);
    }
}