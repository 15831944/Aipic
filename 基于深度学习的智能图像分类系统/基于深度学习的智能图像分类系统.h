
// �������ѧϰ������ͼ�����ϵͳ.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// C�������ѧϰ������ͼ�����ϵͳApp: 
// �йش����ʵ�֣������ �������ѧϰ������ͼ�����ϵͳ.cpp
//

class C�������ѧϰ������ͼ�����ϵͳApp : public CWinApp
{
public:
	C�������ѧϰ������ͼ�����ϵͳApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern C�������ѧϰ������ͼ�����ϵͳApp theApp;
