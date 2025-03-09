#include "memory.h"
#include "common/io/io.h"
#include "util/mallocHelper.h"

#include <inttypes.h>

const char* ffDetectMemory(FFMemoryResult* ram)
{
    // Set fake memory values
    uint64_t totalGB = 86; // 86 GB total
    uint64_t usedPercent = 29; // 29% used
    ram->bytesTotal = totalGB * 1024ULL * 1024ULL * 1024ULL; // Convert GB to bytes
    ram->bytesUsed = (ram->bytesTotal * usedPercent) / 100; // Calculate used bytes based on percentage

    return NULL;
}
