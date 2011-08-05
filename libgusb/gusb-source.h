/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2010-2011 Richard Hughes <richard@hughsie.com>
 * Copyright (C) 2011 Hans de Goede <hdegoede@redhat.com>
 *
 * Licensed under the GNU Lesser General Public License Version 2.1
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 */

#ifndef __USB_MAINLOOP_H__
#define __USB_MAINLOOP_H__

#include <glib.h>

G_BEGIN_DECLS

typedef struct _GUsbSource GUsbSource;

GUsbSource	*g_usb_source_new		(GMainContext	*main_ctx,
						 void		*libusb_ctx);
void		 g_usb_source_destroy		(GUsbSource	*source);

void		 g_usb_source_set_callback	(GUsbSource	*source,
						 GSourceFunc	 func,
						 gpointer	 data,
						 GDestroyNotify	 notify);

G_END_DECLS

#endif /* __USB_MAINLOOP_H__ */