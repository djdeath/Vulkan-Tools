
/*
 * Copyright (c) 2019-2021 The Khronos Group Inc.
 * Copyright (c) 2019-2021 Valve Corporation
 * Copyright (c) 2019-2021 LunarG, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Charles Giessen <charles@lunarg.com>
 *
 */

/*
 * This file is generated from the Khronos Vulkan XML API Registry.
 */

#include "vulkaninfo.h"
#include "outputprinter.h"

void DumpVkConformanceVersion(Printer &p, std::string name, VkConformanceVersion &c) {
    p.PrintKeyString("conformanceVersion", std::to_string(c.major)+ "." + std::to_string(c.minor) + "." + std::to_string(c.subminor) + "."
             + std::to_string(c.patch));
}

template <typename T>
std::string to_hex_str(T i) {
    std::stringstream stream;
    stream << "0x" << std::setfill('0') << std::setw(sizeof(T)) << std::hex << i;
    return stream.str();
}

template <typename T>
std::string to_hex_str(Printer &p, T i) {
    if (p.Type() == OutputType::json)
        return std::to_string(i);
    else if (p.Type() == OutputType::vkconfig_output)
        return std::string("\"") + to_hex_str(i) + std::string("\"");
    else
        return to_hex_str(i);
}

static const char *VkColorSpaceKHRString(VkColorSpaceKHR value) {
    switch (value) {
        case (0): return "COLOR_SPACE_SRGB_NONLINEAR_KHR";
        case (1000104001): return "COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT";
        case (1000104002): return "COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT";
        case (1000104003): return "COLOR_SPACE_DISPLAY_P3_LINEAR_EXT";
        case (1000104004): return "COLOR_SPACE_DCI_P3_NONLINEAR_EXT";
        case (1000104005): return "COLOR_SPACE_BT709_LINEAR_EXT";
        case (1000104006): return "COLOR_SPACE_BT709_NONLINEAR_EXT";
        case (1000104007): return "COLOR_SPACE_BT2020_LINEAR_EXT";
        case (1000104008): return "COLOR_SPACE_HDR10_ST2084_EXT";
        case (1000104009): return "COLOR_SPACE_DOLBYVISION_EXT";
        case (1000104010): return "COLOR_SPACE_HDR10_HLG_EXT";
        case (1000104011): return "COLOR_SPACE_ADOBERGB_LINEAR_EXT";
        case (1000104012): return "COLOR_SPACE_ADOBERGB_NONLINEAR_EXT";
        case (1000104013): return "COLOR_SPACE_PASS_THROUGH_EXT";
        case (1000104014): return "COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT";
        case (1000213000): return "COLOR_SPACE_DISPLAY_NATIVE_AMD";
        default: return "UNKNOWN_VkColorSpaceKHR";
    }
}
void DumpVkColorSpaceKHR(Printer &p, std::string name, VkColorSpaceKHR value) {
    if (p.Type() == OutputType::json) {
        p.PrintKeyValue(name, value);
    } else {
        p.PrintKeyString(name, VkColorSpaceKHRString(value));
    }
}
static const char *VkDriverIdString(VkDriverId value) {
    switch (value) {
        case (1): return "DRIVER_ID_AMD_PROPRIETARY";
        case (2): return "DRIVER_ID_AMD_OPEN_SOURCE";
        case (3): return "DRIVER_ID_MESA_RADV";
        case (4): return "DRIVER_ID_NVIDIA_PROPRIETARY";
        case (5): return "DRIVER_ID_INTEL_PROPRIETARY_WINDOWS";
        case (6): return "DRIVER_ID_INTEL_OPEN_SOURCE_MESA";
        case (7): return "DRIVER_ID_IMAGINATION_PROPRIETARY";
        case (8): return "DRIVER_ID_QUALCOMM_PROPRIETARY";
        case (9): return "DRIVER_ID_ARM_PROPRIETARY";
        case (10): return "DRIVER_ID_GOOGLE_SWIFTSHADER";
        case (11): return "DRIVER_ID_GGP_PROPRIETARY";
        case (12): return "DRIVER_ID_BROADCOM_PROPRIETARY";
        case (13): return "DRIVER_ID_MESA_LLVMPIPE";
        case (14): return "DRIVER_ID_MOLTENVK";
        case (15): return "DRIVER_ID_COREAVI_PROPRIETARY";
        case (16): return "DRIVER_ID_JUICE_PROPRIETARY";
        case (17): return "DRIVER_ID_VERISILICON_PROPRIETARY";
        case (18): return "DRIVER_ID_MESA_TURNIP";
        case (19): return "DRIVER_ID_MESA_V3DV";
        case (20): return "DRIVER_ID_MESA_PANVK";
        case (21): return "DRIVER_ID_SAMSUNG_PROPRIETARY";
        default: return "UNKNOWN_VkDriverId";
    }
}
void DumpVkDriverId(Printer &p, std::string name, VkDriverId value) {
    if (p.Type() == OutputType::json) {
        p.PrintKeyValue(name, value);
    } else {
        p.PrintKeyString(name, VkDriverIdString(value));
    }
}
static const char *VkFormatString(VkFormat value) {
    switch (value) {
        case (0): return "FORMAT_UNDEFINED";
        case (1): return "FORMAT_R4G4_UNORM_PACK8";
        case (2): return "FORMAT_R4G4B4A4_UNORM_PACK16";
        case (3): return "FORMAT_B4G4R4A4_UNORM_PACK16";
        case (4): return "FORMAT_R5G6B5_UNORM_PACK16";
        case (5): return "FORMAT_B5G6R5_UNORM_PACK16";
        case (6): return "FORMAT_R5G5B5A1_UNORM_PACK16";
        case (7): return "FORMAT_B5G5R5A1_UNORM_PACK16";
        case (8): return "FORMAT_A1R5G5B5_UNORM_PACK16";
        case (9): return "FORMAT_R8_UNORM";
        case (10): return "FORMAT_R8_SNORM";
        case (11): return "FORMAT_R8_USCALED";
        case (12): return "FORMAT_R8_SSCALED";
        case (13): return "FORMAT_R8_UINT";
        case (14): return "FORMAT_R8_SINT";
        case (15): return "FORMAT_R8_SRGB";
        case (16): return "FORMAT_R8G8_UNORM";
        case (17): return "FORMAT_R8G8_SNORM";
        case (18): return "FORMAT_R8G8_USCALED";
        case (19): return "FORMAT_R8G8_SSCALED";
        case (20): return "FORMAT_R8G8_UINT";
        case (21): return "FORMAT_R8G8_SINT";
        case (22): return "FORMAT_R8G8_SRGB";
        case (23): return "FORMAT_R8G8B8_UNORM";
        case (24): return "FORMAT_R8G8B8_SNORM";
        case (25): return "FORMAT_R8G8B8_USCALED";
        case (26): return "FORMAT_R8G8B8_SSCALED";
        case (27): return "FORMAT_R8G8B8_UINT";
        case (28): return "FORMAT_R8G8B8_SINT";
        case (29): return "FORMAT_R8G8B8_SRGB";
        case (30): return "FORMAT_B8G8R8_UNORM";
        case (31): return "FORMAT_B8G8R8_SNORM";
        case (32): return "FORMAT_B8G8R8_USCALED";
        case (33): return "FORMAT_B8G8R8_SSCALED";
        case (34): return "FORMAT_B8G8R8_UINT";
        case (35): return "FORMAT_B8G8R8_SINT";
        case (36): return "FORMAT_B8G8R8_SRGB";
        case (37): return "FORMAT_R8G8B8A8_UNORM";
        case (38): return "FORMAT_R8G8B8A8_SNORM";
        case (39): return "FORMAT_R8G8B8A8_USCALED";
        case (40): return "FORMAT_R8G8B8A8_SSCALED";
        case (41): return "FORMAT_R8G8B8A8_UINT";
        case (42): return "FORMAT_R8G8B8A8_SINT";
        case (43): return "FORMAT_R8G8B8A8_SRGB";
        case (44): return "FORMAT_B8G8R8A8_UNORM";
        case (45): return "FORMAT_B8G8R8A8_SNORM";
        case (46): return "FORMAT_B8G8R8A8_USCALED";
        case (47): return "FORMAT_B8G8R8A8_SSCALED";
        case (48): return "FORMAT_B8G8R8A8_UINT";
        case (49): return "FORMAT_B8G8R8A8_SINT";
        case (50): return "FORMAT_B8G8R8A8_SRGB";
        case (51): return "FORMAT_A8B8G8R8_UNORM_PACK32";
        case (52): return "FORMAT_A8B8G8R8_SNORM_PACK32";
        case (53): return "FORMAT_A8B8G8R8_USCALED_PACK32";
        case (54): return "FORMAT_A8B8G8R8_SSCALED_PACK32";
        case (55): return "FORMAT_A8B8G8R8_UINT_PACK32";
        case (56): return "FORMAT_A8B8G8R8_SINT_PACK32";
        case (57): return "FORMAT_A8B8G8R8_SRGB_PACK32";
        case (58): return "FORMAT_A2R10G10B10_UNORM_PACK32";
        case (59): return "FORMAT_A2R10G10B10_SNORM_PACK32";
        case (60): return "FORMAT_A2R10G10B10_USCALED_PACK32";
        case (61): return "FORMAT_A2R10G10B10_SSCALED_PACK32";
        case (62): return "FORMAT_A2R10G10B10_UINT_PACK32";
        case (63): return "FORMAT_A2R10G10B10_SINT_PACK32";
        case (64): return "FORMAT_A2B10G10R10_UNORM_PACK32";
        case (65): return "FORMAT_A2B10G10R10_SNORM_PACK32";
        case (66): return "FORMAT_A2B10G10R10_USCALED_PACK32";
        case (67): return "FORMAT_A2B10G10R10_SSCALED_PACK32";
        case (68): return "FORMAT_A2B10G10R10_UINT_PACK32";
        case (69): return "FORMAT_A2B10G10R10_SINT_PACK32";
        case (70): return "FORMAT_R16_UNORM";
        case (71): return "FORMAT_R16_SNORM";
        case (72): return "FORMAT_R16_USCALED";
        case (73): return "FORMAT_R16_SSCALED";
        case (74): return "FORMAT_R16_UINT";
        case (75): return "FORMAT_R16_SINT";
        case (76): return "FORMAT_R16_SFLOAT";
        case (77): return "FORMAT_R16G16_UNORM";
        case (78): return "FORMAT_R16G16_SNORM";
        case (79): return "FORMAT_R16G16_USCALED";
        case (80): return "FORMAT_R16G16_SSCALED";
        case (81): return "FORMAT_R16G16_UINT";
        case (82): return "FORMAT_R16G16_SINT";
        case (83): return "FORMAT_R16G16_SFLOAT";
        case (84): return "FORMAT_R16G16B16_UNORM";
        case (85): return "FORMAT_R16G16B16_SNORM";
        case (86): return "FORMAT_R16G16B16_USCALED";
        case (87): return "FORMAT_R16G16B16_SSCALED";
        case (88): return "FORMAT_R16G16B16_UINT";
        case (89): return "FORMAT_R16G16B16_SINT";
        case (90): return "FORMAT_R16G16B16_SFLOAT";
        case (91): return "FORMAT_R16G16B16A16_UNORM";
        case (92): return "FORMAT_R16G16B16A16_SNORM";
        case (93): return "FORMAT_R16G16B16A16_USCALED";
        case (94): return "FORMAT_R16G16B16A16_SSCALED";
        case (95): return "FORMAT_R16G16B16A16_UINT";
        case (96): return "FORMAT_R16G16B16A16_SINT";
        case (97): return "FORMAT_R16G16B16A16_SFLOAT";
        case (98): return "FORMAT_R32_UINT";
        case (99): return "FORMAT_R32_SINT";
        case (100): return "FORMAT_R32_SFLOAT";
        case (101): return "FORMAT_R32G32_UINT";
        case (102): return "FORMAT_R32G32_SINT";
        case (103): return "FORMAT_R32G32_SFLOAT";
        case (104): return "FORMAT_R32G32B32_UINT";
        case (105): return "FORMAT_R32G32B32_SINT";
        case (106): return "FORMAT_R32G32B32_SFLOAT";
        case (107): return "FORMAT_R32G32B32A32_UINT";
        case (108): return "FORMAT_R32G32B32A32_SINT";
        case (109): return "FORMAT_R32G32B32A32_SFLOAT";
        case (110): return "FORMAT_R64_UINT";
        case (111): return "FORMAT_R64_SINT";
        case (112): return "FORMAT_R64_SFLOAT";
        case (113): return "FORMAT_R64G64_UINT";
        case (114): return "FORMAT_R64G64_SINT";
        case (115): return "FORMAT_R64G64_SFLOAT";
        case (116): return "FORMAT_R64G64B64_UINT";
        case (117): return "FORMAT_R64G64B64_SINT";
        case (118): return "FORMAT_R64G64B64_SFLOAT";
        case (119): return "FORMAT_R64G64B64A64_UINT";
        case (120): return "FORMAT_R64G64B64A64_SINT";
        case (121): return "FORMAT_R64G64B64A64_SFLOAT";
        case (122): return "FORMAT_B10G11R11_UFLOAT_PACK32";
        case (123): return "FORMAT_E5B9G9R9_UFLOAT_PACK32";
        case (124): return "FORMAT_D16_UNORM";
        case (125): return "FORMAT_X8_D24_UNORM_PACK32";
        case (126): return "FORMAT_D32_SFLOAT";
        case (127): return "FORMAT_S8_UINT";
        case (128): return "FORMAT_D16_UNORM_S8_UINT";
        case (129): return "FORMAT_D24_UNORM_S8_UINT";
        case (130): return "FORMAT_D32_SFLOAT_S8_UINT";
        case (131): return "FORMAT_BC1_RGB_UNORM_BLOCK";
        case (132): return "FORMAT_BC1_RGB_SRGB_BLOCK";
        case (133): return "FORMAT_BC1_RGBA_UNORM_BLOCK";
        case (134): return "FORMAT_BC1_RGBA_SRGB_BLOCK";
        case (135): return "FORMAT_BC2_UNORM_BLOCK";
        case (136): return "FORMAT_BC2_SRGB_BLOCK";
        case (137): return "FORMAT_BC3_UNORM_BLOCK";
        case (138): return "FORMAT_BC3_SRGB_BLOCK";
        case (139): return "FORMAT_BC4_UNORM_BLOCK";
        case (140): return "FORMAT_BC4_SNORM_BLOCK";
        case (141): return "FORMAT_BC5_UNORM_BLOCK";
        case (142): return "FORMAT_BC5_SNORM_BLOCK";
        case (143): return "FORMAT_BC6H_UFLOAT_BLOCK";
        case (144): return "FORMAT_BC6H_SFLOAT_BLOCK";
        case (145): return "FORMAT_BC7_UNORM_BLOCK";
        case (146): return "FORMAT_BC7_SRGB_BLOCK";
        case (147): return "FORMAT_ETC2_R8G8B8_UNORM_BLOCK";
        case (148): return "FORMAT_ETC2_R8G8B8_SRGB_BLOCK";
        case (149): return "FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK";
        case (150): return "FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK";
        case (151): return "FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK";
        case (152): return "FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK";
        case (153): return "FORMAT_EAC_R11_UNORM_BLOCK";
        case (154): return "FORMAT_EAC_R11_SNORM_BLOCK";
        case (155): return "FORMAT_EAC_R11G11_UNORM_BLOCK";
        case (156): return "FORMAT_EAC_R11G11_SNORM_BLOCK";
        case (157): return "FORMAT_ASTC_4x4_UNORM_BLOCK";
        case (158): return "FORMAT_ASTC_4x4_SRGB_BLOCK";
        case (159): return "FORMAT_ASTC_5x4_UNORM_BLOCK";
        case (160): return "FORMAT_ASTC_5x4_SRGB_BLOCK";
        case (161): return "FORMAT_ASTC_5x5_UNORM_BLOCK";
        case (162): return "FORMAT_ASTC_5x5_SRGB_BLOCK";
        case (163): return "FORMAT_ASTC_6x5_UNORM_BLOCK";
        case (164): return "FORMAT_ASTC_6x5_SRGB_BLOCK";
        case (165): return "FORMAT_ASTC_6x6_UNORM_BLOCK";
        case (166): return "FORMAT_ASTC_6x6_SRGB_BLOCK";
        case (167): return "FORMAT_ASTC_8x5_UNORM_BLOCK";
        case (168): return "FORMAT_ASTC_8x5_SRGB_BLOCK";
        case (169): return "FORMAT_ASTC_8x6_UNORM_BLOCK";
        case (170): return "FORMAT_ASTC_8x6_SRGB_BLOCK";
        case (171): return "FORMAT_ASTC_8x8_UNORM_BLOCK";
        case (172): return "FORMAT_ASTC_8x8_SRGB_BLOCK";
        case (173): return "FORMAT_ASTC_10x5_UNORM_BLOCK";
        case (174): return "FORMAT_ASTC_10x5_SRGB_BLOCK";
        case (175): return "FORMAT_ASTC_10x6_UNORM_BLOCK";
        case (176): return "FORMAT_ASTC_10x6_SRGB_BLOCK";
        case (177): return "FORMAT_ASTC_10x8_UNORM_BLOCK";
        case (178): return "FORMAT_ASTC_10x8_SRGB_BLOCK";
        case (179): return "FORMAT_ASTC_10x10_UNORM_BLOCK";
        case (180): return "FORMAT_ASTC_10x10_SRGB_BLOCK";
        case (181): return "FORMAT_ASTC_12x10_UNORM_BLOCK";
        case (182): return "FORMAT_ASTC_12x10_SRGB_BLOCK";
        case (183): return "FORMAT_ASTC_12x12_UNORM_BLOCK";
        case (184): return "FORMAT_ASTC_12x12_SRGB_BLOCK";
        case (1000156000): return "FORMAT_G8B8G8R8_422_UNORM";
        case (1000156001): return "FORMAT_B8G8R8G8_422_UNORM";
        case (1000156002): return "FORMAT_G8_B8_R8_3PLANE_420_UNORM";
        case (1000156003): return "FORMAT_G8_B8R8_2PLANE_420_UNORM";
        case (1000156004): return "FORMAT_G8_B8_R8_3PLANE_422_UNORM";
        case (1000156005): return "FORMAT_G8_B8R8_2PLANE_422_UNORM";
        case (1000156006): return "FORMAT_G8_B8_R8_3PLANE_444_UNORM";
        case (1000156007): return "FORMAT_R10X6_UNORM_PACK16";
        case (1000156008): return "FORMAT_R10X6G10X6_UNORM_2PACK16";
        case (1000156009): return "FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16";
        case (1000156010): return "FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16";
        case (1000156011): return "FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16";
        case (1000156012): return "FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16";
        case (1000156013): return "FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16";
        case (1000156014): return "FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16";
        case (1000156015): return "FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16";
        case (1000156016): return "FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16";
        case (1000156017): return "FORMAT_R12X4_UNORM_PACK16";
        case (1000156018): return "FORMAT_R12X4G12X4_UNORM_2PACK16";
        case (1000156019): return "FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16";
        case (1000156020): return "FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16";
        case (1000156021): return "FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16";
        case (1000156022): return "FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16";
        case (1000156023): return "FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16";
        case (1000156024): return "FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16";
        case (1000156025): return "FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16";
        case (1000156026): return "FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16";
        case (1000156027): return "FORMAT_G16B16G16R16_422_UNORM";
        case (1000156028): return "FORMAT_B16G16R16G16_422_UNORM";
        case (1000156029): return "FORMAT_G16_B16_R16_3PLANE_420_UNORM";
        case (1000156030): return "FORMAT_G16_B16R16_2PLANE_420_UNORM";
        case (1000156031): return "FORMAT_G16_B16_R16_3PLANE_422_UNORM";
        case (1000156032): return "FORMAT_G16_B16R16_2PLANE_422_UNORM";
        case (1000156033): return "FORMAT_G16_B16_R16_3PLANE_444_UNORM";
        case (1000054000): return "FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG";
        case (1000054001): return "FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG";
        case (1000054002): return "FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG";
        case (1000054003): return "FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG";
        case (1000054004): return "FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG";
        case (1000054005): return "FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG";
        case (1000054006): return "FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG";
        case (1000054007): return "FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG";
        case (1000066000): return "FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT";
        case (1000066001): return "FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT";
        case (1000066002): return "FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT";
        case (1000066003): return "FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT";
        case (1000066004): return "FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT";
        case (1000066005): return "FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT";
        case (1000066006): return "FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT";
        case (1000066007): return "FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT";
        case (1000066008): return "FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT";
        case (1000066009): return "FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT";
        case (1000066010): return "FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT";
        case (1000066011): return "FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT";
        case (1000066012): return "FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT";
        case (1000066013): return "FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT";
        case (1000330000): return "FORMAT_G8_B8R8_2PLANE_444_UNORM_EXT";
        case (1000330001): return "FORMAT_G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16_EXT";
        case (1000330002): return "FORMAT_G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16_EXT";
        case (1000330003): return "FORMAT_G16_B16R16_2PLANE_444_UNORM_EXT";
        case (1000340000): return "FORMAT_A4R4G4B4_UNORM_PACK16_EXT";
        case (1000340001): return "FORMAT_A4B4G4R4_UNORM_PACK16_EXT";
        default: return "UNKNOWN_VkFormat";
    }
}
void DumpVkFormat(Printer &p, std::string name, VkFormat value) {
    if (p.Type() == OutputType::json) {
        p.PrintKeyValue(name, value);
    } else {
        p.PrintKeyString(name, VkFormatString(value));
    }
}
static const char *VkImageTilingString(VkImageTiling value) {
    switch (value) {
        case (0): return "IMAGE_TILING_OPTIMAL";
        case (1): return "IMAGE_TILING_LINEAR";
        case (1000158000): return "IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT";
        default: return "UNKNOWN_VkImageTiling";
    }
}
void DumpVkImageTiling(Printer &p, std::string name, VkImageTiling value) {
    if (p.Type() == OutputType::json) {
        p.PrintKeyValue(name, value);
    } else {
        p.PrintKeyString(name, VkImageTilingString(value));
    }
}
static const char *VkPhysicalDeviceTypeString(VkPhysicalDeviceType value) {
    switch (value) {
        case (0): return "PHYSICAL_DEVICE_TYPE_OTHER";
        case (1): return "PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU";
        case (2): return "PHYSICAL_DEVICE_TYPE_DISCRETE_GPU";
        case (3): return "PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU";
        case (4): return "PHYSICAL_DEVICE_TYPE_CPU";
        default: return "UNKNOWN_VkPhysicalDeviceType";
    }
}
void DumpVkPhysicalDeviceType(Printer &p, std::string name, VkPhysicalDeviceType value) {
    if (p.Type() == OutputType::json) {
        p.PrintKeyValue(name, value);
    } else {
        p.PrintKeyString(name, VkPhysicalDeviceTypeString(value));
    }
}
static const char *VkPointClippingBehaviorString(VkPointClippingBehavior value) {
    switch (value) {
        case (0): return "POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES";
        case (1): return "POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY";
        default: return "UNKNOWN_VkPointClippingBehavior";
    }
}
void DumpVkPointClippingBehavior(Printer &p, std::string name, VkPointClippingBehavior value) {
    if (p.Type() == OutputType::json) {
        p.PrintKeyValue(name, value);
    } else {
        p.PrintKeyString(name, VkPointClippingBehaviorString(value));
    }
}
static const char *VkPresentModeKHRString(VkPresentModeKHR value) {
    switch (value) {
        case (0): return "PRESENT_MODE_IMMEDIATE_KHR";
        case (1): return "PRESENT_MODE_MAILBOX_KHR";
        case (2): return "PRESENT_MODE_FIFO_KHR";
        case (3): return "PRESENT_MODE_FIFO_RELAXED_KHR";
        case (1000111000): return "PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR";
        case (1000111001): return "PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR";
        default: return "UNKNOWN_VkPresentModeKHR";
    }
}
void DumpVkPresentModeKHR(Printer &p, std::string name, VkPresentModeKHR value) {
    if (p.Type() == OutputType::json) {
        p.PrintKeyValue(name, value);
    } else {
        p.PrintKeyString(name, VkPresentModeKHRString(value));
    }
}
static const char *VkQueueGlobalPriorityEXTString(VkQueueGlobalPriorityEXT value) {
    switch (value) {
        case (128): return "QUEUE_GLOBAL_PRIORITY_LOW_EXT";
        case (256): return "QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT";
        case (512): return "QUEUE_GLOBAL_PRIORITY_HIGH_EXT";
        case (1024): return "QUEUE_GLOBAL_PRIORITY_REALTIME_EXT";
        default: return "UNKNOWN_VkQueueGlobalPriorityEXT";
    }
}
void DumpVkQueueGlobalPriorityEXT(Printer &p, std::string name, VkQueueGlobalPriorityEXT value) {
    if (p.Type() == OutputType::json) {
        p.PrintKeyValue(name, value);
    } else {
        p.PrintKeyString(name, VkQueueGlobalPriorityEXTString(value));
    }
}
static const char *VkResultString(VkResult value) {
    switch (value) {
        case (0): return "SUCCESS";
        case (1): return "NOT_READY";
        case (2): return "TIMEOUT";
        case (3): return "EVENT_SET";
        case (4): return "EVENT_RESET";
        case (5): return "INCOMPLETE";
        case (-1): return "ERROR_OUT_OF_HOST_MEMORY";
        case (-2): return "ERROR_OUT_OF_DEVICE_MEMORY";
        case (-3): return "ERROR_INITIALIZATION_FAILED";
        case (-4): return "ERROR_DEVICE_LOST";
        case (-5): return "ERROR_MEMORY_MAP_FAILED";
        case (-6): return "ERROR_LAYER_NOT_PRESENT";
        case (-7): return "ERROR_EXTENSION_NOT_PRESENT";
        case (-8): return "ERROR_FEATURE_NOT_PRESENT";
        case (-9): return "ERROR_INCOMPATIBLE_DRIVER";
        case (-10): return "ERROR_TOO_MANY_OBJECTS";
        case (-11): return "ERROR_FORMAT_NOT_SUPPORTED";
        case (-12): return "ERROR_FRAGMENTED_POOL";
        case (-13): return "ERROR_UNKNOWN";
        case (-1000069000): return "ERROR_OUT_OF_POOL_MEMORY";
        case (-1000072003): return "ERROR_INVALID_EXTERNAL_HANDLE";
        case (-1000161000): return "ERROR_FRAGMENTATION";
        case (-1000257000): return "ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS";
        case (-1000000000): return "ERROR_SURFACE_LOST_KHR";
        case (-1000000001): return "ERROR_NATIVE_WINDOW_IN_USE_KHR";
        case (1000001003): return "SUBOPTIMAL_KHR";
        case (-1000001004): return "ERROR_OUT_OF_DATE_KHR";
        case (-1000003001): return "ERROR_INCOMPATIBLE_DISPLAY_KHR";
        case (-1000011001): return "ERROR_VALIDATION_FAILED_EXT";
        case (-1000012000): return "ERROR_INVALID_SHADER_NV";
        case (-1000158000): return "ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT";
        case (-1000174001): return "ERROR_NOT_PERMITTED_EXT";
        case (-1000255000): return "ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
        case (1000268000): return "THREAD_IDLE_KHR";
        case (1000268001): return "THREAD_DONE_KHR";
        case (1000268002): return "OPERATION_DEFERRED_KHR";
        case (1000268003): return "OPERATION_NOT_DEFERRED_KHR";
        case (1000297000): return "PIPELINE_COMPILE_REQUIRED_EXT";
        default: return "UNKNOWN_VkResult";
    }
}
void DumpVkResult(Printer &p, std::string name, VkResult value) {
    if (p.Type() == OutputType::json) {
        p.PrintKeyValue(name, value);
    } else {
        p.PrintKeyString(name, VkResultString(value));
    }
}
static const char *VkShaderFloatControlsIndependenceString(VkShaderFloatControlsIndependence value) {
    switch (value) {
        case (0): return "SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY";
        case (1): return "SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL";
        case (2): return "SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE";
        default: return "UNKNOWN_VkShaderFloatControlsIndependence";
    }
}
void DumpVkShaderFloatControlsIndependence(Printer &p, std::string name, VkShaderFloatControlsIndependence value) {
    if (p.Type() == OutputType::json) {
        p.PrintKeyValue(name, value);
    } else {
        p.PrintKeyString(name, VkShaderFloatControlsIndependenceString(value));
    }
}
std::vector<const char *>VkCompositeAlphaFlagBitsKHRGetStrings(VkCompositeAlphaFlagBitsKHR value) {
    std::vector<const char *> strings;
    if (value == 0) { strings.push_back("None"); return strings; }
    if (0x1 & value) strings.push_back("COMPOSITE_ALPHA_OPAQUE_BIT_KHR");
    if (0x2 & value) strings.push_back("COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR");
    if (0x4 & value) strings.push_back("COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR");
    if (0x8 & value) strings.push_back("COMPOSITE_ALPHA_INHERIT_BIT_KHR");
    return strings;
}
void DumpVkCompositeAlphaFlagsKHR(Printer &p, std::string name, VkCompositeAlphaFlagsKHR value) {
    if (p.Type() == OutputType::json) { p.PrintKeyValue(name, value); return; }
    if (static_cast<VkCompositeAlphaFlagBitsKHR>(value) == 0) {
        ArrayWrapper arr(p, name, 0);
        if (p.Type() != OutputType::vkconfig_output)
            p.SetAsType().PrintString("None");
        return;
    }
    auto strings = VkCompositeAlphaFlagBitsKHRGetStrings(static_cast<VkCompositeAlphaFlagBitsKHR>(value));
    ArrayWrapper arr(p, name, strings.size());
    for(auto& str : strings){
        p.SetAsType().PrintString(str);
    }
}
void DumpVkCompositeAlphaFlagBitsKHR(Printer &p, std::string name, VkCompositeAlphaFlagBitsKHR value) {
    auto strings = VkCompositeAlphaFlagBitsKHRGetStrings(value);
    p.PrintKeyString(name, strings.at(0));
}

