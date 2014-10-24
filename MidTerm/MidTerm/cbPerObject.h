#ifndef CB_H
#define CB_H

#include <windows.h>
#include <d3d11.h>
#include <xnamath.h>
#include <vector>

// Create effects constant buffer's structure//
struct cbPerObject{
	XMMATRIX  WVP;
	XMMATRIX World;

	// These will be used for the pixel shader
	XMFLOAT4 difColor;
	BOOL hasTexture;
	// Because of HLSL structure packing, we will use windows BOOL
	// instead of bool because HLSL packs things into 4 bytes, and
	// bool is only one byte, where BOOL is 4 bytes
	BOOL hasNormMap;
};

#endif