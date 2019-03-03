DEFINES -= UNICODE
TEMPLATE = app
TARGET = QjSimple
QT += core \
    gui \
    xml \
    widgets \
    network
HEADERS += buddy.h \
    PjCallback.h \
    accountdialog.h \
    debugdialog.h \
    addbuddydialog.h \
    imwidget.h \
    qjsimple.h
SOURCES += buddy.cpp \
    PjCallback.cpp \
    accountdialog.cpp \
    debugdialog.cpp \
    addbuddydialog.cpp \
    imwidget.cpp \
    main.cpp \
    qjsimple.cpp
FORMS += accountdialog.ui \
    debugdialog.ui \
    addbuddydialog.ui \
    imwidget.ui \
    qjsimple.ui
RESOURCES += icons.qrc
win32-g++:RC_FILE = appicon.rc
INCLUDEPATH += ../pjsip/trunk/pjlib/include \
    ../pjsip/trunk/pjlib-util/include \
    ../pjsip/trunk/pjnath/include \
    ../pjsip/trunk/pjmedia/include \
    ../pjsip/trunk/pjsip/include
LIBS += -L../pjsip/trunk/pjlib/lib \
    -L../pjsip/trunk/pjlib-util/lib \
    -L../pjsip/trunk/pjnath/lib \
    -L../pjsip/trunk/pjmedia/lib \
    -L../pjsip/trunk/pjsip/lib \
    -L../pjsip/trunk/third_party/lib

# INCLUDEPATH += ../pjproject-1.5.5/pjlib/include \
# ../pjproject-1.5.5/pjlib-util/include \
# ../pjproject-1.5.5/pjnath/include \
# ../pjproject-1.5.5/pjmedia/include \
# ../pjproject-1.5.5/pjsip/include
# LIBS += -L../pjproject-1.5.5/pjlib/lib \
# -L../pjproject-1.5.5/pjlib-util/lib \
# -L../pjproject-1.5.5/pjnath/lib \
# -L../pjproject-1.5.5/pjmedia/lib \
# -L../pjproject-1.5.5/pjsip/lib \
# -L../pjproject-1.5.5/third_party/lib
# INCLUDEPATH += ../pjproject-1.4/pjlib/include \
# ../pjproject-1.4/pjlib-util/include \
# ../pjproject-1.4/pjnath/include \
# ../pjproject-1.4/pjmedia/include \
# ../pjproject-1.4/pjsip/include
# LIBS += -L../pjproject-1.4/pjlib/lib \
# -L../pjproject-1.4/pjlib-util/lib \
# -L../pjproject-1.4/pjnath/lib \
# -L../pjproject-1.4/pjmedia/lib \
# -L../pjproject-1.4/pjsip/lib \
# -L../pjproject-1.4/third_party/lib
# win32-g++:LIBS += -L../openssl-0.9.8g
win32-g++:LIBS += -L../OpenSSL/lib/mingw
win32-g++:LIBS += -lpjsua-x86_64-unknown-mingw32 \
    -lpjsip-ua-x86_64-unknown-mingw32 \
    -lpjsip-simple-x86_64-unknown-mingw32 \
    -lpjsip-x86_64-unknown-mingw32 \
    -lpjmedia-codec-x86_64-unknown-mingw32 \
    -lpjmedia-x86_64-unknown-mingw32 \
    -lpjmedia-codec-x86_64-unknown-mingw32 \
    -lpjmedia-audiodev-x86_64-unknown-mingw32 \
    -lpjnath-x86_64-unknown-mingw32 \
    -lpjlib-util-x86_64-unknown-mingw32 \
    -lpj-x86_64-unknown-mingw32 \
    -lportaudio-x86_64-unknown-mingw32 \
    -lgsmcodec-x86_64-unknown-mingw32 \
    -lilbccodec-x86_64-unknown-mingw32 \
    -lspeex-x86_64-unknown-mingw32 \
    -lresample-x86_64-unknown-mingw32 \
    -lmilenage-x86_64-unknown-mingw32 \
    -lsrtp-x86_64-unknown-mingw32 \
    -lm \
    -lwinmm \
    -lole32 \
    -lws2_32 \
    -lwsock32 \
    -lssl \
    -lcrypto \
    -lgdi32
