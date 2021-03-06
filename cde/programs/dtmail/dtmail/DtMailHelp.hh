/*
 * CDE - Common Desktop Environment
 *
 * Copyright (c) 1993-2012, The Open Group. All rights reserved.
 *
 * These libraries and programs are free software; you can
 * redistribute them and/or modify them under the terms of the GNU
 * Lesser General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * These libraries and programs are distributed in the hope that
 * they will be useful, but WITHOUT ANY WARRANTY; without even the
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE. See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with these libraries and programs; if not, write
 * to the Free Software Foundation, Inc., 51 Franklin Street, Fifth
 * Floor, Boston, MA 02110-1301 USA
 */
/*
 *+SNOTICE
 *
 *      $XConsortium: DtMailHelp.hh /main/5 1996/04/21 19:41:42 drk $
 *
 *      RESTRICTED CONFIDENTIAL INFORMATION:
 *
 *      The information in this document is subject to special
 *      restrictions in a confidential disclosure agreement between
 *      HP, IBM, Sun, USL, SCO and Univel.  Do not distribute this
 *      document outside HP, IBM, Sun, USL, SCO, or Univel without
 *      Sun's specific written approval.  This document and all copies
 *      and derivative works thereof must be returned or destroyed at
 *      Sun's request.
 *
 *      Copyright 1993 Sun Microsystems, Inc.  All rights reserved.
 *
 *+ENOTICE
 */
 
#ifndef DTMAILHELP_HH
#define DTMAILHELP_HH
 
// Help Ids for dtmail.

#define DTMAILWINDOWID  "_HOMETOPIC"

// RoamMenuWindow
#define DTMAILWINDOWMAILBOXMENU "DTMAILVIEWMAINWINDOWMENUBARFILE"
#define DTMAILWINDOWMESSAGEMENU "DTMAILVIEWMAINWINDOWMENUBARMESSAGE"
#define DTMAILWINDOWEDITMENU "DTMAILVIEWMAINWINDOWMENUBAREDIT"
#define DTMAILWINDOWATTACHMENTSMENU "DTMAILVIEWMAINWINDOWMENUBARATTACH"
#define DTMAILWINDOWVIEWMENU "DTMAILVIEWMAINWINDOWMENUBARVIEW"
#define DTMAILWINDOWCOMPOSEMENU "DTMAILVIEWMAINWINDOWMENUBARCOMPOSE"
#define DTMAILWINDOWMOVEMENU "DTMAILVIEWMAINWINDOWMENUBARMOVE" 
#define DTMAILWINDOWROWOFLABELSID "DTMAILVIEWMAINWINDOWWORK-AREAPANEDWFORM2ROWOFLABELS" 
#define DTMAILMSGLISTID "DTMAILVIEWMAINWINDOWWORK-AREAPANEDWFORM2MESSAGELISTSWMESSAGELIST"
#define DTMAILNEXTBTNID "DTMAILVIEWMAINWINDOWWORK-AREAPANEDWFORM2ROWCOLUMNNEXT"
#define DTMAILPREVBTNID "DTMAILVIEWMAINWINDOWWORK-AREAPANEDWFORM2ROWCOLUMNPREVIOUS"
#define DTMAILDELBTNID "DTMAILVIEWMAINWINDOWWORK-AREAPANEDWFORM2ROWCOLUMNDELETE"
#define DTMAILPRINTBTNID "DTMAILVIEWMAINWINDOWWORK-AREAPANEDWFORM2ROWCOLUMNPRINT"
#define DTMAILREPLYBTNID "DTMAILVIEWMAINWINDOWWORK-AREAPANEDWFORM2ROWCOLUMNREPLY"
#define APP_MENU_ID "onApplicationMenu"
#define VER_MENU_ID "_copyright"

// SendMsgDialog
#define DTMAILCOMPOSEWINDOW "DTMAILCOMPOSEWINDOW"
#define DTMAILCOMPOSEFILEMENU "DTMAILCOMPOSEWINDOWMENUBARFILE"
#define DTMAILCOMPOSEEDITMENU "DTMAILCOMPOSEWINDOWMENUBAREDIT"
#define DTMAILCOMPOSEATTACHMENU "DTMAILCOMPOSEWINDOWMENUBARATTACH"
#define DTMAILCOMPOSEFORMATMENU "DTMAILCOMPOSEWINDOWMENUBARFORMAT"

// Find Message Dialog
#define DTMAILFINDDIALOG "DTMAILVIEWMAINWINDOWMESSAGEFIND"

// Other Mailboxes Dialog
#define DTMAILOTHERMAILBOXESDIALOG "DTMAILVIEWMAINWINDOWMOVEMAILBOX"

// Undelete Messages From List Dialog
#define DTMAILUNDELETEFROMLISTDIALOG "DTMAILVIEWMAINWINDOWMESSAGEUNDELETELIST"

// Rename Attachment Dialog
#define DTMAILRENAMEATTACHMENTDIALOG "DTMAILVIEWMAINWINDOWATTACHRENAME"

// Mailer Format Settings Dialog
#define DTMAILCOMPOSEFORMATDIALOG "DTMAILCOMPOSEWINDOWFORMATSETTINGS"

// Mailer PrintSetupDialog
#define DTMAILPRINTSETUPDIALOG "DTMAILPRINTSETUPDIALOG"

