// Copyright (c) 2020-2024 The Khronos Group Inc.
// 
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and/or associated documentation files (the
// "Materials"), to deal in the Materials without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Materials, and to
// permit persons to whom the Materials are furnished to do so, subject to
// the following conditions:
// 
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Materials.
// 
// MODIFICATIONS TO THIS FILE MAY MEAN IT NO LONGER ACCURATELY REFLECTS
// KHRONOS STANDARDS. THE UNMODIFIED, NORMATIVE VERSIONS OF KHRONOS
// SPECIFICATIONS AND HEADER INFORMATION ARE LOCATED AT
//    https://www.khronos.org/registry/
// 
// THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS.
// 

#ifndef SPIRV_UNIFIED1_NonSemanticVkspReflection_H_
#define SPIRV_UNIFIED1_NonSemanticVkspReflection_H_

#ifdef __cplusplus
extern "C" {
#endif

enum {
    NonSemanticVkspReflectionRevision = 4,
    NonSemanticVkspReflectionRevision_BitWidthPadding = 0x7fffffff
};

enum NonSemanticVkspReflectionInstructions {
    NonSemanticVkspReflectionConfiguration = 1,
    NonSemanticVkspReflectionStartCounter = 2,
    NonSemanticVkspReflectionStopCounter = 3,
    NonSemanticVkspReflectionPushConstants = 4,
    NonSemanticVkspReflectionSpecializationMapEntry = 5,
    NonSemanticVkspReflectionDescriptorSetBuffer = 6,
    NonSemanticVkspReflectionDescriptorSetImage = 7,
    NonSemanticVkspReflectionDescriptorSetSampler = 8,
    NonSemanticVkspReflectionInstructionsMax = 0x7fffffff
};


#ifdef __cplusplus
}
#endif

#endif // SPIRV_UNIFIED1_NonSemanticVkspReflection_H_
