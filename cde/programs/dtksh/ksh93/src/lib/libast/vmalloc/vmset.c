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
/* $XConsortium: vmset.c /main/2 1996/05/08 20:05:28 drk $ */
/***************************************************************
*                                                              *
*                      AT&T - PROPRIETARY                      *
*                                                              *
*         THIS IS PROPRIETARY SOURCE CODE LICENSED BY          *
*                          AT&T CORP.                          *
*                                                              *
*                Copyright (c) 1995 AT&T Corp.                 *
*                     All Rights Reserved                      *
*                                                              *
*           This software is licensed by AT&T Corp.            *
*       under the terms and conditions of the license in       *
*       http://www.research.att.com/orgs/ssr/book/reuse        *
*                                                              *
*               This software was created by the               *
*           Software Engineering Research Department           *
*                    AT&T Bell Laboratories                    *
*                                                              *
*               For further information contact                *
*                     gsf@research.att.com                     *
*                                                              *
***************************************************************/
#include	"vmhdr.h"


/*	Set the control flags for a region.
**
**	Written by (Kiem-)Phong Vo, kpv@research.att.com, 01/16/94.
*/
#if __STD_C
vmset(reg Vmalloc_t* vm, int flags, int on)
#else
vmset(vm, flags, on)
reg Vmalloc_t*	vm;	/* region being worked on		*/
int		flags;	/* flags must be in VM_FLAGS		*/
int		on;	/* !=0 if turning on, else turning off	*/
#endif
{
	reg int		mode;
	reg Vmdata_t*	vd = vm->data;

	if(flags == 0 && on == 0)
		return vd->mode;

	if(!(vd->mode&VM_TRUST) )
	{	if(ISLOCK(vd,0))
			return 0;
		SETLOCK(vd,0);
	}

	mode = vd->mode;

	if(on)
		vd->mode |=  (flags&VM_FLAGS);
	else	vd->mode &= ~(flags&VM_FLAGS);

	if(vd->mode&(VM_TRACE|VM_MTDEBUG))
		vd->mode &= ~VM_TRUST;

	CLRLOCK(vd,0);

	return mode;
}
