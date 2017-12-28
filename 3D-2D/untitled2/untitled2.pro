TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pose_estimation_3d2d.cpp
QMAKE_CXXFLAGS += -std=c++11 -O3#QMAKE_CXXFLAGS += -std=c++0x#QMAKE_CXXFLAGS += -std=c++11
#CONFIG   += c++11
INCLUDEPATH += /usr/local/include \
               /usr/include/eigen3\
               /usr/local/include/g2o\
               /usr/include/suitesparse \
               /usr/include/pcl-1.7  \
                    /usr/include/pcl-1.7/pcl  \
                    /usr/include/pcl-1.7/pcl/common  \
                    /usr/include/pcl-1.7/pcl/io
LIBS += /usr/local/lib/libg2o_cli.so  \
            /usr/local/lib/libg2o_core.so  \
            /usr/local/lib/libg2o_stuff.so  \
            /usr/local/lib/libg2o_types_slam2d.so  \
            /usr/local/lib/libg2o_types_slam3d.so  \
            /usr/local/lib/libg2o_solver_cholmod.so  \
            /usr/local/lib/libg2o_solver_csparse.so  \
            /usr/local/lib/libg2o_csparse_extension.so  \
            /usr/lib/libcxsparse.so \
            /usr/lib/libpcl_common.so.1.7 \
            /usr/lib/libpcl_io.so.1.7 \
            /usr/lib/libpcl_io_ply.so.1.7 \
           /usr/local/lib/libopencv_*.so

