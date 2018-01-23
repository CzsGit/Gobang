// 五子棋View.cpp : implementation of the CMyView class
//

#include "stdafx.h"
#include "五子棋.h"

#include "五子棋Doc.h"
#include "五子棋View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyView

IMPLEMENT_DYNCREATE(CMyView, CView)

BEGIN_MESSAGE_MAP(CMyView, CView)
	//{{AFX_MSG_MAP(CMyView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyView construction/destruction

CMyView::CMyView()
{
	// TODO: add construction code here

}

CMyView::~CMyView()
{
}

BOOL CMyView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMyView drawing

void CMyView::OnDraw(CDC* pDC)
{
	CMyDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	

CBrush

mybrush1; 

mybrush1.CreateSolidBrush(RGB(192,192,192));

CRect

myrect1(0,0,1200,800); 

pDC->FillRect(myrect1,&mybrush1);

//画棋盘框线

CPen
mypen;
CPen*myoldPen; 
mypen.CreatePen(PS_SOLID,1,RGB(0,0,0));
myoldPen=pDC->SelectObject(&mypen);
for(int
i=0;i<19;i++)
{ 
pDC->MoveTo(40,40+i*20);
pDC->LineTo(400,40+i*20);
pDC->MoveTo(40+i*20,40);
pDC->LineTo(40+i*20,400);
} 

//重画时显示存在的棋子
CDC
Dc; 
if(Dc.CreateCompatibleDC(pDC)==FALSE) 
AfxMessageBox("Can'tcreateDC");
for(int
n=0;n<19;n++) 
for(int
m=0;m<19;m++) 
if(wzq[n][m]==1)

{ 

//显示白棋 
Dc.SelectObject(m_bmwhite); 
pDC->BitBlt(n*20+32,m*20+32,160,160,&Dc,0,0,SRCCOPY);
} 
else
if(wzq[n][m]==-1) 
{ 
//显示黑棋 
Dc.SelectObject(m_bmblack); 
pDC->BitBlt(n*20+32,m*20+32,160,160,&Dc,0,0,SRCCOPY);
}

}

/////////////////////////////////////////////////////////////////////////////
// CMyView printing

BOOL CMyView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMyView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMyView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMyView diagnostics

#ifdef _DEBUG
void CMyView::AssertValid() const
{
	CView::AssertValid();
}

void CMyView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMyDoc* CMyView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyDoc)));
	return (CMyDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMyView message handlers
