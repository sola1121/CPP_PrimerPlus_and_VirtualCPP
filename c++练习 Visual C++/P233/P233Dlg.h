// P233Dlg.h : header file
//

#if !defined(AFX_P233DLG_H__AB870DC4_2BB0_4F37_A914_86DD4D23900A__INCLUDED_)
#define AFX_P233DLG_H__AB870DC4_2BB0_4F37_A914_86DD4D23900A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CP233Dlg dialog

class CP233Dlg : public CDialog
{
// Construction
public:
	CToolBar m_toolbar;
	CP233Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CP233Dlg)
	enum { IDD = IDD_P233_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CP233Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CP233Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_P233DLG_H__AB870DC4_2BB0_4F37_A914_86DD4D23900A__INCLUDED_)
