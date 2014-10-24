#ifndef MAT_H
#define MAT_H

#include <windows.h>
#include <d3d11.h>
#include <xnamath.h>
#include <vector>

struct SurfaceMaterial
{
	std::wstring matName;
	XMFLOAT4 difColor;
	int texArrayIndex;
	int normMapTexArrayIndex;
	bool hasNormMap;
	bool hasTexture;
	bool transparent;
};
#endif