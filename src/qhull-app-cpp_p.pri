# -------------------------------------------------
# qhull-app-cpp_p.pri -- Deprecated Qt include project for qhull as C++ with qh_QHpointer
# -------------------------------------------------

include(qhull-warn.pri)

DESTDIR = ../../bin
TEMPLATE = app
CONFIG += console warn_on
CONFIG -= rtti
LIBS += -L../../lib
build_pass:CONFIG(debug, debug|release){
   LIBS += -lqhullcpp_pd
   LIBS += -lqhullstatic_pd  # Must be last, otherwise qh_fprintf,etc. are loaded from here instead of qhullcpp-d.lib
   OBJECTS_DIR = Debug
}else:build_pass:CONFIG(release, debug|release){
   LIBS += -lqhullcpp_p
   LIBS += -lqhullstatic_p  # Must be last, otherwise qh_fprintf,etc. are loaded from here instead of qhullcpp.lib
   OBJECTS_DIR = Release
}
win32-msvc* : QMAKE_LFLAGS += /INCREMENTAL:NO

DEFINES += qh_QHpointer # libqhull/user.h

INCLUDEPATH += ../libqhullpcpp
INCLUDEPATH += ../../src # "libqhull/qhull_a.h"
