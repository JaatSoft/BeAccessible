//	DBQueryTabView.cpp

#ifndef DBQueryTabView_H
#include "DBQueryTabView.h"
#endif
#include <ListView.h>
#include <String.h>
#include "Beep.h"

#include "BeAccessibleApp.h"

DBQueryTabView::DBQueryTabView(BRect rect, const char *name)
	   	   : DBTabView(rect, name, "select null from sqlite_master")
{
//	BRect newRect;
//	SetViewColor(216,216,216,0);
//
//	newRect.right = rect.Width() - 80;
//	newRect.bottom = rect.Height();
//
//	fListView = new BListView(newRect, NULL, B_SINGLE_SELECTION_LIST,
//	                          B_FOLLOW_ALL_SIDES, B_WILL_DRAW|B_FRAME_EVENTS);
//
//	newRect.left = newRect.right + 15;
//	newRect.right += 70;
//	newRect.bottom = newRect.top + 15;
//	
//	fOpenButton = new BButton(newRect, NULL, "Open", new BMessage(OPEN_TABLE_BUTTON),
//								B_FOLLOW_RIGHT, B_WILL_DRAW|B_FULL_UPDATE_ON_RESIZE);
//
//	AddChild(fListView);
//	AddChild(fOpenButton);
//
//	const char* sql = "SELECT name FROM _BSysQueries;";
//	((BeAccessibleApp*)be_app)->ExecuteCommand(sql, (void*)fListView, populateQueries);
	
}
//
//void DBQueryTabView::AttachedToWindow()
//{
//	SetFont(be_bold_font);
//	SetFontSize(24);
//}
//
//void DBQueryTabView::MouseDown(BPoint point)
//{
//	beep();
//}
//
//
//void DBQueryTabView::MessageReceived(BMessage* message)
//{
//	switch(message->what)
//	{
//		case OPEN_TABLE_BUTTON:
//		{
//			BStringItem* selectedQuery = 
//						(BStringItem*)fListView->ItemAt(fListView->CurrentSelection());
//			
//			BString sql("select * from ");
//			sql += selectedQuery->Text();
//			break;
//		}			
//		
//	}
//}
//
//
//
//int DBQueryTabView::populateQueries(void *pArg, int argc, char **argv, 
//                                    char **columnNames)
//{
//	if (argv)
//	{
//		BListView *listView = (BListView*)pArg;
//		listView->AddItem(new BStringItem(argv[0]));
//	}
//	return(0);
//}


