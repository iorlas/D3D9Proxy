//Function callbacks prototypes...
#pragma region Dammit, im too lazy to get done it...
/*
typedef boost::function<void(IDirect3DDevice9* device, REFIID riid, void** ppvObj)> D3D9DeviceQueryInterfaceFunc;
typedef boost::function<void(IDirect3DDevice9* device)> D3D9DeviceAddRefFunc;
typedef boost::function<void(IDirect3DDevice9* device)> D3D9DeviceReleaseFunc;
typedef boost::function<void(IDirect3DDevice9* device)> D3D9DeviceTestCooperativeLevelFunc;
typedef boost::function<void(IDirect3DDevice9* device)> D3D9DeviceGetAvailableTextureMemFunc;
typedef boost::function<void(IDirect3DDevice9* device)> D3D9DeviceEvictManagedResourcesFunc;
typedef boost::function<void(IDirect3DDevice9* device, IDirect3D9** ppD3D9)> D3D9DeviceGetDirect3DFunc;
typedef boost::function<void(IDirect3DDevice9* device, D3DCAPS9* pCaps)> D3D9DeviceGetDeviceCapsFunc;
typedef boost::function<void(IDirect3DDevice9* device, UINT iSwapChain, D3DDISPLAYMODE* pMode)> D3D9DeviceGetDisplayModeFunc;
typedef boost::function<void(IDirect3DDevice9* device, D3DDEVICE_CREATION_PARAMETERS *pParameters)> D3D9DeviceGetCreationParametersFunc;
typedef boost::function<void(IDirect3DDevice9* device, UINT XHotSpot, UINT YHotSpot, IDirect3DSurface9* pCursorBitmap)> D3D9DeviceSetCursorPropertiesFunc;
typedef boost::function<void(IDirect3DDevice9* device, int X, int Y, DWORD Flags)> D3D9DeviceSetCursorPositionFunc;
typedef boost::function<void(IDirect3DDevice9* device, BOOL bShow)> D3D9DeviceShowCursorFunc;
typedef boost::function<void(IDirect3DDevice9* device, D3DPRESENT_PARAMETERS* pPresentationParameters, IDirect3DSwapChain9** pSwapChain)> D3D9DeviceCreateAdditionalSwapChainFunc;
typedef boost::function<void(IDirect3DDevice9* device, UINT iSwapChain, IDirect3DSwapChain9** pSwapChain)> D3D9DeviceGetSwapChainFunc;
typedef boost::function<void(IDirect3DDevice9* device)> D3D9DeviceGetNumberOfSwapChainsFunc;
typedef boost::function<void(IDirect3DDevice9* device, D3DPRESENT_PARAMETERS* pPresentationParameters)> D3D9DeviceResetFunc;
typedef boost::function<void(IDirect3DDevice9* device, CONST RECT* pSourceRect, CONST RECT* pDestRect, HWND hDestWindowOverride, CONST RGNDATA* pDirtyRegion)> D3D9DevicePresentFunc;
typedef boost::function<void(IDirect3DDevice9* device, UINT iSwapChain, UINT iBackBuffer, D3DBACKBUFFER_TYPE Type, IDirect3DSurface9** ppBackBuffer)> D3D9DeviceGetBackBufferFunc;
typedef boost::function<void(IDirect3DDevice9* device, UINT iSwapChain, D3DRASTER_STATUS* pRasterStatus)> D3D9DeviceGetRasterStatusFunc;
typedef boost::function<void(IDirect3DDevice9* device, BOOL bEnableDialogs)> D3D9DeviceSetDialogBoxModeFunc;
typedef boost::function<void(IDirect3DDevice9* device, UINT iSwapChain, DWORD Flags, CONST D3DGAMMARAMP* pRamp)> D3D9DeviceSetGammaRampFunc;
void WINAPI GetGammaRamp(UINT iSwapChain, D3DGAMMARAMP* pRamp);
HRESULT WINAPI CreateTexture(UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool,IDirect3DTexture9** ppTexture,HANDLE* pSharedHandle);
HRESULT WINAPI CreateVolumeTexture(UINT Width, UINT Height, UINT Depth, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool,IDirect3DVolumeTexture9** ppVolumeTexture,HANDLE* pSharedHandle);
HRESULT WINAPI CreateCubeTexture(UINT EdgeLength,UINT Levels,DWORD Usage,D3DFORMAT Format,D3DPOOL Pool,IDirect3DCubeTexture9** ppCubeTexture,HANDLE* pSharedHandle);
HRESULT WINAPI CreateVertexBuffer(UINT Length,DWORD Usage,DWORD FVF,D3DPOOL Pool,IDirect3DVertexBuffer9** ppVertexBuffer,HANDLE* pSharedHandle);
HRESULT WINAPI CreateIndexBuffer(UINT Length,DWORD Usage,D3DFORMAT Format,D3DPOOL Pool,IDirect3DIndexBuffer9** ppIndexBuffer,HANDLE* pSharedHandle);
HRESULT WINAPI CreateRenderTarget(UINT Width,UINT Height,D3DFORMAT Format,D3DMULTISAMPLE_TYPE MultiSample,DWORD MultisampleQuality,BOOL Lockable,IDirect3DSurface9** ppSurface,HANDLE* pSharedHandle);
HRESULT WINAPI CreateDepthStencilSurface(UINT Width,UINT Height,D3DFORMAT Format,D3DMULTISAMPLE_TYPE MultiSample,DWORD MultisampleQuality,BOOL Discard,IDirect3DSurface9** ppSurface,HANDLE* pSharedHandle);
HRESULT WINAPI UpdateSurface(IDirect3DSurface9* pSourceSurface,CONST RECT* pSourceRect,IDirect3DSurface9* pDestinationSurface,CONST POINT* pDestPoint);
HRESULT WINAPI UpdateTexture(IDirect3DBaseTexture9* pSourceTexture,IDirect3DBaseTexture9* pDestinationTexture);
HRESULT WINAPI GetRenderTargetData(IDirect3DSurface9* pRenderTarget,IDirect3DSurface9* pDestSurface);
HRESULT WINAPI GetFrontBufferData(UINT iSwapChain,IDirect3DSurface9* pDestSurface);
HRESULT WINAPI StretchRect(IDirect3DSurface9* pSourceSurface,CONST RECT* pSourceRect,IDirect3DSurface9* pDestSurface,CONST RECT* pDestRect,D3DTEXTUREFILTERTYPE Filter);
HRESULT WINAPI ColorFill(IDirect3DSurface9* pSurface,CONST RECT* pRect,D3DCOLOR color);
HRESULT WINAPI CreateOffscreenPlainSurface(UINT Width,UINT Height,D3DFORMAT Format,D3DPOOL Pool,IDirect3DSurface9** ppSurface,HANDLE* pSharedHandle);
HRESULT WINAPI SetRenderTarget(DWORD RenderTargetIndex,IDirect3DSurface9* pRenderTarget);
HRESULT WINAPI GetRenderTarget(DWORD RenderTargetIndex,IDirect3DSurface9** ppRenderTarget);
HRESULT WINAPI SetDepthStencilSurface(IDirect3DSurface9* pNewZStencil);
HRESULT WINAPI GetDepthStencilSurface(IDirect3DSurface9** ppZStencilSurface);
*/
#pragma endregion Dammit, im too lazy to get done it...


