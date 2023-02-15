#pragma once
#include <fltKernel.h>
#include <intrin.h>

namespace clonestd {
// STRUCT TEMPLATE remove_reference
template <class _Ty>
struct remove_reference
{
    using type = _Ty;
};

template <class _Ty>
struct remove_reference<_Ty &>
{
    using type = _Ty;
};

template <class _Ty>
struct remove_reference<_Ty &&>
{
    using type = _Ty;
};

template <class _Ty>
using remove_reference_t = typename remove_reference<_Ty>::type;

// STRUCT TEMPLATE remove_const
template <class _Ty>
struct remove_const
{ // remove top-level const qualifier
    using type = _Ty;
};

template <class _Ty>
struct remove_const<const _Ty>
{
    using type = _Ty;
};

template <class _Ty>
using remove_const_t = typename remove_const<_Ty>::type;
} // namespace clonestd

namespace kli {
constexpr auto Time = __TIME__;
constexpr auto Seed = static_cast<unsigned long long>(Time[7]) + static_cast<unsigned long long>(Time[6]) * 10 +
                      static_cast<unsigned long long>(Time[4]) * 60 + static_cast<unsigned long long>(Time[3]) * 600 +
                      static_cast<unsigned long long>(Time[1]) * 3600 +
                      static_cast<unsigned long long>(Time[0]) * 36000;
constexpr auto Seed2 = static_cast<unsigned long long>(Time[7]) + static_cast<unsigned long long>(Time[6]) * 10 +
                       static_cast<unsigned long long>(Time[4]) * 60;
constexpr auto Seed3 = static_cast<unsigned long long>(Time[7]) + static_cast<unsigned long long>(Time[5]) * 10 +
                       static_cast<unsigned long long>(Time[2]) * 60;
constexpr auto Seed4 = static_cast<unsigned long long>(Time[7]) + static_cast<unsigned long long>(Time[3]) * 10 +
                       static_cast<unsigned long long>(Time[1]) * 60;

namespace cache {
constexpr unsigned long long base_init = Seed3;
inline unsigned long long base = base_init;
} // namespace cache

namespace hash {
namespace detail {
template <typename Size>
struct fnv_constants;

template <>
struct fnv_constants<unsigned int>
{
    constexpr static unsigned int default_offset_basis = 0x811C9DC5UL;
    constexpr static unsigned int prime = 0x01000193UL;
};

template <>
struct fnv_constants<unsigned long long>
{
    constexpr static unsigned long long default_offset_basis = 0xCBF29CE484222325ULL;
    constexpr static unsigned long long prime = 0x100000001B3ULL;
};

} // namespace detail

// Dumb hack to force a constexpr value to be evaluated in compiletime
template <typename Type, Type Value>
struct force_cx
{
    constexpr static auto value = Value;
};

template <typename Type, typename Char>
__forceinline constexpr Type
hash_fnv1a(const Char *str)
{
    Type val = detail::fnv_constants<Type>::default_offset_basis;

    // random
    val += Seed;

    for (; *str != static_cast<Char>(0); ++str)
    {
        Char c = *str;
        val ^= static_cast<Type>(c);
        val *= static_cast<Type>(detail::fnv_constants<Type>::prime);
    }

    return val;
}

#define KLI_HASH_RTS(str) \
    (::kli::hash:: \
         hash_fnv1a<unsigned long long, clonestd::remove_const_t<clonestd::remove_reference_t<decltype(*(str))>>>( \
             (str)))

#define KLI_HASH_STR(str) \
    (::kli::hash::force_cx< \
        unsigned long long, \
        ::kli::hash:: \
            hash_fnv1a<unsigned long long, clonestd::remove_const_t<clonestd::remove_reference_t<decltype(*(str))>>>( \
                (str))>::value)

} // namespace hash

namespace crypto {
typedef struct s_rc4_state
{
    int x, y;
    unsigned char m[256];
} rc4_state;

__forceinline void
rc4_init_key(rc4_state *s, unsigned char *key, int length)
{
    int i, j, k, a;

    unsigned char *m;

    s->x = 0;
    s->y = 0;
    m = s->m;

    for (i = 0; i < 256; i++)
    {
        m[i] = (unsigned char)i;
    }

    j = k = 0;

    for (i = 0; i < 256; i++)
    {
        a = m[i];
        j = (unsigned char)(j + a + key[k]);
        m[i] = m[j];
        m[j] = (unsigned char)a;
        if (++k >= length)
            k = 0;
    }
}

__forceinline void
rc4_crypt(rc4_state *s, unsigned char *data, int length)
{
    int i, x, y, a, b;

    unsigned char *m;

    x = s->x;
    y = s->y;
    m = s->m;

    for (i = 0; i < length; i++)
    {
        x = (unsigned char)(x + 1);
        a = m[x];
        y = (unsigned char)(y + a);
        m[x] = b = m[y];
        m[y] = (unsigned char)a;
        data[i] ^= m[(unsigned char)(a + b)];
    }

    s->x = x;
    s->y = y;
}

__forceinline void
rc4_crypt_all_in_once(unsigned char *key_buff, unsigned long key_len, unsigned char *enc_buff, unsigned long enc_len)
{
    rc4_state state;
    rc4_init_key(&state, key_buff, key_len);
    rc4_crypt(&state, enc_buff, enc_len);
}

template <typename Type>
__forceinline Type
RC4Base(Type Ptr)
{
    unsigned long long rc4_key = Seed2;
    unsigned long long rc4_data = Seed4;
    crypto::rc4_crypt_all_in_once(
        (unsigned char *)(&rc4_key), sizeof(rc4_key), (unsigned char *)(&rc4_data), sizeof(rc4_data));
    return (Type)((unsigned long long)Ptr ^ rc4_data);
}

template <typename Type>
__forceinline Type
RC4Func(Type Ptr)
{
    unsigned long long rc4_key = Seed4;
    unsigned long long rc4_data = Seed2;
    crypto::rc4_crypt_all_in_once(
        (unsigned char *)(&rc4_key), sizeof(rc4_key), (unsigned char *)(&rc4_data), sizeof(rc4_data));
    return (Type)((unsigned long long)Ptr ^ rc4_data);
}

} // namespace crypto

namespace detail {
typedef struct _IMAGE_DOS_HEADER
{                              // DOS .EXE header
    unsigned short e_magic;    // Magic number
    unsigned short e_cblp;     // Bytes on last page of file
    unsigned short e_cp;       // Pages in file
    unsigned short e_crlc;     // Relocations
    unsigned short e_cparhdr;  // GetSize of header in paragraphs
    unsigned short e_minalloc; // Minimum extra paragraphs needed
    unsigned short e_maxalloc; // Maximum extra paragraphs needed
    unsigned short e_ss;       // Initial (relative) SS value
    unsigned short e_sp;       // Initial SP value
    unsigned short e_csum;     // Checksum
    unsigned short e_ip;       // Initial IP value
    unsigned short e_cs;       // Initial (relative) CS value
    unsigned short e_lfarlc;   // File address of relocation table
    unsigned short e_ovno;     // Overlay number
    unsigned short e_res[4];   // Reserved words
    unsigned short e_oemid;    // OEM identifier (for e_oeminfo)
    unsigned short e_oeminfo;  // OEM information; e_oemid specific
    unsigned short e_res2[10]; // Reserved words
    int e_lfanew;              // File address of new exe header
} IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

typedef struct _IMAGE_FILE_HEADER
{
    unsigned short Machine;
    unsigned short NumberOfSections;
    unsigned int TimeDateStamp;
    unsigned int PointerToSymbolTable;
    unsigned int NumberOfSymbols;
    unsigned short SizeOfOptionalHeader;
    unsigned short Characteristics;
} IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

typedef struct _IMAGE_DATA_DIRECTORY
{
    unsigned int VirtualAddress;
    unsigned int Size;
} IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

typedef struct _IMAGE_OPTIONAL_HEADER64
{
    unsigned short Magic;
    unsigned char MajorLinkerVersion;
    unsigned char MinorLinkerVersion;
    unsigned int SizeOfCode;
    unsigned int SizeOfInitializedData;
    unsigned int SizeOfUninitializedData;
    unsigned int AddressOfEntryPoint;
    unsigned int BaseOfCode;
    unsigned long long ImageBase;
    unsigned int SectionAlignment;
    unsigned int FileAlignment;
    unsigned short MajorOperatingSystemVersion;
    unsigned short MinorOperatingSystemVersion;
    unsigned short MajorImageVersion;
    unsigned short MinorImageVersion;
    unsigned short MajorSubsystemVersion;
    unsigned short MinorSubsystemVersion;
    unsigned int Win32VersionValue;
    unsigned int SizeOfImage;
    unsigned int SizeOfHeaders;
    unsigned int CheckSum;
    unsigned short Subsystem;
    unsigned short DllCharacteristics;
    unsigned long long SizeOfStackReserve;
    unsigned long long SizeOfStackCommit;
    unsigned long long SizeOfHeapReserve;
    unsigned long long SizeOfHeapCommit;
    unsigned int LoaderFlags;
    unsigned int NumberOfRvaAndSizes;
    IMAGE_DATA_DIRECTORY DataDirectory[16];
} IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

typedef struct _IMAGE_NT_HEADERS64
{
    unsigned int Signature;
    IMAGE_FILE_HEADER FileHeader;
    IMAGE_OPTIONAL_HEADER64 OptionalHeader;
} IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

typedef struct _IMAGE_EXPORT_DIRECTORY
{
    unsigned int Characteristics;
    unsigned int TimeDateStamp;
    unsigned short MajorVersion;
    unsigned short MinorVersion;
    unsigned int Name;
    unsigned int Base;
    unsigned int NumberOfFunctions;
    unsigned int NumberOfNames;
    unsigned int AddressOfFunctions;    // RVA from base of image
    unsigned int AddressOfNames;        // RVA from base of image
    unsigned int AddressOfNameOrdinals; // RVA from base of image
} IMAGE_EXPORT_DIRECTORY, *PIMAGE_EXPORT_DIRECTORY;

__declspec(naked) __forceinline unsigned long long get_kernel_base()
{
    _asm {
        mov     rax, qword ptr gs:[18h]
        mov     rcx, [rax+38h]
        mov     rax, 0FFFFFFFFFFFFF000h
        and     rax, [rcx+4h]
        jmp      while_begin
        search_begin:
        add     rax, 0FFFFFFFFFFFFF000h
        while_begin: 
        xor     ecx, ecx
        jmp     search_cmp
        search_next: 
        add     rcx, 1
        cmp     rcx, 0FF9h
        jz      search_begin
        search_cmp:  
        cmp     byte ptr[rax+rcx], 48h
        jnz     search_next
        cmp     byte ptr[rax+rcx+1], 8Dh
        jnz     search_next
        cmp     byte ptr[rax+rcx+2], 1Dh
        jnz     search_next
        cmp     byte ptr[rax+rcx+6], 0FFh
        jnz     search_next
        mov     r8d,[rax+rcx+3]
        lea     edx,[rcx+r8]
        add     edx, eax
        add     edx, 7
        test    edx, 0FFFh
        jnz     search_next
        mov     rdx, 0FFFFFFFF00000000h
        and     rdx, rax
        add     r8d, eax
        lea     eax,[rcx+r8]
        add     eax, 7
        or      rax, rdx
        ret
    }
}

} // namespace detail

__forceinline unsigned long long
find_kernel_export(unsigned long long export_hash)
{
    if (cache::base == cache::base_init)
    {
        cache::base = crypto::RC4Base(detail::get_kernel_base());
    }

    const auto dos_header = (detail::PIMAGE_DOS_HEADER)crypto::RC4Base(cache::base);
    const auto nt_headers = (detail::PIMAGE_NT_HEADERS64)(crypto::RC4Base(cache::base) + dos_header->e_lfanew);
    const auto export_directory = (detail::PIMAGE_EXPORT_DIRECTORY)(
        crypto::RC4Base(cache::base) + nt_headers->OptionalHeader.DataDirectory[0].VirtualAddress);

    const auto address_of_functions =
        (unsigned int *)(crypto::RC4Base(cache::base) + export_directory->AddressOfFunctions);
    const auto address_of_names = (unsigned int *)(crypto::RC4Base(cache::base) + export_directory->AddressOfNames);
    const auto address_of_name_ordinals =
        (unsigned short *)(crypto::RC4Base(cache::base) + export_directory->AddressOfNameOrdinals);

    for (unsigned int i = 0; i < export_directory->NumberOfNames; ++i)
    {
        const auto export_entry_name = (char *)(crypto::RC4Base(cache::base) + address_of_names[i]);
        const auto export_entry_hash = KLI_HASH_RTS(export_entry_name);

        // address_of_functions is indexed through an ordinal
        // address_of_name_ordinals gets the ordinal through our own index - i.
        if (export_entry_hash == export_hash)
        {
            auto func = crypto::RC4Base(cache::base) + address_of_functions[address_of_name_ordinals[i]];
            return crypto::RC4Func(func);
        }
    }

    return 0ULL;
}

// once
#define KLI_CALL(name, ...) \
    ((decltype(&name))(kli::crypto::RC4Func(kli::find_kernel_export(KLI_HASH_STR(#name)))))(__VA_ARGS__)

// cached
#define KLI_CACHED_DEF(name) decltype(&name) KLI##name = nullptr
#define KLI_CACHED_SET(name) KLI##name = (decltype(&name))(kli::find_kernel_export(KLI_HASH_STR(#name)))
#define KLI_CACHED_CALL(name, ...) ((decltype(&name))(kli::crypto::RC4Func(KLI##name)))(__VA_ARGS__)

} // namespace kli
