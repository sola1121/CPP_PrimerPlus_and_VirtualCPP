// P21Hello.h : main header file for the P21HELLO application
//

#if !defined(AFX_P21HELLO_H__9676243D_294A_4828_B69A_0EA9A41488AF__INCLUDED_)
#define AFX_P21HELLO_H__9676243D_294A_4828_B69A_0EA9A41488AF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CP21HelloApp:
// See P21Hello.cpp for the implementation of this class
//

class CP21HelloApp : public CWinApp
{
public:
	CP21HelloApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CP21HelloApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CP21HelloApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_P21HELLO_H__9676243D_294A_4828_B69A_0EA9A41488AF__INCLUDED_)
