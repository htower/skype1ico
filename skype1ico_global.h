#ifndef SKYPE1ICO_GLOBAL_H
#define SKYPE1ICO_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SKYPE1ICO_LIBRARY)
#  define SKYPE1ICOSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SKYPE1ICOSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SKYPE1ICO_GLOBAL_H
