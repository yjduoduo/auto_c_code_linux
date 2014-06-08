#-------------------------------------------------
#
# Project created by QtCreator 2014-05-16T15:20:22
#
#-------------------------------------------------

QT       += core gui
QT       += widgets
TARGET = auto_c_code
TEMPLATE = app


SOURCES += main.cpp\
        autoccode.cpp \
    sqlite-3080403/sqlite3.c \
    prefix_string.cpp \
    gencodedatabase.cpp \
    dialog_select_database.cpp

HEADERS  += autoccode.h \
    sqlite-3080403/sqlite3ext.h \
    sqlite-3080403/sqlite3.h \
    prefix_string.h \
    version.h \
    gencodedatabase.h \
    dialog_select_database.h

FORMS    += autoccode.ui \
    PushDbdialog.ui \
    dialog_select_database.ui


INCLUDEPATH +=\
./sqlite-3080403

RC_FILE = autoapp.rc

RESOURCES +=

LIBS +=-lpthread -ldl
