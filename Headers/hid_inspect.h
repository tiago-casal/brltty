/*
 * BRLTTY - A background process providing access to the console screen (when in
 *          text mode) for a blind person using a refreshable braille display.
 *
 * Copyright (C) 1995-2025 by The BRLTTY Developers.
 *
 * BRLTTY comes with ABSOLUTELY NO WARRANTY.
 *
 * This is free software, placed under the terms of the
 * GNU Lesser General Public License, as published by the Free Software
 * Foundation; either version 2.1 of the License, or (at your option) any
 * later version. Please see the file LICENSE-LGPL for details.
 *
 * Web Page: http://brltty.app/
 *
 * This software is maintained by Dave Mielke <dave@mielke.cc>.
 */

#ifndef BRLTTY_INCLUDED_HID_INSPECT
#define BRLTTY_INCLUDED_HID_INSPECT

#include "hid_types.h"
#include "strfmth.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef struct {
  unsigned char count;
  HidReportIdentifier identifiers[];
} HidReports;

extern HidReports *hidGetReports (const HidItemsDescriptor *items);

typedef int HidItemLister (const char *line, void *data);
extern int hidListItems (const HidItemsDescriptor *items, HidItemLister *listItem, void *data);

extern STR_DECLARE_FORMATTER(hidFormatUsageFlags, HidUnsignedValue flags);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* BRLTTY_INCLUDED_HID_INSPECT */