// Mailer Options Dialogs
#define DTMAILOPTIONSHEADERLISTDIALOG "DTMAILMAILBOXOPTIONSMESSAGEHEADERLIST"
#define DTMAILOPTIONSVIEWDIALOG "DTMAILMAILBOXOPTIONSMESSAGEVIEW"
#define DTMAILOPTIONSCOMPOSEDIALOG "DTMAILMAILBOXOPTIONSCOMPOSEWINDOW"
#define DTMAILOPTIONSMESSAGEFILINGDIALOG "DTMAILMAILBOXOPTIONSMESSAGEFILING"
#define DTMAILOPTIONSVACATIONDIALOG "DTMAILMAILBOXOPTIONSVACATION"
#define DTMAILOPTIONSTEMPLATESDIALOG "DTMAILMAILBOXOPTIONSTEMPLATES"
#define DTMAILOPTIONSALIASDIALOG "DTMAILMAILBOXOPTIONSALIASES"
#define DTMAILOPTIONSADVANCEDDIALOG "DTMAILMAILBOXOPTIONSADVANCED" 

// These helpIds are for the help button in dialogs.  
#define DTMAILHELPCANTINITTOOLTALK "DTMAILHELPCANTINITTOOLTALK"
#define DTMAILHELPCREATEINBOX "DTMAILHELPCREATEINBOX"
#define DTMAILHELPCONVERTINBOX "DTMAILHELPCONVERTINBOX"
#define DTMAILHELPCREATECONTAINER "DTMAILCREATECONTAINERHELP"
#define DTMAILHELPTAKELOCK "DTMAILHELPTAKELOCK"
#define DTMAILHELPBADGROUPID "DTMAILHELPNOINSTALLMAIL"
#define DTMAILHELPUNKNOWNSTATE "DTMAILHELPUNKNOWNSTATE"
#define DTMAILHELPFATALERROR "DTMAILHELPFATALERROR"
#define DTMAILHELPERROR "DTMAILHELPERROR"
#define DTMAILHELPCLOSECOMPOSEWINDOW "DTMAILHELPCLOSECOMPOSEWINDOW"
#define DTMAILHELPPENDINGACTIONS "DTMAILHELPSENDLOSEATTACH"
#define DTMAILHELPSELECTONEATTACH "DTMAILHELPSELECTONEATTACH"
#define DTMAILHELPBADADDRESS "DTMAILHELPUNKNOWNUSER"
#define DTMAILHELPNOMEMORY "DTMAILHELPNOMEMORY"
#define DTMAILHELPTRANSPORTFAILED "DTMAILHELPNOSEND"
#define DTMAILHELPOKSTARTVACATION "DTMAILHELPOKSTARTVACATION"
#define DTMAILHELPREMOVEVACATION "DTMAILHELPREMOVEVACATION"
#define DTMAILHELPNOWRITEVACATION "DTMAILHELPNOWRITEVACATION"
#define DTMAILHELPEXISTSVACATION "DTMAILHELPEXISTSVACATION"
#define DTMAILHELPNOCOMPOSE "DTMAILHELPNOCOMPOSE"
#define DTMAILHELPNOTEMPLATE "DTMAILHELPNOTEMPLATE"
#define DTMAILHELPCORRUPTTEMPLATE "DTMAILHELPCORRUPTTEMPLATE"
#define DTMAILHELPNOMEMTEMPLATE "DTMAILHELPNOMEMTEMPLATE"
#define DTMAILHELPNOVIEW "DTMAILHELPNOVIEW"
#define DTMAILHELPDIRECTORYONLY "DTMAILHELPDIRECTORYONLY"
#define DTMAILHELPSELECTATTACH "DTMAILHELPSELECTATTACH"
#define DTMAILHELPDESTROYMARKMSG "DTMAILHELPDESTROYMARKMSG"
#define DTMAILHELPNOOPEN "DTMAILHELPNOOPEN"
#define DTMAILHELPNOALLOCMEM "DTMAILHELPNOALLOCMEM"
#define DTMAILHELPALREADYEXISTS "DTMAILHELPALREADYEXISTS"
#define DTMAILHELPNOREPLACE "DTMAILHELPNOREPLACE"
#define DTMAILHELPNOCREATE "DTMAILHELPNOCREATE"
#define DTMAILHELPNOOVERWRITE "DTMAILHELPNOOVERWRITE"
#define DTMAILHELPNOWRITE "DTMAILHELPNOWRITE"
#define DTMAILHELPNOLOADVACATION "DTMAILHELPNOLOADVACATION"
#define DTMAILHELPCORRUPTVACATION "DTMAILHELPCORRUPTVACATION"
#define DTMAILHELPNEEDADDRESSEE	  "DTMAILHELPNEEDADDRESSEE"
#define DTMAILHELPEXECUTEOK	"DTMAILHELPEXECUTEOK"
#define DTMAILHELPOPENREADONLY "DTMAILHELPOPENREADONLY"
#define DTMAILHELPOPENREADWRITEOVERRIDE "DTMAILHELPOPENREADWRITEOVERRIDE"
 
// Option defines for menubar help access
#define HELP_MAILER_TASKS "Tasks"
#define HELP_MAILER_REFERENCE "Reference"
 
char *getHelpId(Widget);
void printHelpId(char *, Widget);
#ifdef DEAD_WOOD
void HelpMenuCB(Widget, XtPointer, XtPointer);
#endif /* DEAD_WOOD */
void HelpCB(Widget, XtPointer, XtPointer);
extern void DisplayMain(Widget, char *, char *);
extern void DisplayVersion(Widget, char *, char *);
static void CloseMainCB(Widget, XtPointer, XtPointer);
 
#endif

