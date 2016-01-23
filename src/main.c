/*******************************************************************************\
 * C.c -- Description File.                                                    *
 * Copyright (C) 2015  Teofanes Enrique Paz Moron <teofanesp12@gmail.com>      *
 *                                                                             *
 * This program is free software: you can redistribute it and/or modify        *
 * it under the terms of the GNU General Public License as published by        *
 * the Free Software Foundation, either version 3 of the License, or           *
 * (at your option) any later version.                                         *
 *                                                                             *
 * This program is distributed in the hope that it will be useful,             *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of              *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the               *
 * GNU General Public License for more details.                                *
 *                                                                             *
 * You should have received a copy of the GNU General Public License           *
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.       *
 *******************************************************************************/

#include <config.h>
#include <stdio.h>


#include <langinfo.h>
#include <glib/gi18n-lib.h>
#include <locale.h>

int
main (void)
{
  setlocale (LC_ALL, "");
  bindtextdomain (GETTEXT_PACKAGE, LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
  puts ( _ ("Hello World!") );
  puts ("This is " PACKAGE_STRING ".");
  return 0;
}