linux-g++:LIBS += -lpjsua-x86_64-unknown-linux-gnu \
    -lpjsip-ua-x86_64-unknown-linux-gnu \
    -lpjsip-simple-x86_64-unknown-linux-gnu \
    -lpjsip-x86_64-unknown-linux-gnu \
    -lpjmedia-codec-x86_64-unknown-linux-gnu \
    -lpjmedia-x86_64-unknown-linux-gnu \
    -lpjmedia-videodev-x86_64-unknown-linux-gnu \
    -lpjmedia-audiodev-x86_64-unknown-linux-gnu \
    -lpjnath-x86_64-unknown-linux-gnu \
    -lpjlib-util-x86_64-unknown-linux-gnu \
    -lpj-x86_64-unknown-linux-gnu \
    -lg7221codec-x86_64-unknown-linux-gnu \
    -lportaudio \
    -lgsmcodec-x86_64-unknown-linux-gnu \
    -lilbccodec-x86_64-unknown-linux-gnu \
    -lspeex-x86_64-unknown-linux-gnu \
    -lresample-x86_64-unknown-linux-gnu \
    #-lmilenage-x86_64-unknown-linux-gnu \
    -lsrtp-x86_64-unknown-linux-gnu \
    -lwebrtc-x86_64-unknown-linux-gnu \
    -lm \
    -lpthread \
    -lssl \
    -lcrypto \
    -lasound #\
    #-luuid
linux-g++-64:LIBS += -lpjsua-x86_64-unknown-unknown-linux-gnu \
    -lpjsip-ua-x86_64-unknown-unknown-linux-gnu \
    -lpjsip-simple-x86_64-unknown-unknown-linux-gnu \
    -lpjsip-x86_64-unknown-unknown-linux-gnu \
    -lpjmedia-codec-x86_64-unknown-unknown-linux-gnu \
    -lpjmedia-x86_64-unknown-unknown-linux-gnu \
    -lpjmedia-videodev-x86_64-unknown-unknown-linux-gnu \
    -lpjmedia-audiodev-x86_64-unknown-unknown-linux-gnu \
    -lpjnath-x86_64-unknown-unknown-linux-gnu \
    -lpjlib-util-x86_64-unknown-unknown-linux-gnu \
    -lpj-x86_64-unknown-unknown-linux-gnu \
    -lportaudio2 \
#-x86_64-unknown-unknown-linux-gnu \
    -lgsmcodec-x86_64-unknown-unknown-linux-gnu \
    -lilbccodec-x86_64-unknown-unknown-linux-gnu \
    -lspeex-x86_64-unknown-unknown-linux-gnu \
    -lresample-x86_64-unknown-unknown-linux-gnu \
    #-lmilenage-x86_64-unknown-unknown-linux-gnu \
    -lsrtp-x86_64-unknown-unknown-linux-gnu \
    -lm \
    -lpthread \
    -lssl \
    -lcrypto \
    -lasound #\
    #-luuid
macx-g++:LIBS += -lpjsua-i386-apple-darwin9.7.1 \
    -lpjsip-ua-i386-apple-darwin9.7.1 \
    -lpjsip-simple-i386-apple-darwin9.7.1 \
    -lpjsip-i386-apple-darwin9.7.1 \
    -lpjmedia-i386-apple-darwin9.7.1 \
    -lpjmedia-i386-apple-darwin9.7.1 \
    -lpjmedia-codec-i386-apple-darwin9.7.1 \
    -lpjmedia-audiodev-i386-apple-darwin9.7.1 \
    -lpjnath-i386-apple-darwin9.7.1 \
    -lpjlib-util-i386-apple-darwin9.7.1 \
    -lpj-i386-apple-darwin9.7.1 \
    -lportaudio-i386-apple-darwin9.7.1 \
    -lgsmcodec-i386-apple-darwin9.7.1 \
    -lilbccodec-i386-apple-darwin9.7.1 \
    -lspeex-i386-apple-darwin9.7.1 \
    -lresample-i386-apple-darwin9.7.1 \
    -lmilenage-i386-apple-darwin9.7.1 \
    -lsrtp-i386-apple-darwin9.7.1 \
    -lm \
    -lpthread \
    -lssl \
    -lcrypto \
    -framework \
    CoreAudio \
    -framework \
    AudioToolbox \
    -framework \
    AudioUnit
OTHER_FILES += Changelog
