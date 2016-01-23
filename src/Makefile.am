bin_PROGRAMS = hello

AM_CPPFLAGS = \
	-DUI_DIR=\""$(datadir)/amhello"\" \
	-DVERSION=\""$(VERSION)"\" \
	-DLOCALE_DIR=\""$(localedir)"\" \
	-DGETTEXT_PACKAGE=\"$(GETTEXT_PACKAGE)\" \
	-w \
	$(AMHELLO_CFLAGS)

hello_SOURCES = main.c

hello_LDADD = \
	$(AMHELLO_LIBS)
