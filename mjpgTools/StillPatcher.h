// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////// //
// StillPatcher.h:	part of the mjpgTools Library																		 //
//					Declaration of the function that launches the thread which does the 'real' work						 //
// --------------------------------------------------------------------------------------------------------------------- //
// Copyleft(c)2002 by Laurens KOEHOORN <https://sourceforge.net/sendmessage.php?touser=240832>							 //
//																														 //
// This library is free software; you can redistribute it and/or modify it under the terms of the						 //
// GNU Lesser General Public License as published by the Free Software Foundation; either version 2.1 of the License,	 //
// or (at your option) any later version.																				 //
//																														 //
// This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied	 //
// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.														 //
// See the GNU Lesser General Public License for more details.															 //
//																														 //
// You should have received a copy of the GNU Lesser General Public License along with this library; if not,			 //
// write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA					 //
// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////// //

#if !defined(AFX_STILLPATCHER_H__9E99392C_9955_11D6_811F_0050BF61B407__INCLUDED_)
#define AFX_STILLPATCHER_H__9E99392C_9955_11D6_811F_0050BF61B407__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

void stillPatcher_Thread( void* arg );

// /////////////////////////////////////////////////////////////////////
// Extra Tool : determines the type of the MPEG (if it's a MPeG at all)
int GetMpegType(LPCTSTR stream);

#endif // !defined(AFX_STILLPATCHER_H__9E99392C_9955_11D6_811F_0050BF61B407__INCLUDED_)
