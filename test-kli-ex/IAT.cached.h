#pragma once
#include "../kli.hpp"

KLI_CACHED_DEF(ExAllocatePoolWithTag);
KLI_CACHED_DEF(ExFreePoolWithTag);

__forceinline void
IATInitCached()
{
    KLI_CACHED_SET(ExAllocatePoolWithTag);
    KLI_CACHED_SET(ExFreePoolWithTag);
}
