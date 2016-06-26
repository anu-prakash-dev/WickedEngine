#pragma once

// deferred context ids
enum GRAPHICSTHREAD
{
	GRAPHICSTHREAD_IMMEDIATE,
	GRAPHICSTHREAD_REFLECTIONS,
	GRAPHICSTHREAD_SCENE,
	GRAPHICSTHREAD_MISC1,
	GRAPHICSTHREAD_MISC2,
	GRAPHICSTHREAD_MISC3,
	GRAPHICSTHREAD_COUNT
};

// Do not alter order because it is bound to lua manually
enum RENDERTYPE
{
	RENDERTYPE_VOID			= 0x0000000,
	RENDERTYPE_OPAQUE		= 0x0000001,
	RENDERTYPE_TRANSPARENT	= 0x0000010,
	RENDERTYPE_WATER		= 0x0000100,
	RENDERTYPE_LIGHT		= 0x0001000,
	RENDERTYPE_DECAL		= 0x0010000,
	RENDERTYPE_ENVPROBE		= 0x0100000,
};
enum PICKTYPE
{
	PICK_VOID				= RENDERTYPE_VOID,
	PICK_OPAQUE				= RENDERTYPE_OPAQUE,
	PICK_TRANSPARENT		= RENDERTYPE_TRANSPARENT,
	PICK_WATER				= RENDERTYPE_WATER,
	PICK_LIGHT				= RENDERTYPE_LIGHT,
	PICK_DECAL				= RENDERTYPE_DECAL,
	PICK_ENVPROBE			= RENDERTYPE_ENVPROBE,
};

enum SHADERTYPE
{
	SHADERTYPE_TEXTURE,
	SHADERTYPE_DEFERRED,
	SHADERTYPE_FORWARD,
};

// stencils
enum STENCILREF {
	STENCILREF_EMPTY = 0x00,
	STENCILREF_SKY = 0x01,
	STENCILREF_DEFAULT = 0x02,
	STENCILREF_TRANSPARENT = 0x03,
	STENCILREF_CHARACTER = 0x04,
	STENCILREF_SHADELESS = 0x05,
	STENCILREF_SKIN = 0x06,
	STENCILREF_LAST = 0xFF
};

// constant buffers
enum CBTYPES
{
	CBTYPE_WORLD,
	CBTYPE_FRAME,
	CBTYPE_CAMERA,
	CBTYPE_MATERIAL,
	CBTYPE_DIRLIGHT,
	CBTYPE_MISC,
	CBTYPE_POINTLIGHT,
	CBTYPE_SPOTLIGHT,
	CBTYPE_VOLUMELIGHT,
	CBTYPE_DECAL,
	CBTYPE_CUBEMAPRENDER,
	CBTYPE_SHADOW,
	CBTYPE_CLIPPLANE,
	CBTYPE_LAST
};

// resource buffers (StructuredBuffer, Buffer, etc.)
enum RBTYPES
{
	RBTYPE_BONE,
	RBTYPE_LAST
};

// vertex shaders
enum VSTYPES
{
	VSTYPE_OBJECT,
	VSTYPE_OBJECT10,
	VSTYPE_OBJECT_REFLECTION,
	VSTYPE_SHADOW,
	VSTYPE_LINE,
	VSTYPE_TRAIL,
	VSTYPE_WATER,
	VSTYPE_DIRLIGHT,
	VSTYPE_POINTLIGHT,
	VSTYPE_SPOTLIGHT,
	VSTYPE_VOLUMESPOTLIGHT,
	VSTYPE_VOLUMEPOINTLIGHT,
	VSTYPE_SHADOWCUBEMAPRENDER,
	VSTYPE_STREAMOUT,
	VSTYPE_SKY,
	VSTYPE_SKY_REFLECTION,
	VSTYPE_DECAL,
	VSTYPE_ENVMAP,
	VSTYPE_ENVMAP_SKY,
	VSTYPE_SPHERE,
	VSTYPE_LAST
};
// pixel shaders
enum PSTYPES
{
	PSTYPE_OBJECT_DEFERRED,
	PSTYPE_OBJECT_DEFERRED_NORMALMAP,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_NORMALMAP,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_TRANSPARENT,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_TRANSPARENT_NORMALMAP,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_PLANARREFLECTION,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_NORMALMAP_PLANARREFLECTION,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_TRANSPARENT_PLANARREFLECTION,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_TRANSPARENT_NORMALMAP_PLANARREFLECTION,
	PSTYPE_SHADOW,
	PSTYPE_LINE,
	PSTYPE_TRAIL,
	PSTYPE_SIMPLEST,
	PSTYPE_BLACKOUT,
	PSTYPE_TEXTUREONLY,
	PSTYPE_WATER,
	PSTYPE_ENVIRONMENTALLIGHT,
	PSTYPE_DIRLIGHT,
	PSTYPE_DIRLIGHT_SOFT,
	PSTYPE_POINTLIGHT,
	PSTYPE_SPOTLIGHT,
	PSTYPE_VOLUMELIGHT,
	PSTYPE_SHADOWCUBEMAPRENDER,
	PSTYPE_DECAL,
	PSTYPE_SKY,
	PSTYPE_SKY_REFLECTION,
	PSTYPE_SUN,
	PSTYPE_ENVMAP,
	PSTYPE_ENVMAP_SKY,
	PSTYPE_CUBEMAP,
	PSTYPE_LAST
};
// geometry shaders
enum GSTYPES
{
	GSTYPE_SHADOWCUBEMAPRENDER,
	GSTYPE_STREAMOUT,
	GSTYPE_ENVMAP,
	GSTYPE_ENVMAP_SKY,
	GSTYPE_LAST
};
// hull shaders
enum HSTYPES
{
	HSTYPE_OBJECT,
	HSTYPE_LAST
};
// domain shaders
enum DSTYPES
{
	DSTYPE_OBJECT,
	DSTYPE_LAST
};
// compute shaders
enum CSTYPES
{
	CSTYPE_LUMINANCE_PASS1,
	CSTYPE_LUMINANCE_PASS2,
	CSTYPE_LAST
};

// vertex layouts
enum VLTYPES
{
	VLTYPE_EFFECT,
	VLTYPE_LINE,
	VLTYPE_TRAIL,
	VLTYPE_STREAMOUT,
	VLTYPE_LAST
};
// rasterizer states
enum RSTYPES
{
	RSTYPE_FRONT,
	RSTYPE_BACK,
	RSTYPE_DOUBLESIDED,
	RSTYPE_WIRE,
	RSTYPE_WIRE_SMOOTH,
	RSTYPE_WIRE_DOUBLESIDED,
	RSTYPE_WIRE_DOUBLESIDED_SMOOTH,
	RSTYPE_SHADOW,
	RSTYPE_SHADOW_DOUBLESIDED,
	RSTYPE_LAST
};
// depth-stencil states
enum DSSTYPES
{
	DSSTYPE_DEFAULT,
	DSSTYPE_XRAY,
	DSSTYPE_DEPTHREAD,
	DSSTYPE_DIRLIGHT,
	DSSTYPE_LIGHT,
	DSSTYPE_STENCILREAD_MATCH,
	DSSTYPE_LAST
};
// blend states
enum BSTYPES
{
	BSTYPE_OPAQUE,
	BSTYPE_TRANSPARENT,
	BSTYPE_ADDITIVE,
	BSTYPE_LAST
};