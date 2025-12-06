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

   //grid type
   enum : int {
     engineer_grid = 0x0,
     editor_grid = 0x1
   } 

   virtual void Paint() = 0;
   virtual void PrintDimensions() = 0;

   //for changing background event
   virtual void OverrideBackground() = 0;

   //background color
   unsigned char RGBAPixelChannel;

   virtual void ConnectLast2D(BoxTool2D& prev2d) = 0;

   //picture
   unsigned char** pic;

   const char* Label;

   char xyBuff[2048];

   virtual void DoPenColor(BoxTool2D& box, unsigned char& COLOR)= 0;
   virtual void Do3DBox() = 0;
   virtual void DoBrushCreation() = 0;
   virtual void DoDynamicCreation() = 0;
   virtual void DoStaticCreation() = 0;
   virtual void DoBrushFaceCreation() = 0;
   virtual void DoPlaneCreation() = 0;
   virtual void DoWindingCreation() = 0;
   virtual void DoSelection() = 0;

   virtual void SelectBrush() = 0;
   virtual void SelectFace() = 0;
   virtual void SelectVertex() = 0;
   virtual void SelectBox() = 0;

   //enables drawing, selecting, dragging and zooming
   bool bXYGlobalMode;

   virtual void Update() = 0;
   virtual void QueueDraw() = 0;
   virtual void QueueXY() = 0;
   virtual void QueueXZ() = 0;
   virtual void QueueYZ() = 0;
   
   virtual bool ZoomIn(BoxTool2D& view, int type) = 0;
   virtual bool ZoomOut(BoxTool2D& view, int type) = 0;
   


};

#endif