typedef void (* D3D9DeviceBeginSceneFunc)(IDirect3DDevice9* device);
typedef void (* D3D9DeviceEndSceneFunc)(IDirect3DDevice9* device);

#pragma region Dammit, im too lazy to get done it...
/*
HRESULT WINAPI Clear(DWORD Count,CONST D3DRECT* pRects,DWORD Flags,D3DCOLOR Color,float Z,DWORD Stencil);
HRESULT WINAPI SetTransform(D3DTRANSFORMSTATETYPE State,CONST D3DMATRIX* pMatrix);
HRESULT WINAPI GetTransform(D3DTRANSFORMSTATETYPE State,D3DMATRIX* pMatrix);
HRESULT WINAPI MultiplyTransform(D3DTRANSFORMSTATETYPE State,CONST D3DMATRIX* pMatrix);
HRESULT WINAPI SetViewport(CONST D3DVIEWPORT9* pViewport);
HRESULT WINAPI GetViewport(D3DVIEWPORT9* pViewport);
HRESULT WINAPI SetMaterial(CONST D3DMATERIAL9* pMaterial);
HRESULT WINAPI GetMaterial(D3DMATERIAL9* pMaterial);
HRESULT WINAPI SetLight(DWORD Index,CONST D3DLIGHT9* pLight);
HRESULT WINAPI GetLight(DWORD Index,D3DLIGHT9* pLight);
HRESULT WINAPI LightEnable(DWORD Index,BOOL Enable);
HRESULT WINAPI GetLightEnable(DWORD Index,BOOL* pEnable);
HRESULT WINAPI SetClipPlane(DWORD Index,CONST float* pPlane);
HRESULT WINAPI GetClipPlane(DWORD Index,float* pPlane);
HRESULT WINAPI SetRenderState(D3DRENDERSTATETYPE State,DWORD Value);
HRESULT WINAPI GetRenderState(D3DRENDERSTATETYPE State,DWORD* pValue);
HRESULT WINAPI CreateStateBlock(D3DSTATEBLOCKTYPE Type,IDirect3DStateBlock9** ppSB);
HRESULT WINAPI BeginStateBlock(void);
HRESULT WINAPI EndStateBlock(IDirect3DStateBlock9** ppSB);
HRESULT WINAPI SetClipStatus(CONST D3DCLIPSTATUS9* pClipStatus);
HRESULT WINAPI GetClipStatus(D3DCLIPSTATUS9* pClipStatus);
HRESULT WINAPI GetTexture(DWORD Stage,IDirect3DBaseTexture9** ppTexture);
HRESULT WINAPI SetTexture(DWORD Stage,IDirect3DBaseTexture9* pTexture);
HRESULT WINAPI GetTextureStageState(DWORD Stage,D3DTEXTURESTAGESTATETYPE Type,DWORD* pValue);
HRESULT WINAPI SetTextureStageState(DWORD Stage,D3DTEXTURESTAGESTATETYPE Type,DWORD Value);
HRESULT WINAPI GetSamplerState(DWORD Sampler,D3DSAMPLERSTATETYPE Type,DWORD* pValue);
HRESULT WINAPI SetSamplerState(DWORD Sampler,D3DSAMPLERSTATETYPE Type,DWORD Value);
HRESULT WINAPI ValidateDevice(DWORD* pNumPasses);
HRESULT WINAPI SetPaletteEntries(UINT PaletteNumber,CONST PALETTEENTRY* pEntries);
HRESULT WINAPI GetPaletteEntries(UINT PaletteNumber,PALETTEENTRY* pEntries);
HRESULT WINAPI SetCurrentTexturePalette(UINT PaletteNumber);
HRESULT WINAPI GetCurrentTexturePalette(UINT *PaletteNumber);
HRESULT WINAPI SetScissorRect(CONST RECT* pRect);
HRESULT WINAPI GetScissorRect(RECT* pRect);
HRESULT WINAPI SetSoftwareVertexProcessing(BOOL bSoftware);
BOOL WINAPI GetSoftwareVertexProcessing(void);
HRESULT WINAPI SetNPatchMode(float nSegments);
float WINAPI GetNPatchMode(void);
HRESULT WINAPI DrawPrimitive(D3DPRIMITIVETYPE PrimitiveType,UINT StartVertex,UINT PrimitiveCount);
HRESULT WINAPI DrawIndexedPrimitive(D3DPRIMITIVETYPE PrimitiveType,INT BaseVertexIndex,UINT MinVertexIndex,UINT NumVertices,UINT startIndex,UINT primCount);
HRESULT WINAPI DrawPrimitiveUP(D3DPRIMITIVETYPE PrimitiveType,UINT PrimitiveCount,CONST void* pVertexStreamZeroData,UINT VertexStreamZeroStride);
HRESULT WINAPI DrawIndexedPrimitiveUP(D3DPRIMITIVETYPE PrimitiveType,UINT MinVertexIndex,UINT NumVertices,UINT PrimitiveCount,CONST void* pIndexData,D3DFORMAT IndexDataFormat,CONST void* pVertexStreamZeroData,UINT VertexStreamZeroStride);
HRESULT WINAPI ProcessVertices(UINT SrcStartIndex,UINT DestIndex,UINT VertexCount,IDirect3DVertexBuffer9* pDestBuffer,IDirect3DVertexDeclaration9* pVertexDecl,DWORD Flags);
HRESULT WINAPI CreateVertexDeclaration(CONST D3DVERTEXELEMENT9* pVertexElements,IDirect3DVertexDeclaration9** ppDecl);
HRESULT WINAPI SetVertexDeclaration(IDirect3DVertexDeclaration9* pDecl);
HRESULT WINAPI GetVertexDeclaration(IDirect3DVertexDeclaration9** ppDecl);
HRESULT WINAPI SetFVF(DWORD FVF);
HRESULT WINAPI GetFVF(DWORD* pFVF);
HRESULT WINAPI CreateVertexShader(CONST DWORD* pFunction,IDirect3DVertexShader9** ppShader);
HRESULT WINAPI SetVertexShader(IDirect3DVertexShader9* pShader);
HRESULT WINAPI GetVertexShader(IDirect3DVertexShader9** ppShader);
HRESULT WINAPI SetVertexShaderConstantF(UINT StartRegister,CONST float* pConstantData,UINT Vector4fCount);
HRESULT WINAPI GetVertexShaderConstantF(UINT StartRegister,float* pConstantData,UINT Vector4fCount);
HRESULT WINAPI SetVertexShaderConstantI(UINT StartRegister,CONST int* pConstantData,UINT Vector4iCount);
HRESULT WINAPI GetVertexShaderConstantI(UINT StartRegister,int* pConstantData,UINT Vector4iCount);
HRESULT WINAPI SetVertexShaderConstantB(UINT StartRegister,CONST BOOL* pConstantData,UINT  BoolCount);
HRESULT WINAPI GetVertexShaderConstantB(UINT StartRegister,BOOL* pConstantData,UINT BoolCount);
HRESULT WINAPI SetStreamSource(UINT StreamNumber,IDirect3DVertexBuffer9* pStreamData,UINT OffsetInBytes,UINT Stride);
HRESULT WINAPI GetStreamSource(UINT StreamNumber,IDirect3DVertexBuffer9** ppStreamData,UINT* OffsetInBytes,UINT* pStride);
HRESULT WINAPI SetStreamSourceFreq(UINT StreamNumber,UINT Divider);
HRESULT WINAPI GetStreamSourceFreq(UINT StreamNumber,UINT* Divider);
HRESULT WINAPI SetIndices(IDirect3DIndexBuffer9* pIndexData);
HRESULT WINAPI GetIndices(IDirect3DIndexBuffer9** ppIndexData);
HRESULT WINAPI CreatePixelShader(CONST DWORD* pFunction,IDirect3DPixelShader9** ppShader);
HRESULT WINAPI SetPixelShader(IDirect3DPixelShader9* pShader);
HRESULT WINAPI GetPixelShader(IDirect3DPixelShader9** ppShader);
HRESULT WINAPI SetPixelShaderConstantF(UINT StartRegister,CONST float* pConstantData,UINT Vector4fCount);
HRESULT WINAPI GetPixelShaderConstantF(UINT StartRegister,float* pConstantData,UINT Vector4fCount);
HRESULT WINAPI SetPixelShaderConstantI(UINT StartRegister,CONST int* pConstantData,UINT Vector4iCount);
HRESULT WINAPI GetPixelShaderConstantI(UINT StartRegister,int* pConstantData,UINT Vector4iCount);
HRESULT WINAPI SetPixelShaderConstantB(UINT StartRegister,CONST BOOL* pConstantData,UINT  BoolCount);
HRESULT WINAPI GetPixelShaderConstantB(UINT StartRegister,BOOL* pConstantData,UINT BoolCount);
HRESULT WINAPI DrawRectPatch(UINT Handle,CONST float* pNumSegs,CONST D3DRECTPATCH_INFO* pRectPatchInfo);
HRESULT WINAPI DrawTriPatch(UINT Handle,CONST float* pNumSegs,CONST D3DTRIPATCH_INFO* pTriPatchInfo);
HRESULT WINAPI DeletePatch(UINT Handle);
HRESULT WINAPI CreateQuery(D3DQUERYTYPE Type,IDirect3DQuery9** ppQuery);
*/
#pragma endregion Dammit, im too lazy to get done it...

