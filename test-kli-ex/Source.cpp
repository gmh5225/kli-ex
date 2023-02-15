#include "IAT.cached.h"

#define dprintf(...) DbgPrintEx(DPFLTR_IHVDRIVER_ID, DPFLTR_ERROR_LEVEL, __VA_ARGS__)

void
DriverUnload(PDRIVER_OBJECT DriverObject)
{
    UNREFERENCED_PARAMETER(DriverObject);
    dprintf("exit world\n");
}

DECLSPEC_NOINLINE
void
test_once()
{
    auto pExAllocatePoolWithTag = KLI_CALL(ExAllocatePoolWithTag, NonPagedPool, PAGE_SIZE, 'enoN');
    if (pExAllocatePoolWithTag)
    {
        dprintf("test_once:ExAllocatePoolWithTag=%p\n", pExAllocatePoolWithTag);
        KLI_CALL(ExFreePoolWithTag, pExAllocatePoolWithTag, 'enoN');
    }
}

DECLSPEC_NOINLINE
void
test_cached_init()
{
    // Make cache
    IATInitCached();
}

DECLSPEC_NOINLINE
void
test_cached()
{
    auto pAddr = KLI_CACHED_CALL(ExAllocatePoolWithTag, NonPagedPool, PAGE_SIZE, 'x1x1');
    if (pAddr)
    {
        dprintf("test_cached:pAddr=%p\n", pAddr);
        KLI_CACHED_CALL(ExFreePoolWithTag, pAddr, 'x1x1');
    }
}

DECLSPEC_NOINLINE
void
test_cached2()
{
    auto pAddr = KLI_CACHED_CALL(ExAllocatePoolWithTag, NonPagedPool, PAGE_SIZE, 'xxxx');
    if (pAddr)
    {
        dprintf("test_cached2:pAddr=%p\n", pAddr);
        KLI_CACHED_CALL(ExFreePoolWithTag, pAddr, 'xxxx');
    }
}

NTSTATUS
DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
    dprintf("new world\n");
    DriverObject->DriverUnload = DriverUnload;

    test_once();

    test_cached_init();
    test_cached();
    test_cached2();

    return STATUS_SUCCESS;
}