std::vector<const char *>VkDeviceGroupPresentModeFlagBitsKHRGetStrings(VkDeviceGroupPresentModeFlagBitsKHR value) {
    std::vector<const char *> strings;
    if (value == 0) { strings.push_back("None"); return strings; }
    if (0x1 & value) strings.push_back("DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR");
    if (0x2 & value) strings.push_back("DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR");
    if (0x4 & value) strings.push_back("DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR");
    if (0x8 & value) strings.push_back("DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR");
    return strings;
}
void DumpVkDeviceGroupPresentModeFlagsKHR(Printer &p, std::string name, VkDeviceGroupPresentModeFlagsKHR value) {
    if (p.Type() == OutputType::json) { p.PrintKeyValue(name, value); return; }
    if (static_cast<VkDeviceGroupPresentModeFlagBitsKHR>(value) == 0) {
        ArrayWrapper arr(p, name, 0);
        if (p.Type() != OutputType::vkconfig_output)
            p.SetAsType().PrintString("None");
        return;
    }
    auto strings = VkDeviceGroupPresentModeFlagBitsKHRGetStrings(static_cast<VkDeviceGroupPresentModeFlagBitsKHR>(value));
    ArrayWrapper arr(p, name, strings.size());
    for(auto& str : strings){
        p.SetAsType().PrintString(str);
    }
}
void DumpVkDeviceGroupPresentModeFlagBitsKHR(Printer &p, std::string name, VkDeviceGroupPresentModeFlagBitsKHR value) {
    auto strings = VkDeviceGroupPresentModeFlagBitsKHRGetStrings(value);
    p.PrintKeyString(name, strings.at(0));
}

std::vector<const char *>VkFormatFeatureFlagBitsGetStrings(VkFormatFeatureFlagBits value) {
    std::vector<const char *> strings;
    if (value == 0) { strings.push_back("None"); return strings; }
    if (0x1 & value) strings.push_back("FORMAT_FEATURE_SAMPLED_IMAGE_BIT");
    if (0x2 & value) strings.push_back("FORMAT_FEATURE_STORAGE_IMAGE_BIT");
    if (0x4 & value) strings.push_back("FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT");
    if (0x8 & value) strings.push_back("FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT");
    if (0x10 & value) strings.push_back("FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT");
    if (0x20 & value) strings.push_back("FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT");
    if (0x40 & value) strings.push_back("FORMAT_FEATURE_VERTEX_BUFFER_BIT");
    if (0x80 & value) strings.push_back("FORMAT_FEATURE_COLOR_ATTACHMENT_BIT");
    if (0x100 & value) strings.push_back("FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT");
    if (0x200 & value) strings.push_back("FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT");
    if (0x400 & value) strings.push_back("FORMAT_FEATURE_BLIT_SRC_BIT");
    if (0x800 & value) strings.push_back("FORMAT_FEATURE_BLIT_DST_BIT");
    if (0x1000 & value) strings.push_back("FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT");
    if (0x4000 & value) strings.push_back("FORMAT_FEATURE_TRANSFER_SRC_BIT");
    if (0x8000 & value) strings.push_back("FORMAT_FEATURE_TRANSFER_DST_BIT");
    if (0x20000 & value) strings.push_back("FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT");
    if (0x40000 & value) strings.push_back("FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT");
    if (0x80000 & value) strings.push_back("FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT");
    if (0x100000 & value) strings.push_back("FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT");
    if (0x200000 & value) strings.push_back("FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT");
    if (0x400000 & value) strings.push_back("FORMAT_FEATURE_DISJOINT_BIT");
    if (0x800000 & value) strings.push_back("FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT");
    if (0x10000 & value) strings.push_back("FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT");
    if (0x2000 & value) strings.push_back("FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG");
    if (0x2000000 & value) strings.push_back("FORMAT_FEATURE_VIDEO_DECODE_OUTPUT_BIT_KHR");
    if (0x4000000 & value) strings.push_back("FORMAT_FEATURE_VIDEO_DECODE_DPB_BIT_KHR");
    if (0x20000000 & value) strings.push_back("FORMAT_FEATURE_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR");
    if (0x1000000 & value) strings.push_back("FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT");
    if (0x40000000 & value) strings.push_back("FORMAT_FEATURE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR");
    if (0x8000000 & value) strings.push_back("FORMAT_FEATURE_VIDEO_ENCODE_INPUT_BIT_KHR");
    if (0x10000000 & value) strings.push_back("FORMAT_FEATURE_VIDEO_ENCODE_DPB_BIT_KHR");
    return strings;
}
void DumpVkFormatFeatureFlags(Printer &p, std::string name, VkFormatFeatureFlags value) {
    if (p.Type() == OutputType::json) { p.PrintKeyValue(name, value); return; }
    if (static_cast<VkFormatFeatureFlagBits>(value) == 0) {
        ArrayWrapper arr(p, name, 0);
        if (p.Type() != OutputType::vkconfig_output)
            p.SetAsType().PrintString("None");
        return;
    }
    auto strings = VkFormatFeatureFlagBitsGetStrings(static_cast<VkFormatFeatureFlagBits>(value));
    ArrayWrapper arr(p, name, strings.size());
    for(auto& str : strings){
        p.SetAsType().PrintString(str);
    }
}
void DumpVkFormatFeatureFlagBits(Printer &p, std::string name, VkFormatFeatureFlagBits value) {
    auto strings = VkFormatFeatureFlagBitsGetStrings(value);
    p.PrintKeyString(name, strings.at(0));
}

std::vector<const char *>VkFormatFeatureFlagBits2KHRGetStrings(VkFormatFeatureFlagBits2KHR value) {
    std::vector<const char *> strings;
    if (value == 0) { strings.push_back("None"); return strings; }
    if (0x1 & value) strings.push_back("FORMAT_FEATURE_2_SAMPLED_IMAGE_BIT_KHR");
    if (0x2 & value) strings.push_back("FORMAT_FEATURE_2_STORAGE_IMAGE_BIT_KHR");
    if (0x4 & value) strings.push_back("FORMAT_FEATURE_2_STORAGE_IMAGE_ATOMIC_BIT_KHR");
    if (0x8 & value) strings.push_back("FORMAT_FEATURE_2_UNIFORM_TEXEL_BUFFER_BIT_KHR");
    if (0x10 & value) strings.push_back("FORMAT_FEATURE_2_STORAGE_TEXEL_BUFFER_BIT_KHR");
    if (0x20 & value) strings.push_back("FORMAT_FEATURE_2_STORAGE_TEXEL_BUFFER_ATOMIC_BIT_KHR");
    if (0x40 & value) strings.push_back("FORMAT_FEATURE_2_VERTEX_BUFFER_BIT_KHR");
    if (0x80 & value) strings.push_back("FORMAT_FEATURE_2_COLOR_ATTACHMENT_BIT_KHR");
    if (0x100 & value) strings.push_back("FORMAT_FEATURE_2_COLOR_ATTACHMENT_BLEND_BIT_KHR");
    if (0x200 & value) strings.push_back("FORMAT_FEATURE_2_DEPTH_STENCIL_ATTACHMENT_BIT_KHR");
    if (0x400 & value) strings.push_back("FORMAT_FEATURE_2_BLIT_SRC_BIT_KHR");
    if (0x800 & value) strings.push_back("FORMAT_FEATURE_2_BLIT_DST_BIT_KHR");
    if (0x1000 & value) strings.push_back("FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_LINEAR_BIT_KHR");
    if (0x2000 & value) strings.push_back("FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT");
    if (0x4000 & value) strings.push_back("FORMAT_FEATURE_2_TRANSFER_SRC_BIT_KHR");
    if (0x8000 & value) strings.push_back("FORMAT_FEATURE_2_TRANSFER_DST_BIT_KHR");
    if (0x10000 & value) strings.push_back("FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_MINMAX_BIT_KHR");
    if (0x20000 & value) strings.push_back("FORMAT_FEATURE_2_MIDPOINT_CHROMA_SAMPLES_BIT_KHR");
    if (0x40000 & value) strings.push_back("FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR");
    if (0x80000 & value) strings.push_back("FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR");
    if (0x100000 & value) strings.push_back("FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR");
    if (0x200000 & value) strings.push_back("FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR");
    if (0x400000 & value) strings.push_back("FORMAT_FEATURE_2_DISJOINT_BIT_KHR");
    if (0x800000 & value) strings.push_back("FORMAT_FEATURE_2_COSITED_CHROMA_SAMPLES_BIT_KHR");
    if (0x80000000 & value) strings.push_back("FORMAT_FEATURE_2_STORAGE_READ_WITHOUT_FORMAT_BIT_KHR");
    if (0x100000000 & value) strings.push_back("FORMAT_FEATURE_2_STORAGE_WRITE_WITHOUT_FORMAT_BIT_KHR");
    if (0x200000000 & value) strings.push_back("FORMAT_FEATURE_2_SAMPLED_IMAGE_DEPTH_COMPARISON_BIT_KHR");
    if (0x2000000 & value) strings.push_back("FORMAT_FEATURE_2_VIDEO_DECODE_OUTPUT_BIT_KHR");
    if (0x4000000 & value) strings.push_back("FORMAT_FEATURE_2_VIDEO_DECODE_DPB_BIT_KHR");
    if (0x20000000 & value) strings.push_back("FORMAT_FEATURE_2_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR");
    if (0x1000000 & value) strings.push_back("FORMAT_FEATURE_2_FRAGMENT_DENSITY_MAP_BIT_EXT");
    if (0x40000000 & value) strings.push_back("FORMAT_FEATURE_2_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR");
    if (0x8000000 & value) strings.push_back("FORMAT_FEATURE_2_VIDEO_ENCODE_INPUT_BIT_KHR");
    if (0x10000000 & value) strings.push_back("FORMAT_FEATURE_2_VIDEO_ENCODE_DPB_BIT_KHR");
    return strings;
}
void DumpVkFormatFeatureFlags2KHR(Printer &p, std::string name, VkFormatFeatureFlags2KHR value) {
    if (p.Type() == OutputType::json) { p.PrintKeyValue(name, value); return; }
    if (static_cast<VkFormatFeatureFlagBits2KHR>(value) == 0) {
        ArrayWrapper arr(p, name, 0);
        if (p.Type() != OutputType::vkconfig_output)
            p.SetAsType().PrintString("None");
        return;
    }
    auto strings = VkFormatFeatureFlagBits2KHRGetStrings(static_cast<VkFormatFeatureFlagBits2KHR>(value));
    ArrayWrapper arr(p, name, strings.size());
    for(auto& str : strings){
        p.SetAsType().PrintString(str);
    }
}
void DumpVkFormatFeatureFlagBits2KHR(Printer &p, std::string name, VkFormatFeatureFlagBits2KHR value) {
    auto strings = VkFormatFeatureFlagBits2KHRGetStrings(value);
    p.PrintKeyString(name, strings.at(0));
}

std::vector<const char *>VkImageUsageFlagBitsGetStrings(VkImageUsageFlagBits value) {
    std::vector<const char *> strings;
    if (value == 0) { strings.push_back("None"); return strings; }
    if (0x1 & value) strings.push_back("IMAGE_USAGE_TRANSFER_SRC_BIT");
    if (0x2 & value) strings.push_back("IMAGE_USAGE_TRANSFER_DST_BIT");
    if (0x4 & value) strings.push_back("IMAGE_USAGE_SAMPLED_BIT");
    if (0x8 & value) strings.push_back("IMAGE_USAGE_STORAGE_BIT");
    if (0x10 & value) strings.push_back("IMAGE_USAGE_COLOR_ATTACHMENT_BIT");
    if (0x20 & value) strings.push_back("IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT");
    if (0x40 & value) strings.push_back("IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT");
    if (0x80 & value) strings.push_back("IMAGE_USAGE_INPUT_ATTACHMENT_BIT");
    if (0x400 & value) strings.push_back("IMAGE_USAGE_VIDEO_DECODE_DST_BIT_KHR");
    if (0x800 & value) strings.push_back("IMAGE_USAGE_VIDEO_DECODE_SRC_BIT_KHR");
    if (0x1000 & value) strings.push_back("IMAGE_USAGE_VIDEO_DECODE_DPB_BIT_KHR");
    if (0x200 & value) strings.push_back("IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT");
    if (0x100 & value) strings.push_back("IMAGE_USAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR");
    if (0x2000 & value) strings.push_back("IMAGE_USAGE_VIDEO_ENCODE_DST_BIT_KHR");
    if (0x4000 & value) strings.push_back("IMAGE_USAGE_VIDEO_ENCODE_SRC_BIT_KHR");
    if (0x8000 & value) strings.push_back("IMAGE_USAGE_VIDEO_ENCODE_DPB_BIT_KHR");
    if (0x40000 & value) strings.push_back("IMAGE_USAGE_INVOCATION_MASK_BIT_HUAWEI");
    return strings;
}
void DumpVkImageUsageFlags(Printer &p, std::string name, VkImageUsageFlags value) {
    if (p.Type() == OutputType::json) { p.PrintKeyValue(name, value); return; }
    if (static_cast<VkImageUsageFlagBits>(value) == 0) {
        ArrayWrapper arr(p, name, 0);
        if (p.Type() != OutputType::vkconfig_output)
            p.SetAsType().PrintString("None");
        return;
    }
    auto strings = VkImageUsageFlagBitsGetStrings(static_cast<VkImageUsageFlagBits>(value));
    ArrayWrapper arr(p, name, strings.size());
    for(auto& str : strings){
        p.SetAsType().PrintString(str);
    }
}
void DumpVkImageUsageFlagBits(Printer &p, std::string name, VkImageUsageFlagBits value) {
    auto strings = VkImageUsageFlagBitsGetStrings(value);
    p.PrintKeyString(name, strings.at(0));
}

std::vector<const char *>VkMemoryHeapFlagBitsGetStrings(VkMemoryHeapFlagBits value) {
    std::vector<const char *> strings;
    if (value == 0) { strings.push_back("None"); return strings; }
    if (0x1 & value) strings.push_back("MEMORY_HEAP_DEVICE_LOCAL_BIT");
    if (0x2 & value) strings.push_back("MEMORY_HEAP_MULTI_INSTANCE_BIT");
    return strings;
}
void DumpVkMemoryHeapFlags(Printer &p, std::string name, VkMemoryHeapFlags value) {
    if (p.Type() == OutputType::json) { p.PrintKeyValue(name, value); return; }
    if (static_cast<VkMemoryHeapFlagBits>(value) == 0) {
        ArrayWrapper arr(p, name, 0);
        if (p.Type() != OutputType::vkconfig_output)
            p.SetAsType().PrintString("None");
        return;
    }
    auto strings = VkMemoryHeapFlagBitsGetStrings(static_cast<VkMemoryHeapFlagBits>(value));
    ArrayWrapper arr(p, name, strings.size());
    for(auto& str : strings){
        p.SetAsType().PrintString(str);
    }
}
void DumpVkMemoryHeapFlagBits(Printer &p, std::string name, VkMemoryHeapFlagBits value) {
    auto strings = VkMemoryHeapFlagBitsGetStrings(value);
    p.PrintKeyString(name, strings.at(0));
}

std::vector<const char *>VkMemoryPropertyFlagBitsGetStrings(VkMemoryPropertyFlagBits value) {
    std::vector<const char *> strings;
    if (value == 0) { strings.push_back("None"); return strings; }
    if (0x1 & value) strings.push_back("MEMORY_PROPERTY_DEVICE_LOCAL_BIT");
    if (0x2 & value) strings.push_back("MEMORY_PROPERTY_HOST_VISIBLE_BIT");
    if (0x4 & value) strings.push_back("MEMORY_PROPERTY_HOST_COHERENT_BIT");
    if (0x8 & value) strings.push_back("MEMORY_PROPERTY_HOST_CACHED_BIT");
    if (0x10 & value) strings.push_back("MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT");
    if (0x20 & value) strings.push_back("MEMORY_PROPERTY_PROTECTED_BIT");
    if (0x40 & value) strings.push_back("MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD");
    if (0x80 & value) strings.push_back("MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD");
    if (0x100 & value) strings.push_back("MEMORY_PROPERTY_RDMA_CAPABLE_BIT_NV");
    return strings;
}
void DumpVkMemoryPropertyFlags(Printer &p, std::string name, VkMemoryPropertyFlags value) {
    if (p.Type() == OutputType::json) { p.PrintKeyValue(name, value); return; }
    if (static_cast<VkMemoryPropertyFlagBits>(value) == 0) {
        ArrayWrapper arr(p, name, 0);
        if (p.Type() != OutputType::vkconfig_output)
            p.SetAsType().PrintString("None");
        return;
    }
    auto strings = VkMemoryPropertyFlagBitsGetStrings(static_cast<VkMemoryPropertyFlagBits>(value));
    ArrayWrapper arr(p, name, strings.size());
    for(auto& str : strings){
        p.SetAsType().PrintString(str);
    }
}
void DumpVkMemoryPropertyFlagBits(Printer &p, std::string name, VkMemoryPropertyFlagBits value) {
    auto strings = VkMemoryPropertyFlagBitsGetStrings(value);
    p.PrintKeyString(name, strings.at(0));
}

std::string VkQueueFlagsString(VkQueueFlags value) {
    std::string out;
    bool is_first = true;
    if (1 & value) {
        if (is_first) { is_first = false; } else { out += " | "; }
        out += "QUEUE_GRAPHICS";
    }
    if (2 & value) {
        if (is_first) { is_first = false; } else { out += " | "; }
        out += "QUEUE_COMPUTE";
    }
    if (4 & value) {
        if (is_first) { is_first = false; } else { out += " | "; }
        out += "QUEUE_TRANSFER";
    }
    if (8 & value) {
        if (is_first) { is_first = false; } else { out += " | "; }
        out += "QUEUE_SPARSE_BINDING";
    }
    if (16 & value) {
        if (is_first) { is_first = false; } else { out += " | "; }
        out += "QUEUE_PROTECTED";
    }
    if (32 & value) {
        if (is_first) { is_first = false; } else { out += " | "; }
        out += "QUEUE_VIDEO_DECODE_BIT_KHR";
    }
    if (64 & value) {
        if (is_first) { is_first = false; } else { out += " | "; }
        out += "QUEUE_VIDEO_ENCODE_BIT_KHR";
    }
    return out;
}
std::vector<const char *>VkResolveModeFlagBitsGetStrings(VkResolveModeFlagBits value) {
    std::vector<const char *> strings;
    if (value == 0) { strings.push_back("None"); return strings; }
    if (0 & value) strings.push_back("RESOLVE_MODE_NONE");
    if (0x1 & value) strings.push_back("RESOLVE_MODE_SAMPLE_ZERO_BIT");
    if (0x2 & value) strings.push_back("RESOLVE_MODE_AVERAGE_BIT");
    if (0x4 & value) strings.push_back("RESOLVE_MODE_MIN_BIT");
    if (0x8 & value) strings.push_back("RESOLVE_MODE_MAX_BIT");
    return strings;
}
void DumpVkResolveModeFlags(Printer &p, std::string name, VkResolveModeFlags value) {
    if (p.Type() == OutputType::json) { p.PrintKeyValue(name, value); return; }
    if (static_cast<VkResolveModeFlagBits>(value) == 0) {
        ArrayWrapper arr(p, name, 0);
        if (p.Type() != OutputType::vkconfig_output)
            p.SetAsType().PrintString("None");
        return;
    }
    auto strings = VkResolveModeFlagBitsGetStrings(static_cast<VkResolveModeFlagBits>(value));
    ArrayWrapper arr(p, name, strings.size());
    for(auto& str : strings){
        p.SetAsType().PrintString(str);
    }
}
void DumpVkResolveModeFlagBits(Printer &p, std::string name, VkResolveModeFlagBits value) {
    auto strings = VkResolveModeFlagBitsGetStrings(value);
    p.PrintKeyString(name, strings.at(0));
}

std::vector<const char *>VkSampleCountFlagBitsGetStrings(VkSampleCountFlagBits value) {
    std::vector<const char *> strings;
    if (value == 0) { strings.push_back("None"); return strings; }
    if (0x1 & value) strings.push_back("SAMPLE_COUNT_1_BIT");
    if (0x2 & value) strings.push_back("SAMPLE_COUNT_2_BIT");
    if (0x4 & value) strings.push_back("SAMPLE_COUNT_4_BIT");
    if (0x8 & value) strings.push_back("SAMPLE_COUNT_8_BIT");
    if (0x10 & value) strings.push_back("SAMPLE_COUNT_16_BIT");
    if (0x20 & value) strings.push_back("SAMPLE_COUNT_32_BIT");
    if (0x40 & value) strings.push_back("SAMPLE_COUNT_64_BIT");
    return strings;
}
void DumpVkSampleCountFlags(Printer &p, std::string name, VkSampleCountFlags value) {
    if (p.Type() == OutputType::json) { p.PrintKeyValue(name, value); return; }
    if (static_cast<VkSampleCountFlagBits>(value) == 0) {
        ArrayWrapper arr(p, name, 0);
        if (p.Type() != OutputType::vkconfig_output)
            p.SetAsType().PrintString("None");
        return;
    }
    auto strings = VkSampleCountFlagBitsGetStrings(static_cast<VkSampleCountFlagBits>(value));
    ArrayWrapper arr(p, name, strings.size());
    for(auto& str : strings){
        p.SetAsType().PrintString(str);
    }
}
void DumpVkSampleCountFlagBits(Printer &p, std::string name, VkSampleCountFlagBits value) {
    auto strings = VkSampleCountFlagBitsGetStrings(value);
    p.PrintKeyString(name, strings.at(0));
}

std::vector<const char *>VkShaderStageFlagBitsGetStrings(VkShaderStageFlagBits value) {
    std::vector<const char *> strings;
    if (value == 0) { strings.push_back("None"); return strings; }
    if (0x1 & value) strings.push_back("SHADER_STAGE_VERTEX_BIT");
    if (0x2 & value) strings.push_back("SHADER_STAGE_TESSELLATION_CONTROL_BIT");
    if (0x4 & value) strings.push_back("SHADER_STAGE_TESSELLATION_EVALUATION_BIT");
    if (0x8 & value) strings.push_back("SHADER_STAGE_GEOMETRY_BIT");
    if (0x10 & value) strings.push_back("SHADER_STAGE_FRAGMENT_BIT");
    if (0x20 & value) strings.push_back("SHADER_STAGE_COMPUTE_BIT");
    if (0x0000001F & value) strings.push_back("SHADER_STAGE_ALL_GRAPHICS");
    if (0x7FFFFFFF & value) strings.push_back("SHADER_STAGE_ALL");
    if (0x100 & value) strings.push_back("SHADER_STAGE_RAYGEN_BIT_KHR");
    if (0x200 & value) strings.push_back("SHADER_STAGE_ANY_HIT_BIT_KHR");
    if (0x400 & value) strings.push_back("SHADER_STAGE_CLOSEST_HIT_BIT_KHR");
    if (0x800 & value) strings.push_back("SHADER_STAGE_MISS_BIT_KHR");
    if (0x1000 & value) strings.push_back("SHADER_STAGE_INTERSECTION_BIT_KHR");
    if (0x2000 & value) strings.push_back("SHADER_STAGE_CALLABLE_BIT_KHR");
    if (0x40 & value) strings.push_back("SHADER_STAGE_TASK_BIT_NV");
    if (0x80 & value) strings.push_back("SHADER_STAGE_MESH_BIT_NV");
    if (0x4000 & value) strings.push_back("SHADER_STAGE_SUBPASS_SHADING_BIT_HUAWEI");
    return strings;
}
void DumpVkShaderStageFlags(Printer &p, std::string name, VkShaderStageFlags value) {
    if (p.Type() == OutputType::json) { p.PrintKeyValue(name, value); return; }
    if (static_cast<VkShaderStageFlagBits>(value) == 0) {
        ArrayWrapper arr(p, name, 0);
        if (p.Type() != OutputType::vkconfig_output)
            p.SetAsType().PrintString("None");
        return;
    }
    auto strings = VkShaderStageFlagBitsGetStrings(static_cast<VkShaderStageFlagBits>(value));
    ArrayWrapper arr(p, name, strings.size());
    for(auto& str : strings){
        p.SetAsType().PrintString(str);
    }
}
void DumpVkShaderStageFlagBits(Printer &p, std::string name, VkShaderStageFlagBits value) {
    auto strings = VkShaderStageFlagBitsGetStrings(value);
    p.PrintKeyString(name, strings.at(0));
}

std::vector<const char *>VkSubgroupFeatureFlagBitsGetStrings(VkSubgroupFeatureFlagBits value) {
    std::vector<const char *> strings;
    if (value == 0) { strings.push_back("None"); return strings; }
    if (0x1 & value) strings.push_back("SUBGROUP_FEATURE_BASIC_BIT");
    if (0x2 & value) strings.push_back("SUBGROUP_FEATURE_VOTE_BIT");
    if (0x4 & value) strings.push_back("SUBGROUP_FEATURE_ARITHMETIC_BIT");
    if (0x8 & value) strings.push_back("SUBGROUP_FEATURE_BALLOT_BIT");
    if (0x10 & value) strings.push_back("SUBGROUP_FEATURE_SHUFFLE_BIT");
    if (0x20 & value) strings.push_back("SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT");
    if (0x40 & value) strings.push_back("SUBGROUP_FEATURE_CLUSTERED_BIT");
    if (0x80 & value) strings.push_back("SUBGROUP_FEATURE_QUAD_BIT");
    if (0x100 & value) strings.push_back("SUBGROUP_FEATURE_PARTITIONED_BIT_NV");
    return strings;
}
void DumpVkSubgroupFeatureFlags(Printer &p, std::string name, VkSubgroupFeatureFlags value) {
    if (p.Type() == OutputType::json) { p.PrintKeyValue(name, value); return; }
    if (static_cast<VkSubgroupFeatureFlagBits>(value) == 0) {
        ArrayWrapper arr(p, name, 0);
        if (p.Type() != OutputType::vkconfig_output)
            p.SetAsType().PrintString("None");
        return;
    }
    auto strings = VkSubgroupFeatureFlagBitsGetStrings(static_cast<VkSubgroupFeatureFlagBits>(value));
    ArrayWrapper arr(p, name, strings.size());
    for(auto& str : strings){
        p.SetAsType().PrintString(str);
    }
}
void DumpVkSubgroupFeatureFlagBits(Printer &p, std::string name, VkSubgroupFeatureFlagBits value) {
    auto strings = VkSubgroupFeatureFlagBitsGetStrings(value);
    p.PrintKeyString(name, strings.at(0));
}

std::vector<const char *>VkSurfaceCounterFlagBitsEXTGetStrings(VkSurfaceCounterFlagBitsEXT value) {
    std::vector<const char *> strings;
    if (value == 0) { strings.push_back("None"); return strings; }
    if (0x1 & value) strings.push_back("SURFACE_COUNTER_VBLANK_BIT_EXT");
    return strings;
}
void DumpVkSurfaceCounterFlagsEXT(Printer &p, std::string name, VkSurfaceCounterFlagsEXT value) {
    if (p.Type() == OutputType::json) { p.PrintKeyValue(name, value); return; }
    if (static_cast<VkSurfaceCounterFlagBitsEXT>(value) == 0) {
        ArrayWrapper arr(p, name, 0);
        if (p.Type() != OutputType::vkconfig_output)
            p.SetAsType().PrintString("None");
        return;
    }
    auto strings = VkSurfaceCounterFlagBitsEXTGetStrings(static_cast<VkSurfaceCounterFlagBitsEXT>(value));
    ArrayWrapper arr(p, name, strings.size());
    for(auto& str : strings){
        p.SetAsType().PrintString(str);
    }
}
void DumpVkSurfaceCounterFlagBitsEXT(Printer &p, std::string name, VkSurfaceCounterFlagBitsEXT value) {
    auto strings = VkSurfaceCounterFlagBitsEXTGetStrings(value);
    p.PrintKeyString(name, strings.at(0));
}

