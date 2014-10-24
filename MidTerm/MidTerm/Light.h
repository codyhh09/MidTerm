#ifndef Light_H
#define Light_H

#include <windows.h>
#include <d3d11.h>
#include <xnamath.h>
#include <vector>

struct Light{
	Light(){
		ZeroMemory(this, sizeof(Light));
	}
	XMFLOAT3 pos;
	float range;
	XMFLOAT3 dir;
	float cone;
	XMFLOAT3 att;
	float pad2;
	XMFLOAT4 ambient;
	XMFLOAT4 diffuse;
};
#endif