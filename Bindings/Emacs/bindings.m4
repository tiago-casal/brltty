###############################################################################
# libbrlapi - A library providing access to braille terminals for applications.
#
# Copyright (C) 2006-2025 by Dave Mielke <dave@mielke.cc>
#
# libbrlapi comes with ABSOLUTELY NO WARRANTY.
#
# This is free software, placed under the terms of the
# GNU Lesser General Public License, as published by the Free Software
# Foundation; either version 2.1 of the License, or (at your option) any
# later version. Please see the file LICENSE-LGPL for details.
#
# Web Page: http://brltty.app/
#
# This software is maintained by Dave Mielke <dave@mielke.cc>.
###############################################################################

AC_DEFUN([BRLTTY_EMACS_BINDINGS], [dnl
EMACS_OK=false
EMACS=""

AC_CHECK_HEADER([emacs-module.h], [dnl
   AC_PATH_PROG([EMACS], [emacs])

   if test -n "${EMACS}"
   then
      AC_MSG_NOTICE([emacs editor: ${EMACS}])
      EMACS_OK=true
   else
      AC_MSG_WARN([emacs editor not found])
      EMACS="EMACS_EDITOR_NOT_FOUND_BY_CONFIGURE"
   fi
])

AC_SUBST([EMACS_OK])
AC_SUBST([EMACS])
AC_SUBST([EMACS_SUBDIRECTORY], [Emacs])
])