std::vector<const char *>VkSurfaceTransformFlagBitsKHRGetStrings(VkSurfaceTransformFlagBitsKHR value) {
    std::vector<const char *> strings;
    if (value == 0) { strings.push_back("None"); return strings; }
    if (0x1 & value) strings.push_back("SURFACE_TRANSFORM_IDENTITY_BIT_KHR");
    if (0x2 & value) strings.push_back("SURFACE_TRANSFORM_ROTATE_90_BIT_KHR");
    if (0x4 & value) strings.push_back("SURFACE_TRANSFORM_ROTATE_180_BIT_KHR");
    if (0x8 & value) strings.push_back("SURFACE_TRANSFORM_ROTATE_270_BIT_KHR");
    if (0x10 & value) strings.push_back("SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR");
    if (0x20 & value) strings.push_back("SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR");
    if (0x40 & value) strings.push_back("SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR");
    if (0x80 & value) strings.push_back("SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR");
    if (0x100 & value) strings.push_back("SURFACE_TRANSFORM_INHERIT_BIT_KHR");
    return strings;
}
void DumpVkSurfaceTransformFlagsKHR(Printer &p, std::string name, VkSurfaceTransformFlagsKHR value) {
    if (p.Type() == OutputType::json) { p.PrintKeyValue(name, value); return; }
    if (static_cast<VkSurfaceTransformFlagBitsKHR>(value) == 0) {
        ArrayWrapper arr(p, name, 0);
        if (p.Type() != OutputType::vkconfig_output)
            p.SetAsType().PrintString("None");
        return;
    }
    auto strings = VkSurfaceTransformFlagBitsKHRGetStrings(static_cast<VkSurfaceTransformFlagBitsKHR>(value));
    ArrayWrapper arr(p, name, strings.size());
    for(auto& str : strings){
        p.SetAsType().PrintString(str);
    }
}
void DumpVkSurfaceTransformFlagBitsKHR(Printer &p, std::string name, VkSurfaceTransformFlagBitsKHR value) {
    auto strings = VkSurfaceTransformFlagBitsKHRGetStrings(value);
    p.PrintKeyString(name, strings.at(0));
}

std::vector<const char *>VkToolPurposeFlagBitsEXTGetStrings(VkToolPurposeFlagBitsEXT value) {
    std::vector<const char *> strings;
    if (value == 0) { strings.push_back("None"); return strings; }
    if (0x1 & value) strings.push_back("TOOL_PURPOSE_VALIDATION_BIT_EXT");
    if (0x2 & value) strings.push_back("TOOL_PURPOSE_PROFILING_BIT_EXT");
    if (0x4 & value) strings.push_back("TOOL_PURPOSE_TRACING_BIT_EXT");
    if (0x8 & value) strings.push_back("TOOL_PURPOSE_ADDITIONAL_FEATURES_BIT_EXT");
    if (0x10 & value) strings.push_back("TOOL_PURPOSE_MODIFYING_FEATURES_BIT_EXT");
    if (0x20 & value) strings.push_back("TOOL_PURPOSE_DEBUG_REPORTING_BIT_EXT");
    if (0x40 & value) strings.push_back("TOOL_PURPOSE_DEBUG_MARKERS_BIT_EXT");
    return strings;
}
void DumpVkToolPurposeFlagsEXT(Printer &p, std::string name, VkToolPurposeFlagsEXT value) {
    if (p.Type() == OutputType::json) { p.PrintKeyValue(name, value); return; }
    if (static_cast<VkToolPurposeFlagBitsEXT>(value) == 0) {
        ArrayWrapper arr(p, name, 0);
        if (p.Type() != OutputType::vkconfig_output)
            p.SetAsType().PrintString("None");
        return;
    }
    auto strings = VkToolPurposeFlagBitsEXTGetStrings(static_cast<VkToolPurposeFlagBitsEXT>(value));
    ArrayWrapper arr(p, name, strings.size());
    for(auto& str : strings){
        p.SetAsType().PrintString(str);
    }
}
void DumpVkToolPurposeFlagBitsEXT(Printer &p, std::string name, VkToolPurposeFlagBitsEXT value) {
    auto strings = VkToolPurposeFlagBitsEXTGetStrings(value);
    p.PrintKeyString(name, strings.at(0));
}

std::vector<const char *>VkVideoCodecOperationFlagBitsKHRGetStrings(VkVideoCodecOperationFlagBitsKHR value) {
    std::vector<const char *> strings;
    if (value == 0) { strings.push_back("None"); return strings; }
    if (0 & value) strings.push_back("VIDEO_CODEC_OPERATION_INVALID_BIT_KHR");
    if (0x10000 & value) strings.push_back("VIDEO_CODEC_OPERATION_ENCODE_H264_BIT_EXT");
    if (0x20000 & value) strings.push_back("VIDEO_CODEC_OPERATION_ENCODE_H265_BIT_EXT");
    if (0x1 & value) strings.push_back("VIDEO_CODEC_OPERATION_DECODE_H264_BIT_EXT");
    if (0x2 & value) strings.push_back("VIDEO_CODEC_OPERATION_DECODE_H265_BIT_EXT");
    return strings;
}
#ifdef VK_ENABLE_BETA_EXTENSIONS
void DumpVkVideoCodecOperationFlagsKHR(Printer &p, std::string name, VkVideoCodecOperationFlagsKHR value) {
    if (p.Type() == OutputType::json) { p.PrintKeyValue(name, value); return; }
    if (static_cast<VkVideoCodecOperationFlagBitsKHR>(value) == 0) {
        ArrayWrapper arr(p, name, 0);
        if (p.Type() != OutputType::vkconfig_output)
            p.SetAsType().PrintString("None");
        return;
    }
    auto strings = VkVideoCodecOperationFlagBitsKHRGetStrings(static_cast<VkVideoCodecOperationFlagBitsKHR>(value));
    ArrayWrapper arr(p, name, strings.size());
    for(auto& str : strings){
        p.SetAsType().PrintString(str);
    }
}
void DumpVkVideoCodecOperationFlagBitsKHR(Printer &p, std::string name, VkVideoCodecOperationFlagBitsKHR value) {
    auto strings = VkVideoCodecOperationFlagBitsKHRGetStrings(value);
    p.PrintKeyString(name, strings.at(0));
}
#endif  // VK_ENABLE_BETA_EXTENSIONS

