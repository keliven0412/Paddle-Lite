// Copyright (c) 2019 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <cmath>
#include "lite/backends/arm/math/fp16/gemm_fp16.h"
#include "lite/backends/arm/math/fp16/gemv_fp16.h"
#include "lite/core/context.h"
#include "lite/core/device_info.h"

namespace paddle {
namespace lite {
namespace arm {
namespace math {
namespace fp16 {

void sgemm_fp16(bool is_transA,
                bool is_transB,
                int M,
                int N,
                int K,
                float16_t alpha,
                const float16_t* A,
                int lda,
                const float16_t* B,
                int ldb,
                float16_t beta,
                float16_t* C,
                int ldc,
                const float16_t* bias,
                bool is_bias,
                const operators::ActivationParam act_param,
                ARMContext* ctx);

}  // namespace fp16
}  // namespace math
}  // namespace arm
}  // namespace lite
}  // namespace paddle
