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

#ifndef BRLTTY_INCLUDED_OPTIONS
#define BRLTTY_INCLUDED_OPTIONS

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

extern char *opt_tablesDirectory;
extern char *opt_textTable;
extern char *opt_contractionTable;
extern char *opt_attributesTable;
extern char *opt_keyboardTable;

extern char *opt_driversDirectory;
extern char *opt_helpersDirectory;

extern char *opt_brailleDevice;
extern int opt_releaseDevice;
extern int opt_quietIfNoBraille;

extern char *opt_pcmDevice;
extern char *opt_midiDevice;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* BRLTTY_INCLUDED_OPTIONS */