void DumpVkDrmFormatModifierProperties2EXT(Printer &p, std::string name, VkDrmFormatModifierProperties2EXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(27);
    p.PrintKeyValue("drmFormatModifier", obj.drmFormatModifier);
    p.PrintKeyValue("drmFormatModifierPlaneCount", obj.drmFormatModifierPlaneCount);
    DumpVkFormatFeatureFlags2KHR(p, "drmFormatModifierTilingFeatures", obj.drmFormatModifierTilingFeatures);
}
void DumpVkDrmFormatModifierPropertiesEXT(Printer &p, std::string name, VkDrmFormatModifierPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(27);
    p.PrintKeyValue("drmFormatModifier", obj.drmFormatModifier);
    p.PrintKeyValue("drmFormatModifierPlaneCount", obj.drmFormatModifierPlaneCount);
    DumpVkFormatFeatureFlags(p, "drmFormatModifierTilingFeatures", obj.drmFormatModifierTilingFeatures);
}
void DumpVkDrmFormatModifierPropertiesList2EXT(Printer &p, std::string name, VkDrmFormatModifierPropertiesList2EXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(52);
    p.PrintKeyValue("drmFormatModifierCount", obj.drmFormatModifierCount);
    ArrayWrapper arr(p,"pDrmFormatModifierProperties", obj.drmFormatModifierCount);
    for (uint32_t i = 0; i < obj.drmFormatModifierCount; i++) {
        if (obj.pDrmFormatModifierProperties != nullptr) {
            p.SetElementIndex(i);
            DumpVkDrmFormatModifierProperties2EXT(p, "pDrmFormatModifierProperties", obj.pDrmFormatModifierProperties[i]);
        }
    }
}
void DumpVkDrmFormatModifierPropertiesListEXT(Printer &p, std::string name, VkDrmFormatModifierPropertiesListEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(52);
    p.PrintKeyValue("drmFormatModifierCount", obj.drmFormatModifierCount);
    ArrayWrapper arr(p,"pDrmFormatModifierProperties", obj.drmFormatModifierCount);
    for (uint32_t i = 0; i < obj.drmFormatModifierCount; i++) {
        if (obj.pDrmFormatModifierProperties != nullptr) {
            p.SetElementIndex(i);
            DumpVkDrmFormatModifierPropertiesEXT(p, "pDrmFormatModifierProperties", obj.pDrmFormatModifierProperties[i]);
        }
    }
}
void DumpVkExtent2D(Printer &p, std::string name, VkExtent2D &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(6);
    p.PrintKeyValue("width", obj.width);
    p.PrintKeyValue("height", obj.height);
}
void DumpVkExtent3D(Printer &p, std::string name, VkExtent3D &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(6);
    p.PrintKeyValue("width", obj.width);
    p.PrintKeyValue("height", obj.height);
    p.PrintKeyValue("depth", obj.depth);
}
void DumpVkFormatProperties3KHR(Printer &p, std::string name, VkFormatProperties3KHR &obj) {
    ObjectWrapper object{p, name};
    DumpVkFormatFeatureFlags2KHR(p, "linearTilingFeatures", obj.linearTilingFeatures);
    DumpVkFormatFeatureFlags2KHR(p, "optimalTilingFeatures", obj.optimalTilingFeatures);
    DumpVkFormatFeatureFlags2KHR(p, "bufferFeatures", obj.bufferFeatures);
}
void DumpVkLayerProperties(Printer &p, std::string name, VkLayerProperties &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(21);
    p.PrintKeyString("layerName", obj.layerName);
    p.PrintKeyValue("specVersion", obj.specVersion);
    p.PrintKeyValue("implementationVersion", obj.implementationVersion);
    p.PrintKeyString("description", obj.description);
}
void DumpVkPhysicalDevice16BitStorageFeatures(Printer &p, std::string name, VkPhysicalDevice16BitStorageFeatures &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(34);
    p.PrintKeyBool("storageBuffer16BitAccess", static_cast<bool>(obj.storageBuffer16BitAccess));
    p.PrintKeyBool("uniformAndStorageBuffer16BitAccess", static_cast<bool>(obj.uniformAndStorageBuffer16BitAccess));
    p.PrintKeyBool("storagePushConstant16", static_cast<bool>(obj.storagePushConstant16));
    p.PrintKeyBool("storageInputOutput16", static_cast<bool>(obj.storageInputOutput16));
}
void DumpVkPhysicalDevice4444FormatsFeaturesEXT(Printer &p, std::string name, VkPhysicalDevice4444FormatsFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(14);
    p.PrintKeyBool("formatA4R4G4B4", static_cast<bool>(obj.formatA4R4G4B4));
    p.PrintKeyBool("formatA4B4G4R4", static_cast<bool>(obj.formatA4B4G4R4));
}
void DumpVkPhysicalDevice8BitStorageFeatures(Printer &p, std::string name, VkPhysicalDevice8BitStorageFeatures &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(33);
    p.PrintKeyBool("storageBuffer8BitAccess", static_cast<bool>(obj.storageBuffer8BitAccess));
    p.PrintKeyBool("uniformAndStorageBuffer8BitAccess", static_cast<bool>(obj.uniformAndStorageBuffer8BitAccess));
    p.PrintKeyBool("storagePushConstant8", static_cast<bool>(obj.storagePushConstant8));
}
void DumpVkPhysicalDeviceASTCDecodeFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceASTCDecodeFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(24);
    p.PrintKeyBool("decodeModeSharedExponent", static_cast<bool>(obj.decodeModeSharedExponent));
}
void DumpVkPhysicalDeviceAccelerationStructureFeaturesKHR(Printer &p, std::string name, VkPhysicalDeviceAccelerationStructureFeaturesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(53);
    p.PrintKeyBool("accelerationStructure", static_cast<bool>(obj.accelerationStructure));
    p.PrintKeyBool("accelerationStructureCaptureReplay", static_cast<bool>(obj.accelerationStructureCaptureReplay));
    p.PrintKeyBool("accelerationStructureIndirectBuild", static_cast<bool>(obj.accelerationStructureIndirectBuild));
    p.PrintKeyBool("accelerationStructureHostCommands", static_cast<bool>(obj.accelerationStructureHostCommands));
    p.PrintKeyBool("descriptorBindingAccelerationStructureUpdateAfterBind", static_cast<bool>(obj.descriptorBindingAccelerationStructureUpdateAfterBind));
}
void DumpVkPhysicalDeviceAccelerationStructurePropertiesKHR(Printer &p, std::string name, VkPhysicalDeviceAccelerationStructurePropertiesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(58);
    p.PrintKeyValue("maxGeometryCount", obj.maxGeometryCount);
    p.PrintKeyValue("maxInstanceCount", obj.maxInstanceCount);
    p.PrintKeyValue("maxPrimitiveCount", obj.maxPrimitiveCount);
    p.PrintKeyValue("maxPerStageDescriptorAccelerationStructures", obj.maxPerStageDescriptorAccelerationStructures);
    p.PrintKeyValue("maxPerStageDescriptorUpdateAfterBindAccelerationStructures", obj.maxPerStageDescriptorUpdateAfterBindAccelerationStructures);
    p.PrintKeyValue("maxDescriptorSetAccelerationStructures", obj.maxDescriptorSetAccelerationStructures);
    p.PrintKeyValue("maxDescriptorSetUpdateAfterBindAccelerationStructures", obj.maxDescriptorSetUpdateAfterBindAccelerationStructures);
    p.PrintKeyValue("minAccelerationStructureScratchOffsetAlignment", obj.minAccelerationStructureScratchOffsetAlignment);
}
void DumpVkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(31);
    p.PrintKeyBool("advancedBlendCoherentOperations", static_cast<bool>(obj.advancedBlendCoherentOperations));
}
void DumpVkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(37);
    p.PrintKeyValue("advancedBlendMaxColorAttachments", obj.advancedBlendMaxColorAttachments);
    p.PrintKeyBool("advancedBlendIndependentBlend", static_cast<bool>(obj.advancedBlendIndependentBlend));
    p.PrintKeyBool("advancedBlendNonPremultipliedSrcColor", static_cast<bool>(obj.advancedBlendNonPremultipliedSrcColor));
    p.PrintKeyBool("advancedBlendNonPremultipliedDstColor", static_cast<bool>(obj.advancedBlendNonPremultipliedDstColor));
    p.PrintKeyBool("advancedBlendCorrelatedOverlap", static_cast<bool>(obj.advancedBlendCorrelatedOverlap));
    p.PrintKeyBool("advancedBlendAllOperations", static_cast<bool>(obj.advancedBlendAllOperations));
}
void DumpVkPhysicalDeviceBorderColorSwizzleFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceBorderColorSwizzleFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(27);
    p.PrintKeyBool("borderColorSwizzle", static_cast<bool>(obj.borderColorSwizzle));
    p.PrintKeyBool("borderColorSwizzleFromImage", static_cast<bool>(obj.borderColorSwizzleFromImage));
}
void DumpVkPhysicalDeviceBufferDeviceAddressFeatures(Printer &p, std::string name, VkPhysicalDeviceBufferDeviceAddressFeatures &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(32);
    p.PrintKeyBool("bufferDeviceAddress", static_cast<bool>(obj.bufferDeviceAddress));
    p.PrintKeyBool("bufferDeviceAddressCaptureReplay", static_cast<bool>(obj.bufferDeviceAddressCaptureReplay));
    p.PrintKeyBool("bufferDeviceAddressMultiDevice", static_cast<bool>(obj.bufferDeviceAddressMultiDevice));
}
void DumpVkPhysicalDeviceBufferDeviceAddressFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceBufferDeviceAddressFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(32);
    p.PrintKeyBool("bufferDeviceAddress", static_cast<bool>(obj.bufferDeviceAddress));
    p.PrintKeyBool("bufferDeviceAddressCaptureReplay", static_cast<bool>(obj.bufferDeviceAddressCaptureReplay));
    p.PrintKeyBool("bufferDeviceAddressMultiDevice", static_cast<bool>(obj.bufferDeviceAddressMultiDevice));
}
void DumpVkPhysicalDeviceColorWriteEnableFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceColorWriteEnableFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(16);
    p.PrintKeyBool("colorWriteEnable", static_cast<bool>(obj.colorWriteEnable));
}
void DumpVkPhysicalDeviceConditionalRenderingFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceConditionalRenderingFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(29);
    p.PrintKeyBool("conditionalRendering", static_cast<bool>(obj.conditionalRendering));
    p.PrintKeyBool("inheritedConditionalRendering", static_cast<bool>(obj.inheritedConditionalRendering));
}
void DumpVkPhysicalDeviceConservativeRasterizationPropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceConservativeRasterizationPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(43);
    p.PrintKeyValue("primitiveOverestimationSize", obj.primitiveOverestimationSize);
    p.PrintKeyValue("maxExtraPrimitiveOverestimationSize", obj.maxExtraPrimitiveOverestimationSize);
    p.PrintKeyValue("extraPrimitiveOverestimationSizeGranularity", obj.extraPrimitiveOverestimationSizeGranularity);
    p.PrintKeyBool("primitiveUnderestimation", static_cast<bool>(obj.primitiveUnderestimation));
    p.PrintKeyBool("conservativePointAndLineRasterization", static_cast<bool>(obj.conservativePointAndLineRasterization));
    p.PrintKeyBool("degenerateTrianglesRasterized", static_cast<bool>(obj.degenerateTrianglesRasterized));
    p.PrintKeyBool("degenerateLinesRasterized", static_cast<bool>(obj.degenerateLinesRasterized));
    p.PrintKeyBool("fullyCoveredFragmentShaderInputVariable", static_cast<bool>(obj.fullyCoveredFragmentShaderInputVariable));
    p.PrintKeyBool("conservativeRasterizationPostDepthCoverage", static_cast<bool>(obj.conservativeRasterizationPostDepthCoverage));
}
void DumpVkPhysicalDeviceCustomBorderColorFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceCustomBorderColorFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(30);
    p.PrintKeyBool("customBorderColors", static_cast<bool>(obj.customBorderColors));
    p.PrintKeyBool("customBorderColorWithoutFormat", static_cast<bool>(obj.customBorderColorWithoutFormat));
}
void DumpVkPhysicalDeviceCustomBorderColorPropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceCustomBorderColorPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(28);
    p.PrintKeyValue("maxCustomBorderColorSamplers", obj.maxCustomBorderColorSamplers);
}
void DumpVkPhysicalDeviceDepthClipControlFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceDepthClipControlFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(16);
    p.PrintKeyBool("depthClipControl", static_cast<bool>(obj.depthClipControl));
}
void DumpVkPhysicalDeviceDepthClipEnableFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceDepthClipEnableFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(15);
    p.PrintKeyBool("depthClipEnable", static_cast<bool>(obj.depthClipEnable));
}
void DumpVkPhysicalDeviceDepthStencilResolveProperties(Printer &p, std::string name, VkPhysicalDeviceDepthStencilResolveProperties &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(22);
    DumpVkResolveModeFlags(p, "supportedDepthResolveModes", obj.supportedDepthResolveModes);
    DumpVkResolveModeFlags(p, "supportedStencilResolveModes", obj.supportedStencilResolveModes);
    p.PrintKeyBool("independentResolveNone", static_cast<bool>(obj.independentResolveNone));
    p.PrintKeyBool("independentResolve", static_cast<bool>(obj.independentResolve));
}
void DumpVkPhysicalDeviceDescriptorIndexingFeatures(Printer &p, std::string name, VkPhysicalDeviceDescriptorIndexingFeatures &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(50);
    p.PrintKeyBool("shaderInputAttachmentArrayDynamicIndexing", static_cast<bool>(obj.shaderInputAttachmentArrayDynamicIndexing));
    p.PrintKeyBool("shaderUniformTexelBufferArrayDynamicIndexing", static_cast<bool>(obj.shaderUniformTexelBufferArrayDynamicIndexing));
    p.PrintKeyBool("shaderStorageTexelBufferArrayDynamicIndexing", static_cast<bool>(obj.shaderStorageTexelBufferArrayDynamicIndexing));
    p.PrintKeyBool("shaderUniformBufferArrayNonUniformIndexing", static_cast<bool>(obj.shaderUniformBufferArrayNonUniformIndexing));
    p.PrintKeyBool("shaderSampledImageArrayNonUniformIndexing", static_cast<bool>(obj.shaderSampledImageArrayNonUniformIndexing));
    p.PrintKeyBool("shaderStorageBufferArrayNonUniformIndexing", static_cast<bool>(obj.shaderStorageBufferArrayNonUniformIndexing));
    p.PrintKeyBool("shaderStorageImageArrayNonUniformIndexing", static_cast<bool>(obj.shaderStorageImageArrayNonUniformIndexing));
    p.PrintKeyBool("shaderInputAttachmentArrayNonUniformIndexing", static_cast<bool>(obj.shaderInputAttachmentArrayNonUniformIndexing));
    p.PrintKeyBool("shaderUniformTexelBufferArrayNonUniformIndexing", static_cast<bool>(obj.shaderUniformTexelBufferArrayNonUniformIndexing));
    p.PrintKeyBool("shaderStorageTexelBufferArrayNonUniformIndexing", static_cast<bool>(obj.shaderStorageTexelBufferArrayNonUniformIndexing));
    p.PrintKeyBool("descriptorBindingUniformBufferUpdateAfterBind", static_cast<bool>(obj.descriptorBindingUniformBufferUpdateAfterBind));
    p.PrintKeyBool("descriptorBindingSampledImageUpdateAfterBind", static_cast<bool>(obj.descriptorBindingSampledImageUpdateAfterBind));
    p.PrintKeyBool("descriptorBindingStorageImageUpdateAfterBind", static_cast<bool>(obj.descriptorBindingStorageImageUpdateAfterBind));
    p.PrintKeyBool("descriptorBindingStorageBufferUpdateAfterBind", static_cast<bool>(obj.descriptorBindingStorageBufferUpdateAfterBind));
    p.PrintKeyBool("descriptorBindingUniformTexelBufferUpdateAfterBind", static_cast<bool>(obj.descriptorBindingUniformTexelBufferUpdateAfterBind));
    p.PrintKeyBool("descriptorBindingStorageTexelBufferUpdateAfterBind", static_cast<bool>(obj.descriptorBindingStorageTexelBufferUpdateAfterBind));
    p.PrintKeyBool("descriptorBindingUpdateUnusedWhilePending", static_cast<bool>(obj.descriptorBindingUpdateUnusedWhilePending));
    p.PrintKeyBool("descriptorBindingPartiallyBound", static_cast<bool>(obj.descriptorBindingPartiallyBound));
    p.PrintKeyBool("descriptorBindingVariableDescriptorCount", static_cast<bool>(obj.descriptorBindingVariableDescriptorCount));
    p.PrintKeyBool("runtimeDescriptorArray", static_cast<bool>(obj.runtimeDescriptorArray));
}
void DumpVkPhysicalDeviceDescriptorIndexingProperties(Printer &p, std::string name, VkPhysicalDeviceDescriptorIndexingProperties &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(52);
    p.PrintKeyValue("maxUpdateAfterBindDescriptorsInAllPools", obj.maxUpdateAfterBindDescriptorsInAllPools);
    p.PrintKeyBool("shaderUniformBufferArrayNonUniformIndexingNative", static_cast<bool>(obj.shaderUniformBufferArrayNonUniformIndexingNative));
    p.PrintKeyBool("shaderSampledImageArrayNonUniformIndexingNative", static_cast<bool>(obj.shaderSampledImageArrayNonUniformIndexingNative));
    p.PrintKeyBool("shaderStorageBufferArrayNonUniformIndexingNative", static_cast<bool>(obj.shaderStorageBufferArrayNonUniformIndexingNative));
    p.PrintKeyBool("shaderStorageImageArrayNonUniformIndexingNative", static_cast<bool>(obj.shaderStorageImageArrayNonUniformIndexingNative));
    p.PrintKeyBool("shaderInputAttachmentArrayNonUniformIndexingNative", static_cast<bool>(obj.shaderInputAttachmentArrayNonUniformIndexingNative));
    p.PrintKeyBool("robustBufferAccessUpdateAfterBind", static_cast<bool>(obj.robustBufferAccessUpdateAfterBind));
    p.PrintKeyBool("quadDivergentImplicitLod", static_cast<bool>(obj.quadDivergentImplicitLod));
    p.PrintKeyValue("maxPerStageDescriptorUpdateAfterBindSamplers", obj.maxPerStageDescriptorUpdateAfterBindSamplers);
    p.PrintKeyValue("maxPerStageDescriptorUpdateAfterBindUniformBuffers", obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers);
    p.PrintKeyValue("maxPerStageDescriptorUpdateAfterBindStorageBuffers", obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers);
    p.PrintKeyValue("maxPerStageDescriptorUpdateAfterBindSampledImages", obj.maxPerStageDescriptorUpdateAfterBindSampledImages);
    p.PrintKeyValue("maxPerStageDescriptorUpdateAfterBindStorageImages", obj.maxPerStageDescriptorUpdateAfterBindStorageImages);
    p.PrintKeyValue("maxPerStageDescriptorUpdateAfterBindInputAttachments", obj.maxPerStageDescriptorUpdateAfterBindInputAttachments);
    p.PrintKeyValue("maxPerStageUpdateAfterBindResources", obj.maxPerStageUpdateAfterBindResources);
    p.PrintKeyValue("maxDescriptorSetUpdateAfterBindSamplers", obj.maxDescriptorSetUpdateAfterBindSamplers);
    p.PrintKeyValue("maxDescriptorSetUpdateAfterBindUniformBuffers", obj.maxDescriptorSetUpdateAfterBindUniformBuffers);
    p.PrintKeyValue("maxDescriptorSetUpdateAfterBindUniformBuffersDynamic", obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic);
    p.PrintKeyValue("maxDescriptorSetUpdateAfterBindStorageBuffers", obj.maxDescriptorSetUpdateAfterBindStorageBuffers);
    p.PrintKeyValue("maxDescriptorSetUpdateAfterBindStorageBuffersDynamic", obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic);
    p.PrintKeyValue("maxDescriptorSetUpdateAfterBindSampledImages", obj.maxDescriptorSetUpdateAfterBindSampledImages);
    p.PrintKeyValue("maxDescriptorSetUpdateAfterBindStorageImages", obj.maxDescriptorSetUpdateAfterBindStorageImages);
    p.PrintKeyValue("maxDescriptorSetUpdateAfterBindInputAttachments", obj.maxDescriptorSetUpdateAfterBindInputAttachments);
}
void DumpVkPhysicalDeviceDeviceMemoryReportFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceDeviceMemoryReportFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(18);
    p.PrintKeyBool("deviceMemoryReport", static_cast<bool>(obj.deviceMemoryReport));
}
void DumpVkPhysicalDeviceDiscardRectanglePropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceDiscardRectanglePropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(20);
    p.PrintKeyValue("maxDiscardRectangles", obj.maxDiscardRectangles);
}
void DumpVkPhysicalDeviceDriverProperties(Printer &p, std::string name, VkPhysicalDeviceDriverProperties &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(18);
    DumpVkDriverId(p, "driverID", obj.driverID);
    p.PrintKeyString("driverName", obj.driverName);
    p.PrintKeyString("driverInfo", obj.driverInfo);
    DumpVkConformanceVersion(p, "conformanceVersion", obj.conformanceVersion);
}
void DumpVkPhysicalDeviceDrmPropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceDrmPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(12);
    p.PrintKeyBool("hasPrimary", static_cast<bool>(obj.hasPrimary));
    p.PrintKeyBool("hasRender", static_cast<bool>(obj.hasRender));
    p.PrintKeyValue("primaryMajor", obj.primaryMajor);
    p.PrintKeyValue("primaryMinor", obj.primaryMinor);
    p.PrintKeyValue("renderMajor", obj.renderMajor);
    p.PrintKeyValue("renderMinor", obj.renderMinor);
}
void DumpVkPhysicalDeviceDynamicRenderingFeaturesKHR(Printer &p, std::string name, VkPhysicalDeviceDynamicRenderingFeaturesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(16);
    p.PrintKeyBool("dynamicRendering", static_cast<bool>(obj.dynamicRendering));
}
void DumpVkPhysicalDeviceExtendedDynamicState2FeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceExtendedDynamicState2FeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(39);
    p.PrintKeyBool("extendedDynamicState2", static_cast<bool>(obj.extendedDynamicState2));
    p.PrintKeyBool("extendedDynamicState2LogicOp", static_cast<bool>(obj.extendedDynamicState2LogicOp));
    p.PrintKeyBool("extendedDynamicState2PatchControlPoints", static_cast<bool>(obj.extendedDynamicState2PatchControlPoints));
}
void DumpVkPhysicalDeviceExtendedDynamicStateFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceExtendedDynamicStateFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(20);
    p.PrintKeyBool("extendedDynamicState", static_cast<bool>(obj.extendedDynamicState));
}
void DumpVkPhysicalDeviceExternalMemoryHostPropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceExternalMemoryHostPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(31);
    p.PrintKeyValue("minImportedHostPointerAlignment", to_hex_str(p, obj.minImportedHostPointerAlignment));
}
void DumpVkPhysicalDeviceFeatures(Printer &p, std::string name, VkPhysicalDeviceFeatures &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(39);
    p.PrintKeyBool("robustBufferAccess", static_cast<bool>(obj.robustBufferAccess));
    p.PrintKeyBool("fullDrawIndexUint32", static_cast<bool>(obj.fullDrawIndexUint32));
    p.PrintKeyBool("imageCubeArray", static_cast<bool>(obj.imageCubeArray));
    p.PrintKeyBool("independentBlend", static_cast<bool>(obj.independentBlend));
    p.PrintKeyBool("geometryShader", static_cast<bool>(obj.geometryShader));
    p.PrintKeyBool("tessellationShader", static_cast<bool>(obj.tessellationShader));
    p.PrintKeyBool("sampleRateShading", static_cast<bool>(obj.sampleRateShading));
    p.PrintKeyBool("dualSrcBlend", static_cast<bool>(obj.dualSrcBlend));
    p.PrintKeyBool("logicOp", static_cast<bool>(obj.logicOp));
    p.PrintKeyBool("multiDrawIndirect", static_cast<bool>(obj.multiDrawIndirect));
    p.PrintKeyBool("drawIndirectFirstInstance", static_cast<bool>(obj.drawIndirectFirstInstance));
    p.PrintKeyBool("depthClamp", static_cast<bool>(obj.depthClamp));
    p.PrintKeyBool("depthBiasClamp", static_cast<bool>(obj.depthBiasClamp));
    p.PrintKeyBool("fillModeNonSolid", static_cast<bool>(obj.fillModeNonSolid));
    p.PrintKeyBool("depthBounds", static_cast<bool>(obj.depthBounds));
    p.PrintKeyBool("wideLines", static_cast<bool>(obj.wideLines));
    p.PrintKeyBool("largePoints", static_cast<bool>(obj.largePoints));
    p.PrintKeyBool("alphaToOne", static_cast<bool>(obj.alphaToOne));
    p.PrintKeyBool("multiViewport", static_cast<bool>(obj.multiViewport));
    p.PrintKeyBool("samplerAnisotropy", static_cast<bool>(obj.samplerAnisotropy));
    p.PrintKeyBool("textureCompressionETC2", static_cast<bool>(obj.textureCompressionETC2));
    p.PrintKeyBool("textureCompressionASTC_LDR", static_cast<bool>(obj.textureCompressionASTC_LDR));
    p.PrintKeyBool("textureCompressionBC", static_cast<bool>(obj.textureCompressionBC));
    p.PrintKeyBool("occlusionQueryPrecise", static_cast<bool>(obj.occlusionQueryPrecise));
    p.PrintKeyBool("pipelineStatisticsQuery", static_cast<bool>(obj.pipelineStatisticsQuery));
    p.PrintKeyBool("vertexPipelineStoresAndAtomics", static_cast<bool>(obj.vertexPipelineStoresAndAtomics));
    p.PrintKeyBool("fragmentStoresAndAtomics", static_cast<bool>(obj.fragmentStoresAndAtomics));
    p.PrintKeyBool("shaderTessellationAndGeometryPointSize", static_cast<bool>(obj.shaderTessellationAndGeometryPointSize));
    p.PrintKeyBool("shaderImageGatherExtended", static_cast<bool>(obj.shaderImageGatherExtended));
    p.PrintKeyBool("shaderStorageImageExtendedFormats", static_cast<bool>(obj.shaderStorageImageExtendedFormats));
    p.PrintKeyBool("shaderStorageImageMultisample", static_cast<bool>(obj.shaderStorageImageMultisample));
    p.PrintKeyBool("shaderStorageImageReadWithoutFormat", static_cast<bool>(obj.shaderStorageImageReadWithoutFormat));
    p.PrintKeyBool("shaderStorageImageWriteWithoutFormat", static_cast<bool>(obj.shaderStorageImageWriteWithoutFormat));
    p.PrintKeyBool("shaderUniformBufferArrayDynamicIndexing", static_cast<bool>(obj.shaderUniformBufferArrayDynamicIndexing));
    p.PrintKeyBool("shaderSampledImageArrayDynamicIndexing", static_cast<bool>(obj.shaderSampledImageArrayDynamicIndexing));
    p.PrintKeyBool("shaderStorageBufferArrayDynamicIndexing", static_cast<bool>(obj.shaderStorageBufferArrayDynamicIndexing));
    p.PrintKeyBool("shaderStorageImageArrayDynamicIndexing", static_cast<bool>(obj.shaderStorageImageArrayDynamicIndexing));
    p.PrintKeyBool("shaderClipDistance", static_cast<bool>(obj.shaderClipDistance));
    p.PrintKeyBool("shaderCullDistance", static_cast<bool>(obj.shaderCullDistance));
    p.PrintKeyBool("shaderFloat64", static_cast<bool>(obj.shaderFloat64));
    p.PrintKeyBool("shaderInt64", static_cast<bool>(obj.shaderInt64));
    p.PrintKeyBool("shaderInt16", static_cast<bool>(obj.shaderInt16));
    p.PrintKeyBool("shaderResourceResidency", static_cast<bool>(obj.shaderResourceResidency));
    p.PrintKeyBool("shaderResourceMinLod", static_cast<bool>(obj.shaderResourceMinLod));
    p.PrintKeyBool("sparseBinding", static_cast<bool>(obj.sparseBinding));
    p.PrintKeyBool("sparseResidencyBuffer", static_cast<bool>(obj.sparseResidencyBuffer));
    p.PrintKeyBool("sparseResidencyImage2D", static_cast<bool>(obj.sparseResidencyImage2D));
    p.PrintKeyBool("sparseResidencyImage3D", static_cast<bool>(obj.sparseResidencyImage3D));
    p.PrintKeyBool("sparseResidency2Samples", static_cast<bool>(obj.sparseResidency2Samples));
    p.PrintKeyBool("sparseResidency4Samples", static_cast<bool>(obj.sparseResidency4Samples));
    p.PrintKeyBool("sparseResidency8Samples", static_cast<bool>(obj.sparseResidency8Samples));
    p.PrintKeyBool("sparseResidency16Samples", static_cast<bool>(obj.sparseResidency16Samples));
    p.PrintKeyBool("sparseResidencyAliased", static_cast<bool>(obj.sparseResidencyAliased));
    p.PrintKeyBool("variableMultisampleRate", static_cast<bool>(obj.variableMultisampleRate));
    p.PrintKeyBool("inheritedQueries", static_cast<bool>(obj.inheritedQueries));
}
void DumpVkPhysicalDeviceFloatControlsProperties(Printer &p, std::string name, VkPhysicalDeviceFloatControlsProperties &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(37);
    DumpVkShaderFloatControlsIndependence(p, "denormBehaviorIndependence", obj.denormBehaviorIndependence);
    DumpVkShaderFloatControlsIndependence(p, "roundingModeIndependence", obj.roundingModeIndependence);
    p.PrintKeyBool("shaderSignedZeroInfNanPreserveFloat16", static_cast<bool>(obj.shaderSignedZeroInfNanPreserveFloat16));
    p.PrintKeyBool("shaderSignedZeroInfNanPreserveFloat32", static_cast<bool>(obj.shaderSignedZeroInfNanPreserveFloat32));
    p.PrintKeyBool("shaderSignedZeroInfNanPreserveFloat64", static_cast<bool>(obj.shaderSignedZeroInfNanPreserveFloat64));
    p.PrintKeyBool("shaderDenormPreserveFloat16", static_cast<bool>(obj.shaderDenormPreserveFloat16));
    p.PrintKeyBool("shaderDenormPreserveFloat32", static_cast<bool>(obj.shaderDenormPreserveFloat32));
    p.PrintKeyBool("shaderDenormPreserveFloat64", static_cast<bool>(obj.shaderDenormPreserveFloat64));
    p.PrintKeyBool("shaderDenormFlushToZeroFloat16", static_cast<bool>(obj.shaderDenormFlushToZeroFloat16));
    p.PrintKeyBool("shaderDenormFlushToZeroFloat32", static_cast<bool>(obj.shaderDenormFlushToZeroFloat32));
    p.PrintKeyBool("shaderDenormFlushToZeroFloat64", static_cast<bool>(obj.shaderDenormFlushToZeroFloat64));
    p.PrintKeyBool("shaderRoundingModeRTEFloat16", static_cast<bool>(obj.shaderRoundingModeRTEFloat16));
    p.PrintKeyBool("shaderRoundingModeRTEFloat32", static_cast<bool>(obj.shaderRoundingModeRTEFloat32));
    p.PrintKeyBool("shaderRoundingModeRTEFloat64", static_cast<bool>(obj.shaderRoundingModeRTEFloat64));
    p.PrintKeyBool("shaderRoundingModeRTZFloat16", static_cast<bool>(obj.shaderRoundingModeRTZFloat16));
    p.PrintKeyBool("shaderRoundingModeRTZFloat32", static_cast<bool>(obj.shaderRoundingModeRTZFloat32));
    p.PrintKeyBool("shaderRoundingModeRTZFloat64", static_cast<bool>(obj.shaderRoundingModeRTZFloat64));
}
void DumpVkPhysicalDeviceFragmentDensityMap2FeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceFragmentDensityMap2FeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(26);
    p.PrintKeyBool("fragmentDensityMapDeferred", static_cast<bool>(obj.fragmentDensityMapDeferred));
}
void DumpVkPhysicalDeviceFragmentDensityMap2PropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceFragmentDensityMap2PropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(41);
    p.PrintKeyBool("subsampledLoads", static_cast<bool>(obj.subsampledLoads));
    p.PrintKeyBool("subsampledCoarseReconstructionEarlyAccess", static_cast<bool>(obj.subsampledCoarseReconstructionEarlyAccess));
    p.PrintKeyValue("maxSubsampledArrayLayers", obj.maxSubsampledArrayLayers);
    p.PrintKeyValue("maxDescriptorSetSubsampledSamplers", obj.maxDescriptorSetSubsampledSamplers);
}
void DumpVkPhysicalDeviceFragmentDensityMapFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceFragmentDensityMapFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(37);
    p.PrintKeyBool("fragmentDensityMap", static_cast<bool>(obj.fragmentDensityMap));
    p.PrintKeyBool("fragmentDensityMapDynamic", static_cast<bool>(obj.fragmentDensityMapDynamic));
    p.PrintKeyBool("fragmentDensityMapNonSubsampledImages", static_cast<bool>(obj.fragmentDensityMapNonSubsampledImages));
}
void DumpVkPhysicalDeviceFragmentDensityMapPropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceFragmentDensityMapPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(26);
    DumpVkExtent2D(p, "minFragmentDensityTexelSize", obj.minFragmentDensityTexelSize);
    DumpVkExtent2D(p, "maxFragmentDensityTexelSize", obj.maxFragmentDensityTexelSize);
    p.PrintKeyBool("fragmentDensityInvocations", static_cast<bool>(obj.fragmentDensityInvocations));
}
void DumpVkPhysicalDeviceFragmentShaderInterlockFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(34);
    p.PrintKeyBool("fragmentShaderSampleInterlock", static_cast<bool>(obj.fragmentShaderSampleInterlock));
    p.PrintKeyBool("fragmentShaderPixelInterlock", static_cast<bool>(obj.fragmentShaderPixelInterlock));
    p.PrintKeyBool("fragmentShaderShadingRateInterlock", static_cast<bool>(obj.fragmentShaderShadingRateInterlock));
}
void DumpVkPhysicalDeviceFragmentShadingRateFeaturesKHR(Printer &p, std::string name, VkPhysicalDeviceFragmentShadingRateFeaturesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(29);
    p.PrintKeyBool("pipelineFragmentShadingRate", static_cast<bool>(obj.pipelineFragmentShadingRate));
    p.PrintKeyBool("primitiveFragmentShadingRate", static_cast<bool>(obj.primitiveFragmentShadingRate));
    p.PrintKeyBool("attachmentFragmentShadingRate", static_cast<bool>(obj.attachmentFragmentShadingRate));
}
void DumpVkPhysicalDeviceFragmentShadingRatePropertiesKHR(Printer &p, std::string name, VkPhysicalDeviceFragmentShadingRatePropertiesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(52);
    DumpVkExtent2D(p, "minFragmentShadingRateAttachmentTexelSize", obj.minFragmentShadingRateAttachmentTexelSize);
    DumpVkExtent2D(p, "maxFragmentShadingRateAttachmentTexelSize", obj.maxFragmentShadingRateAttachmentTexelSize);
    p.PrintKeyValue("maxFragmentShadingRateAttachmentTexelSizeAspectRatio", obj.maxFragmentShadingRateAttachmentTexelSizeAspectRatio);
    p.PrintKeyBool("primitiveFragmentShadingRateWithMultipleViewports", static_cast<bool>(obj.primitiveFragmentShadingRateWithMultipleViewports));
    p.PrintKeyBool("layeredShadingRateAttachments", static_cast<bool>(obj.layeredShadingRateAttachments));
    p.PrintKeyBool("fragmentShadingRateNonTrivialCombinerOps", static_cast<bool>(obj.fragmentShadingRateNonTrivialCombinerOps));
    DumpVkExtent2D(p, "maxFragmentSize", obj.maxFragmentSize);
    p.PrintKeyValue("maxFragmentSizeAspectRatio", obj.maxFragmentSizeAspectRatio);
    p.PrintKeyValue("maxFragmentShadingRateCoverageSamples", obj.maxFragmentShadingRateCoverageSamples);
    DumpVkSampleCountFlagBits(p, "maxFragmentShadingRateRasterizationSamples", obj.maxFragmentShadingRateRasterizationSamples);
    p.PrintKeyBool("fragmentShadingRateWithShaderDepthStencilWrites", static_cast<bool>(obj.fragmentShadingRateWithShaderDepthStencilWrites));
    p.PrintKeyBool("fragmentShadingRateWithSampleMask", static_cast<bool>(obj.fragmentShadingRateWithSampleMask));
    p.PrintKeyBool("fragmentShadingRateWithShaderSampleMask", static_cast<bool>(obj.fragmentShadingRateWithShaderSampleMask));
    p.PrintKeyBool("fragmentShadingRateWithConservativeRasterization", static_cast<bool>(obj.fragmentShadingRateWithConservativeRasterization));
    p.PrintKeyBool("fragmentShadingRateWithFragmentShaderInterlock", static_cast<bool>(obj.fragmentShadingRateWithFragmentShaderInterlock));
    p.PrintKeyBool("fragmentShadingRateWithCustomSampleLocations", static_cast<bool>(obj.fragmentShadingRateWithCustomSampleLocations));
    p.PrintKeyBool("fragmentShadingRateStrictMultiplyCombiner", static_cast<bool>(obj.fragmentShadingRateStrictMultiplyCombiner));
}
void DumpVkPhysicalDeviceGlobalPriorityQueryFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(19);
    p.PrintKeyBool("globalPriorityQuery", static_cast<bool>(obj.globalPriorityQuery));
}
void DumpVkPhysicalDeviceHostQueryResetFeatures(Printer &p, std::string name, VkPhysicalDeviceHostQueryResetFeatures &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(14);
    p.PrintKeyBool("hostQueryReset", static_cast<bool>(obj.hostQueryReset));
}
void DumpVkPhysicalDeviceIDProperties(Printer &p, std::string name, VkPhysicalDeviceIDProperties &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(15);
    p.PrintKeyString("deviceUUID", to_string_16(obj.deviceUUID));
    p.PrintKeyString("driverUUID", to_string_16(obj.driverUUID));
    if (obj.deviceLUIDValid) p.PrintKeyString("deviceLUID", to_string_8(obj.deviceLUID));
    p.PrintKeyValue("deviceNodeMask", obj.deviceNodeMask);
    p.PrintKeyBool("deviceLUIDValid", static_cast<bool>(obj.deviceLUIDValid));
}
void DumpVkPhysicalDeviceImageRobustnessFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceImageRobustnessFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(17);
    p.PrintKeyBool("robustImageAccess", static_cast<bool>(obj.robustImageAccess));
}
void DumpVkPhysicalDeviceImageViewMinLodFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceImageViewMinLodFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(6);
    p.PrintKeyBool("minLod", static_cast<bool>(obj.minLod));
}
void DumpVkPhysicalDeviceImagelessFramebufferFeatures(Printer &p, std::string name, VkPhysicalDeviceImagelessFramebufferFeatures &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(20);
    p.PrintKeyBool("imagelessFramebuffer", static_cast<bool>(obj.imagelessFramebuffer));
}
void DumpVkPhysicalDeviceIndexTypeUint8FeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceIndexTypeUint8FeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(14);
    p.PrintKeyBool("indexTypeUint8", static_cast<bool>(obj.indexTypeUint8));
}
void DumpVkPhysicalDeviceInlineUniformBlockFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceInlineUniformBlockFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(50);
    p.PrintKeyBool("inlineUniformBlock", static_cast<bool>(obj.inlineUniformBlock));
    p.PrintKeyBool("descriptorBindingInlineUniformBlockUpdateAfterBind", static_cast<bool>(obj.descriptorBindingInlineUniformBlockUpdateAfterBind));
}
void DumpVkPhysicalDeviceInlineUniformBlockPropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceInlineUniformBlockPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(55);
    p.PrintKeyValue("maxInlineUniformBlockSize", obj.maxInlineUniformBlockSize);
    p.PrintKeyValue("maxPerStageDescriptorInlineUniformBlocks", obj.maxPerStageDescriptorInlineUniformBlocks);
    p.PrintKeyValue("maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks", obj.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks);
    p.PrintKeyValue("maxDescriptorSetInlineUniformBlocks", obj.maxDescriptorSetInlineUniformBlocks);
    p.PrintKeyValue("maxDescriptorSetUpdateAfterBindInlineUniformBlocks", obj.maxDescriptorSetUpdateAfterBindInlineUniformBlocks);
}
void DumpVkPhysicalDeviceLimits(Printer &p, std::string name, VkPhysicalDeviceLimits &obj) {
    if (p.Type() == OutputType::json)
        p.ObjectStart("limits");
    else
        p.SetSubHeader().ObjectStart(name);
    p.SetMinKeyWidth(47);
    p.PrintKeyValue("maxImageDimension1D", obj.maxImageDimension1D);
    p.PrintKeyValue("maxImageDimension2D", obj.maxImageDimension2D);
    p.PrintKeyValue("maxImageDimension3D", obj.maxImageDimension3D);
    p.PrintKeyValue("maxImageDimensionCube", obj.maxImageDimensionCube);
    p.PrintKeyValue("maxImageArrayLayers", obj.maxImageArrayLayers);
    p.PrintKeyValue("maxTexelBufferElements", obj.maxTexelBufferElements);
    p.PrintKeyValue("maxUniformBufferRange", obj.maxUniformBufferRange);
    p.PrintKeyValue("maxStorageBufferRange", obj.maxStorageBufferRange);
    p.PrintKeyValue("maxPushConstantsSize", obj.maxPushConstantsSize);
    p.PrintKeyValue("maxMemoryAllocationCount", obj.maxMemoryAllocationCount);
    p.PrintKeyValue("maxSamplerAllocationCount", obj.maxSamplerAllocationCount);
    p.PrintKeyValue("bufferImageGranularity", to_hex_str(p, obj.bufferImageGranularity));
    p.PrintKeyValue("sparseAddressSpaceSize", to_hex_str(p, obj.sparseAddressSpaceSize));
    p.PrintKeyValue("maxBoundDescriptorSets", obj.maxBoundDescriptorSets);
    p.PrintKeyValue("maxPerStageDescriptorSamplers", obj.maxPerStageDescriptorSamplers);
    p.PrintKeyValue("maxPerStageDescriptorUniformBuffers", obj.maxPerStageDescriptorUniformBuffers);
    p.PrintKeyValue("maxPerStageDescriptorStorageBuffers", obj.maxPerStageDescriptorStorageBuffers);
    p.PrintKeyValue("maxPerStageDescriptorSampledImages", obj.maxPerStageDescriptorSampledImages);
    p.PrintKeyValue("maxPerStageDescriptorStorageImages", obj.maxPerStageDescriptorStorageImages);
    p.PrintKeyValue("maxPerStageDescriptorInputAttachments", obj.maxPerStageDescriptorInputAttachments);
    p.PrintKeyValue("maxPerStageResources", obj.maxPerStageResources);
    p.PrintKeyValue("maxDescriptorSetSamplers", obj.maxDescriptorSetSamplers);
    p.PrintKeyValue("maxDescriptorSetUniformBuffers", obj.maxDescriptorSetUniformBuffers);
    p.PrintKeyValue("maxDescriptorSetUniformBuffersDynamic", obj.maxDescriptorSetUniformBuffersDynamic);
    p.PrintKeyValue("maxDescriptorSetStorageBuffers", obj.maxDescriptorSetStorageBuffers);
    p.PrintKeyValue("maxDescriptorSetStorageBuffersDynamic", obj.maxDescriptorSetStorageBuffersDynamic);
    p.PrintKeyValue("maxDescriptorSetSampledImages", obj.maxDescriptorSetSampledImages);
    p.PrintKeyValue("maxDescriptorSetStorageImages", obj.maxDescriptorSetStorageImages);
    p.PrintKeyValue("maxDescriptorSetInputAttachments", obj.maxDescriptorSetInputAttachments);
    p.PrintKeyValue("maxVertexInputAttributes", obj.maxVertexInputAttributes);
    p.PrintKeyValue("maxVertexInputBindings", obj.maxVertexInputBindings);
    p.PrintKeyValue("maxVertexInputAttributeOffset", obj.maxVertexInputAttributeOffset);
    p.PrintKeyValue("maxVertexInputBindingStride", obj.maxVertexInputBindingStride);
    p.PrintKeyValue("maxVertexOutputComponents", obj.maxVertexOutputComponents);
    p.PrintKeyValue("maxTessellationGenerationLevel", obj.maxTessellationGenerationLevel);
    p.PrintKeyValue("maxTessellationPatchSize", obj.maxTessellationPatchSize);
    p.PrintKeyValue("maxTessellationControlPerVertexInputComponents", obj.maxTessellationControlPerVertexInputComponents);
    p.PrintKeyValue("maxTessellationControlPerVertexOutputComponents", obj.maxTessellationControlPerVertexOutputComponents);
    p.PrintKeyValue("maxTessellationControlPerPatchOutputComponents", obj.maxTessellationControlPerPatchOutputComponents);
    p.PrintKeyValue("maxTessellationControlTotalOutputComponents", obj.maxTessellationControlTotalOutputComponents);
    p.PrintKeyValue("maxTessellationEvaluationInputComponents", obj.maxTessellationEvaluationInputComponents);
    p.PrintKeyValue("maxTessellationEvaluationOutputComponents", obj.maxTessellationEvaluationOutputComponents);
    p.PrintKeyValue("maxGeometryShaderInvocations", obj.maxGeometryShaderInvocations);
    p.PrintKeyValue("maxGeometryInputComponents", obj.maxGeometryInputComponents);
    p.PrintKeyValue("maxGeometryOutputComponents", obj.maxGeometryOutputComponents);
    p.PrintKeyValue("maxGeometryOutputVertices", obj.maxGeometryOutputVertices);
    p.PrintKeyValue("maxGeometryTotalOutputComponents", obj.maxGeometryTotalOutputComponents);
    p.PrintKeyValue("maxFragmentInputComponents", obj.maxFragmentInputComponents);
    p.PrintKeyValue("maxFragmentOutputAttachments", obj.maxFragmentOutputAttachments);
    p.PrintKeyValue("maxFragmentDualSrcAttachments", obj.maxFragmentDualSrcAttachments);
    p.PrintKeyValue("maxFragmentCombinedOutputResources", obj.maxFragmentCombinedOutputResources);
    p.PrintKeyValue("maxComputeSharedMemorySize", obj.maxComputeSharedMemorySize);
    {   ArrayWrapper arr(p,"maxComputeWorkGroupCount", 3);
        p.PrintElement(obj.maxComputeWorkGroupCount[0]);
        p.PrintElement(obj.maxComputeWorkGroupCount[1]);
        p.PrintElement(obj.maxComputeWorkGroupCount[2]);
    }
    p.PrintKeyValue("maxComputeWorkGroupInvocations", obj.maxComputeWorkGroupInvocations);
    {   ArrayWrapper arr(p,"maxComputeWorkGroupSize", 3);
        p.PrintElement(obj.maxComputeWorkGroupSize[0]);
        p.PrintElement(obj.maxComputeWorkGroupSize[1]);
        p.PrintElement(obj.maxComputeWorkGroupSize[2]);
    }
    p.PrintKeyValue("subPixelPrecisionBits", obj.subPixelPrecisionBits);
    p.PrintKeyValue("subTexelPrecisionBits", obj.subTexelPrecisionBits);
    p.PrintKeyValue("mipmapPrecisionBits", obj.mipmapPrecisionBits);
    p.PrintKeyValue("maxDrawIndexedIndexValue", obj.maxDrawIndexedIndexValue);
    p.PrintKeyValue("maxDrawIndirectCount", obj.maxDrawIndirectCount);
    p.PrintKeyValue("maxSamplerLodBias", obj.maxSamplerLodBias);
    p.PrintKeyValue("maxSamplerAnisotropy", obj.maxSamplerAnisotropy);
    p.PrintKeyValue("maxViewports", obj.maxViewports);
    {   ArrayWrapper arr(p,"maxViewportDimensions", 2);
        p.PrintElement(obj.maxViewportDimensions[0]);
        p.PrintElement(obj.maxViewportDimensions[1]);
    }
    {   ArrayWrapper arr(p,"viewportBoundsRange", 2);
        p.PrintElement(obj.viewportBoundsRange[0]);
        p.PrintElement(obj.viewportBoundsRange[1]);
    }
    p.PrintKeyValue("viewportSubPixelBits", obj.viewportSubPixelBits);
    p.PrintKeyValue("minMemoryMapAlignment", obj.minMemoryMapAlignment);
    p.PrintKeyValue("minTexelBufferOffsetAlignment", to_hex_str(p, obj.minTexelBufferOffsetAlignment));
    p.PrintKeyValue("minUniformBufferOffsetAlignment", to_hex_str(p, obj.minUniformBufferOffsetAlignment));
    p.PrintKeyValue("minStorageBufferOffsetAlignment", to_hex_str(p, obj.minStorageBufferOffsetAlignment));
    p.PrintKeyValue("minTexelOffset", obj.minTexelOffset);
    p.PrintKeyValue("maxTexelOffset", obj.maxTexelOffset);
    p.PrintKeyValue("minTexelGatherOffset", obj.minTexelGatherOffset);
    p.PrintKeyValue("maxTexelGatherOffset", obj.maxTexelGatherOffset);
    p.PrintKeyValue("minInterpolationOffset", obj.minInterpolationOffset);
    p.PrintKeyValue("maxInterpolationOffset", obj.maxInterpolationOffset);
    p.PrintKeyValue("subPixelInterpolationOffsetBits", obj.subPixelInterpolationOffsetBits);
    p.PrintKeyValue("maxFramebufferWidth", obj.maxFramebufferWidth);
    p.PrintKeyValue("maxFramebufferHeight", obj.maxFramebufferHeight);
    p.PrintKeyValue("maxFramebufferLayers", obj.maxFramebufferLayers);
    DumpVkSampleCountFlags(p, "framebufferColorSampleCounts", obj.framebufferColorSampleCounts);
    DumpVkSampleCountFlags(p, "framebufferDepthSampleCounts", obj.framebufferDepthSampleCounts);
    DumpVkSampleCountFlags(p, "framebufferStencilSampleCounts", obj.framebufferStencilSampleCounts);
    DumpVkSampleCountFlags(p, "framebufferNoAttachmentsSampleCounts", obj.framebufferNoAttachmentsSampleCounts);
    p.PrintKeyValue("maxColorAttachments", obj.maxColorAttachments);
    DumpVkSampleCountFlags(p, "sampledImageColorSampleCounts", obj.sampledImageColorSampleCounts);
    DumpVkSampleCountFlags(p, "sampledImageIntegerSampleCounts", obj.sampledImageIntegerSampleCounts);
    DumpVkSampleCountFlags(p, "sampledImageDepthSampleCounts", obj.sampledImageDepthSampleCounts);
    DumpVkSampleCountFlags(p, "sampledImageStencilSampleCounts", obj.sampledImageStencilSampleCounts);
    DumpVkSampleCountFlags(p, "storageImageSampleCounts", obj.storageImageSampleCounts);
    p.PrintKeyValue("maxSampleMaskWords", obj.maxSampleMaskWords);
    p.PrintKeyBool("timestampComputeAndGraphics", static_cast<bool>(obj.timestampComputeAndGraphics));
    p.PrintKeyValue("timestampPeriod", obj.timestampPeriod);
    p.PrintKeyValue("maxClipDistances", obj.maxClipDistances);
    p.PrintKeyValue("maxCullDistances", obj.maxCullDistances);
    p.PrintKeyValue("maxCombinedClipAndCullDistances", obj.maxCombinedClipAndCullDistances);
    p.PrintKeyValue("discreteQueuePriorities", obj.discreteQueuePriorities);
    {   ArrayWrapper arr(p,"pointSizeRange", 2);
        p.PrintElement(obj.pointSizeRange[0]);
        p.PrintElement(obj.pointSizeRange[1]);
    }
    {   ArrayWrapper arr(p,"lineWidthRange", 2);
        p.PrintElement(obj.lineWidthRange[0]);
        p.PrintElement(obj.lineWidthRange[1]);
    }
    p.PrintKeyValue("pointSizeGranularity", obj.pointSizeGranularity);
    p.PrintKeyValue("lineWidthGranularity", obj.lineWidthGranularity);
    p.PrintKeyBool("strictLines", static_cast<bool>(obj.strictLines));
    p.PrintKeyBool("standardSampleLocations", static_cast<bool>(obj.standardSampleLocations));
    p.PrintKeyValue("optimalBufferCopyOffsetAlignment", to_hex_str(p, obj.optimalBufferCopyOffsetAlignment));
    p.PrintKeyValue("optimalBufferCopyRowPitchAlignment", to_hex_str(p, obj.optimalBufferCopyRowPitchAlignment));
    p.PrintKeyValue("nonCoherentAtomSize", to_hex_str(p, obj.nonCoherentAtomSize));
    p.ObjectEnd();
}
void DumpVkPhysicalDeviceLineRasterizationFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceLineRasterizationFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(24);
    p.PrintKeyBool("rectangularLines", static_cast<bool>(obj.rectangularLines));
    p.PrintKeyBool("bresenhamLines", static_cast<bool>(obj.bresenhamLines));
    p.PrintKeyBool("smoothLines", static_cast<bool>(obj.smoothLines));
    p.PrintKeyBool("stippledRectangularLines", static_cast<bool>(obj.stippledRectangularLines));
    p.PrintKeyBool("stippledBresenhamLines", static_cast<bool>(obj.stippledBresenhamLines));
    p.PrintKeyBool("stippledSmoothLines", static_cast<bool>(obj.stippledSmoothLines));
}
void DumpVkPhysicalDeviceLineRasterizationPropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceLineRasterizationPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(25);
    p.PrintKeyValue("lineSubPixelPrecisionBits", obj.lineSubPixelPrecisionBits);
}
void DumpVkPhysicalDeviceMaintenance3Properties(Printer &p, std::string name, VkPhysicalDeviceMaintenance3Properties &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(23);
    p.PrintKeyValue("maxPerSetDescriptors", obj.maxPerSetDescriptors);
    p.PrintKeyValue("maxMemoryAllocationSize", to_hex_str(p, obj.maxMemoryAllocationSize));
}
void DumpVkPhysicalDeviceMaintenance4FeaturesKHR(Printer &p, std::string name, VkPhysicalDeviceMaintenance4FeaturesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(12);
    p.PrintKeyBool("maintenance4", static_cast<bool>(obj.maintenance4));
}
void DumpVkPhysicalDeviceMaintenance4PropertiesKHR(Printer &p, std::string name, VkPhysicalDeviceMaintenance4PropertiesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(13);
    p.PrintKeyValue("maxBufferSize", to_hex_str(p, obj.maxBufferSize));
}
void DumpVkPhysicalDeviceMemoryBudgetPropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceMemoryBudgetPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(14);
    {   ArrayWrapper arr(p,"heapBudget", 16);
        p.PrintElement(obj.heapBudget[0]);
        p.PrintElement(obj.heapBudget[1]);
        p.PrintElement(obj.heapBudget[2]);
        p.PrintElement(obj.heapBudget[3]);
        p.PrintElement(obj.heapBudget[4]);
        p.PrintElement(obj.heapBudget[5]);
        p.PrintElement(obj.heapBudget[6]);
        p.PrintElement(obj.heapBudget[7]);
        p.PrintElement(obj.heapBudget[8]);
        p.PrintElement(obj.heapBudget[9]);
        p.PrintElement(obj.heapBudget[10]);
        p.PrintElement(obj.heapBudget[11]);
        p.PrintElement(obj.heapBudget[12]);
        p.PrintElement(obj.heapBudget[13]);
        p.PrintElement(obj.heapBudget[14]);
        p.PrintElement(obj.heapBudget[15]);
    }
    {   ArrayWrapper arr(p,"heapUsage", 16);
        p.PrintElement(obj.heapUsage[0]);
        p.PrintElement(obj.heapUsage[1]);
        p.PrintElement(obj.heapUsage[2]);
        p.PrintElement(obj.heapUsage[3]);
        p.PrintElement(obj.heapUsage[4]);
        p.PrintElement(obj.heapUsage[5]);
        p.PrintElement(obj.heapUsage[6]);
        p.PrintElement(obj.heapUsage[7]);
        p.PrintElement(obj.heapUsage[8]);
        p.PrintElement(obj.heapUsage[9]);
        p.PrintElement(obj.heapUsage[10]);
        p.PrintElement(obj.heapUsage[11]);
        p.PrintElement(obj.heapUsage[12]);
        p.PrintElement(obj.heapUsage[13]);
        p.PrintElement(obj.heapUsage[14]);
        p.PrintElement(obj.heapUsage[15]);
    }
}
void DumpVkPhysicalDeviceMemoryPriorityFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceMemoryPriorityFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(14);
    p.PrintKeyBool("memoryPriority", static_cast<bool>(obj.memoryPriority));
}
void DumpVkPhysicalDeviceMultiDrawFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceMultiDrawFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(9);
    p.PrintKeyBool("multiDraw", static_cast<bool>(obj.multiDraw));
}
void DumpVkPhysicalDeviceMultiDrawPropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceMultiDrawPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(17);
    p.PrintKeyValue("maxMultiDrawCount", obj.maxMultiDrawCount);
}
void DumpVkPhysicalDeviceMultiviewFeatures(Printer &p, std::string name, VkPhysicalDeviceMultiviewFeatures &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(27);
    p.PrintKeyBool("multiview", static_cast<bool>(obj.multiview));
    p.PrintKeyBool("multiviewGeometryShader", static_cast<bool>(obj.multiviewGeometryShader));
    p.PrintKeyBool("multiviewTessellationShader", static_cast<bool>(obj.multiviewTessellationShader));
}
void DumpVkPhysicalDeviceMultiviewProperties(Printer &p, std::string name, VkPhysicalDeviceMultiviewProperties &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(25);
    p.PrintKeyValue("maxMultiviewViewCount", obj.maxMultiviewViewCount);
    p.PrintKeyValue("maxMultiviewInstanceIndex", obj.maxMultiviewInstanceIndex);
}
void DumpVkPhysicalDevicePCIBusInfoPropertiesEXT(Printer &p, std::string name, VkPhysicalDevicePCIBusInfoPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(11);
    p.PrintKeyValue("pciDomain", obj.pciDomain);
    p.PrintKeyValue("pciBus", obj.pciBus);
    p.PrintKeyValue("pciDevice", obj.pciDevice);
    p.PrintKeyValue("pciFunction", obj.pciFunction);
}
void DumpVkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(Printer &p, std::string name, VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(25);
    p.PrintKeyBool("pageableDeviceLocalMemory", static_cast<bool>(obj.pageableDeviceLocalMemory));
}
void DumpVkPhysicalDevicePerformanceQueryFeaturesKHR(Printer &p, std::string name, VkPhysicalDevicePerformanceQueryFeaturesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(36);
    p.PrintKeyBool("performanceCounterQueryPools", static_cast<bool>(obj.performanceCounterQueryPools));
    p.PrintKeyBool("performanceCounterMultipleQueryPools", static_cast<bool>(obj.performanceCounterMultipleQueryPools));
}
void DumpVkPhysicalDevicePerformanceQueryPropertiesKHR(Printer &p, std::string name, VkPhysicalDevicePerformanceQueryPropertiesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(29);
    p.PrintKeyBool("allowCommandBufferQueryCopies", static_cast<bool>(obj.allowCommandBufferQueryCopies));
}
void DumpVkPhysicalDevicePipelineCreationCacheControlFeaturesEXT(Printer &p, std::string name, VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(28);
    p.PrintKeyBool("pipelineCreationCacheControl", static_cast<bool>(obj.pipelineCreationCacheControl));
}
void DumpVkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR(Printer &p, std::string name, VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(22);
    p.PrintKeyBool("pipelineExecutableInfo", static_cast<bool>(obj.pipelineExecutableInfo));
}
void DumpVkPhysicalDevicePointClippingProperties(Printer &p, std::string name, VkPhysicalDevicePointClippingProperties &obj) {
    ObjectWrapper object{p, name};
    DumpVkPointClippingBehavior(p, "pointClippingBehavior", obj.pointClippingBehavior);
}
#ifdef VK_ENABLE_BETA_EXTENSIONS
void DumpVkPhysicalDevicePortabilitySubsetFeaturesKHR(Printer &p, std::string name, VkPhysicalDevicePortabilitySubsetFeaturesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(38);
    p.PrintKeyBool("constantAlphaColorBlendFactors", static_cast<bool>(obj.constantAlphaColorBlendFactors));
    p.PrintKeyBool("events", static_cast<bool>(obj.events));
    p.PrintKeyBool("imageViewFormatReinterpretation", static_cast<bool>(obj.imageViewFormatReinterpretation));
    p.PrintKeyBool("imageViewFormatSwizzle", static_cast<bool>(obj.imageViewFormatSwizzle));
    p.PrintKeyBool("imageView2DOn3DImage", static_cast<bool>(obj.imageView2DOn3DImage));
    p.PrintKeyBool("multisampleArrayImage", static_cast<bool>(obj.multisampleArrayImage));
    p.PrintKeyBool("mutableComparisonSamplers", static_cast<bool>(obj.mutableComparisonSamplers));
    p.PrintKeyBool("pointPolygons", static_cast<bool>(obj.pointPolygons));
    p.PrintKeyBool("samplerMipLodBias", static_cast<bool>(obj.samplerMipLodBias));
    p.PrintKeyBool("separateStencilMaskRef", static_cast<bool>(obj.separateStencilMaskRef));
    p.PrintKeyBool("shaderSampleRateInterpolationFunctions", static_cast<bool>(obj.shaderSampleRateInterpolationFunctions));
    p.PrintKeyBool("tessellationIsolines", static_cast<bool>(obj.tessellationIsolines));
    p.PrintKeyBool("tessellationPointMode", static_cast<bool>(obj.tessellationPointMode));
    p.PrintKeyBool("triangleFans", static_cast<bool>(obj.triangleFans));
    p.PrintKeyBool("vertexAttributeAccessBeyondStride", static_cast<bool>(obj.vertexAttributeAccessBeyondStride));
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
void DumpVkPhysicalDevicePortabilitySubsetPropertiesKHR(Printer &p, std::string name, VkPhysicalDevicePortabilitySubsetPropertiesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(36);
    p.PrintKeyValue("minVertexInputBindingStrideAlignment", obj.minVertexInputBindingStrideAlignment);
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
void DumpVkPhysicalDevicePresentIdFeaturesKHR(Printer &p, std::string name, VkPhysicalDevicePresentIdFeaturesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(9);
    p.PrintKeyBool("presentId", static_cast<bool>(obj.presentId));
}
void DumpVkPhysicalDevicePresentWaitFeaturesKHR(Printer &p, std::string name, VkPhysicalDevicePresentWaitFeaturesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(11);
    p.PrintKeyBool("presentWait", static_cast<bool>(obj.presentWait));
}
void DumpVkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(Printer &p, std::string name, VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(33);
    p.PrintKeyBool("primitiveTopologyListRestart", static_cast<bool>(obj.primitiveTopologyListRestart));
    p.PrintKeyBool("primitiveTopologyPatchListRestart", static_cast<bool>(obj.primitiveTopologyPatchListRestart));
}
void DumpVkPhysicalDevicePrivateDataFeaturesEXT(Printer &p, std::string name, VkPhysicalDevicePrivateDataFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(11);
    p.PrintKeyBool("privateData", static_cast<bool>(obj.privateData));
}
void DumpVkPhysicalDeviceProtectedMemoryFeatures(Printer &p, std::string name, VkPhysicalDeviceProtectedMemoryFeatures &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(15);
    p.PrintKeyBool("protectedMemory", static_cast<bool>(obj.protectedMemory));
}
void DumpVkPhysicalDeviceProtectedMemoryProperties(Printer &p, std::string name, VkPhysicalDeviceProtectedMemoryProperties &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(16);
    p.PrintKeyBool("protectedNoFault", static_cast<bool>(obj.protectedNoFault));
}
void DumpVkPhysicalDeviceProvokingVertexFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceProvokingVertexFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(41);
    p.PrintKeyBool("provokingVertexLast", static_cast<bool>(obj.provokingVertexLast));
    p.PrintKeyBool("transformFeedbackPreservesProvokingVertex", static_cast<bool>(obj.transformFeedbackPreservesProvokingVertex));
}
void DumpVkPhysicalDeviceProvokingVertexPropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceProvokingVertexPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(52);
    p.PrintKeyBool("provokingVertexModePerPipeline", static_cast<bool>(obj.provokingVertexModePerPipeline));
    p.PrintKeyBool("transformFeedbackPreservesTriangleFanProvokingVertex", static_cast<bool>(obj.transformFeedbackPreservesTriangleFanProvokingVertex));
}
void DumpVkPhysicalDevicePushDescriptorPropertiesKHR(Printer &p, std::string name, VkPhysicalDevicePushDescriptorPropertiesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(18);
    p.PrintKeyValue("maxPushDescriptors", obj.maxPushDescriptors);
}
void DumpVkPhysicalDeviceRGBA10X6FormatsFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(33);
    p.PrintKeyBool("formatRgba10x6WithoutYCbCrSampler", static_cast<bool>(obj.formatRgba10x6WithoutYCbCrSampler));
}
void DumpVkPhysicalDeviceRayQueryFeaturesKHR(Printer &p, std::string name, VkPhysicalDeviceRayQueryFeaturesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(8);
    p.PrintKeyBool("rayQuery", static_cast<bool>(obj.rayQuery));
}
void DumpVkPhysicalDeviceRayTracingPipelineFeaturesKHR(Printer &p, std::string name, VkPhysicalDeviceRayTracingPipelineFeaturesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(53);
    p.PrintKeyBool("rayTracingPipeline", static_cast<bool>(obj.rayTracingPipeline));
    p.PrintKeyBool("rayTracingPipelineShaderGroupHandleCaptureReplay", static_cast<bool>(obj.rayTracingPipelineShaderGroupHandleCaptureReplay));
    p.PrintKeyBool("rayTracingPipelineShaderGroupHandleCaptureReplayMixed", static_cast<bool>(obj.rayTracingPipelineShaderGroupHandleCaptureReplayMixed));
    p.PrintKeyBool("rayTracingPipelineTraceRaysIndirect", static_cast<bool>(obj.rayTracingPipelineTraceRaysIndirect));
    p.PrintKeyBool("rayTraversalPrimitiveCulling", static_cast<bool>(obj.rayTraversalPrimitiveCulling));
}
void DumpVkPhysicalDeviceRayTracingPipelinePropertiesKHR(Printer &p, std::string name, VkPhysicalDeviceRayTracingPipelinePropertiesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(34);
    p.PrintKeyValue("shaderGroupHandleSize", obj.shaderGroupHandleSize);
    p.PrintKeyValue("maxRayRecursionDepth", obj.maxRayRecursionDepth);
    p.PrintKeyValue("maxShaderGroupStride", obj.maxShaderGroupStride);
    p.PrintKeyValue("shaderGroupBaseAlignment", obj.shaderGroupBaseAlignment);
    p.PrintKeyValue("shaderGroupHandleCaptureReplaySize", obj.shaderGroupHandleCaptureReplaySize);
    p.PrintKeyValue("maxRayDispatchInvocationCount", obj.maxRayDispatchInvocationCount);
    p.PrintKeyValue("shaderGroupHandleAlignment", obj.shaderGroupHandleAlignment);
    p.PrintKeyValue("maxRayHitAttributeSize", obj.maxRayHitAttributeSize);
}
void DumpVkPhysicalDeviceRobustness2FeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceRobustness2FeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(19);
    p.PrintKeyBool("robustBufferAccess2", static_cast<bool>(obj.robustBufferAccess2));
    p.PrintKeyBool("robustImageAccess2", static_cast<bool>(obj.robustImageAccess2));
    p.PrintKeyBool("nullDescriptor", static_cast<bool>(obj.nullDescriptor));
}
void DumpVkPhysicalDeviceRobustness2PropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceRobustness2PropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(38);
    p.PrintKeyValue("robustStorageBufferAccessSizeAlignment", to_hex_str(p, obj.robustStorageBufferAccessSizeAlignment));
    p.PrintKeyValue("robustUniformBufferAccessSizeAlignment", to_hex_str(p, obj.robustUniformBufferAccessSizeAlignment));
}
void DumpVkPhysicalDeviceSampleLocationsPropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceSampleLocationsPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(32);
    DumpVkSampleCountFlags(p, "sampleLocationSampleCounts", obj.sampleLocationSampleCounts);
    DumpVkExtent2D(p, "maxSampleLocationGridSize", obj.maxSampleLocationGridSize);
    {   ArrayWrapper arr(p,"sampleLocationCoordinateRange", 2);
        p.PrintElement(obj.sampleLocationCoordinateRange[0]);
        p.PrintElement(obj.sampleLocationCoordinateRange[1]);
    }
    p.PrintKeyValue("sampleLocationSubPixelBits", obj.sampleLocationSubPixelBits);
    p.PrintKeyBool("variableSampleLocations", static_cast<bool>(obj.variableSampleLocations));
}
void DumpVkPhysicalDeviceSamplerFilterMinmaxProperties(Printer &p, std::string name, VkPhysicalDeviceSamplerFilterMinmaxProperties &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(34);
    p.PrintKeyBool("filterMinmaxSingleComponentFormats", static_cast<bool>(obj.filterMinmaxSingleComponentFormats));
    p.PrintKeyBool("filterMinmaxImageComponentMapping", static_cast<bool>(obj.filterMinmaxImageComponentMapping));
}
void DumpVkPhysicalDeviceSamplerYcbcrConversionFeatures(Printer &p, std::string name, VkPhysicalDeviceSamplerYcbcrConversionFeatures &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(22);
    p.PrintKeyBool("samplerYcbcrConversion", static_cast<bool>(obj.samplerYcbcrConversion));
}
void DumpVkPhysicalDeviceScalarBlockLayoutFeatures(Printer &p, std::string name, VkPhysicalDeviceScalarBlockLayoutFeatures &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(17);
    p.PrintKeyBool("scalarBlockLayout", static_cast<bool>(obj.scalarBlockLayout));
}
void DumpVkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(Printer &p, std::string name, VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(27);
    p.PrintKeyBool("separateDepthStencilLayouts", static_cast<bool>(obj.separateDepthStencilLayouts));
}
void DumpVkPhysicalDeviceShaderAtomicFloat2FeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(31);
    p.PrintKeyBool("shaderBufferFloat16Atomics", static_cast<bool>(obj.shaderBufferFloat16Atomics));
    p.PrintKeyBool("shaderBufferFloat16AtomicAdd", static_cast<bool>(obj.shaderBufferFloat16AtomicAdd));
    p.PrintKeyBool("shaderBufferFloat16AtomicMinMax", static_cast<bool>(obj.shaderBufferFloat16AtomicMinMax));
    p.PrintKeyBool("shaderBufferFloat32AtomicMinMax", static_cast<bool>(obj.shaderBufferFloat32AtomicMinMax));
    p.PrintKeyBool("shaderBufferFloat64AtomicMinMax", static_cast<bool>(obj.shaderBufferFloat64AtomicMinMax));
    p.PrintKeyBool("shaderSharedFloat16Atomics", static_cast<bool>(obj.shaderSharedFloat16Atomics));
    p.PrintKeyBool("shaderSharedFloat16AtomicAdd", static_cast<bool>(obj.shaderSharedFloat16AtomicAdd));
    p.PrintKeyBool("shaderSharedFloat16AtomicMinMax", static_cast<bool>(obj.shaderSharedFloat16AtomicMinMax));
    p.PrintKeyBool("shaderSharedFloat32AtomicMinMax", static_cast<bool>(obj.shaderSharedFloat32AtomicMinMax));
    p.PrintKeyBool("shaderSharedFloat64AtomicMinMax", static_cast<bool>(obj.shaderSharedFloat64AtomicMinMax));
    p.PrintKeyBool("shaderImageFloat32AtomicMinMax", static_cast<bool>(obj.shaderImageFloat32AtomicMinMax));
    p.PrintKeyBool("sparseImageFloat32AtomicMinMax", static_cast<bool>(obj.sparseImageFloat32AtomicMinMax));
}
void DumpVkPhysicalDeviceShaderAtomicFloatFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceShaderAtomicFloatFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(28);
    p.PrintKeyBool("shaderBufferFloat32Atomics", static_cast<bool>(obj.shaderBufferFloat32Atomics));
    p.PrintKeyBool("shaderBufferFloat32AtomicAdd", static_cast<bool>(obj.shaderBufferFloat32AtomicAdd));
    p.PrintKeyBool("shaderBufferFloat64Atomics", static_cast<bool>(obj.shaderBufferFloat64Atomics));
    p.PrintKeyBool("shaderBufferFloat64AtomicAdd", static_cast<bool>(obj.shaderBufferFloat64AtomicAdd));
    p.PrintKeyBool("shaderSharedFloat32Atomics", static_cast<bool>(obj.shaderSharedFloat32Atomics));
    p.PrintKeyBool("shaderSharedFloat32AtomicAdd", static_cast<bool>(obj.shaderSharedFloat32AtomicAdd));
    p.PrintKeyBool("shaderSharedFloat64Atomics", static_cast<bool>(obj.shaderSharedFloat64Atomics));
    p.PrintKeyBool("shaderSharedFloat64AtomicAdd", static_cast<bool>(obj.shaderSharedFloat64AtomicAdd));
    p.PrintKeyBool("shaderImageFloat32Atomics", static_cast<bool>(obj.shaderImageFloat32Atomics));
    p.PrintKeyBool("shaderImageFloat32AtomicAdd", static_cast<bool>(obj.shaderImageFloat32AtomicAdd));
    p.PrintKeyBool("sparseImageFloat32Atomics", static_cast<bool>(obj.sparseImageFloat32Atomics));
    p.PrintKeyBool("sparseImageFloat32AtomicAdd", static_cast<bool>(obj.sparseImageFloat32AtomicAdd));
}
void DumpVkPhysicalDeviceShaderAtomicInt64Features(Printer &p, std::string name, VkPhysicalDeviceShaderAtomicInt64Features &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(24);
    p.PrintKeyBool("shaderBufferInt64Atomics", static_cast<bool>(obj.shaderBufferInt64Atomics));
    p.PrintKeyBool("shaderSharedInt64Atomics", static_cast<bool>(obj.shaderSharedInt64Atomics));
}
void DumpVkPhysicalDeviceShaderClockFeaturesKHR(Printer &p, std::string name, VkPhysicalDeviceShaderClockFeaturesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(19);
    p.PrintKeyBool("shaderSubgroupClock", static_cast<bool>(obj.shaderSubgroupClock));
    p.PrintKeyBool("shaderDeviceClock", static_cast<bool>(obj.shaderDeviceClock));
}
void DumpVkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(30);
    p.PrintKeyBool("shaderDemoteToHelperInvocation", static_cast<bool>(obj.shaderDemoteToHelperInvocation));
}
void DumpVkPhysicalDeviceShaderDrawParametersFeatures(Printer &p, std::string name, VkPhysicalDeviceShaderDrawParametersFeatures &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(20);
    p.PrintKeyBool("shaderDrawParameters", static_cast<bool>(obj.shaderDrawParameters));
}
void DumpVkPhysicalDeviceShaderFloat16Int8Features(Printer &p, std::string name, VkPhysicalDeviceShaderFloat16Int8Features &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(13);
    p.PrintKeyBool("shaderFloat16", static_cast<bool>(obj.shaderFloat16));
    p.PrintKeyBool("shaderInt8", static_cast<bool>(obj.shaderInt8));
}
void DumpVkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(23);
    p.PrintKeyBool("shaderImageInt64Atomics", static_cast<bool>(obj.shaderImageInt64Atomics));
    p.PrintKeyBool("sparseImageInt64Atomics", static_cast<bool>(obj.sparseImageInt64Atomics));
}
void DumpVkPhysicalDeviceShaderIntegerDotProductFeaturesKHR(Printer &p, std::string name, VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(23);
    p.PrintKeyBool("shaderIntegerDotProduct", static_cast<bool>(obj.shaderIntegerDotProduct));
}
void DumpVkPhysicalDeviceShaderIntegerDotProductPropertiesKHR(Printer &p, std::string name, VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(77);
    p.PrintKeyBool("integerDotProduct8BitUnsignedAccelerated", static_cast<bool>(obj.integerDotProduct8BitUnsignedAccelerated));
    p.PrintKeyBool("integerDotProduct8BitSignedAccelerated", static_cast<bool>(obj.integerDotProduct8BitSignedAccelerated));
    p.PrintKeyBool("integerDotProduct8BitMixedSignednessAccelerated", static_cast<bool>(obj.integerDotProduct8BitMixedSignednessAccelerated));
    p.PrintKeyBool("integerDotProduct4x8BitPackedUnsignedAccelerated", static_cast<bool>(obj.integerDotProduct4x8BitPackedUnsignedAccelerated));
    p.PrintKeyBool("integerDotProduct4x8BitPackedSignedAccelerated", static_cast<bool>(obj.integerDotProduct4x8BitPackedSignedAccelerated));
    p.PrintKeyBool("integerDotProduct4x8BitPackedMixedSignednessAccelerated", static_cast<bool>(obj.integerDotProduct4x8BitPackedMixedSignednessAccelerated));
    p.PrintKeyBool("integerDotProduct16BitUnsignedAccelerated", static_cast<bool>(obj.integerDotProduct16BitUnsignedAccelerated));
    p.PrintKeyBool("integerDotProduct16BitSignedAccelerated", static_cast<bool>(obj.integerDotProduct16BitSignedAccelerated));
    p.PrintKeyBool("integerDotProduct16BitMixedSignednessAccelerated", static_cast<bool>(obj.integerDotProduct16BitMixedSignednessAccelerated));
    p.PrintKeyBool("integerDotProduct32BitUnsignedAccelerated", static_cast<bool>(obj.integerDotProduct32BitUnsignedAccelerated));
    p.PrintKeyBool("integerDotProduct32BitSignedAccelerated", static_cast<bool>(obj.integerDotProduct32BitSignedAccelerated));
    p.PrintKeyBool("integerDotProduct32BitMixedSignednessAccelerated", static_cast<bool>(obj.integerDotProduct32BitMixedSignednessAccelerated));
    p.PrintKeyBool("integerDotProduct64BitUnsignedAccelerated", static_cast<bool>(obj.integerDotProduct64BitUnsignedAccelerated));
    p.PrintKeyBool("integerDotProduct64BitSignedAccelerated", static_cast<bool>(obj.integerDotProduct64BitSignedAccelerated));
    p.PrintKeyBool("integerDotProduct64BitMixedSignednessAccelerated", static_cast<bool>(obj.integerDotProduct64BitMixedSignednessAccelerated));
    p.PrintKeyBool("integerDotProductAccumulatingSaturating8BitUnsignedAccelerated", static_cast<bool>(obj.integerDotProductAccumulatingSaturating8BitUnsignedAccelerated));
    p.PrintKeyBool("integerDotProductAccumulatingSaturating8BitSignedAccelerated", static_cast<bool>(obj.integerDotProductAccumulatingSaturating8BitSignedAccelerated));
    p.PrintKeyBool("integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated", static_cast<bool>(obj.integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated));
    p.PrintKeyBool("integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated", static_cast<bool>(obj.integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated));
    p.PrintKeyBool("integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated", static_cast<bool>(obj.integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated));
    p.PrintKeyBool("integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated", static_cast<bool>(obj.integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated));
    p.PrintKeyBool("integerDotProductAccumulatingSaturating16BitUnsignedAccelerated", static_cast<bool>(obj.integerDotProductAccumulatingSaturating16BitUnsignedAccelerated));
    p.PrintKeyBool("integerDotProductAccumulatingSaturating16BitSignedAccelerated", static_cast<bool>(obj.integerDotProductAccumulatingSaturating16BitSignedAccelerated));
    p.PrintKeyBool("integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated", static_cast<bool>(obj.integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated));
    p.PrintKeyBool("integerDotProductAccumulatingSaturating32BitUnsignedAccelerated", static_cast<bool>(obj.integerDotProductAccumulatingSaturating32BitUnsignedAccelerated));
    p.PrintKeyBool("integerDotProductAccumulatingSaturating32BitSignedAccelerated", static_cast<bool>(obj.integerDotProductAccumulatingSaturating32BitSignedAccelerated));
    p.PrintKeyBool("integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated", static_cast<bool>(obj.integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated));
    p.PrintKeyBool("integerDotProductAccumulatingSaturating64BitUnsignedAccelerated", static_cast<bool>(obj.integerDotProductAccumulatingSaturating64BitUnsignedAccelerated));
    p.PrintKeyBool("integerDotProductAccumulatingSaturating64BitSignedAccelerated", static_cast<bool>(obj.integerDotProductAccumulatingSaturating64BitSignedAccelerated));
    p.PrintKeyBool("integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated", static_cast<bool>(obj.integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated));
}
void DumpVkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(Printer &p, std::string name, VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(27);
    p.PrintKeyBool("shaderSubgroupExtendedTypes", static_cast<bool>(obj.shaderSubgroupExtendedTypes));
}
void DumpVkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(Printer &p, std::string name, VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(32);
    p.PrintKeyBool("shaderSubgroupUniformControlFlow", static_cast<bool>(obj.shaderSubgroupUniformControlFlow));
}
void DumpVkPhysicalDeviceShaderTerminateInvocationFeaturesKHR(Printer &p, std::string name, VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(25);
    p.PrintKeyBool("shaderTerminateInvocation", static_cast<bool>(obj.shaderTerminateInvocation));
}
void DumpVkPhysicalDeviceSparseProperties(Printer &p, std::string name, VkPhysicalDeviceSparseProperties &obj) {
    if (p.Type() == OutputType::json)
        p.ObjectStart("sparseProperties");
    else
        p.SetSubHeader().ObjectStart(name);
    p.SetMinKeyWidth(40);
    p.PrintKeyBool("residencyStandard2DBlockShape", static_cast<bool>(obj.residencyStandard2DBlockShape));
    p.PrintKeyBool("residencyStandard2DMultisampleBlockShape", static_cast<bool>(obj.residencyStandard2DMultisampleBlockShape));
    p.PrintKeyBool("residencyStandard3DBlockShape", static_cast<bool>(obj.residencyStandard3DBlockShape));
    p.PrintKeyBool("residencyAlignedMipSize", static_cast<bool>(obj.residencyAlignedMipSize));
    p.PrintKeyBool("residencyNonResidentStrict", static_cast<bool>(obj.residencyNonResidentStrict));
    p.ObjectEnd();
}
void DumpVkPhysicalDeviceSubgroupProperties(Printer &p, std::string name, VkPhysicalDeviceSubgroupProperties &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(25);
    p.PrintKeyValue("subgroupSize", obj.subgroupSize);
    DumpVkShaderStageFlags(p, "supportedStages", obj.supportedStages);
    DumpVkSubgroupFeatureFlags(p, "supportedOperations", obj.supportedOperations);
    p.PrintKeyBool("quadOperationsInAllStages", static_cast<bool>(obj.quadOperationsInAllStages));
}
void DumpVkPhysicalDeviceSubgroupSizeControlFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceSubgroupSizeControlFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(20);
    p.PrintKeyBool("subgroupSizeControl", static_cast<bool>(obj.subgroupSizeControl));
    p.PrintKeyBool("computeFullSubgroups", static_cast<bool>(obj.computeFullSubgroups));
}
void DumpVkPhysicalDeviceSubgroupSizeControlPropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceSubgroupSizeControlPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(28);
    p.PrintKeyValue("minSubgroupSize", obj.minSubgroupSize);
    p.PrintKeyValue("maxSubgroupSize", obj.maxSubgroupSize);
    p.PrintKeyValue("maxComputeWorkgroupSubgroups", obj.maxComputeWorkgroupSubgroups);
    DumpVkShaderStageFlags(p, "requiredSubgroupSizeStages", obj.requiredSubgroupSizeStages);
}
void DumpVkPhysicalDeviceSynchronization2FeaturesKHR(Printer &p, std::string name, VkPhysicalDeviceSynchronization2FeaturesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(16);
    p.PrintKeyBool("synchronization2", static_cast<bool>(obj.synchronization2));
}
void DumpVkPhysicalDeviceTexelBufferAlignmentFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(20);
    p.PrintKeyBool("texelBufferAlignment", static_cast<bool>(obj.texelBufferAlignment));
}
void DumpVkPhysicalDeviceTexelBufferAlignmentPropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(44);
    p.PrintKeyValue("storageTexelBufferOffsetAlignmentBytes", to_hex_str(p, obj.storageTexelBufferOffsetAlignmentBytes));
    p.PrintKeyBool("storageTexelBufferOffsetSingleTexelAlignment", static_cast<bool>(obj.storageTexelBufferOffsetSingleTexelAlignment));
    p.PrintKeyValue("uniformTexelBufferOffsetAlignmentBytes", to_hex_str(p, obj.uniformTexelBufferOffsetAlignmentBytes));
    p.PrintKeyBool("uniformTexelBufferOffsetSingleTexelAlignment", static_cast<bool>(obj.uniformTexelBufferOffsetSingleTexelAlignment));
}
void DumpVkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(26);
    p.PrintKeyBool("textureCompressionASTC_HDR", static_cast<bool>(obj.textureCompressionASTC_HDR));
}
void DumpVkPhysicalDeviceTimelineSemaphoreFeatures(Printer &p, std::string name, VkPhysicalDeviceTimelineSemaphoreFeatures &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(17);
    p.PrintKeyBool("timelineSemaphore", static_cast<bool>(obj.timelineSemaphore));
}
void DumpVkPhysicalDeviceTimelineSemaphoreProperties(Printer &p, std::string name, VkPhysicalDeviceTimelineSemaphoreProperties &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(35);
    p.PrintKeyValue("maxTimelineSemaphoreValueDifference", obj.maxTimelineSemaphoreValueDifference);
}
void DumpVkPhysicalDeviceToolPropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceToolPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(16);
    p.PrintKeyString("name", obj.name);
    p.PrintKeyString("version", obj.version);
    DumpVkToolPurposeFlagsEXT(p, "purposes", obj.purposes);
    p.PrintKeyString("description", obj.description);
    p.PrintKeyString("layer", obj.layer);
}
void DumpVkPhysicalDeviceTransformFeedbackFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceTransformFeedbackFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(17);
    p.PrintKeyBool("transformFeedback", static_cast<bool>(obj.transformFeedback));
    p.PrintKeyBool("geometryStreams", static_cast<bool>(obj.geometryStreams));
}
void DumpVkPhysicalDeviceTransformFeedbackPropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceTransformFeedbackPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(42);
    p.PrintKeyValue("maxTransformFeedbackStreams", obj.maxTransformFeedbackStreams);
    p.PrintKeyValue("maxTransformFeedbackBuffers", obj.maxTransformFeedbackBuffers);
    p.PrintKeyValue("maxTransformFeedbackBufferSize", to_hex_str(p, obj.maxTransformFeedbackBufferSize));
    p.PrintKeyValue("maxTransformFeedbackStreamDataSize", obj.maxTransformFeedbackStreamDataSize);
    p.PrintKeyValue("maxTransformFeedbackBufferDataSize", obj.maxTransformFeedbackBufferDataSize);
    p.PrintKeyValue("maxTransformFeedbackBufferDataStride", obj.maxTransformFeedbackBufferDataStride);
    p.PrintKeyBool("transformFeedbackQueries", static_cast<bool>(obj.transformFeedbackQueries));
    p.PrintKeyBool("transformFeedbackStreamsLinesTriangles", static_cast<bool>(obj.transformFeedbackStreamsLinesTriangles));
    p.PrintKeyBool("transformFeedbackRasterizationStreamSelect", static_cast<bool>(obj.transformFeedbackRasterizationStreamSelect));
    p.PrintKeyBool("transformFeedbackDraw", static_cast<bool>(obj.transformFeedbackDraw));
}
void DumpVkPhysicalDeviceUniformBufferStandardLayoutFeatures(Printer &p, std::string name, VkPhysicalDeviceUniformBufferStandardLayoutFeatures &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(27);
    p.PrintKeyBool("uniformBufferStandardLayout", static_cast<bool>(obj.uniformBufferStandardLayout));
}
void DumpVkPhysicalDeviceVariablePointersFeatures(Printer &p, std::string name, VkPhysicalDeviceVariablePointersFeatures &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(29);
    p.PrintKeyBool("variablePointersStorageBuffer", static_cast<bool>(obj.variablePointersStorageBuffer));
    p.PrintKeyBool("variablePointers", static_cast<bool>(obj.variablePointers));
}
void DumpVkPhysicalDeviceVertexAttributeDivisorFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(38);
    p.PrintKeyBool("vertexAttributeInstanceRateDivisor", static_cast<bool>(obj.vertexAttributeInstanceRateDivisor));
    p.PrintKeyBool("vertexAttributeInstanceRateZeroDivisor", static_cast<bool>(obj.vertexAttributeInstanceRateZeroDivisor));
}
void DumpVkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(Printer &p, std::string name, VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(22);
    p.PrintKeyValue("maxVertexAttribDivisor", obj.maxVertexAttribDivisor);
}
void DumpVkPhysicalDeviceVertexInputDynamicStateFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(23);
    p.PrintKeyBool("vertexInputDynamicState", static_cast<bool>(obj.vertexInputDynamicState));
}
void DumpVkPhysicalDeviceVulkan11Features(Printer &p, std::string name, VkPhysicalDeviceVulkan11Features &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(34);
    p.PrintKeyBool("storageBuffer16BitAccess", static_cast<bool>(obj.storageBuffer16BitAccess));
    p.PrintKeyBool("uniformAndStorageBuffer16BitAccess", static_cast<bool>(obj.uniformAndStorageBuffer16BitAccess));
    p.PrintKeyBool("storagePushConstant16", static_cast<bool>(obj.storagePushConstant16));
    p.PrintKeyBool("storageInputOutput16", static_cast<bool>(obj.storageInputOutput16));
    p.PrintKeyBool("multiview", static_cast<bool>(obj.multiview));
    p.PrintKeyBool("multiviewGeometryShader", static_cast<bool>(obj.multiviewGeometryShader));
    p.PrintKeyBool("multiviewTessellationShader", static_cast<bool>(obj.multiviewTessellationShader));
    p.PrintKeyBool("variablePointersStorageBuffer", static_cast<bool>(obj.variablePointersStorageBuffer));
    p.PrintKeyBool("variablePointers", static_cast<bool>(obj.variablePointers));
    p.PrintKeyBool("protectedMemory", static_cast<bool>(obj.protectedMemory));
    p.PrintKeyBool("samplerYcbcrConversion", static_cast<bool>(obj.samplerYcbcrConversion));
    p.PrintKeyBool("shaderDrawParameters", static_cast<bool>(obj.shaderDrawParameters));
}
void DumpVkPhysicalDeviceVulkan11Properties(Printer &p, std::string name, VkPhysicalDeviceVulkan11Properties &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(33);
    p.PrintKeyString("deviceUUID", to_string_16(obj.deviceUUID));
    p.PrintKeyString("driverUUID", to_string_16(obj.driverUUID));
    if (obj.deviceLUIDValid) p.PrintKeyString("deviceLUID", to_string_8(obj.deviceLUID));
    p.PrintKeyValue("deviceNodeMask", obj.deviceNodeMask);
    p.PrintKeyBool("deviceLUIDValid", static_cast<bool>(obj.deviceLUIDValid));
    p.PrintKeyValue("subgroupSize", obj.subgroupSize);
    DumpVkShaderStageFlags(p, "subgroupSupportedStages", obj.subgroupSupportedStages);
    DumpVkSubgroupFeatureFlags(p, "subgroupSupportedOperations", obj.subgroupSupportedOperations);
    p.PrintKeyBool("subgroupQuadOperationsInAllStages", static_cast<bool>(obj.subgroupQuadOperationsInAllStages));
    DumpVkPointClippingBehavior(p, "pointClippingBehavior", obj.pointClippingBehavior);
    p.PrintKeyValue("maxMultiviewViewCount", obj.maxMultiviewViewCount);
    p.PrintKeyValue("maxMultiviewInstanceIndex", obj.maxMultiviewInstanceIndex);
    p.PrintKeyBool("protectedNoFault", static_cast<bool>(obj.protectedNoFault));
    p.PrintKeyValue("maxPerSetDescriptors", obj.maxPerSetDescriptors);
    p.PrintKeyValue("maxMemoryAllocationSize", to_hex_str(p, obj.maxMemoryAllocationSize));
}
void DumpVkPhysicalDeviceVulkan12Features(Printer &p, std::string name, VkPhysicalDeviceVulkan12Features &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(50);
    p.PrintKeyBool("samplerMirrorClampToEdge", static_cast<bool>(obj.samplerMirrorClampToEdge));
    p.PrintKeyBool("drawIndirectCount", static_cast<bool>(obj.drawIndirectCount));
    p.PrintKeyBool("storageBuffer8BitAccess", static_cast<bool>(obj.storageBuffer8BitAccess));
    p.PrintKeyBool("uniformAndStorageBuffer8BitAccess", static_cast<bool>(obj.uniformAndStorageBuffer8BitAccess));
    p.PrintKeyBool("storagePushConstant8", static_cast<bool>(obj.storagePushConstant8));
    p.PrintKeyBool("shaderBufferInt64Atomics", static_cast<bool>(obj.shaderBufferInt64Atomics));
    p.PrintKeyBool("shaderSharedInt64Atomics", static_cast<bool>(obj.shaderSharedInt64Atomics));
    p.PrintKeyBool("shaderFloat16", static_cast<bool>(obj.shaderFloat16));
    p.PrintKeyBool("shaderInt8", static_cast<bool>(obj.shaderInt8));
    p.PrintKeyBool("descriptorIndexing", static_cast<bool>(obj.descriptorIndexing));
    p.PrintKeyBool("shaderInputAttachmentArrayDynamicIndexing", static_cast<bool>(obj.shaderInputAttachmentArrayDynamicIndexing));
    p.PrintKeyBool("shaderUniformTexelBufferArrayDynamicIndexing", static_cast<bool>(obj.shaderUniformTexelBufferArrayDynamicIndexing));
    p.PrintKeyBool("shaderStorageTexelBufferArrayDynamicIndexing", static_cast<bool>(obj.shaderStorageTexelBufferArrayDynamicIndexing));
    p.PrintKeyBool("shaderUniformBufferArrayNonUniformIndexing", static_cast<bool>(obj.shaderUniformBufferArrayNonUniformIndexing));
    p.PrintKeyBool("shaderSampledImageArrayNonUniformIndexing", static_cast<bool>(obj.shaderSampledImageArrayNonUniformIndexing));
    p.PrintKeyBool("shaderStorageBufferArrayNonUniformIndexing", static_cast<bool>(obj.shaderStorageBufferArrayNonUniformIndexing));
    p.PrintKeyBool("shaderStorageImageArrayNonUniformIndexing", static_cast<bool>(obj.shaderStorageImageArrayNonUniformIndexing));
    p.PrintKeyBool("shaderInputAttachmentArrayNonUniformIndexing", static_cast<bool>(obj.shaderInputAttachmentArrayNonUniformIndexing));
    p.PrintKeyBool("shaderUniformTexelBufferArrayNonUniformIndexing", static_cast<bool>(obj.shaderUniformTexelBufferArrayNonUniformIndexing));
    p.PrintKeyBool("shaderStorageTexelBufferArrayNonUniformIndexing", static_cast<bool>(obj.shaderStorageTexelBufferArrayNonUniformIndexing));
    p.PrintKeyBool("descriptorBindingUniformBufferUpdateAfterBind", static_cast<bool>(obj.descriptorBindingUniformBufferUpdateAfterBind));
    p.PrintKeyBool("descriptorBindingSampledImageUpdateAfterBind", static_cast<bool>(obj.descriptorBindingSampledImageUpdateAfterBind));
    p.PrintKeyBool("descriptorBindingStorageImageUpdateAfterBind", static_cast<bool>(obj.descriptorBindingStorageImageUpdateAfterBind));
    p.PrintKeyBool("descriptorBindingStorageBufferUpdateAfterBind", static_cast<bool>(obj.descriptorBindingStorageBufferUpdateAfterBind));
    p.PrintKeyBool("descriptorBindingUniformTexelBufferUpdateAfterBind", static_cast<bool>(obj.descriptorBindingUniformTexelBufferUpdateAfterBind));
    p.PrintKeyBool("descriptorBindingStorageTexelBufferUpdateAfterBind", static_cast<bool>(obj.descriptorBindingStorageTexelBufferUpdateAfterBind));
    p.PrintKeyBool("descriptorBindingUpdateUnusedWhilePending", static_cast<bool>(obj.descriptorBindingUpdateUnusedWhilePending));
    p.PrintKeyBool("descriptorBindingPartiallyBound", static_cast<bool>(obj.descriptorBindingPartiallyBound));
    p.PrintKeyBool("descriptorBindingVariableDescriptorCount", static_cast<bool>(obj.descriptorBindingVariableDescriptorCount));
    p.PrintKeyBool("runtimeDescriptorArray", static_cast<bool>(obj.runtimeDescriptorArray));
    p.PrintKeyBool("samplerFilterMinmax", static_cast<bool>(obj.samplerFilterMinmax));
    p.PrintKeyBool("scalarBlockLayout", static_cast<bool>(obj.scalarBlockLayout));
    p.PrintKeyBool("imagelessFramebuffer", static_cast<bool>(obj.imagelessFramebuffer));
    p.PrintKeyBool("uniformBufferStandardLayout", static_cast<bool>(obj.uniformBufferStandardLayout));
    p.PrintKeyBool("shaderSubgroupExtendedTypes", static_cast<bool>(obj.shaderSubgroupExtendedTypes));
    p.PrintKeyBool("separateDepthStencilLayouts", static_cast<bool>(obj.separateDepthStencilLayouts));
    p.PrintKeyBool("hostQueryReset", static_cast<bool>(obj.hostQueryReset));
    p.PrintKeyBool("timelineSemaphore", static_cast<bool>(obj.timelineSemaphore));
    p.PrintKeyBool("bufferDeviceAddress", static_cast<bool>(obj.bufferDeviceAddress));
    p.PrintKeyBool("bufferDeviceAddressCaptureReplay", static_cast<bool>(obj.bufferDeviceAddressCaptureReplay));
    p.PrintKeyBool("bufferDeviceAddressMultiDevice", static_cast<bool>(obj.bufferDeviceAddressMultiDevice));
    p.PrintKeyBool("vulkanMemoryModel", static_cast<bool>(obj.vulkanMemoryModel));
    p.PrintKeyBool("vulkanMemoryModelDeviceScope", static_cast<bool>(obj.vulkanMemoryModelDeviceScope));
    p.PrintKeyBool("vulkanMemoryModelAvailabilityVisibilityChains", static_cast<bool>(obj.vulkanMemoryModelAvailabilityVisibilityChains));
    p.PrintKeyBool("shaderOutputViewportIndex", static_cast<bool>(obj.shaderOutputViewportIndex));
    p.PrintKeyBool("shaderOutputLayer", static_cast<bool>(obj.shaderOutputLayer));
    p.PrintKeyBool("subgroupBroadcastDynamicId", static_cast<bool>(obj.subgroupBroadcastDynamicId));
}
void DumpVkPhysicalDeviceVulkan12Properties(Printer &p, std::string name, VkPhysicalDeviceVulkan12Properties &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(52);
    DumpVkDriverId(p, "driverID", obj.driverID);
    p.PrintKeyString("driverName", obj.driverName);
    p.PrintKeyString("driverInfo", obj.driverInfo);
    DumpVkConformanceVersion(p, "conformanceVersion", obj.conformanceVersion);
    DumpVkShaderFloatControlsIndependence(p, "denormBehaviorIndependence", obj.denormBehaviorIndependence);
    DumpVkShaderFloatControlsIndependence(p, "roundingModeIndependence", obj.roundingModeIndependence);
    p.PrintKeyBool("shaderSignedZeroInfNanPreserveFloat16", static_cast<bool>(obj.shaderSignedZeroInfNanPreserveFloat16));
    p.PrintKeyBool("shaderSignedZeroInfNanPreserveFloat32", static_cast<bool>(obj.shaderSignedZeroInfNanPreserveFloat32));
    p.PrintKeyBool("shaderSignedZeroInfNanPreserveFloat64", static_cast<bool>(obj.shaderSignedZeroInfNanPreserveFloat64));
    p.PrintKeyBool("shaderDenormPreserveFloat16", static_cast<bool>(obj.shaderDenormPreserveFloat16));
    p.PrintKeyBool("shaderDenormPreserveFloat32", static_cast<bool>(obj.shaderDenormPreserveFloat32));
    p.PrintKeyBool("shaderDenormPreserveFloat64", static_cast<bool>(obj.shaderDenormPreserveFloat64));
    p.PrintKeyBool("shaderDenormFlushToZeroFloat16", static_cast<bool>(obj.shaderDenormFlushToZeroFloat16));
    p.PrintKeyBool("shaderDenormFlushToZeroFloat32", static_cast<bool>(obj.shaderDenormFlushToZeroFloat32));
    p.PrintKeyBool("shaderDenormFlushToZeroFloat64", static_cast<bool>(obj.shaderDenormFlushToZeroFloat64));
    p.PrintKeyBool("shaderRoundingModeRTEFloat16", static_cast<bool>(obj.shaderRoundingModeRTEFloat16));
    p.PrintKeyBool("shaderRoundingModeRTEFloat32", static_cast<bool>(obj.shaderRoundingModeRTEFloat32));
    p.PrintKeyBool("shaderRoundingModeRTEFloat64", static_cast<bool>(obj.shaderRoundingModeRTEFloat64));
    p.PrintKeyBool("shaderRoundingModeRTZFloat16", static_cast<bool>(obj.shaderRoundingModeRTZFloat16));
    p.PrintKeyBool("shaderRoundingModeRTZFloat32", static_cast<bool>(obj.shaderRoundingModeRTZFloat32));
    p.PrintKeyBool("shaderRoundingModeRTZFloat64", static_cast<bool>(obj.shaderRoundingModeRTZFloat64));
    p.PrintKeyValue("maxUpdateAfterBindDescriptorsInAllPools", obj.maxUpdateAfterBindDescriptorsInAllPools);
    p.PrintKeyBool("shaderUniformBufferArrayNonUniformIndexingNative", static_cast<bool>(obj.shaderUniformBufferArrayNonUniformIndexingNative));
    p.PrintKeyBool("shaderSampledImageArrayNonUniformIndexingNative", static_cast<bool>(obj.shaderSampledImageArrayNonUniformIndexingNative));
    p.PrintKeyBool("shaderStorageBufferArrayNonUniformIndexingNative", static_cast<bool>(obj.shaderStorageBufferArrayNonUniformIndexingNative));
    p.PrintKeyBool("shaderStorageImageArrayNonUniformIndexingNative", static_cast<bool>(obj.shaderStorageImageArrayNonUniformIndexingNative));
    p.PrintKeyBool("shaderInputAttachmentArrayNonUniformIndexingNative", static_cast<bool>(obj.shaderInputAttachmentArrayNonUniformIndexingNative));
    p.PrintKeyBool("robustBufferAccessUpdateAfterBind", static_cast<bool>(obj.robustBufferAccessUpdateAfterBind));
    p.PrintKeyBool("quadDivergentImplicitLod", static_cast<bool>(obj.quadDivergentImplicitLod));
    p.PrintKeyValue("maxPerStageDescriptorUpdateAfterBindSamplers", obj.maxPerStageDescriptorUpdateAfterBindSamplers);
    p.PrintKeyValue("maxPerStageDescriptorUpdateAfterBindUniformBuffers", obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers);
    p.PrintKeyValue("maxPerStageDescriptorUpdateAfterBindStorageBuffers", obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers);
    p.PrintKeyValue("maxPerStageDescriptorUpdateAfterBindSampledImages", obj.maxPerStageDescriptorUpdateAfterBindSampledImages);
    p.PrintKeyValue("maxPerStageDescriptorUpdateAfterBindStorageImages", obj.maxPerStageDescriptorUpdateAfterBindStorageImages);
    p.PrintKeyValue("maxPerStageDescriptorUpdateAfterBindInputAttachments", obj.maxPerStageDescriptorUpdateAfterBindInputAttachments);
    p.PrintKeyValue("maxPerStageUpdateAfterBindResources", obj.maxPerStageUpdateAfterBindResources);
    p.PrintKeyValue("maxDescriptorSetUpdateAfterBindSamplers", obj.maxDescriptorSetUpdateAfterBindSamplers);
    p.PrintKeyValue("maxDescriptorSetUpdateAfterBindUniformBuffers", obj.maxDescriptorSetUpdateAfterBindUniformBuffers);
    p.PrintKeyValue("maxDescriptorSetUpdateAfterBindUniformBuffersDynamic", obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic);
    p.PrintKeyValue("maxDescriptorSetUpdateAfterBindStorageBuffers", obj.maxDescriptorSetUpdateAfterBindStorageBuffers);
    p.PrintKeyValue("maxDescriptorSetUpdateAfterBindStorageBuffersDynamic", obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic);
    p.PrintKeyValue("maxDescriptorSetUpdateAfterBindSampledImages", obj.maxDescriptorSetUpdateAfterBindSampledImages);
    p.PrintKeyValue("maxDescriptorSetUpdateAfterBindStorageImages", obj.maxDescriptorSetUpdateAfterBindStorageImages);
    p.PrintKeyValue("maxDescriptorSetUpdateAfterBindInputAttachments", obj.maxDescriptorSetUpdateAfterBindInputAttachments);
    DumpVkResolveModeFlags(p, "supportedDepthResolveModes", obj.supportedDepthResolveModes);
    DumpVkResolveModeFlags(p, "supportedStencilResolveModes", obj.supportedStencilResolveModes);
    p.PrintKeyBool("independentResolveNone", static_cast<bool>(obj.independentResolveNone));
    p.PrintKeyBool("independentResolve", static_cast<bool>(obj.independentResolve));
    p.PrintKeyBool("filterMinmaxSingleComponentFormats", static_cast<bool>(obj.filterMinmaxSingleComponentFormats));
    p.PrintKeyBool("filterMinmaxImageComponentMapping", static_cast<bool>(obj.filterMinmaxImageComponentMapping));
    p.PrintKeyValue("maxTimelineSemaphoreValueDifference", obj.maxTimelineSemaphoreValueDifference);
    DumpVkSampleCountFlags(p, "framebufferIntegerColorSampleCounts", obj.framebufferIntegerColorSampleCounts);
}
void DumpVkPhysicalDeviceVulkanMemoryModelFeatures(Printer &p, std::string name, VkPhysicalDeviceVulkanMemoryModelFeatures &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(45);
    p.PrintKeyBool("vulkanMemoryModel", static_cast<bool>(obj.vulkanMemoryModel));
    p.PrintKeyBool("vulkanMemoryModelDeviceScope", static_cast<bool>(obj.vulkanMemoryModelDeviceScope));
    p.PrintKeyBool("vulkanMemoryModelAvailabilityVisibilityChains", static_cast<bool>(obj.vulkanMemoryModelAvailabilityVisibilityChains));
}
void DumpVkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(Printer &p, std::string name, VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(46);
    p.PrintKeyBool("workgroupMemoryExplicitLayout", static_cast<bool>(obj.workgroupMemoryExplicitLayout));
    p.PrintKeyBool("workgroupMemoryExplicitLayoutScalarBlockLayout", static_cast<bool>(obj.workgroupMemoryExplicitLayoutScalarBlockLayout));
    p.PrintKeyBool("workgroupMemoryExplicitLayout8BitAccess", static_cast<bool>(obj.workgroupMemoryExplicitLayout8BitAccess));
    p.PrintKeyBool("workgroupMemoryExplicitLayout16BitAccess", static_cast<bool>(obj.workgroupMemoryExplicitLayout16BitAccess));
}
void DumpVkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(21);
    p.PrintKeyBool("ycbcr2plane444Formats", static_cast<bool>(obj.ycbcr2plane444Formats));
}
void DumpVkPhysicalDeviceYcbcrImageArraysFeaturesEXT(Printer &p, std::string name, VkPhysicalDeviceYcbcrImageArraysFeaturesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(16);
    p.PrintKeyBool("ycbcrImageArrays", static_cast<bool>(obj.ycbcrImageArrays));
}
void DumpVkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR(Printer &p, std::string name, VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(35);
    p.PrintKeyBool("shaderZeroInitializeWorkgroupMemory", static_cast<bool>(obj.shaderZeroInitializeWorkgroupMemory));
}
void DumpVkQueueFamilyGlobalPriorityPropertiesEXT(Printer &p, std::string name, VkQueueFamilyGlobalPriorityPropertiesEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(14);
    p.PrintKeyValue("priorityCount", obj.priorityCount);
    ArrayWrapper arr(p,"priorities", obj.priorityCount);
    for (uint32_t i = 0; i < obj.priorityCount; i++) {
        DumpVkQueueGlobalPriorityEXT(p, "priorities", obj.priorities[i]);
    }
}
void DumpVkSharedPresentSurfaceCapabilitiesKHR(Printer &p, std::string name, VkSharedPresentSurfaceCapabilitiesKHR &obj) {
    ObjectWrapper object{p, name};
    DumpVkImageUsageFlags(p, "sharedPresentSupportedUsageFlags", obj.sharedPresentSupportedUsageFlags);
}
#ifdef VK_USE_PLATFORM_WIN32_KHR
void DumpVkSurfaceCapabilitiesFullScreenExclusiveEXT(Printer &p, std::string name, VkSurfaceCapabilitiesFullScreenExclusiveEXT &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(28);
    p.PrintKeyBool("fullScreenExclusiveSupported", static_cast<bool>(obj.fullScreenExclusiveSupported));
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
void DumpVkSurfaceCapabilitiesKHR(Printer &p, std::string name, VkSurfaceCapabilitiesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(19);
    p.PrintKeyValue("minImageCount", obj.minImageCount);
    p.PrintKeyValue("maxImageCount", obj.maxImageCount);
    DumpVkExtent2D(p, "currentExtent", obj.currentExtent);
    DumpVkExtent2D(p, "minImageExtent", obj.minImageExtent);
    DumpVkExtent2D(p, "maxImageExtent", obj.maxImageExtent);
    p.PrintKeyValue("maxImageArrayLayers", obj.maxImageArrayLayers);
    DumpVkSurfaceTransformFlagsKHR(p, "supportedTransforms", obj.supportedTransforms);
    DumpVkSurfaceTransformFlagBitsKHR(p, "currentTransform", obj.currentTransform);
    DumpVkCompositeAlphaFlagsKHR(p, "supportedCompositeAlpha", obj.supportedCompositeAlpha);
    DumpVkImageUsageFlags(p, "supportedUsageFlags", obj.supportedUsageFlags);
}
void DumpVkSurfaceFormatKHR(Printer &p, std::string name, VkSurfaceFormatKHR &obj) {
    ObjectWrapper object{p, name};
    DumpVkFormat(p, "format", obj.format);
    DumpVkColorSpaceKHR(p, "colorSpace", obj.colorSpace);
}
void DumpVkSurfaceProtectedCapabilitiesKHR(Printer &p, std::string name, VkSurfaceProtectedCapabilitiesKHR &obj) {
    ObjectWrapper object{p, name};
    p.SetMinKeyWidth(17);
    p.PrintKeyBool("supportsProtected", static_cast<bool>(obj.supportsProtected));
}
#ifdef VK_ENABLE_BETA_EXTENSIONS
void DumpVkVideoQueueFamilyProperties2KHR(Printer &p, std::string name, VkVideoQueueFamilyProperties2KHR &obj) {
    ObjectWrapper object{p, name};
    DumpVkVideoCodecOperationFlagsKHR(p, "videoCodecOperations", obj.videoCodecOperations);
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
pNextChainInfos get_chain_infos() {
    pNextChainInfos infos;
    infos.phys_device_props2 = {
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR, sizeof(VkPhysicalDeviceAccelerationStructurePropertiesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT, sizeof(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT, sizeof(VkPhysicalDeviceConservativeRasterizationPropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT, sizeof(VkPhysicalDeviceCustomBorderColorPropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES, sizeof(VkPhysicalDeviceDepthStencilResolveProperties)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES, sizeof(VkPhysicalDeviceDescriptorIndexingProperties)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT, sizeof(VkPhysicalDeviceDiscardRectanglePropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES, sizeof(VkPhysicalDeviceDriverProperties)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT, sizeof(VkPhysicalDeviceDrmPropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT, sizeof(VkPhysicalDeviceExternalMemoryHostPropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES, sizeof(VkPhysicalDeviceFloatControlsProperties)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT, sizeof(VkPhysicalDeviceFragmentDensityMap2PropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT, sizeof(VkPhysicalDeviceFragmentDensityMapPropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR, sizeof(VkPhysicalDeviceFragmentShadingRatePropertiesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES, sizeof(VkPhysicalDeviceIDProperties)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT, sizeof(VkPhysicalDeviceInlineUniformBlockPropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT, sizeof(VkPhysicalDeviceLineRasterizationPropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES, sizeof(VkPhysicalDeviceMaintenance3Properties)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES_KHR, sizeof(VkPhysicalDeviceMaintenance4PropertiesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT, sizeof(VkPhysicalDeviceMultiDrawPropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES, sizeof(VkPhysicalDeviceMultiviewProperties)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT, sizeof(VkPhysicalDevicePCIBusInfoPropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR, sizeof(VkPhysicalDevicePerformanceQueryPropertiesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES, sizeof(VkPhysicalDevicePointClippingProperties)},
#ifdef VK_ENABLE_BETA_EXTENSIONS
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR, sizeof(VkPhysicalDevicePortabilitySubsetPropertiesKHR)},
#endif  // VK_ENABLE_BETA_EXTENSIONS
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES, sizeof(VkPhysicalDeviceProtectedMemoryProperties)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT, sizeof(VkPhysicalDeviceProvokingVertexPropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR, sizeof(VkPhysicalDevicePushDescriptorPropertiesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR, sizeof(VkPhysicalDeviceRayTracingPipelinePropertiesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT, sizeof(VkPhysicalDeviceRobustness2PropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT, sizeof(VkPhysicalDeviceSampleLocationsPropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES, sizeof(VkPhysicalDeviceSamplerFilterMinmaxProperties)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES_KHR, sizeof(VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES, sizeof(VkPhysicalDeviceSubgroupProperties)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT, sizeof(VkPhysicalDeviceSubgroupSizeControlPropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT, sizeof(VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES, sizeof(VkPhysicalDeviceTimelineSemaphoreProperties)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT, sizeof(VkPhysicalDeviceTransformFeedbackPropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT, sizeof(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES, sizeof(VkPhysicalDeviceVulkan11Properties)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES, sizeof(VkPhysicalDeviceVulkan12Properties)},
    };
    infos.phys_device_mem_props2 = {
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT, sizeof(VkPhysicalDeviceMemoryBudgetPropertiesEXT)},
    };
    infos.phys_device_features2 = {
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES, sizeof(VkPhysicalDevice16BitStorageFeatures)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT, sizeof(VkPhysicalDevice4444FormatsFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES, sizeof(VkPhysicalDevice8BitStorageFeatures)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT, sizeof(VkPhysicalDeviceASTCDecodeFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR, sizeof(VkPhysicalDeviceAccelerationStructureFeaturesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT, sizeof(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT, sizeof(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES, sizeof(VkPhysicalDeviceBufferDeviceAddressFeatures)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT, sizeof(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT, sizeof(VkPhysicalDeviceColorWriteEnableFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT, sizeof(VkPhysicalDeviceConditionalRenderingFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT, sizeof(VkPhysicalDeviceCustomBorderColorFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT, sizeof(VkPhysicalDeviceDepthClipControlFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT, sizeof(VkPhysicalDeviceDepthClipEnableFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES, sizeof(VkPhysicalDeviceDescriptorIndexingFeatures)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT, sizeof(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES_KHR, sizeof(VkPhysicalDeviceDynamicRenderingFeaturesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT, sizeof(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT, sizeof(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT, sizeof(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT, sizeof(VkPhysicalDeviceFragmentDensityMapFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT, sizeof(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR, sizeof(VkPhysicalDeviceFragmentShadingRateFeaturesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_EXT, sizeof(VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES, sizeof(VkPhysicalDeviceHostQueryResetFeatures)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES_EXT, sizeof(VkPhysicalDeviceImageRobustnessFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT, sizeof(VkPhysicalDeviceImageViewMinLodFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES, sizeof(VkPhysicalDeviceImagelessFramebufferFeatures)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT, sizeof(VkPhysicalDeviceIndexTypeUint8FeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT, sizeof(VkPhysicalDeviceInlineUniformBlockFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT, sizeof(VkPhysicalDeviceLineRasterizationFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES_KHR, sizeof(VkPhysicalDeviceMaintenance4FeaturesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT, sizeof(VkPhysicalDeviceMemoryPriorityFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT, sizeof(VkPhysicalDeviceMultiDrawFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES, sizeof(VkPhysicalDeviceMultiviewFeatures)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT, sizeof(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR, sizeof(VkPhysicalDevicePerformanceQueryFeaturesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES_EXT, sizeof(VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR, sizeof(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR)},
#ifdef VK_ENABLE_BETA_EXTENSIONS
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR, sizeof(VkPhysicalDevicePortabilitySubsetFeaturesKHR)},
#endif  // VK_ENABLE_BETA_EXTENSIONS
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR, sizeof(VkPhysicalDevicePresentIdFeaturesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR, sizeof(VkPhysicalDevicePresentWaitFeaturesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT, sizeof(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES_EXT, sizeof(VkPhysicalDevicePrivateDataFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES, sizeof(VkPhysicalDeviceProtectedMemoryFeatures)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT, sizeof(VkPhysicalDeviceProvokingVertexFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT, sizeof(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR, sizeof(VkPhysicalDeviceRayQueryFeaturesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR, sizeof(VkPhysicalDeviceRayTracingPipelineFeaturesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT, sizeof(VkPhysicalDeviceRobustness2FeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES, sizeof(VkPhysicalDeviceSamplerYcbcrConversionFeatures)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES, sizeof(VkPhysicalDeviceScalarBlockLayoutFeatures)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES, sizeof(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT, sizeof(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT, sizeof(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES, sizeof(VkPhysicalDeviceShaderAtomicInt64Features)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR, sizeof(VkPhysicalDeviceShaderClockFeaturesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT, sizeof(VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES, sizeof(VkPhysicalDeviceShaderDrawParametersFeatures)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES, sizeof(VkPhysicalDeviceShaderFloat16Int8Features)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT, sizeof(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES_KHR, sizeof(VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR) + 256},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES, sizeof(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR, sizeof(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES_KHR, sizeof(VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT, sizeof(VkPhysicalDeviceSubgroupSizeControlFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES_KHR, sizeof(VkPhysicalDeviceSynchronization2FeaturesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT, sizeof(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT, sizeof(VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES, sizeof(VkPhysicalDeviceTimelineSemaphoreFeatures)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT, sizeof(VkPhysicalDeviceTransformFeedbackFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES, sizeof(VkPhysicalDeviceUniformBufferStandardLayoutFeatures)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES, sizeof(VkPhysicalDeviceVariablePointersFeatures)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT, sizeof(VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT, sizeof(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES, sizeof(VkPhysicalDeviceVulkan11Features)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES, sizeof(VkPhysicalDeviceVulkan12Features)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES, sizeof(VkPhysicalDeviceVulkanMemoryModelFeatures)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR, sizeof(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT, sizeof(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT, sizeof(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT)},
        {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES_KHR, sizeof(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR)},
    };
    infos.surface_capabilities2 = {
        {VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR, sizeof(VkSharedPresentSurfaceCapabilitiesKHR)},
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT, sizeof(VkSurfaceCapabilitiesFullScreenExclusiveEXT)},
#endif  // VK_USE_PLATFORM_WIN32_KHR
        {VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR, sizeof(VkSurfaceProtectedCapabilitiesKHR)},
    };
    infos.format_properties2 = {
        {VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT, sizeof(VkDrmFormatModifierPropertiesList2EXT)},
        {VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT, sizeof(VkDrmFormatModifierPropertiesListEXT)},
        {VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3_KHR, sizeof(VkFormatProperties3KHR)},
    };
    infos.queue_properties2 = {
        {VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_EXT, sizeof(VkQueueFamilyGlobalPriorityPropertiesEXT)},
#ifdef VK_ENABLE_BETA_EXTENSIONS
        {VK_STRUCTURE_TYPE_VIDEO_QUEUE_FAMILY_PROPERTIES_2_KHR, sizeof(VkVideoQueueFamilyProperties2KHR)},
#endif  // VK_ENABLE_BETA_EXTENSIONS
    };
    return infos;
}
void chain_iterator_phys_device_props2(Printer &p, AppInstance &inst, AppGpu &gpu, void * place) {
    while (place) {
        struct VkStructureHeader *structure = (struct VkStructureHeader *)place;
        p.SetSubHeader();
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_ACCELERATION_STRUCTURE_EXTENSION_NAME))) {
            VkPhysicalDeviceAccelerationStructurePropertiesKHR* props = (VkPhysicalDeviceAccelerationStructurePropertiesKHR*)structure;
            DumpVkPhysicalDeviceAccelerationStructurePropertiesKHR(p, "VkPhysicalDeviceAccelerationStructurePropertiesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_BLEND_OPERATION_ADVANCED_EXTENSION_NAME))) {
            VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* props = (VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT*)structure;
            DumpVkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(p, "VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_CONSERVATIVE_RASTERIZATION_EXTENSION_NAME))) {
            VkPhysicalDeviceConservativeRasterizationPropertiesEXT* props = (VkPhysicalDeviceConservativeRasterizationPropertiesEXT*)structure;
            DumpVkPhysicalDeviceConservativeRasterizationPropertiesEXT(p, "VkPhysicalDeviceConservativeRasterizationPropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_CUSTOM_BORDER_COLOR_EXTENSION_NAME))) {
            VkPhysicalDeviceCustomBorderColorPropertiesEXT* props = (VkPhysicalDeviceCustomBorderColorPropertiesEXT*)structure;
            DumpVkPhysicalDeviceCustomBorderColorPropertiesEXT(p, "VkPhysicalDeviceCustomBorderColorPropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_DEPTH_STENCIL_RESOLVE_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceDepthStencilResolveProperties* props = (VkPhysicalDeviceDepthStencilResolveProperties*)structure;
            DumpVkPhysicalDeviceDepthStencilResolveProperties(p, gpu.api_version.minor >= 2 ?"VkPhysicalDeviceDepthStencilResolveProperties":"VkPhysicalDeviceDepthStencilResolvePropertiesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_DESCRIPTOR_INDEXING_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceDescriptorIndexingProperties* props = (VkPhysicalDeviceDescriptorIndexingProperties*)structure;
            DumpVkPhysicalDeviceDescriptorIndexingProperties(p, gpu.api_version.minor >= 2 ?"VkPhysicalDeviceDescriptorIndexingProperties":"VkPhysicalDeviceDescriptorIndexingPropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME))) {
            VkPhysicalDeviceDiscardRectanglePropertiesEXT* props = (VkPhysicalDeviceDiscardRectanglePropertiesEXT*)structure;
            DumpVkPhysicalDeviceDiscardRectanglePropertiesEXT(p, "VkPhysicalDeviceDiscardRectanglePropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_DRIVER_PROPERTIES_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceDriverProperties* props = (VkPhysicalDeviceDriverProperties*)structure;
            DumpVkPhysicalDeviceDriverProperties(p, gpu.api_version.minor >= 2 ?"VkPhysicalDeviceDriverProperties":"VkPhysicalDeviceDriverPropertiesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_PHYSICAL_DEVICE_DRM_EXTENSION_NAME))) {
            VkPhysicalDeviceDrmPropertiesEXT* props = (VkPhysicalDeviceDrmPropertiesEXT*)structure;
            DumpVkPhysicalDeviceDrmPropertiesEXT(p, "VkPhysicalDeviceDrmPropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_EXTERNAL_MEMORY_HOST_EXTENSION_NAME))) {
            VkPhysicalDeviceExternalMemoryHostPropertiesEXT* props = (VkPhysicalDeviceExternalMemoryHostPropertiesEXT*)structure;
            DumpVkPhysicalDeviceExternalMemoryHostPropertiesEXT(p, "VkPhysicalDeviceExternalMemoryHostPropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_SHADER_FLOAT_CONTROLS_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceFloatControlsProperties* props = (VkPhysicalDeviceFloatControlsProperties*)structure;
            DumpVkPhysicalDeviceFloatControlsProperties(p, gpu.api_version.minor >= 2 ?"VkPhysicalDeviceFloatControlsProperties":"VkPhysicalDeviceFloatControlsPropertiesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_FRAGMENT_DENSITY_MAP_2_EXTENSION_NAME))) {
            VkPhysicalDeviceFragmentDensityMap2PropertiesEXT* props = (VkPhysicalDeviceFragmentDensityMap2PropertiesEXT*)structure;
            DumpVkPhysicalDeviceFragmentDensityMap2PropertiesEXT(p, "VkPhysicalDeviceFragmentDensityMap2PropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_FRAGMENT_DENSITY_MAP_EXTENSION_NAME))) {
            VkPhysicalDeviceFragmentDensityMapPropertiesEXT* props = (VkPhysicalDeviceFragmentDensityMapPropertiesEXT*)structure;
            DumpVkPhysicalDeviceFragmentDensityMapPropertiesEXT(p, "VkPhysicalDeviceFragmentDensityMapPropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_FRAGMENT_SHADING_RATE_EXTENSION_NAME))) {
            VkPhysicalDeviceFragmentShadingRatePropertiesKHR* props = (VkPhysicalDeviceFragmentShadingRatePropertiesKHR*)structure;
            DumpVkPhysicalDeviceFragmentShadingRatePropertiesKHR(p, "VkPhysicalDeviceFragmentShadingRatePropertiesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES && 
           (inst.CheckExtensionEnabled(VK_KHR_EXTERNAL_FENCE_CAPABILITIES_EXTENSION_NAME) ||
            gpu.api_version.minor >= 1)) {
            VkPhysicalDeviceIDProperties* props = (VkPhysicalDeviceIDProperties*)structure;
            DumpVkPhysicalDeviceIDProperties(p, gpu.api_version.minor >= 1 ?"VkPhysicalDeviceIDProperties":"VkPhysicalDeviceIDPropertiesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_INLINE_UNIFORM_BLOCK_EXTENSION_NAME))) {
            VkPhysicalDeviceInlineUniformBlockPropertiesEXT* props = (VkPhysicalDeviceInlineUniformBlockPropertiesEXT*)structure;
            DumpVkPhysicalDeviceInlineUniformBlockPropertiesEXT(p, "VkPhysicalDeviceInlineUniformBlockPropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_LINE_RASTERIZATION_EXTENSION_NAME))) {
            VkPhysicalDeviceLineRasterizationPropertiesEXT* props = (VkPhysicalDeviceLineRasterizationPropertiesEXT*)structure;
            DumpVkPhysicalDeviceLineRasterizationPropertiesEXT(p, "VkPhysicalDeviceLineRasterizationPropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_MAINTENANCE_3_EXTENSION_NAME) ||
            gpu.api_version.minor >= 1)) {
            VkPhysicalDeviceMaintenance3Properties* props = (VkPhysicalDeviceMaintenance3Properties*)structure;
            DumpVkPhysicalDeviceMaintenance3Properties(p, gpu.api_version.minor >= 1 ?"VkPhysicalDeviceMaintenance3Properties":"VkPhysicalDeviceMaintenance3PropertiesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_MAINTENANCE_4_EXTENSION_NAME))) {
            VkPhysicalDeviceMaintenance4PropertiesKHR* props = (VkPhysicalDeviceMaintenance4PropertiesKHR*)structure;
            DumpVkPhysicalDeviceMaintenance4PropertiesKHR(p, "VkPhysicalDeviceMaintenance4PropertiesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_MULTI_DRAW_EXTENSION_NAME))) {
            VkPhysicalDeviceMultiDrawPropertiesEXT* props = (VkPhysicalDeviceMultiDrawPropertiesEXT*)structure;
            DumpVkPhysicalDeviceMultiDrawPropertiesEXT(p, "VkPhysicalDeviceMultiDrawPropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_MULTIVIEW_EXTENSION_NAME) ||
            gpu.api_version.minor >= 1)) {
            VkPhysicalDeviceMultiviewProperties* props = (VkPhysicalDeviceMultiviewProperties*)structure;
            DumpVkPhysicalDeviceMultiviewProperties(p, gpu.api_version.minor >= 1 ?"VkPhysicalDeviceMultiviewProperties":"VkPhysicalDeviceMultiviewPropertiesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_PCI_BUS_INFO_EXTENSION_NAME))) {
            VkPhysicalDevicePCIBusInfoPropertiesEXT* props = (VkPhysicalDevicePCIBusInfoPropertiesEXT*)structure;
            DumpVkPhysicalDevicePCIBusInfoPropertiesEXT(p, "VkPhysicalDevicePCIBusInfoPropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_PERFORMANCE_QUERY_EXTENSION_NAME))) {
            VkPhysicalDevicePerformanceQueryPropertiesKHR* props = (VkPhysicalDevicePerformanceQueryPropertiesKHR*)structure;
            DumpVkPhysicalDevicePerformanceQueryPropertiesKHR(p, "VkPhysicalDevicePerformanceQueryPropertiesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_MAINTENANCE_2_EXTENSION_NAME) ||
            gpu.api_version.minor >= 1)) {
            VkPhysicalDevicePointClippingProperties* props = (VkPhysicalDevicePointClippingProperties*)structure;
            DumpVkPhysicalDevicePointClippingProperties(p, gpu.api_version.minor >= 1 ?"VkPhysicalDevicePointClippingProperties":"VkPhysicalDevicePointClippingPropertiesKHR", *props);
            p.AddNewline();
        }
#ifdef VK_ENABLE_BETA_EXTENSIONS
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_PORTABILITY_SUBSET_EXTENSION_NAME))) {
            VkPhysicalDevicePortabilitySubsetPropertiesKHR* props = (VkPhysicalDevicePortabilitySubsetPropertiesKHR*)structure;
            DumpVkPhysicalDevicePortabilitySubsetPropertiesKHR(p, "VkPhysicalDevicePortabilitySubsetPropertiesKHR", *props);
            p.AddNewline();
        }
#endif  // VK_ENABLE_BETA_EXTENSIONS
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES && 
           (gpu.api_version.minor >= 1)) {
            VkPhysicalDeviceProtectedMemoryProperties* props = (VkPhysicalDeviceProtectedMemoryProperties*)structure;
            DumpVkPhysicalDeviceProtectedMemoryProperties(p, "VkPhysicalDeviceProtectedMemoryProperties", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_PROVOKING_VERTEX_EXTENSION_NAME))) {
            VkPhysicalDeviceProvokingVertexPropertiesEXT* props = (VkPhysicalDeviceProvokingVertexPropertiesEXT*)structure;
            DumpVkPhysicalDeviceProvokingVertexPropertiesEXT(p, "VkPhysicalDeviceProvokingVertexPropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_PUSH_DESCRIPTOR_EXTENSION_NAME))) {
            VkPhysicalDevicePushDescriptorPropertiesKHR* props = (VkPhysicalDevicePushDescriptorPropertiesKHR*)structure;
            DumpVkPhysicalDevicePushDescriptorPropertiesKHR(p, "VkPhysicalDevicePushDescriptorPropertiesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_RAY_TRACING_PIPELINE_EXTENSION_NAME))) {
            VkPhysicalDeviceRayTracingPipelinePropertiesKHR* props = (VkPhysicalDeviceRayTracingPipelinePropertiesKHR*)structure;
            DumpVkPhysicalDeviceRayTracingPipelinePropertiesKHR(p, "VkPhysicalDeviceRayTracingPipelinePropertiesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_ROBUSTNESS_2_EXTENSION_NAME))) {
            VkPhysicalDeviceRobustness2PropertiesEXT* props = (VkPhysicalDeviceRobustness2PropertiesEXT*)structure;
            DumpVkPhysicalDeviceRobustness2PropertiesEXT(p, "VkPhysicalDeviceRobustness2PropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME))) {
            VkPhysicalDeviceSampleLocationsPropertiesEXT* props = (VkPhysicalDeviceSampleLocationsPropertiesEXT*)structure;
            DumpVkPhysicalDeviceSampleLocationsPropertiesEXT(p, "VkPhysicalDeviceSampleLocationsPropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_SAMPLER_FILTER_MINMAX_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceSamplerFilterMinmaxProperties* props = (VkPhysicalDeviceSamplerFilterMinmaxProperties*)structure;
            DumpVkPhysicalDeviceSamplerFilterMinmaxProperties(p, gpu.api_version.minor >= 2 ?"VkPhysicalDeviceSamplerFilterMinmaxProperties":"VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_SHADER_INTEGER_DOT_PRODUCT_EXTENSION_NAME))) {
            VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR* props = (VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR*)structure;
            DumpVkPhysicalDeviceShaderIntegerDotProductPropertiesKHR(p, "VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES && 
           (gpu.api_version.minor >= 1)) {
            VkPhysicalDeviceSubgroupProperties* props = (VkPhysicalDeviceSubgroupProperties*)structure;
            DumpVkPhysicalDeviceSubgroupProperties(p, "VkPhysicalDeviceSubgroupProperties", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_SUBGROUP_SIZE_CONTROL_EXTENSION_NAME))) {
            VkPhysicalDeviceSubgroupSizeControlPropertiesEXT* props = (VkPhysicalDeviceSubgroupSizeControlPropertiesEXT*)structure;
            DumpVkPhysicalDeviceSubgroupSizeControlPropertiesEXT(p, "VkPhysicalDeviceSubgroupSizeControlPropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_TEXEL_BUFFER_ALIGNMENT_EXTENSION_NAME))) {
            VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT* props = (VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT*)structure;
            DumpVkPhysicalDeviceTexelBufferAlignmentPropertiesEXT(p, "VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_TIMELINE_SEMAPHORE_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceTimelineSemaphoreProperties* props = (VkPhysicalDeviceTimelineSemaphoreProperties*)structure;
            DumpVkPhysicalDeviceTimelineSemaphoreProperties(p, gpu.api_version.minor >= 2 ?"VkPhysicalDeviceTimelineSemaphoreProperties":"VkPhysicalDeviceTimelineSemaphorePropertiesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_TRANSFORM_FEEDBACK_EXTENSION_NAME))) {
            VkPhysicalDeviceTransformFeedbackPropertiesEXT* props = (VkPhysicalDeviceTransformFeedbackPropertiesEXT*)structure;
            DumpVkPhysicalDeviceTransformFeedbackPropertiesEXT(p, "VkPhysicalDeviceTransformFeedbackPropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_EXTENSION_NAME))) {
            VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* props = (VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT*)structure;
            DumpVkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(p, "VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES && 
           (gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceVulkan11Properties* props = (VkPhysicalDeviceVulkan11Properties*)structure;
            DumpVkPhysicalDeviceVulkan11Properties(p, "VkPhysicalDeviceVulkan11Properties", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES && 
           (gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceVulkan12Properties* props = (VkPhysicalDeviceVulkan12Properties*)structure;
            DumpVkPhysicalDeviceVulkan12Properties(p, "VkPhysicalDeviceVulkan12Properties", *props);
            p.AddNewline();
        }
        place = structure->pNext;
    }
}
void chain_iterator_phys_device_mem_props2(Printer &p, AppGpu &gpu, void * place) {
    while (place) {
        struct VkStructureHeader *structure = (struct VkStructureHeader *)place;
        p.SetSubHeader();
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_MEMORY_BUDGET_EXTENSION_NAME))) {
            VkPhysicalDeviceMemoryBudgetPropertiesEXT* props = (VkPhysicalDeviceMemoryBudgetPropertiesEXT*)structure;
            DumpVkPhysicalDeviceMemoryBudgetPropertiesEXT(p, "VkPhysicalDeviceMemoryBudgetPropertiesEXT", *props);
            p.AddNewline();
        }
        place = structure->pNext;
    }
}
void chain_iterator_phys_device_features2(Printer &p, AppGpu &gpu, void * place) {
    while (place) {
        struct VkStructureHeader *structure = (struct VkStructureHeader *)place;
        p.SetSubHeader();
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_16BIT_STORAGE_EXTENSION_NAME) ||
            gpu.api_version.minor >= 1)) {
            VkPhysicalDevice16BitStorageFeatures* props = (VkPhysicalDevice16BitStorageFeatures*)structure;
            DumpVkPhysicalDevice16BitStorageFeatures(p, gpu.api_version.minor >= 1 ?"VkPhysicalDevice16BitStorageFeatures":"VkPhysicalDevice16BitStorageFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_4444_FORMATS_EXTENSION_NAME))) {
            VkPhysicalDevice4444FormatsFeaturesEXT* props = (VkPhysicalDevice4444FormatsFeaturesEXT*)structure;
            DumpVkPhysicalDevice4444FormatsFeaturesEXT(p, "VkPhysicalDevice4444FormatsFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_8BIT_STORAGE_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDevice8BitStorageFeatures* props = (VkPhysicalDevice8BitStorageFeatures*)structure;
            DumpVkPhysicalDevice8BitStorageFeatures(p, gpu.api_version.minor >= 2 ?"VkPhysicalDevice8BitStorageFeatures":"VkPhysicalDevice8BitStorageFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_ASTC_DECODE_MODE_EXTENSION_NAME))) {
            VkPhysicalDeviceASTCDecodeFeaturesEXT* props = (VkPhysicalDeviceASTCDecodeFeaturesEXT*)structure;
            DumpVkPhysicalDeviceASTCDecodeFeaturesEXT(p, "VkPhysicalDeviceASTCDecodeFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_ACCELERATION_STRUCTURE_EXTENSION_NAME))) {
            VkPhysicalDeviceAccelerationStructureFeaturesKHR* props = (VkPhysicalDeviceAccelerationStructureFeaturesKHR*)structure;
            DumpVkPhysicalDeviceAccelerationStructureFeaturesKHR(p, "VkPhysicalDeviceAccelerationStructureFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_BLEND_OPERATION_ADVANCED_EXTENSION_NAME))) {
            VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* props = (VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*)structure;
            DumpVkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(p, "VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_BORDER_COLOR_SWIZZLE_EXTENSION_NAME))) {
            VkPhysicalDeviceBorderColorSwizzleFeaturesEXT* props = (VkPhysicalDeviceBorderColorSwizzleFeaturesEXT*)structure;
            DumpVkPhysicalDeviceBorderColorSwizzleFeaturesEXT(p, "VkPhysicalDeviceBorderColorSwizzleFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_BUFFER_DEVICE_ADDRESS_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceBufferDeviceAddressFeatures* props = (VkPhysicalDeviceBufferDeviceAddressFeatures*)structure;
            DumpVkPhysicalDeviceBufferDeviceAddressFeatures(p, gpu.api_version.minor >= 2 ?"VkPhysicalDeviceBufferDeviceAddressFeatures":"VkPhysicalDeviceBufferDeviceAddressFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_BUFFER_DEVICE_ADDRESS_EXTENSION_NAME))) {
            VkPhysicalDeviceBufferDeviceAddressFeaturesEXT* props = (VkPhysicalDeviceBufferDeviceAddressFeaturesEXT*)structure;
            DumpVkPhysicalDeviceBufferDeviceAddressFeaturesEXT(p, "VkPhysicalDeviceBufferDeviceAddressFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_COLOR_WRITE_ENABLE_EXTENSION_NAME))) {
            VkPhysicalDeviceColorWriteEnableFeaturesEXT* props = (VkPhysicalDeviceColorWriteEnableFeaturesEXT*)structure;
            DumpVkPhysicalDeviceColorWriteEnableFeaturesEXT(p, "VkPhysicalDeviceColorWriteEnableFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_CONDITIONAL_RENDERING_EXTENSION_NAME))) {
            VkPhysicalDeviceConditionalRenderingFeaturesEXT* props = (VkPhysicalDeviceConditionalRenderingFeaturesEXT*)structure;
            DumpVkPhysicalDeviceConditionalRenderingFeaturesEXT(p, "VkPhysicalDeviceConditionalRenderingFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_CUSTOM_BORDER_COLOR_EXTENSION_NAME))) {
            VkPhysicalDeviceCustomBorderColorFeaturesEXT* props = (VkPhysicalDeviceCustomBorderColorFeaturesEXT*)structure;
            DumpVkPhysicalDeviceCustomBorderColorFeaturesEXT(p, "VkPhysicalDeviceCustomBorderColorFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_DEPTH_CLIP_CONTROL_EXTENSION_NAME))) {
            VkPhysicalDeviceDepthClipControlFeaturesEXT* props = (VkPhysicalDeviceDepthClipControlFeaturesEXT*)structure;
            DumpVkPhysicalDeviceDepthClipControlFeaturesEXT(p, "VkPhysicalDeviceDepthClipControlFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_DEPTH_CLIP_ENABLE_EXTENSION_NAME))) {
            VkPhysicalDeviceDepthClipEnableFeaturesEXT* props = (VkPhysicalDeviceDepthClipEnableFeaturesEXT*)structure;
            DumpVkPhysicalDeviceDepthClipEnableFeaturesEXT(p, "VkPhysicalDeviceDepthClipEnableFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_DESCRIPTOR_INDEXING_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceDescriptorIndexingFeatures* props = (VkPhysicalDeviceDescriptorIndexingFeatures*)structure;
            DumpVkPhysicalDeviceDescriptorIndexingFeatures(p, gpu.api_version.minor >= 2 ?"VkPhysicalDeviceDescriptorIndexingFeatures":"VkPhysicalDeviceDescriptorIndexingFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_DEVICE_MEMORY_REPORT_EXTENSION_NAME))) {
            VkPhysicalDeviceDeviceMemoryReportFeaturesEXT* props = (VkPhysicalDeviceDeviceMemoryReportFeaturesEXT*)structure;
            DumpVkPhysicalDeviceDeviceMemoryReportFeaturesEXT(p, "VkPhysicalDeviceDeviceMemoryReportFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_DYNAMIC_RENDERING_EXTENSION_NAME))) {
            VkPhysicalDeviceDynamicRenderingFeaturesKHR* props = (VkPhysicalDeviceDynamicRenderingFeaturesKHR*)structure;
            DumpVkPhysicalDeviceDynamicRenderingFeaturesKHR(p, "VkPhysicalDeviceDynamicRenderingFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_EXTENDED_DYNAMIC_STATE_2_EXTENSION_NAME))) {
            VkPhysicalDeviceExtendedDynamicState2FeaturesEXT* props = (VkPhysicalDeviceExtendedDynamicState2FeaturesEXT*)structure;
            DumpVkPhysicalDeviceExtendedDynamicState2FeaturesEXT(p, "VkPhysicalDeviceExtendedDynamicState2FeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_EXTENDED_DYNAMIC_STATE_EXTENSION_NAME))) {
            VkPhysicalDeviceExtendedDynamicStateFeaturesEXT* props = (VkPhysicalDeviceExtendedDynamicStateFeaturesEXT*)structure;
            DumpVkPhysicalDeviceExtendedDynamicStateFeaturesEXT(p, "VkPhysicalDeviceExtendedDynamicStateFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_FRAGMENT_DENSITY_MAP_2_EXTENSION_NAME))) {
            VkPhysicalDeviceFragmentDensityMap2FeaturesEXT* props = (VkPhysicalDeviceFragmentDensityMap2FeaturesEXT*)structure;
            DumpVkPhysicalDeviceFragmentDensityMap2FeaturesEXT(p, "VkPhysicalDeviceFragmentDensityMap2FeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_FRAGMENT_DENSITY_MAP_EXTENSION_NAME))) {
            VkPhysicalDeviceFragmentDensityMapFeaturesEXT* props = (VkPhysicalDeviceFragmentDensityMapFeaturesEXT*)structure;
            DumpVkPhysicalDeviceFragmentDensityMapFeaturesEXT(p, "VkPhysicalDeviceFragmentDensityMapFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_FRAGMENT_SHADER_INTERLOCK_EXTENSION_NAME))) {
            VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT* props = (VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT*)structure;
            DumpVkPhysicalDeviceFragmentShaderInterlockFeaturesEXT(p, "VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_FRAGMENT_SHADING_RATE_EXTENSION_NAME))) {
            VkPhysicalDeviceFragmentShadingRateFeaturesKHR* props = (VkPhysicalDeviceFragmentShadingRateFeaturesKHR*)structure;
            DumpVkPhysicalDeviceFragmentShadingRateFeaturesKHR(p, "VkPhysicalDeviceFragmentShadingRateFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_GLOBAL_PRIORITY_QUERY_EXTENSION_NAME))) {
            VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT* props = (VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT*)structure;
            DumpVkPhysicalDeviceGlobalPriorityQueryFeaturesEXT(p, "VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_HOST_QUERY_RESET_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceHostQueryResetFeatures* props = (VkPhysicalDeviceHostQueryResetFeatures*)structure;
            DumpVkPhysicalDeviceHostQueryResetFeatures(p, gpu.api_version.minor >= 2 ?"VkPhysicalDeviceHostQueryResetFeatures":"VkPhysicalDeviceHostQueryResetFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_IMAGE_ROBUSTNESS_EXTENSION_NAME))) {
            VkPhysicalDeviceImageRobustnessFeaturesEXT* props = (VkPhysicalDeviceImageRobustnessFeaturesEXT*)structure;
            DumpVkPhysicalDeviceImageRobustnessFeaturesEXT(p, "VkPhysicalDeviceImageRobustnessFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_IMAGE_VIEW_MIN_LOD_EXTENSION_NAME))) {
            VkPhysicalDeviceImageViewMinLodFeaturesEXT* props = (VkPhysicalDeviceImageViewMinLodFeaturesEXT*)structure;
            DumpVkPhysicalDeviceImageViewMinLodFeaturesEXT(p, "VkPhysicalDeviceImageViewMinLodFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_IMAGELESS_FRAMEBUFFER_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceImagelessFramebufferFeatures* props = (VkPhysicalDeviceImagelessFramebufferFeatures*)structure;
            DumpVkPhysicalDeviceImagelessFramebufferFeatures(p, gpu.api_version.minor >= 2 ?"VkPhysicalDeviceImagelessFramebufferFeatures":"VkPhysicalDeviceImagelessFramebufferFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_INDEX_TYPE_UINT8_EXTENSION_NAME))) {
            VkPhysicalDeviceIndexTypeUint8FeaturesEXT* props = (VkPhysicalDeviceIndexTypeUint8FeaturesEXT*)structure;
            DumpVkPhysicalDeviceIndexTypeUint8FeaturesEXT(p, "VkPhysicalDeviceIndexTypeUint8FeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_INLINE_UNIFORM_BLOCK_EXTENSION_NAME))) {
            VkPhysicalDeviceInlineUniformBlockFeaturesEXT* props = (VkPhysicalDeviceInlineUniformBlockFeaturesEXT*)structure;
            DumpVkPhysicalDeviceInlineUniformBlockFeaturesEXT(p, "VkPhysicalDeviceInlineUniformBlockFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_LINE_RASTERIZATION_EXTENSION_NAME))) {
            VkPhysicalDeviceLineRasterizationFeaturesEXT* props = (VkPhysicalDeviceLineRasterizationFeaturesEXT*)structure;
            DumpVkPhysicalDeviceLineRasterizationFeaturesEXT(p, "VkPhysicalDeviceLineRasterizationFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_MAINTENANCE_4_EXTENSION_NAME))) {
            VkPhysicalDeviceMaintenance4FeaturesKHR* props = (VkPhysicalDeviceMaintenance4FeaturesKHR*)structure;
            DumpVkPhysicalDeviceMaintenance4FeaturesKHR(p, "VkPhysicalDeviceMaintenance4FeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_MEMORY_PRIORITY_EXTENSION_NAME))) {
            VkPhysicalDeviceMemoryPriorityFeaturesEXT* props = (VkPhysicalDeviceMemoryPriorityFeaturesEXT*)structure;
            DumpVkPhysicalDeviceMemoryPriorityFeaturesEXT(p, "VkPhysicalDeviceMemoryPriorityFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_MULTI_DRAW_EXTENSION_NAME))) {
            VkPhysicalDeviceMultiDrawFeaturesEXT* props = (VkPhysicalDeviceMultiDrawFeaturesEXT*)structure;
            DumpVkPhysicalDeviceMultiDrawFeaturesEXT(p, "VkPhysicalDeviceMultiDrawFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_MULTIVIEW_EXTENSION_NAME) ||
            gpu.api_version.minor >= 1)) {
            VkPhysicalDeviceMultiviewFeatures* props = (VkPhysicalDeviceMultiviewFeatures*)structure;
            DumpVkPhysicalDeviceMultiviewFeatures(p, gpu.api_version.minor >= 1 ?"VkPhysicalDeviceMultiviewFeatures":"VkPhysicalDeviceMultiviewFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_PAGEABLE_DEVICE_LOCAL_MEMORY_EXTENSION_NAME))) {
            VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT* props = (VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT*)structure;
            DumpVkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(p, "VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_PERFORMANCE_QUERY_EXTENSION_NAME))) {
            VkPhysicalDevicePerformanceQueryFeaturesKHR* props = (VkPhysicalDevicePerformanceQueryFeaturesKHR*)structure;
            DumpVkPhysicalDevicePerformanceQueryFeaturesKHR(p, "VkPhysicalDevicePerformanceQueryFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_PIPELINE_CREATION_CACHE_CONTROL_EXTENSION_NAME))) {
            VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT* props = (VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT*)structure;
            DumpVkPhysicalDevicePipelineCreationCacheControlFeaturesEXT(p, "VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_PIPELINE_EXECUTABLE_PROPERTIES_EXTENSION_NAME))) {
            VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR* props = (VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR*)structure;
            DumpVkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR(p, "VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR", *props);
            p.AddNewline();
        }
#ifdef VK_ENABLE_BETA_EXTENSIONS
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_PORTABILITY_SUBSET_EXTENSION_NAME))) {
            VkPhysicalDevicePortabilitySubsetFeaturesKHR* props = (VkPhysicalDevicePortabilitySubsetFeaturesKHR*)structure;
            DumpVkPhysicalDevicePortabilitySubsetFeaturesKHR(p, "VkPhysicalDevicePortabilitySubsetFeaturesKHR", *props);
            p.AddNewline();
        }
#endif  // VK_ENABLE_BETA_EXTENSIONS
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_PRESENT_ID_EXTENSION_NAME))) {
            VkPhysicalDevicePresentIdFeaturesKHR* props = (VkPhysicalDevicePresentIdFeaturesKHR*)structure;
            DumpVkPhysicalDevicePresentIdFeaturesKHR(p, "VkPhysicalDevicePresentIdFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_PRESENT_WAIT_EXTENSION_NAME))) {
            VkPhysicalDevicePresentWaitFeaturesKHR* props = (VkPhysicalDevicePresentWaitFeaturesKHR*)structure;
            DumpVkPhysicalDevicePresentWaitFeaturesKHR(p, "VkPhysicalDevicePresentWaitFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_PRIMITIVE_TOPOLOGY_LIST_RESTART_EXTENSION_NAME))) {
            VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT* props = (VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT*)structure;
            DumpVkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(p, "VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_PRIVATE_DATA_EXTENSION_NAME))) {
            VkPhysicalDevicePrivateDataFeaturesEXT* props = (VkPhysicalDevicePrivateDataFeaturesEXT*)structure;
            DumpVkPhysicalDevicePrivateDataFeaturesEXT(p, "VkPhysicalDevicePrivateDataFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES && 
           (gpu.api_version.minor >= 1)) {
            VkPhysicalDeviceProtectedMemoryFeatures* props = (VkPhysicalDeviceProtectedMemoryFeatures*)structure;
            DumpVkPhysicalDeviceProtectedMemoryFeatures(p, "VkPhysicalDeviceProtectedMemoryFeatures", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_PROVOKING_VERTEX_EXTENSION_NAME))) {
            VkPhysicalDeviceProvokingVertexFeaturesEXT* props = (VkPhysicalDeviceProvokingVertexFeaturesEXT*)structure;
            DumpVkPhysicalDeviceProvokingVertexFeaturesEXT(p, "VkPhysicalDeviceProvokingVertexFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_RGBA10X6_FORMATS_EXTENSION_NAME))) {
            VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT* props = (VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT*)structure;
            DumpVkPhysicalDeviceRGBA10X6FormatsFeaturesEXT(p, "VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_RAY_QUERY_EXTENSION_NAME))) {
            VkPhysicalDeviceRayQueryFeaturesKHR* props = (VkPhysicalDeviceRayQueryFeaturesKHR*)structure;
            DumpVkPhysicalDeviceRayQueryFeaturesKHR(p, "VkPhysicalDeviceRayQueryFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_RAY_TRACING_PIPELINE_EXTENSION_NAME))) {
            VkPhysicalDeviceRayTracingPipelineFeaturesKHR* props = (VkPhysicalDeviceRayTracingPipelineFeaturesKHR*)structure;
            DumpVkPhysicalDeviceRayTracingPipelineFeaturesKHR(p, "VkPhysicalDeviceRayTracingPipelineFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_ROBUSTNESS_2_EXTENSION_NAME))) {
            VkPhysicalDeviceRobustness2FeaturesEXT* props = (VkPhysicalDeviceRobustness2FeaturesEXT*)structure;
            DumpVkPhysicalDeviceRobustness2FeaturesEXT(p, "VkPhysicalDeviceRobustness2FeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_SAMPLER_YCBCR_CONVERSION_EXTENSION_NAME) ||
            gpu.api_version.minor >= 1)) {
            VkPhysicalDeviceSamplerYcbcrConversionFeatures* props = (VkPhysicalDeviceSamplerYcbcrConversionFeatures*)structure;
            DumpVkPhysicalDeviceSamplerYcbcrConversionFeatures(p, gpu.api_version.minor >= 1 ?"VkPhysicalDeviceSamplerYcbcrConversionFeatures":"VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_SCALAR_BLOCK_LAYOUT_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceScalarBlockLayoutFeatures* props = (VkPhysicalDeviceScalarBlockLayoutFeatures*)structure;
            DumpVkPhysicalDeviceScalarBlockLayoutFeatures(p, gpu.api_version.minor >= 2 ?"VkPhysicalDeviceScalarBlockLayoutFeatures":"VkPhysicalDeviceScalarBlockLayoutFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_SEPARATE_DEPTH_STENCIL_LAYOUTS_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures* props = (VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures*)structure;
            DumpVkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(p, gpu.api_version.minor >= 2 ?"VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures":"VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_SHADER_ATOMIC_FLOAT_2_EXTENSION_NAME))) {
            VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT* props = (VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT*)structure;
            DumpVkPhysicalDeviceShaderAtomicFloat2FeaturesEXT(p, "VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_SHADER_ATOMIC_FLOAT_EXTENSION_NAME))) {
            VkPhysicalDeviceShaderAtomicFloatFeaturesEXT* props = (VkPhysicalDeviceShaderAtomicFloatFeaturesEXT*)structure;
            DumpVkPhysicalDeviceShaderAtomicFloatFeaturesEXT(p, "VkPhysicalDeviceShaderAtomicFloatFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_SHADER_ATOMIC_INT64_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceShaderAtomicInt64Features* props = (VkPhysicalDeviceShaderAtomicInt64Features*)structure;
            DumpVkPhysicalDeviceShaderAtomicInt64Features(p, gpu.api_version.minor >= 2 ?"VkPhysicalDeviceShaderAtomicInt64Features":"VkPhysicalDeviceShaderAtomicInt64FeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_SHADER_CLOCK_EXTENSION_NAME))) {
            VkPhysicalDeviceShaderClockFeaturesKHR* props = (VkPhysicalDeviceShaderClockFeaturesKHR*)structure;
            DumpVkPhysicalDeviceShaderClockFeaturesKHR(p, "VkPhysicalDeviceShaderClockFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_SHADER_DEMOTE_TO_HELPER_INVOCATION_EXTENSION_NAME))) {
            VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT* props = (VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT*)structure;
            DumpVkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT(p, "VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES && 
           (gpu.api_version.minor >= 1)) {
            VkPhysicalDeviceShaderDrawParametersFeatures* props = (VkPhysicalDeviceShaderDrawParametersFeatures*)structure;
            DumpVkPhysicalDeviceShaderDrawParametersFeatures(p, gpu.api_version.minor >= 1 ?"VkPhysicalDeviceShaderDrawParametersFeatures":"VkPhysicalDeviceShaderDrawParameterFeatures", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_SHADER_FLOAT16_INT8_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceShaderFloat16Int8Features* props = (VkPhysicalDeviceShaderFloat16Int8Features*)structure;
            DumpVkPhysicalDeviceShaderFloat16Int8Features(p, gpu.api_version.minor >= 2 ?"VkPhysicalDeviceShaderFloat16Int8Features":"VkPhysicalDeviceFloat16Int8FeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_SHADER_IMAGE_ATOMIC_INT64_EXTENSION_NAME))) {
            VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT* props = (VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT*)structure;
            DumpVkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT(p, "VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_SHADER_INTEGER_DOT_PRODUCT_EXTENSION_NAME))) {
            VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR* props = (VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR*)structure;
            DumpVkPhysicalDeviceShaderIntegerDotProductFeaturesKHR(p, "VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_SHADER_SUBGROUP_EXTENDED_TYPES_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures* props = (VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures*)structure;
            DumpVkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(p, gpu.api_version.minor >= 2 ?"VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures":"VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_EXTENSION_NAME))) {
            VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR* props = (VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR*)structure;
            DumpVkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(p, "VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_SHADER_TERMINATE_INVOCATION_EXTENSION_NAME))) {
            VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR* props = (VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR*)structure;
            DumpVkPhysicalDeviceShaderTerminateInvocationFeaturesKHR(p, "VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_SUBGROUP_SIZE_CONTROL_EXTENSION_NAME))) {
            VkPhysicalDeviceSubgroupSizeControlFeaturesEXT* props = (VkPhysicalDeviceSubgroupSizeControlFeaturesEXT*)structure;
            DumpVkPhysicalDeviceSubgroupSizeControlFeaturesEXT(p, "VkPhysicalDeviceSubgroupSizeControlFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_SYNCHRONIZATION_2_EXTENSION_NAME))) {
            VkPhysicalDeviceSynchronization2FeaturesKHR* props = (VkPhysicalDeviceSynchronization2FeaturesKHR*)structure;
            DumpVkPhysicalDeviceSynchronization2FeaturesKHR(p, "VkPhysicalDeviceSynchronization2FeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_TEXEL_BUFFER_ALIGNMENT_EXTENSION_NAME))) {
            VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT* props = (VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT*)structure;
            DumpVkPhysicalDeviceTexelBufferAlignmentFeaturesEXT(p, "VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_TEXTURE_COMPRESSION_ASTC_HDR_EXTENSION_NAME))) {
            VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT* props = (VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT*)structure;
            DumpVkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT(p, "VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_TIMELINE_SEMAPHORE_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceTimelineSemaphoreFeatures* props = (VkPhysicalDeviceTimelineSemaphoreFeatures*)structure;
            DumpVkPhysicalDeviceTimelineSemaphoreFeatures(p, gpu.api_version.minor >= 2 ?"VkPhysicalDeviceTimelineSemaphoreFeatures":"VkPhysicalDeviceTimelineSemaphoreFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_TRANSFORM_FEEDBACK_EXTENSION_NAME))) {
            VkPhysicalDeviceTransformFeedbackFeaturesEXT* props = (VkPhysicalDeviceTransformFeedbackFeaturesEXT*)structure;
            DumpVkPhysicalDeviceTransformFeedbackFeaturesEXT(p, "VkPhysicalDeviceTransformFeedbackFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_UNIFORM_BUFFER_STANDARD_LAYOUT_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceUniformBufferStandardLayoutFeatures* props = (VkPhysicalDeviceUniformBufferStandardLayoutFeatures*)structure;
            DumpVkPhysicalDeviceUniformBufferStandardLayoutFeatures(p, gpu.api_version.minor >= 2 ?"VkPhysicalDeviceUniformBufferStandardLayoutFeatures":"VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_VARIABLE_POINTERS_EXTENSION_NAME) ||
            gpu.api_version.minor >= 1)) {
            VkPhysicalDeviceVariablePointersFeatures* props = (VkPhysicalDeviceVariablePointersFeatures*)structure;
            DumpVkPhysicalDeviceVariablePointersFeatures(p, gpu.api_version.minor >= 1 ?"VkPhysicalDeviceVariablePointersFeatures":"VkPhysicalDeviceVariablePointersFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_EXTENSION_NAME))) {
            VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT* props = (VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT*)structure;
            DumpVkPhysicalDeviceVertexAttributeDivisorFeaturesEXT(p, "VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_VERTEX_INPUT_DYNAMIC_STATE_EXTENSION_NAME))) {
            VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT* props = (VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT*)structure;
            DumpVkPhysicalDeviceVertexInputDynamicStateFeaturesEXT(p, "VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES && 
           (gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceVulkan11Features* props = (VkPhysicalDeviceVulkan11Features*)structure;
            DumpVkPhysicalDeviceVulkan11Features(p, "VkPhysicalDeviceVulkan11Features", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES && 
           (gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceVulkan12Features* props = (VkPhysicalDeviceVulkan12Features*)structure;
            DumpVkPhysicalDeviceVulkan12Features(p, "VkPhysicalDeviceVulkan12Features", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_VULKAN_MEMORY_MODEL_EXTENSION_NAME) ||
            gpu.api_version.minor >= 2)) {
            VkPhysicalDeviceVulkanMemoryModelFeatures* props = (VkPhysicalDeviceVulkanMemoryModelFeatures*)structure;
            DumpVkPhysicalDeviceVulkanMemoryModelFeatures(p, gpu.api_version.minor >= 2 ?"VkPhysicalDeviceVulkanMemoryModelFeatures":"VkPhysicalDeviceVulkanMemoryModelFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_EXTENSION_NAME))) {
            VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR* props = (VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR*)structure;
            DumpVkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(p, "VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_YCBCR_2PLANE_444_FORMATS_EXTENSION_NAME))) {
            VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT* props = (VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT*)structure;
            DumpVkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(p, "VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_YCBCR_IMAGE_ARRAYS_EXTENSION_NAME))) {
            VkPhysicalDeviceYcbcrImageArraysFeaturesEXT* props = (VkPhysicalDeviceYcbcrImageArraysFeaturesEXT*)structure;
            DumpVkPhysicalDeviceYcbcrImageArraysFeaturesEXT(p, "VkPhysicalDeviceYcbcrImageArraysFeaturesEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_ZERO_INITIALIZE_WORKGROUP_MEMORY_EXTENSION_NAME))) {
            VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR* props = (VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR*)structure;
            DumpVkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR(p, "VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR", *props);
            p.AddNewline();
        }
        place = structure->pNext;
    }
}
void chain_iterator_surface_capabilities2(Printer &p, AppInstance &inst, AppGpu &gpu, void * place) {
    while (place) {
        struct VkStructureHeader *structure = (struct VkStructureHeader *)place;
        p.SetSubHeader();
        if (structure->sType == VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_SHARED_PRESENTABLE_IMAGE_EXTENSION_NAME))) {
            VkSharedPresentSurfaceCapabilitiesKHR* props = (VkSharedPresentSurfaceCapabilitiesKHR*)structure;
            DumpVkSharedPresentSurfaceCapabilitiesKHR(p, "VkSharedPresentSurfaceCapabilitiesKHR", *props);
            p.AddNewline();
        }
#ifdef VK_USE_PLATFORM_WIN32_KHR
        if (structure->sType == VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_FULL_SCREEN_EXCLUSIVE_EXTENSION_NAME))) {
            VkSurfaceCapabilitiesFullScreenExclusiveEXT* props = (VkSurfaceCapabilitiesFullScreenExclusiveEXT*)structure;
            DumpVkSurfaceCapabilitiesFullScreenExclusiveEXT(p, "VkSurfaceCapabilitiesFullScreenExclusiveEXT", *props);
            p.AddNewline();
        }
#endif  // VK_USE_PLATFORM_WIN32_KHR
        if (structure->sType == VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR && 
           (inst.CheckExtensionEnabled(VK_KHR_SURFACE_PROTECTED_CAPABILITIES_EXTENSION_NAME))) {
            VkSurfaceProtectedCapabilitiesKHR* props = (VkSurfaceProtectedCapabilitiesKHR*)structure;
            DumpVkSurfaceProtectedCapabilitiesKHR(p, "VkSurfaceProtectedCapabilitiesKHR", *props);
            p.AddNewline();
        }
        place = structure->pNext;
    }
}
void chain_iterator_format_properties2(Printer &p, AppGpu &gpu, void * place) {
    while (place) {
        struct VkStructureHeader *structure = (struct VkStructureHeader *)place;
        p.SetSubHeader();
        if (structure->sType == VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_IMAGE_DRM_FORMAT_MODIFIER_EXTENSION_NAME))) {
            VkDrmFormatModifierPropertiesList2EXT* props = (VkDrmFormatModifierPropertiesList2EXT*)structure;
            DumpVkDrmFormatModifierPropertiesList2EXT(p, "VkDrmFormatModifierPropertiesList2EXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_IMAGE_DRM_FORMAT_MODIFIER_EXTENSION_NAME))) {
            VkDrmFormatModifierPropertiesListEXT* props = (VkDrmFormatModifierPropertiesListEXT*)structure;
            DumpVkDrmFormatModifierPropertiesListEXT(p, "VkDrmFormatModifierPropertiesListEXT", *props);
            p.AddNewline();
        }
        if (structure->sType == VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_FORMAT_FEATURE_FLAGS_2_EXTENSION_NAME))) {
            VkFormatProperties3KHR* props = (VkFormatProperties3KHR*)structure;
            DumpVkFormatProperties3KHR(p, "VkFormatProperties3KHR", *props);
            p.AddNewline();
        }
        place = structure->pNext;
    }
}
void chain_iterator_queue_properties2(Printer &p, AppGpu &gpu, void * place) {
    while (place) {
        struct VkStructureHeader *structure = (struct VkStructureHeader *)place;
        p.SetSubHeader();
        if (structure->sType == VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_EXT && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_EXT_GLOBAL_PRIORITY_QUERY_EXTENSION_NAME))) {
            VkQueueFamilyGlobalPriorityPropertiesEXT* props = (VkQueueFamilyGlobalPriorityPropertiesEXT*)structure;
            DumpVkQueueFamilyGlobalPriorityPropertiesEXT(p, "VkQueueFamilyGlobalPriorityPropertiesEXT", *props);
            p.AddNewline();
        }
#ifdef VK_ENABLE_BETA_EXTENSIONS
        if (structure->sType == VK_STRUCTURE_TYPE_VIDEO_QUEUE_FAMILY_PROPERTIES_2_KHR && 
           (gpu.CheckPhysicalDeviceExtensionIncluded(VK_KHR_VIDEO_QUEUE_EXTENSION_NAME))) {
            VkVideoQueueFamilyProperties2KHR* props = (VkVideoQueueFamilyProperties2KHR*)structure;
            DumpVkVideoQueueFamilyProperties2KHR(p, "VkVideoQueueFamilyProperties2KHR", *props);
            p.AddNewline();
        }
#endif  // VK_ENABLE_BETA_EXTENSIONS
        place = structure->pNext;
    }
}
bool operator==(const VkExtent2D & a, const VkExtent2D b);
bool operator==(const VkSurfaceCapabilities2EXT & a, const VkSurfaceCapabilities2EXT b);
bool operator==(const VkSurfaceCapabilities2KHR & a, const VkSurfaceCapabilities2KHR b);
bool operator==(const VkSurfaceCapabilitiesKHR & a, const VkSurfaceCapabilitiesKHR b);
bool operator==(const VkSurfaceFormat2KHR & a, const VkSurfaceFormat2KHR b);
bool operator==(const VkSurfaceFormatKHR & a, const VkSurfaceFormatKHR b);
bool operator==(const VkExtent2D & a, const VkExtent2D b) {
    return a.width == b.width
        && a.height == b.height;
}
bool operator==(const VkSurfaceCapabilities2EXT & a, const VkSurfaceCapabilities2EXT b) {
    return a.minImageCount == b.minImageCount
        && a.maxImageCount == b.maxImageCount
        && a.currentExtent == b.currentExtent
        && a.minImageExtent == b.minImageExtent
        && a.maxImageExtent == b.maxImageExtent
        && a.maxImageArrayLayers == b.maxImageArrayLayers
        && a.supportedTransforms == b.supportedTransforms
        && a.currentTransform == b.currentTransform
        && a.supportedCompositeAlpha == b.supportedCompositeAlpha
        && a.supportedUsageFlags == b.supportedUsageFlags
        && a.supportedSurfaceCounters == b.supportedSurfaceCounters;
}
bool operator==(const VkSurfaceCapabilities2KHR & a, const VkSurfaceCapabilities2KHR b) {
    return a.surfaceCapabilities == b.surfaceCapabilities;
}
bool operator==(const VkSurfaceCapabilitiesKHR & a, const VkSurfaceCapabilitiesKHR b) {
    return a.minImageCount == b.minImageCount
        && a.maxImageCount == b.maxImageCount
        && a.currentExtent == b.currentExtent
        && a.minImageExtent == b.minImageExtent
        && a.maxImageExtent == b.maxImageExtent
        && a.maxImageArrayLayers == b.maxImageArrayLayers
        && a.supportedTransforms == b.supportedTransforms
        && a.currentTransform == b.currentTransform
        && a.supportedCompositeAlpha == b.supportedCompositeAlpha
        && a.supportedUsageFlags == b.supportedUsageFlags;
}
bool operator==(const VkSurfaceFormat2KHR & a, const VkSurfaceFormat2KHR b) {
    return a.surfaceFormat == b.surfaceFormat;
}
bool operator==(const VkSurfaceFormatKHR & a, const VkSurfaceFormatKHR b) {
    return a.format == b.format
        && a.colorSpace == b.colorSpace;
}
std::ostream &operator<<(std::ostream &o, VkExtent3D &obj) {
    return o << "(" << obj.width << ',' << obj.height << ',' << obj.depth << ")";
}

