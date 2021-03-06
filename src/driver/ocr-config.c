/* Copyright (c) 2012, Rice University

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

1.  Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
2.  Redistributions in binary form must reproduce the above
     copyright notice, this list of conditions and the following
     disclaimer in the documentation and/or other materials provided
     with the distribution.
3.  Neither the name of Intel Corporation
     nor the names of its contributors may be used to endorse or
     promote products derived from this software without specific
     prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#include "ocr-config.h"

ocr_executor_kind ocr_executor_default_kind = OCR_EXECUTOR_HC;
ocr_worker_kind ocr_worker_default_kind = OCR_WORKER_HC;
ocr_scheduler_kind ocr_scheduler_default_kind = OCR_SCHEDULER_WST;
ocr_policy_kind ocr_policy_default_kind = OCR_POLICY_HC;
ocr_workpile_kind ocr_workpile_default_kind = OCR_DEQUE;
ocrAllocatorKind ocrAllocatorDefaultKind = OCR_ALLOCATOR_TLSF;
ocrLowMemoryKind ocrLowMemoryDefaultKind = OCR_LOWMEMORY_MALLOC;
ocrDataBlockKind ocrDataBlockDefaultKind = OCR_DATABLOCK_REGULAR;
ocrLockKind ocrLockDefaultKind = OCR_LOCK_X86;
ocrGuidProviderKind ocrGuidProviderDefaultKind = OCR_GUIDPROVIDER_PTR;

u32 ocr_config_default_nb_hardware_threads = 8;
