/************** COPYRIGHT AND CONFIDENTIALITY INFORMATION ********************
**                                                                          **
** Copyright (c) 2014 Technicolor                                           **
** All Rights Reserved                                                      **
**                                                                          **
** This program contains proprietary information which is a trade           **
** secret of TECHNICOLOR and/or its affiliates and also is protected as     **
** an unpublished work under applicable Copyright laws. Recipient is        **
** to retain this program in confidence and is not permitted to use or      **
** make copies thereof other than as permitted in a written agreement       **
** with TECHNICOLOR, UNLESS OTHERWISE EXPRESSLY ALLOWED BY APPLICABLE LAWS. **
**                                                                          **
******************************************************************************/

#ifndef SOAPMETHODS_WANIPCONNECTION_H_INCLUDED
#define SOAPMETHODS_WANIPCONNECTION_H_INCLUDED

#include "../upnphttp.h"

void WANIPGetStatusInfo(struct upnphttp * h, const char * action);
void WANIPGetInfo(struct upnphttp * h, const char * action);
void WANIPGetConnectionTypeInfo(struct upnphttp * h, const char * action);
void WANIPGetExternalIPAddress(struct upnphttp * h, const char * action);

#endif

