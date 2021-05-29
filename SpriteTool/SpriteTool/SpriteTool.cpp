#include <Windows.h>

#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include "CApp.h"

// CWnd

int CALLBACK WinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR     lpCmdLine,
	_In_ int       nCmdShow
)
{
	CApp* app = CApp::GetInstance();

	if (!app->Initialize(hInstance, nCmdShow, _T("WindowClassName"), _T("TitleName"), 1136, 660))
		return 0;

	return app->Run(); // 정상 종료시 0을 반환
}

// 윈도우 화면 그림 띄우고 메뉴, 스크롤바 만들기
// 마우스 올리고있는 위치 픽셀 화소 오른쪽 하단에 띄우기