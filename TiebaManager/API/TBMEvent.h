﻿/*
Copyright (C) 2015  xfgryujk
http://tieba.baidu.com/f?kw=%D2%BB%B8%F6%BC%AB%C6%E4%D2%FE%C3%D8%D6%BB%D3%D0xfgryujk%D6%AA%B5%C0%B5%C4%B5%D8%B7%BD

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#pragma once
#include "TiebaManagerCommon.h"
#include <EventHelper.h>


enum TIEBA_MANAGER_API TBMEventID
{
	MainDialogPostInitEvent,		// CEventBase，主对话框初始化后触发
	MainDialogCloseEvent,			// CEventBase，主对话框关闭
	MainDialogDestroyEvent,			// CEventBase，主对话框销毁

	PreSetTiebaEvent,				// CSetTiebaEvent，准备确认贴吧
	PostSetTiebaEvent,				// CSetTiebaEvent，确认贴吧成功后

	OpenLinkInLogEvent				// COpenLinkEvent，打开日志中的链接
};

class TIEBA_MANAGER_API CSetTiebaEvent : public CEventBase
{
public:
	const CString& m_forumName;

	CSetTiebaEvent(const CString& forumName);
};

class TIEBA_MANAGER_API COpenLinkEvent : public CEventBase
{
public:
	const CString& m_url;

	COpenLinkEvent(const CString& url);
};