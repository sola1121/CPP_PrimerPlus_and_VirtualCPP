// P21HelloDlg.h : header file
//

#if !defined(AFX_P21HELLODLG_H__60FAC99B_A365_4F3B_A39E_FE4F9B86F285__INCLUDED_)
#define AFX_P21HELLODLG_H__60FAC99B_A365_4F3B_A39E_FE4F9B86F285__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CP21HelloDlg dialog

class CP21HelloDlg : public CDialog
{
// Construction
public:
	CP21HelloDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CP21HelloDlg)
	enum { IDD = IDD_P21HELLO_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CP21HelloDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CP21HelloDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_P21HELLODLG_H__60FAC99B_A365_4F3B_A39E_FE4F9B86F285__INCLUDED_)
