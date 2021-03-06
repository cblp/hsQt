/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGLPixelBuffer_DhClass.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:54
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_opengl.h>
#include <DhAutohead_opengl.h>
#endif

class DhQGLPixelBuffer : public DynamicQHandler, public QGLPixelBuffer
{
private: 
  static QHash<QByteArray, int> initXhHash();
  static QHash<QByteArray, int> xhHash;
public:
  bool setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr);
  bool unSetDynamicQHandler(char * eventId);
  bool setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr);
  bool unSetDynamicQHandlerud(int udtyp, int eventId);
  void userDefined(int x1) const;
  QVariant* userDefinedVariant(int x1, QVariant* x2) const;
  explicit DhQGLPixelBuffer(const QSize& x1) : DynamicQHandler(), QGLPixelBuffer(x1) {};
  explicit DhQGLPixelBuffer(const QSize& x1, const QGLFormat& x2) : DynamicQHandler(), QGLPixelBuffer(x1, x2) {};
  explicit DhQGLPixelBuffer(int x1, int x2) : DynamicQHandler(), QGLPixelBuffer(x1, x2) {};
  explicit DhQGLPixelBuffer(const QSize& x1, const QGLFormat& x2, QGLWidget* x3) : DynamicQHandler(), QGLPixelBuffer(x1, x2, x3) {};
  explicit DhQGLPixelBuffer(int x1, int x2, const QGLFormat& x3) : DynamicQHandler(), QGLPixelBuffer(x1, x2, x3) {};
  explicit DhQGLPixelBuffer(int x1, int x2, const QGLFormat& x3, QGLWidget* x4) : DynamicQHandler(), QGLPixelBuffer(x1, x2, x3, x4) {};
  int devType() const;
  int DhdevType() const;
  int DvhdevType() const;
  int metric(QPaintDevice::PaintDeviceMetric x1) const;
  int Dhmetric(long x1) const;
  int Dvhmetric(long x1) const;
  QPaintEngine* paintEngine() const;
  QPaintEngine* DhpaintEngine() const;
  QPaintEngine* DvhpaintEngine() const;
  ~DhQGLPixelBuffer(){}
};