//Functions ids...
enum D3D9_DEVICE_FUNCTION{
	/*QueryInterface = 0,
	AddRef = 1,
	Release = 2,
	TestCooperativeLevel = 3,
	GetAvailableTextureMem = 4,
	EvictManagedResources = 5,
	GetDirect3D = 6,
	GetDeviceCaps = 7,
	GetDisplayMode = 8,
	GetCreationParameters = 9,
	SetCursorProperties = 10,
	SetCursorPosition = 11,
	ShowCursor = 12,
	CreateAdditionalSwapChain = 13,
	GetSwapChain = 14,
	GetNumberOfSwapChains = 15,
	Reset = 16,
	Present = 17,
	GetBackBuffer = 18,
	GetRasterStatus = 19,
	SetDialogBoxMode = 20,
	SetGammaRamp = 21,
	GetGammaRamp = 22,
	CreateTexture = 23,
	CreateVolumeTexture = 24,
	CreateCubeTexture = 25,
	CreateVertexBuffer = 26,
	CreateIndexBuffer = 27,
	CreateRenderTarget = 28,
	CreateDepthStencilSurface = 29,
	UpdateSurface = 30,
	UpdateTexture = 31,
	GetRenderTargetData = 32,
	GetFrontBufferData = 33,
	StretchRect = 34,
	ColorFill = 35,
	CreateOffscreenPlainSurface = 36,
	SetRenderTarget = 37,
	GetRenderTarget = 38,
	SetDepthStencilSurface = 39,
	GetDepthStencilSurface = 40,
	BeginScene = 41,*/
	ENDSCENE = 42,
	CLEAR = 43
	/*SetTransform = 44,
	GetTransform = 45,
	MultiplyTransform = 46,
	SetViewport = 47,
	GetViewport = 48,
	SetMaterial = 49,
	GetMaterial = 50,
	SetLight = 51,
	GetLight = 52,
	LightEnable = 53,
	GetLightEnable = 54,
	SetClipPlane = 55,
	GetClipPlane = 56,
	SetRenderState = 57,
	GetRenderState = 58,
	CreateStateBlock = 59,
	BeginStateBlock = 60,
	EndStateBlock = 61,
	SetClipStatus = 62,
	GetClipStatus = 63,
	GetTexture = 64,
	SetTexture = 65,
	GetTextureStageState = 66,
	SetTextureStageState = 67,
	GetSamplerState = 68,
	SetSamplerState = 69,
	ValidateDevice = 70,
	SetPaletteEntries = 71,
	GetPaletteEntries = 72,
	SetCurrentTexturePalette = 73,
	GetCurrentTexturePalette = 74,
	SetScissorRect = 75,
	GetScissorRect = 76,
	SetSoftwareVertexProcessing = 77,
	GetSoftwareVertexProcessing = 78,
	SetNPatchMode = 79,
	GetNPatchMode = 80,
	DrawPrimitive = 81,
	DrawIndexedPrimitive = 82,
	DrawPrimitiveUP = 83,
	DrawIndexedPrimitiveUP = 84,
	ProcessVertices = 85,
	CreateVertexDeclaration = 86,
	SetVertexDeclaration = 87,
	GetVertexDeclaration = 88,
	SetFVF = 89,
	GetFVF = 90,
	CreateVertexShader = 91,
	SetVertexShader = 92,
	GetVertexShader = 93,
	SetVertexShaderConstantF = 94,
	GetVertexShaderConstantF = 95,
	SetVertexShaderConstantI = 96,
	GetVertexShaderConstantI = 97,
	SetVertexShaderConstantB = 98,
	GetVertexShaderConstantB = 99,
	SetStreamSource = 100,
	GetStreamSource = 101,
	SetStreamSourceFreq = 102,
	GetStreamSourceFreq = 103,
	SetIndices = 104,
	GetIndices = 105,
	CreatePixelShader = 106,
	SetPixelShader = 107,
	GetPixelShader = 108,
	SetPixelShaderConstantF = 109,
	GetPixelShaderConstantF = 110,
	SetPixelShaderConstantI = 111,
	GetPixelShaderConstantI = 112,
	SetPixelShaderConstantB = 113,
	GetPixelShaderConstantB = 114,
	DrawRectPatch = 115,
	DrawTriPatch = 116,
	DeletePatch = 117,
	CreateQuery = 118*/
};
#define D3D9_DEVICE_FUNC_COUNT 119

//Status
#define D3D_DEVICE_PROXY_STATUS_NOTREADY -1
#define D3D_DEVICE_PROXY_STATUS_WRONG_FUNC_ID -2
#define D3D_DEVICE_PROXY_STATUS_WRONG_FUNC -3