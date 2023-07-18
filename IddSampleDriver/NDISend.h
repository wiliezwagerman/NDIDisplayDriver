#pragma once
#pragma once

#include <dxgi1_5.h>
#include <d3d11_2.h>
#include <avrt.h>
#include <wrl.h>

#include <memory>
#include <vector>

#include <csignal>
#include <cstddef>
#include <cstring>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <atomic>
#include <Processing.NDI.Lib.h>
#include <queue>

using namespace Microsoft::WRL;


class NDISend
{
public:
	NDISend();
	void Init(char* StreamName);
	void QueFrame(ID3D11Texture2D* buffer);
	void SendVideo();

private:
	ID3D11Texture2D* FrameBuffer;
};

