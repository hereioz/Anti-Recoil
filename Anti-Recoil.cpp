#include <iostream>
#include <Windows.h>

void AntiRecoil()
{
	for (int i = 1; i < 7; i++)
	{
		mouse_event(MOUSEEVENTF_MOVE, 0, 1, 0, 0);
	}
}

int main()
{
	while (true)
	{
		if ((int)GetAsyncKeyState(VK_LBUTTON) != 0) {
			AntiRecoil();
		}
		Sleep(100);
	}
}
