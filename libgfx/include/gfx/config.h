/* include/gfx/config.h.  Generated automatically by configure.  */
/* This -*- C -*- file is meant to be processed by the configure script */

/* Define this if your compiler doesn't support the new C++ 'bool' type */
#define HAVE_BOOL 1

/* Define if your system supports rint() */
#define HAVE_RINT 1

/* Define if your system supports getrusage() */
#define HAVE_GETRUSAGE 1

/* Define if your system does not support getrusage() but supports times() */
#define HAVE_TIMES 1

/* Define if your system supports random() as opposed to just rand() */
/* #undef HAVE_RANDOM */

/* Define if the STL hash_map template is available */
/* #undef HAVE_HASH_MAP */

/* Define if the STL valarray  template is available */
#define HAVE_VALARRAY 1

/* Define if the ANSI standard <sstream> is available */
#define HAVE_SSTREAM 1

/* Define if the pre-ANSI <strstream> is available */
#define HAVE_STRSTREAM 1

/* ***** GUI & Image configuration section ***** */

/* Define if the FLTK GUI toolkit is available */
/* #undef HAVE_FLTK */

/* Define if FLTK OpenGL support is available */
/* #undef HAVE_FLTK_GL */

/* Define if Sam Leffler's libtiff is available */
#define HAVE_LIBTIFF 1

/* Define the libtiff LZW is available */
/* #undef HAVE_LIBTIFF_LZW */

/* Define if libpng is available */
#define HAVE_LIBPNG 1

/* Define if the Independent JPEG Group's libjpeg is available */
#define HAVE_LIBJPEG 1

/* ***** OpenGL configuration section ***** */

/* Define to the name of OpenGL implementation (e.g., "OpenGL" or "Mesa") */
#define HAVE_OPENGL "OpenGL"

/* Define if glPolygonOffsetEXT is available */
#define HAVE_POLYOFFSET_EXT 1

/* Define if glPolygonOffset is available */
#define HAVE_POLYOFFSET 1

/* Define if <GL/glext.h> header is available */
#define HAVE_GL_GLEXT_H 1

/* Define if <GL/glxext.h> header is available */
/* #undef HAVE_GL_GLXEXT_H */

/* Define if <GL/wglext.h> header is available */
/* #undef HAVE_GL_WGLEXT_H */
