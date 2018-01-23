// 五子棋.h : main header file for the 五子棋 application
//

#if !defined(AFX__H__F8DFCB8C_9DAA_4B92_B904_ED6EB35874D1__INCLUDED_)
#define AFX__H__F8DFCB8C_9DAA_4B92_B904_ED6EB35874D1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyApp:
// See 五子棋.cpp for the implementation of this class
//

class CMyApp : public CWinApp
{
public:
	CMyApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMyApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX__H__F8DFCB8C_9DAA_4B92_B904_ED6EB35874D1__INCLUDED_)
