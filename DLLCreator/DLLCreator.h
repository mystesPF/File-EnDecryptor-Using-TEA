// DLLCreator.h : DLLCreator DLL�� �⺻ ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CDLLCreatorApp
// �� Ŭ������ ������ ������ DLLCreator.cpp�� �����Ͻʽÿ�.
//

class CDLLCreatorApp : public CWinApp
{
public:
	CDLLCreatorApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};