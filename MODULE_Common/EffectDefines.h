#pragma once
#include <guiddef.h>
#include <CommonEffectDefines.h>


// {F900ED08-0F05-4DD5-A57C-E04FBE822718}
DEFINE_GUID(GUID_MAGPIE_JINC2_SCALE_SHADER,
    0xf900ed08, 0xf05, 0x4dd5, 0xa5, 0x7c, 0xe0, 0x4f, 0xbe, 0x82, 0x27, 0x18);

// {04F23541-E5F0-4F6F-9504-CB717953BC4D}
DEFINE_GUID(GUID_MAGPIE_ADAPTIVE_SHARPEN_PASS1_SHADER,
    0x4f23541, 0xe5f0, 0x4f6f, 0x95, 0x4, 0xcb, 0x71, 0x79, 0x53, 0xbc, 0x4d);

// {0315E840-6A97-4D6E-9849-A9EA697C43B8}
DEFINE_GUID(GUID_MAGPIE_ADAPTIVE_SHARPEN_PASS2_SHADER,
    0x315e840, 0x6a97, 0x4d6e, 0x98, 0x49, 0xa9, 0xea, 0x69, 0x7c, 0x43, 0xb8);

// {B62951A2-F97E-4D3F-A7E7-D5622C32E936}
DEFINE_GUID(GUID_MAGPIE_MITCHELL_NETRAVALI_SCALE_SHADER,
    0xb62951a2, 0xf97e, 0x4d3f, 0xa7, 0xe7, 0xd5, 0x62, 0x2c, 0x32, 0xe9, 0x36);

// {A5A2C04C-CC7F-40AB-93D4-C4A4B8AFAA78}
DEFINE_GUID(GUID_MAGPIE_LANCZOS6_SCALE_SHADER,
    0xa5a2c04c, 0xcc7f, 0x40ab, 0x93, 0xd4, 0xc4, 0xa4, 0xb8, 0xaf, 0xaa, 0x78);

// {782A63A0-A71F-4045-9ADD-336DEC2C888C}
DEFINE_GUID(GUID_MAGPIE_PIXEL_SCALE_SHADER,
    0x782a63a0, 0xa71f, 0x4045, 0x9a, 0xdd, 0x33, 0x6d, 0xec, 0x2c, 0x88, 0x8c);


// {FF65D2D6-4359-429D-B30A-F3F65B5AF20D}
DEFINE_GUID(CLSID_MAGPIE_ADAPTIVE_SHARPEN_EFFECT,
    0xff65d2d6, 0x4359, 0x429d, 0xb3, 0xa, 0xf3, 0xf6, 0x5b, 0x5a, 0xf2, 0xd);

// {1F1D758E-5EEA-4FE7-BDC0-FC9E98702108}
DEFINE_GUID(CLSID_MAGPIE_JINC_SCALE_EFFECT,
    0x1f1d758e, 0x5eea, 0x4fe7, 0xbd, 0xc0, 0xfc, 0x9e, 0x98, 0x70, 0x21, 0x8);

// {DED5C76B-9308-4122-AC81-578C6542B7BD}
DEFINE_GUID(CLSID_MAGPIE_MITCHELL_NETRAVALI_SCALE_EFFECT,
    0xded5c76b, 0x9308, 0x4122, 0xac, 0x81, 0x57, 0x8c, 0x65, 0x42, 0xb7, 0xbd);

// {67D990A0-F870-4BBB-B5FB-1AF043435F72}
DEFINE_GUID(CLSID_MAGPIE_LANCZOS_SCALE_EFFECT,
    0x67d990a0, 0xf870, 0x4bbb, 0xb5, 0xfb, 0x1a, 0xf0, 0x43, 0x43, 0x5f, 0x72);

// {0ED9318D-D624-4582-9CE2-399B79428AB4}
DEFINE_GUID(CLSID_MAGPIE_PIXEL_SCALE_EFFECT,
    0xed9318d, 0xd624, 0x4582, 0x9c, 0xe2, 0x39, 0x9b, 0x79, 0x42, 0x8a, 0xb4);



constexpr auto MAGPIE_ADAPTIVE_SHARPEN_PASS1_SHADER = L"shaders/AdaptiveSharpenPass1Shader.cso";
constexpr auto MAGPIE_ADAPTIVE_SHARPEN_PASS2_SHADER = L"shaders/AdaptiveSharpenPass2Shader.cso";


constexpr auto MAGPIE_LANCZOS6_SCALE_SHADER = L"shaders/Lanczos6ScaleShader.cso";
constexpr auto MAGPIE_JINC2_SCALE_SHADER = L"shaders/Jinc2ScaleShader.cso";
constexpr auto MAGPIE_MITCHELL_NETRAVALI_SCALE_SHADER = L"shaders/MitchellNetravaliScaleShader.cso";
constexpr auto MAGPIE_PIXEL_SCALE_SHADER = L"shaders/PixelScaleShader.cso";
