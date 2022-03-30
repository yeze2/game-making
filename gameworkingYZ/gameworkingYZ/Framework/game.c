#include "stdafx.h"
#include "Game.h"
#include "Renderer.h"

bool Initialize()
{
    if (false == InitializeRenderer())
        return false;

    return true;
}

void processInput()
{

}

void update()
{

}

void render()
{
    RenderMap();
}

int32_t Run()
{
    // Game Loop
    // ���� ������ ����� ����
    // �÷��̾�κ����� �Է��� �ϵ����� �и���Ų��.
    // https://gameprogrammingpatterns.com/game-loop.html

    // Game Loop�� ��ü�� Frame
    while (true)
    {
        // 1. �Է� ó��
        processInput();
        // 2. ������Ʈ
        update();
        // 3. ������
        render();
    }
}