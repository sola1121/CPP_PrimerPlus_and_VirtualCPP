// P233.h : main header file for the P233 application
//

#if !defined(AFX_P233_H__2409D190_45A9_4E9D_9175_4AD1905B16F5__INCLUDED_)
#define AFX_P233_H__2409D190_45A9_4E9D_9175_4AD1905B16F5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CP233App:
// See P233.cpp for the implementation of this class
//

class CP233App : public CWinApp
{
public:
	CP233App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CP233App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CP233App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_P233_H__2409D190_45A9_4E9D_9175_4AD1905B16F5__INCLUDED_)
