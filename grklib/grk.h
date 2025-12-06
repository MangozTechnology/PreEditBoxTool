/*grk.h*/

#ifndef _GRK_
#define _GRK_

#define GRK_PIXEL 0x000
#define GRK_POINT 0x001
#define GRK_PLANE 0x002
#define GRK_FACE 0x003
#define GRK_POLYGON 0x004
#define GRK_BOX 0x005
#define GRK_BRUSH 0x006
#define GRK_LINE 0x007
#define GRK_TEXTURE 0x008
#define GRK_MODEL 0x009

typedef void (*grkRender)(int obj);
typedef void (*grkEnd)();

#endif
