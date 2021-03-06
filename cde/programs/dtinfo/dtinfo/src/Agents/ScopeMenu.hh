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
/* $XConsortium: ScopeMenu.hh /main/4 1996/10/02 08:27:11 cde-hal $ */
/*
 * (c) Copyright 1996 Digital Equipment Corporation.
 * (c) Copyright 1996 Hewlett-Packard Company.
 * (c) Copyright 1996 International Business Machines Corp.
 * (c) Copyright 1996 Sun Microsystems, Inc.
 * (c) Copyright 1996 Novell, Inc. 
 * (c) Copyright 1996 FUJITSU LIMITED.
 * (c) Copyright 1996 Hitachi.
 */
/*
 * Copyright (c) 1994 HAL Computer Systems International, Ltd.
 * All rights reserved.  Unpublished -- rights reserved under
 * the Copyright Laws of the United States.  USE OF A COPYRIGHT
 * NOTICE IS PRECAUTIONARY ONLY AND DOES NOT IMPLY PUBLICATION
 * OR DISCLOSURE.
 * 
 * THIS SOFTWARE CONTAINS CONFIDENTIAL INFORMATION AND TRADE
 * SECRETS OF HAL COMPUTER SYSTEMS INTERNATIONAL, LTD.  USE,
 * DISCLOSURE, OR REPRODUCTION IS PROHIBITED WITHOUT THE
 * PRIOR EXPRESS WRITTEN PERMISSION OF HAL COMPUTER SYSTEMS
 * INTERNATIONAL, LTD.
 * 
 *                         RESTRICTED RIGHTS LEGEND
 * Use, duplication, or disclosure by the Government is subject
 * to the restrictions as set forth in subparagraph (c)(l)(ii)
 * of the Rights in Technical Data and Computer Software clause
 * at DFARS 252.227-7013.
 *
 *          HAL COMPUTER SYSTEMS INTERNATIONAL, LTD.
 *                  1315 Dell Avenue
 *                  Campbell, CA  95008
 * 
 */


#include <WWL/WXmMenu.h>
class WXmArrowButton;
struct UpdateMenu;


// A ScopeMenu is not a real menu, it's only an object responsible to update
// the pulldown menu associated to the given option menu (make sure they both
// are already created before creating such an object.

class ScopeMenu : public WWL,
		   public UAS_Receiver<ScopeCreated>,
		   public UAS_Receiver<ScopeDeleted>,
		   public UAS_Receiver<ScopeRenamed>,
		   public UAS_Receiver<UpdateMenu>
{
public:
  ScopeMenu (Widget option_menu, bool requires_current_section = FALSE);
  virtual ~ScopeMenu();

  UAS_SearchScope *current_scope()
    { return (f_current_scope); }

private:
  void fill_menu();
  void set_scope (WCallback *);
  void destroy_scope (WCallback *);

  void receive (ScopeCreated &, void *client_data);
  void receive (ScopeDeleted &, void *client_data);
  void receive (ScopeRenamed &, void *client_data);
  void receive (UpdateMenu &, void *client_data);

private:
  UAS_SearchScope  *f_current_scope;
  bool		    f_use_current_section ;
  Widget            f_option_menu;
  Widget            f_pull_menu;
};
