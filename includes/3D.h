/*3D.h*/
/*PreEditBoxTool copyright(c)*/

#ifndef _3D_H_
#define _3D_H_

#include "2D.h"

/*
  3D Camera Implementation
*/
class BoxTool3D : public BoxTool2D {
public:
   BoxTool3D();
   virtual ~BoxTool3D();

   bool bIsGL;
   bool IsD3D;

   int x_pos;
   int y_pos;
   int width;
   int height;

   unsigned char RGBACameraColor;

   int lightmode;

   bool bFreeze;

   vec3_t origin;
   vec3_t angles;
   vec3_t* prev_angles;

   float near;
   float far;

   float zBuffer;

   int m_nBrushCount;
   int m_nEntityCount;
   int m_nPlaneCount;
   int m_nFaceCount;

   virtual void senderConnectLast(BoxTool3D& camera) = 0;

   virtual void ShowBrush() = 0;
   virtual void ShowEntity() = 0;
   virtual void ShowWorkzone() = 0;

   virtual void CameraSelectBrush() = 0;
   virtual void CamersSelectSide() = 0;

   virtual void AddToSceneGraph() = 0;

   virtual void CameraCreateBrush() = 0;


};

#endif
