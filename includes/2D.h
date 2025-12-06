/*2D.h*/
/*PreEditBoxTool copyright(c)*/

#ifndef _2D_H_
#define _2D_H_

#define X_AXIS 0x00
#define Y_AXIS 0x01
#define Z_AXIS 0x02

typedef float vec_t;
typedef vec_t vec3_t;
typedef vec_t vec4_t;

class BoxTool2D {
public:
   BoxTool2D();
   virtual ~BoxTool2D();

   int viewtype;

   int rows;
   int columns;

   bool bZoomIn;
   bool bZoomOut;
   bool bDrag;

   int drag_direction;

   vec3_t mouse_position;
   vec3_t origin;

   vec3_t scale;

   int 2D_size;

   enum : int {
     engineer_grid = 0x0,
     editor_grid = 0x1
   } 

   virtual void Paint() = 0;
   virtual void PrintDimensions() = 0;

   virtual void OverrideBackground() = 0;

   unsigned char RGBAPixelBuff;
   
};

#endif
