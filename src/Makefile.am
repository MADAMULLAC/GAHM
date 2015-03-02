EXTRA_DIST = windows.h

bin_PROGRAMS = windows
shaderexample_SOURCES = windows.cpp

AM_CPPFLAGS = -DGL_GLEXT_PROTOTYPES -DGL3_PROTOTYPES
AM_CPPFLAGS += -std=c++11
AM_CPPFLAGS += $(gl_CFLAGS) $(glew_CFLAGS) $(sdl2_CFLAGS)
LIBS += $(gl_LIBS) $(glew_LIBS) $(sdl2_LIBS)


# whatever flags you want to pass to the C compiler & linker
#CFLAGS = -Wall -std=c++11
#LDFLAGS = -framework OpenGL -lsdl2 -lglew

# this lists the binaries to produce, the (non-PHONY, binary) targets in
# the previous manual Makefile
#bin_PROGRAMS = window
#window_SOURCES =
