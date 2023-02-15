# kli-ex
Expanding Kernel Lazy Importer


## Features
- Hiding Global Variables
- Using random seeds

## Example
```C++
    auto pExAllocatePoolWithTag = KLI_CALL(ExAllocatePoolWithTag, NonPagedPool, PAGE_SIZE, 'enoN');
    if (pExAllocatePoolWithTag)
    {
        dprintf("test_once:ExAllocatePoolWithTag=%p\n", pExAllocatePoolWithTag);
        KLI_CALL(ExFreePoolWithTag, pExAllocatePoolWithTag, 'enoN');
    }
```

## Output
```C++
void test_once(void)
{
  __int64 v0; // rax
  unsigned __int64 kernel_base; // rax
  __m128i si128; // xmm0
  __int64 v3; // rcx
  __m128i v4; // xmm1
  __int64 v5; // rdx
  unsigned __int8 v6; // r8
  int v7; // r9d
  char v8; // r10
  int v9; // r11d
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int8 v12; // r8
  char v13; // r9
  char v14; // r11
  __m128i v15; // xmm0
  __int64 v16; // rcx
  __m128i v17; // xmm6
  __int64 v18; // rdx
  unsigned __int8 v19; // r8
  int v20; // r9d
  char v21; // r10
  int v22; // r11d
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int8 v25; // r8
  char v26; // r9
  char v27; // r11
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __int64 i; // rcx
  __int64 v31; // r8
  unsigned __int8 v32; // r9
  int v33; // r10d
  char v34; // r11
  int v35; // esi
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned __int8 v38; // r9
  char v39; // r10
  char v40; // bl
  __int64 v41; // rcx
  __int64 v42; // r8
  __m128i v43; // xmm0
  __int64 j; // rdx
  __int64 v45; // rcx
  __int64 v46; // r9
  unsigned __int8 v47; // r10
  int v48; // r11d
  char v49; // bl
  int v50; // esi
  __int64 v51; // rdx
  __int64 v52; // r9
  unsigned __int8 v53; // r10
  char v54; // r11
  char v55; // bl
  __int64 v56; // rdx
  __int64 v57; // r8
  __m128i v58; // xmm0
  __int64 k; // rcx
  __int64 v60; // rdx
  __int64 v61; // r9
  unsigned __int8 v62; // r10
  int v63; // r11d
  char v64; // bl
  int v65; // esi
  __int64 v66; // rcx
  __int64 v67; // r9
  unsigned __int8 v68; // r10
  char v69; // r11
  char v70; // bl
  __int64 v71; // rcx
  __int64 v72; // r9
  __m128i v73; // xmm0
  __int64 m; // r10
  __int64 v75; // rcx
  __int64 v76; // r11
  unsigned __int8 v77; // si
  int v78; // edi
  char v79; // bl
  int v80; // r14d
  __int64 v81; // r10
  __int64 v82; // r11
  unsigned __int8 v83; // si
  char v84; // bl
  char v85; // r14
  __int64 v86; // r10
  __int64 v87; // r11
  __m128i v88; // xmm0
  __int64 n; // rsi
  __int64 v90; // r10
  __int64 v91; // rsi
  unsigned __int8 v92; // di
  int v93; // ebx
  char v94; // r14
  int v95; // r15d
  __int64 v96; // rcx
  __int64 v97; // r9
  __int64 v98; // r11
  unsigned __int8 v99; // si
  char v100; // bl
  char v101; // r14
  __int64 v102; // r11
  __int64 v103; // r9
  __m128i v104; // xmm0
  __int64 v105; // r8
  __int64 v106; // r14
  __m128i v107; // xmm1
  unsigned __int8 v108; // r14
  __int64 v109; // r15
  int v110; // r12d
  char v111; // r13
  int v112; // edi
  __int64 v113; // r14
  __int64 v114; // r15
  unsigned __int8 v115; // r12
  char v116; // dl
  char v117; // r13
  __int64 v118; // r12
  char v119; // r15
  char *v120; // r14
  __int64 v121; // r12
  __m128i v122; // xmm0
  __int64 ii; // r9
  __int64 v124; // r10
  unsigned __int8 v125; // r11
  int v126; // esi
  char v127; // dl
  int v128; // edi
  __int64 v129; // r9
  __int64 v130; // r10
  unsigned __int8 v131; // r11
  char v132; // dl
  char v133; // di
  __int64 v134; // r9
  __int64 v135; // rcx
  __m128i v136; // xmm0
  __int64 jj; // rdx
  __int64 v138; // r8
  unsigned __int8 v139; // r10
  int v140; // r11d
  char v141; // si
  int v142; // edi
  __int64 v143; // rdx
  __int64 v144; // r8
  unsigned __int8 v145; // r10
  char v146; // r11
  char v147; // di
  __m128i v148; // xmm0
  __int64 kk; // rax
  __int64 v150; // rcx
  unsigned __int8 v151; // dl
  int v152; // r8d
  char v153; // r10
  int v154; // r11d
  __int64 v155; // rax
  __int64 v156; // rcx
  unsigned __int8 v157; // dl
  char v158; // r8
  char v159; // r11
  unsigned __int16 *v160; // rax
  __int64 v161; // rax
  unsigned __int64 v162; // rax
  __m128i v163; // xmm0
  __int64 mm; // rcx
  __int64 v165; // rdx
  unsigned __int8 v166; // r8
  int v167; // r9d
  char v168; // r10
  int v169; // r11d
  __int64 v170; // rcx
  __int64 v171; // rdx
  unsigned __int8 v172; // r8
  char v173; // r9
  char v174; // r11
  __m128i v175; // xmm0
  __int64 nn; // rcx
  __int64 v177; // rdx
  unsigned __int8 v178; // r8
  int v179; // r9d
  char v180; // r10
  int v181; // r11d
  __int64 v182; // rcx
  __int64 v183; // rdx
  unsigned __int8 v184; // r8
  char v185; // r9
  char v186; // r11
  __int64 v187; // rdx
  __m128i v188; // xmm0
  __int64 i1; // rcx
  __int64 v190; // r8
  unsigned __int8 v191; // r9
  int v192; // r10d
  char v193; // r11
  int v194; // edi
  __int64 v195; // rcx
  __int64 v196; // r8
  unsigned __int8 v197; // r9
  char v198; // r10
  char v199; // di
  __int64 v200; // rcx
  __int64 v201; // r8
  __m128i v202; // xmm0
  __int64 i2; // rdx
  __int64 v204; // rcx
  __int64 v205; // r9
  unsigned __int8 v206; // r10
  int v207; // r11d
  char v208; // di
  int v209; // r14d
  __int64 v210; // rdx
  __int64 v211; // r9
  unsigned __int8 v212; // r10
  char v213; // r11
  char v214; // r14
  __int64 v215; // rdx
  __int64 v216; // r9
  __m128i v217; // xmm0
  __int64 i3; // rcx
  __int64 v219; // rdx
  __int64 v220; // r8
  unsigned __int8 v221; // r10
  int v222; // r11d
  char v223; // di
  int v224; // r14d
  __int64 v225; // rcx
  __int64 v226; // r8
  unsigned __int8 v227; // r10
  char v228; // r11
  char v229; // r14
  __int64 v230; // rcx
  __int64 v231; // r8
  __m128i v232; // xmm0
  __int64 i4; // r10
  __int64 v234; // rcx
  __int64 v235; // r11
  unsigned __int8 v236; // r14
  int v237; // r15d
  char v238; // di
  int v239; // r12d
  __int64 v240; // r10
  __int64 v241; // r11
  unsigned __int8 v242; // r14
  char v243; // di
  char v244; // r12
  __int64 v245; // r10
  __int64 v246; // r11
  __m128i v247; // xmm0
  __int64 i5; // r14
  __int64 v249; // r10
  __int64 v250; // r14
  unsigned __int8 v251; // r15
  int v252; // r12d
  char v253; // di
  int v254; // r13d
  __int64 v255; // rcx
  __int64 v256; // r8
  __int64 v257; // r11
  unsigned __int8 v258; // r14
  char v259; // si
  char v260; // r15
  __int64 v261; // r11
  __int64 v262; // r8
  __m128i v263; // xmm0
  __int64 v264; // r9
  __int64 v265; // r15
  __m128i v266; // xmm1
  unsigned __int8 v267; // r15
  __int64 v268; // r12
  int v269; // r13d
  char v270; // si
  int v271; // edi
  __int64 v272; // r15
  __int64 v273; // r12
  unsigned __int8 v274; // r13
  char v275; // dl
  char v276; // di
  __int64 v277; // r13
  char v278; // r12
  char *v279; // r15
  __int64 v280; // r13
  __m128i v281; // xmm0
  __int64 i6; // r8
  __int64 v283; // r10
  unsigned __int8 v284; // r11
  int v285; // edi
  char v286; // dl
  int v287; // esi
  __int64 v288; // r8
  __int64 v289; // r10
  unsigned __int8 v290; // r11
  char v291; // dl
  char v292; // bl
  __int64 v293; // r8
  __int64 v294; // rcx
  __m128i v295; // xmm0
  __int64 i7; // rdx
  __int64 v297; // r9
  unsigned __int8 v298; // r10
  int v299; // r11d
  char v300; // bl
  int v301; // esi
  __int64 v302; // rdx
  __int64 v303; // r9
  unsigned __int8 v304; // r10
  char v305; // r11
  char v306; // bl
  __m128i v307; // xmm0
  __int64 i8; // rax
  __int64 v309; // rcx
  unsigned __int8 v310; // dl
  int v311; // r9d
  char v312; // r10
  int v313; // r11d
  __int64 v314; // rax
  __int64 v315; // rcx
  unsigned __int8 v316; // dl
  char v317; // r9
  char v318; // r11
  __int64 v319; // [rsp+28h] [rbp-58h]
  __int64 v320[34]; // [rsp+30h] [rbp-50h]
  unsigned __int16 *v321; // [rsp+140h] [rbp+C0h]
  __int64 v322; // [rsp+148h] [rbp+C8h]

  v0 = kli::cache::base;
  if ( kli::cache::base == 4116 )
  {
    kernel_base = kli::detail::get_kernel_base();
    v320[0] = 3786i64;
    v319 = 3596i64;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v3 = 1i64;
    v4 = _mm_load_si128((const __m128i *)&_xmm);
    do
    {
      *(__m128i *)&v320[v3 + 1] = si128;
      si128 = _mm_add_epi8(si128, v4);
      v3 += 2i64;
    }
    while ( v3 != 33 );
    v5 = 8i64;
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *((_BYTE *)&v320[1] + v5);
      v9 = v7;
      v6 += *((_BYTE *)v320 + v7) + v8;
      *((_BYTE *)&v320[1] + v5) = *((_BYTE *)&v320[2] + v6);
      *((_BYTE *)&v320[2] + v6) = v8;
      ++v7;
      if ( v9 >= 7 )
        v7 = 0;
      ++v5;
    }
    while ( v5 != 264 );
    v10 = 0i64;
    LOBYTE(v11) = 0;
    v12 = 0;
    do
    {
      v11 = (unsigned __int8)(v11 + 1);
      v13 = *((_BYTE *)&v320[2] + v11);
      v12 += v13;
      v14 = *((_BYTE *)&v320[2] + v12);
      *((_BYTE *)&v320[2] + v11) = v14;
      *((_BYTE *)&v320[2] + v12) = v13;
      *((_BYTE *)&v320[-1] + v10++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v13 + v14));
    }
    while ( v10 != 8 );
    v0 = v319 ^ kernel_base;
    kli::cache::base = v0;
  }
  v320[0] = 3786i64;
  v319 = 3596i64;
  v15 = _mm_load_si128((const __m128i *)&_xmm);
  v16 = 1i64;
  v17 = _mm_load_si128((const __m128i *)&_xmm);
  do
  {
    *(__m128i *)&v320[v16 + 1] = v15;
    v15 = _mm_add_epi8(v15, v17);
    v16 += 2i64;
  }
  while ( v16 != 33 );
  v18 = 8i64;
  v19 = 0;
  v20 = 0;
  do
  {
    v21 = *((_BYTE *)&v320[1] + v18);
    v22 = v20;
    v19 += *((_BYTE *)v320 + v20) + v21;
    *((_BYTE *)&v320[1] + v18) = *((_BYTE *)&v320[2] + v19);
    *((_BYTE *)&v320[2] + v19) = v21;
    ++v20;
    if ( v22 >= 7 )
      v20 = 0;
    ++v18;
  }
  while ( v18 != 264 );
  v23 = 0i64;
  LOBYTE(v24) = 0;
  v25 = 0;
  do
  {
    v24 = (unsigned __int8)(v24 + 1);
    v26 = *((_BYTE *)&v320[2] + v24);
    v25 += v26;
    v27 = *((_BYTE *)&v320[2] + v25);
    *((_BYTE *)&v320[2] + v24) = v27;
    *((_BYTE *)&v320[2] + v25) = v26;
    *((_BYTE *)&v320[-1] + v23++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v26 + v27));
  }
  while ( v23 != 8 );
  v28 = v319;
  v320[0] = 3786i64;
  v319 = 3596i64;
  v29 = _mm_load_si128((const __m128i *)&_xmm);
  for ( i = 1i64; i != 33; i += 2i64 )
  {
    *(__m128i *)&v320[i + 1] = v29;
    v29 = _mm_add_epi8(v29, v17);
  }
  v31 = 8i64;
  v32 = 0;
  v33 = 0;
  do
  {
    v34 = *((_BYTE *)&v320[1] + v31);
    v35 = v33;
    v32 += *((_BYTE *)v320 + v33) + v34;
    *((_BYTE *)&v320[1] + v31) = *((_BYTE *)&v320[2] + v32);
    *((_BYTE *)&v320[2] + v32) = v34;
    ++v33;
    if ( v35 >= 7 )
      v33 = 0;
    ++v31;
  }
  while ( v31 != 264 );
  v36 = 0i64;
  LOBYTE(v37) = 0;
  v38 = 0;
  do
  {
    v37 = (unsigned __int8)(v37 + 1);
    v39 = *((_BYTE *)&v320[2] + v37);
    v38 += v39;
    v40 = *((_BYTE *)&v320[2] + v38);
    *((_BYTE *)&v320[2] + v37) = v40;
    *((_BYTE *)&v320[2] + v38) = v39;
    *((_BYTE *)&v320[-1] + v36++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v39 + v40));
  }
  while ( v36 != 8 );
  v41 = v319;
  v42 = *(int *)((v0 ^ v28) + 0x3C);
  v320[0] = 3786i64;
  v319 = 3596i64;
  v43 = _mm_load_si128((const __m128i *)&_xmm);
  for ( j = 1i64; j != 33; j += 2i64 )
  {
    *(__m128i *)&v320[j + 1] = v43;
    v43 = _mm_add_epi8(v43, v17);
  }
  v45 = v0 ^ v41;
  v46 = 8i64;
  v47 = 0;
  v48 = 0;
  do
  {
    v49 = *((_BYTE *)&v320[1] + v46);
    v50 = v48;
    v47 += *((_BYTE *)v320 + v48) + v49;
    *((_BYTE *)&v320[1] + v46) = *((_BYTE *)&v320[2] + v47);
    *((_BYTE *)&v320[2] + v47) = v49;
    ++v48;
    if ( v50 >= 7 )
      v48 = 0;
    ++v46;
  }
  while ( v46 != 264 );
  v51 = 0i64;
  LOBYTE(v52) = 0;
  v53 = 0;
  do
  {
    v52 = (unsigned __int8)(v52 + 1);
    v54 = *((_BYTE *)&v320[2] + v52);
    v53 += v54;
    v55 = *((_BYTE *)&v320[2] + v53);
    *((_BYTE *)&v320[2] + v52) = v55;
    *((_BYTE *)&v320[2] + v53) = v54;
    *((_BYTE *)&v320[-1] + v51++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v54 + v55));
  }
  while ( v51 != 8 );
  v56 = v319;
  v57 = *(unsigned int *)(v45 + v42 + 136);
  v320[0] = 3786i64;
  v319 = 3596i64;
  v58 = _mm_load_si128((const __m128i *)&_xmm);
  for ( k = 1i64; k != 33; k += 2i64 )
  {
    *(__m128i *)&v320[k + 1] = v58;
    v58 = _mm_add_epi8(v58, v17);
  }
  v60 = v0 ^ v56;
  v61 = 8i64;
  v62 = 0;
  v63 = 0;
  do
  {
    v64 = *((_BYTE *)&v320[1] + v61);
    v65 = v63;
    v62 += *((_BYTE *)v320 + v63) + v64;
    *((_BYTE *)&v320[1] + v61) = *((_BYTE *)&v320[2] + v62);
    *((_BYTE *)&v320[2] + v62) = v64;
    ++v63;
    if ( v65 >= 7 )
      v63 = 0;
    ++v61;
  }
  while ( v61 != 264 );
  v66 = 0i64;
  LOBYTE(v67) = 0;
  v68 = 0;
  do
  {
    v67 = (unsigned __int8)(v67 + 1);
    v69 = *((_BYTE *)&v320[2] + v67);
    v68 += v69;
    v70 = *((_BYTE *)&v320[2] + v68);
    *((_BYTE *)&v320[2] + v67) = v70;
    *((_BYTE *)&v320[2] + v68) = v69;
    *((_BYTE *)&v320[-1] + v66++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v69 + v70));
  }
  while ( v66 != 8 );
  v71 = v319;
  v72 = *(unsigned int *)(v60 + v57 + 28);
  v320[0] = 3786i64;
  v319 = 3596i64;
  v73 = _mm_load_si128((const __m128i *)&_xmm);
  for ( m = 1i64; m != 33; m += 2i64 )
  {
    *(__m128i *)&v320[m + 1] = v73;
    v73 = _mm_add_epi8(v73, v17);
  }
  v75 = v0 ^ v71;
  v76 = 8i64;
  v77 = 0;
  v78 = 0;
  do
  {
    v79 = *((_BYTE *)&v320[1] + v76);
    v80 = v78;
    v77 += *((_BYTE *)v320 + v78) + v79;
    *((_BYTE *)&v320[1] + v76) = *((_BYTE *)&v320[2] + v77);
    *((_BYTE *)&v320[2] + v77) = v79;
    ++v78;
    if ( v80 >= 7 )
      v78 = 0;
    ++v76;
  }
  while ( v76 != 264 );
  v81 = 0i64;
  LOBYTE(v82) = 0;
  v83 = 0;
  do
  {
    v82 = (unsigned __int8)(v82 + 1);
    v84 = *((_BYTE *)&v320[2] + v82);
    v83 += v84;
    v85 = *((_BYTE *)&v320[2] + v83);
    *((_BYTE *)&v320[2] + v82) = v85;
    *((_BYTE *)&v320[2] + v83) = v84;
    *((_BYTE *)&v320[-1] + v81++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v84 + v85));
  }
  while ( v81 != 8 );
  v86 = v319;
  v87 = *(unsigned int *)(v57 + v60 + 32);
  v320[0] = 3786i64;
  v319 = 3596i64;
  v88 = _mm_load_si128((const __m128i *)&_xmm);
  for ( n = 1i64; n != 33; n += 2i64 )
  {
    *(__m128i *)&v320[n + 1] = v88;
    v88 = _mm_add_epi8(v88, v17);
  }
  v90 = v87 + (v0 ^ v86);
  v91 = 8i64;
  v92 = 0;
  v93 = 0;
  do
  {
    v94 = *((_BYTE *)&v320[1] + v91);
    v95 = v93;
    v92 += *((_BYTE *)v320 + v93) + v94;
    *((_BYTE *)&v320[1] + v91) = *((_BYTE *)&v320[2] + v92);
    *((_BYTE *)&v320[2] + v92) = v94;
    ++v93;
    if ( v95 >= 7 )
      v93 = 0;
    ++v91;
  }
  while ( v91 != 264 );
  v96 = v72 + v75;
  v97 = 0i64;
  LOBYTE(v98) = 0;
  v99 = 0;
  do
  {
    v98 = (unsigned __int8)(v98 + 1);
    v100 = *((_BYTE *)&v320[2] + v98);
    v99 += v100;
    v101 = *((_BYTE *)&v320[2] + v99);
    *((_BYTE *)&v320[2] + v98) = v101;
    *((_BYTE *)&v320[2] + v99) = v100;
    *((_BYTE *)&v320[-1] + v97++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v100 + v101));
  }
  while ( v97 != 8 );
  v102 = *(unsigned int *)(v57 + v60 + 24);
  v103 = 0i64;
  if ( *(_DWORD *)(v57 + v60 + 24) )
  {
    v321 = (unsigned __int16 *)((v0 ^ v319) + *(unsigned int *)(v57 + v60 + 36));
    v104 = _mm_load_si128((const __m128i *)&_xmm);
    v105 = 0i64;
    while ( 1 )
    {
      v320[0] = 3786i64;
      v319 = 3596i64;
      v106 = 1i64;
      v107 = v104;
      do
      {
        *(__m128i *)&v320[v106 + 1] = v107;
        v107 = _mm_add_epi8(v107, v17);
        v106 += 2i64;
      }
      while ( v106 != 33 );
      v108 = 0;
      v109 = 8i64;
      v110 = 0;
      do
      {
        v111 = *((_BYTE *)&v320[1] + v109);
        v112 = v110;
        v108 += *((_BYTE *)v320 + v110) + v111;
        *((_BYTE *)&v320[1] + v109) = *((_BYTE *)&v320[2] + v108);
        *((_BYTE *)&v320[2] + v108) = v111;
        ++v110;
        if ( v112 >= 7 )
          v110 = 0;
        ++v109;
      }
      while ( v109 != 264 );
      v113 = 0i64;
      LOBYTE(v114) = 0;
      v115 = 0;
      do
      {
        v114 = (unsigned __int8)(v114 + 1);
        v116 = *((_BYTE *)&v320[2] + v114);
        v115 += v116;
        v117 = *((_BYTE *)&v320[2] + v115);
        *((_BYTE *)&v320[2] + v114) = v117;
        *((_BYTE *)&v320[2] + v115) = v116;
        *((_BYTE *)&v320[-1] + v113++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v116 + v117));
      }
      while ( v113 != 8 );
      v118 = *(unsigned int *)(v90 + 4 * v105);
      v119 = *(_BYTE *)((v0 ^ v319) + v118);
      if ( v119 )
      {
        v120 = (char *)(v118 + (v0 ^ v319) + 1);
        v121 = 0xCBF29CE4843FCD9Fui64;
        do
        {
          v121 = 0x100000001B3i64 * (v119 ^ (unsigned __int64)v121);
          v119 = *v120++;
        }
        while ( v119 );
        if ( v121 == 0x4E334AF717DAD95Di64 )
          break;
      }
      if ( ++v105 == v102 )
        goto LABEL_92;
    }
    v320[0] = 3786i64;
    v319 = 3596i64;
    v122 = _mm_load_si128((const __m128i *)&_xmm);
    for ( ii = 1i64; ii != 33; ii += 2i64 )
    {
      *(__m128i *)&v320[ii + 1] = v122;
      v122 = _mm_add_epi8(v122, v17);
    }
    v124 = 8i64;
    v125 = 0;
    v126 = 0;
    do
    {
      v127 = *((_BYTE *)&v320[1] + v124);
      v128 = v126;
      v125 += *((_BYTE *)v320 + v126) + v127;
      *((_BYTE *)&v320[1] + v124) = *((_BYTE *)&v320[2] + v125);
      *((_BYTE *)&v320[2] + v125) = v127;
      ++v126;
      if ( v128 >= 7 )
        v126 = 0;
      ++v124;
    }
    while ( v124 != 264 );
    v129 = 0i64;
    LOBYTE(v130) = 0;
    v131 = 0;
    do
    {
      v130 = (unsigned __int8)(v130 + 1);
      v132 = *((_BYTE *)&v320[2] + v130);
      v131 += v132;
      v133 = *((_BYTE *)&v320[2] + v131);
      *((_BYTE *)&v320[2] + v130) = v133;
      *((_BYTE *)&v320[2] + v131) = v132;
      *((_BYTE *)&v320[-1] + v129++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v132 + v133));
    }
    while ( v129 != 8 );
    v134 = v319;
    v135 = *(unsigned int *)(v96 + 4i64 * v321[(unsigned int)v105]);
    v320[0] = 3596i64;
    v319 = 3786i64;
    v136 = _mm_load_si128((const __m128i *)&_xmm);
    for ( jj = 1i64; jj != 33; jj += 2i64 )
    {
      *(__m128i *)&v320[jj + 1] = v136;
      v136 = _mm_add_epi8(v136, v17);
    }
    v138 = 8i64;
    v139 = 0;
    v140 = 0;
    do
    {
      v141 = *((_BYTE *)&v320[1] + v138);
      v142 = v140;
      v139 += *((_BYTE *)v320 + v140) + v141;
      *((_BYTE *)&v320[1] + v138) = *((_BYTE *)&v320[2] + v139);
      *((_BYTE *)&v320[2] + v139) = v141;
      ++v140;
      if ( v142 >= 7 )
        v140 = 0;
      ++v138;
    }
    while ( v138 != 264 );
    v143 = 0i64;
    LOBYTE(v144) = 0;
    v145 = 0;
    do
    {
      v144 = (unsigned __int8)(v144 + 1);
      v146 = *((_BYTE *)&v320[2] + v144);
      v145 += v146;
      v147 = *((_BYTE *)&v320[2] + v145);
      *((_BYTE *)&v320[2] + v144) = v147;
      *((_BYTE *)&v320[2] + v145) = v146;
      *((_BYTE *)&v320[-1] + v143++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v146 + v147));
    }
    while ( v143 != 8 );
    v103 = v319 ^ (v135 + (v0 ^ v134));
  }
LABEL_92:
  v320[0] = 3596i64;
  v319 = 3786i64;
  v148 = _mm_load_si128((const __m128i *)&_xmm);
  for ( kk = 1i64; kk != 33; kk += 2i64 )
  {
    *(__m128i *)&v320[kk + 1] = v148;
    v148 = _mm_add_epi8(v148, v17);
  }
  v150 = 8i64;
  v151 = 0;
  v152 = 0;
  do
  {
    v153 = *((_BYTE *)&v320[1] + v150);
    v154 = v152;
    v151 += *((_BYTE *)v320 + v152) + v153;
    *((_BYTE *)&v320[1] + v150) = *((_BYTE *)&v320[2] + v151);
    *((_BYTE *)&v320[2] + v151) = v153;
    ++v152;
    if ( v154 >= 7 )
      v152 = 0;
    ++v150;
  }
  while ( v150 != 264 );
  v155 = 0i64;
  LOBYTE(v156) = 0;
  v157 = 0;
  do
  {
    v156 = (unsigned __int8)(v156 + 1);
    v158 = *((_BYTE *)&v320[2] + v156);
    v157 += v158;
    v159 = *((_BYTE *)&v320[2] + v157);
    *((_BYTE *)&v320[2] + v156) = v159;
    *((_BYTE *)&v320[2] + v157) = v158;
    *((_BYTE *)&v320[-1] + v155++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v158 + v159));
  }
  while ( v155 != 8 );
  v160 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, __int64, __int64))(v319 ^ v103))(
                               0i64,
                               4096i64,
                               1701736270i64);
  if ( v160 )
  {
    v321 = v160;
    DbgPrintEx(0x4Du, 0, "test_once:ExAllocatePoolWithTag=%p\n", v160);
    v161 = kli::cache::base;
    if ( kli::cache::base == 4116 )
    {
      v162 = kli::detail::get_kernel_base();
      v320[0] = 3786i64;
      v319 = 3596i64;
      v163 = _mm_load_si128((const __m128i *)&_xmm);
      for ( mm = 1i64; mm != 33; mm += 2i64 )
      {
        *(__m128i *)&v320[mm + 1] = v163;
        v163 = _mm_add_epi8(v163, v17);
      }
      v165 = 8i64;
      v166 = 0;
      v167 = 0;
      do
      {
        v168 = *((_BYTE *)&v320[1] + v165);
        v169 = v167;
        v166 += *((_BYTE *)v320 + v167) + v168;
        *((_BYTE *)&v320[1] + v165) = *((_BYTE *)&v320[2] + v166);
        *((_BYTE *)&v320[2] + v166) = v168;
        ++v167;
        if ( v169 >= 7 )
          v167 = 0;
        ++v165;
      }
      while ( v165 != 264 );
      v170 = 0i64;
      LOBYTE(v171) = 0;
      v172 = 0;
      do
      {
        v171 = (unsigned __int8)(v171 + 1);
        v173 = *((_BYTE *)&v320[2] + v171);
        v172 += v173;
        v174 = *((_BYTE *)&v320[2] + v172);
        *((_BYTE *)&v320[2] + v171) = v174;
        *((_BYTE *)&v320[2] + v172) = v173;
        *((_BYTE *)&v320[-1] + v170++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v173 + v174));
      }
      while ( v170 != 8 );
      v161 = v319 ^ v162;
      kli::cache::base = v161;
    }
    v320[0] = 3786i64;
    v319 = 3596i64;
    v175 = _mm_load_si128((const __m128i *)&_xmm);
    for ( nn = 1i64; nn != 33; nn += 2i64 )
    {
      *(__m128i *)&v320[nn + 1] = v175;
      v175 = _mm_add_epi8(v175, v17);
    }
    v177 = 8i64;
    v178 = 0;
    v179 = 0;
    do
    {
      v180 = *((_BYTE *)&v320[1] + v177);
      v181 = v179;
      v178 += *((_BYTE *)v320 + v179) + v180;
      *((_BYTE *)&v320[1] + v177) = *((_BYTE *)&v320[2] + v178);
      *((_BYTE *)&v320[2] + v178) = v180;
      ++v179;
      if ( v181 >= 7 )
        v179 = 0;
      ++v177;
    }
    while ( v177 != 264 );
    v182 = 0i64;
    LOBYTE(v183) = 0;
    v184 = 0;
    do
    {
      v183 = (unsigned __int8)(v183 + 1);
      v185 = *((_BYTE *)&v320[2] + v183);
      v184 += v185;
      v186 = *((_BYTE *)&v320[2] + v184);
      *((_BYTE *)&v320[2] + v183) = v186;
      *((_BYTE *)&v320[2] + v184) = v185;
      *((_BYTE *)&v320[-1] + v182++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v185 + v186));
    }
    while ( v182 != 8 );
    v187 = v319;
    v320[0] = 3786i64;
    v319 = 3596i64;
    v188 = _mm_load_si128((const __m128i *)&_xmm);
    for ( i1 = 1i64; i1 != 33; i1 += 2i64 )
    {
      *(__m128i *)&v320[i1 + 1] = v188;
      v188 = _mm_add_epi8(v188, v17);
    }
    v190 = 8i64;
    v191 = 0;
    v192 = 0;
    do
    {
      v193 = *((_BYTE *)&v320[1] + v190);
      v194 = v192;
      v191 += *((_BYTE *)v320 + v192) + v193;
      *((_BYTE *)&v320[1] + v190) = *((_BYTE *)&v320[2] + v191);
      *((_BYTE *)&v320[2] + v191) = v193;
      ++v192;
      if ( v194 >= 7 )
        v192 = 0;
      ++v190;
    }
    while ( v190 != 264 );
    v195 = 0i64;
    LOBYTE(v196) = 0;
    v197 = 0;
    do
    {
      v196 = (unsigned __int8)(v196 + 1);
      v198 = *((_BYTE *)&v320[2] + v196);
      v197 += v198;
      v199 = *((_BYTE *)&v320[2] + v197);
      *((_BYTE *)&v320[2] + v196) = v199;
      *((_BYTE *)&v320[2] + v197) = v198;
      *((_BYTE *)&v320[-1] + v195++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v198 + v199));
    }
    while ( v195 != 8 );
    v200 = v319;
    v201 = *(int *)((v161 ^ v187) + 0x3C);
    v320[0] = 3786i64;
    v319 = 3596i64;
    v202 = _mm_load_si128((const __m128i *)&_xmm);
    for ( i2 = 1i64; i2 != 33; i2 += 2i64 )
    {
      *(__m128i *)&v320[i2 + 1] = v202;
      v202 = _mm_add_epi8(v202, v17);
    }
    v204 = v161 ^ v200;
    v205 = 8i64;
    v206 = 0;
    v207 = 0;
    do
    {
      v208 = *((_BYTE *)&v320[1] + v205);
      v209 = v207;
      v206 += *((_BYTE *)v320 + v207) + v208;
      *((_BYTE *)&v320[1] + v205) = *((_BYTE *)&v320[2] + v206);
      *((_BYTE *)&v320[2] + v206) = v208;
      ++v207;
      if ( v209 >= 7 )
        v207 = 0;
      ++v205;
    }
    while ( v205 != 264 );
    v210 = 0i64;
    LOBYTE(v211) = 0;
    v212 = 0;
    do
    {
      v211 = (unsigned __int8)(v211 + 1);
      v213 = *((_BYTE *)&v320[2] + v211);
      v212 += v213;
      v214 = *((_BYTE *)&v320[2] + v212);
      *((_BYTE *)&v320[2] + v211) = v214;
      *((_BYTE *)&v320[2] + v212) = v213;
      *((_BYTE *)&v320[-1] + v210++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v213 + v214));
    }
    while ( v210 != 8 );
    v215 = v319;
    v216 = *(unsigned int *)(v204 + v201 + 136);
    v320[0] = 3786i64;
    v319 = 3596i64;
    v217 = _mm_load_si128((const __m128i *)&_xmm);
    for ( i3 = 1i64; i3 != 33; i3 += 2i64 )
    {
      *(__m128i *)&v320[i3 + 1] = v217;
      v217 = _mm_add_epi8(v217, v17);
    }
    v219 = v161 ^ v215;
    v220 = 8i64;
    v221 = 0;
    v222 = 0;
    do
    {
      v223 = *((_BYTE *)&v320[1] + v220);
      v224 = v222;
      v221 += *((_BYTE *)v320 + v222) + v223;
      *((_BYTE *)&v320[1] + v220) = *((_BYTE *)&v320[2] + v221);
      *((_BYTE *)&v320[2] + v221) = v223;
      ++v222;
      if ( v224 >= 7 )
        v222 = 0;
      ++v220;
    }
    while ( v220 != 264 );
    v225 = 0i64;
    LOBYTE(v226) = 0;
    v227 = 0;
    do
    {
      v226 = (unsigned __int8)(v226 + 1);
      v228 = *((_BYTE *)&v320[2] + v226);
      v227 += v228;
      v229 = *((_BYTE *)&v320[2] + v227);
      *((_BYTE *)&v320[2] + v226) = v229;
      *((_BYTE *)&v320[2] + v227) = v228;
      *((_BYTE *)&v320[-1] + v225++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v228 + v229));
    }
    while ( v225 != 8 );
    v230 = v319;
    v231 = *(unsigned int *)(v219 + v216 + 28);
    v320[0] = 3786i64;
    v319 = 3596i64;
    v232 = _mm_load_si128((const __m128i *)&_xmm);
    for ( i4 = 1i64; i4 != 33; i4 += 2i64 )
    {
      *(__m128i *)&v320[i4 + 1] = v232;
      v232 = _mm_add_epi8(v232, v17);
    }
    v234 = v161 ^ v230;
    v235 = 8i64;
    v236 = 0;
    v237 = 0;
    do
    {
      v238 = *((_BYTE *)&v320[1] + v235);
      v239 = v237;
      v236 += *((_BYTE *)v320 + v237) + v238;
      *((_BYTE *)&v320[1] + v235) = *((_BYTE *)&v320[2] + v236);
      *((_BYTE *)&v320[2] + v236) = v238;
      ++v237;
      if ( v239 >= 7 )
        v237 = 0;
      ++v235;
    }
    while ( v235 != 264 );
    v240 = 0i64;
    LOBYTE(v241) = 0;
    v242 = 0;
    do
    {
      v241 = (unsigned __int8)(v241 + 1);
      v243 = *((_BYTE *)&v320[2] + v241);
      v242 += v243;
      v244 = *((_BYTE *)&v320[2] + v242);
      *((_BYTE *)&v320[2] + v241) = v244;
      *((_BYTE *)&v320[2] + v242) = v243;
      *((_BYTE *)&v320[-1] + v240++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v243 + v244));
    }
    while ( v240 != 8 );
    v245 = v319;
    v246 = *(unsigned int *)(v216 + v219 + 32);
    v320[0] = 3786i64;
    v319 = 3596i64;
    v247 = _mm_load_si128((const __m128i *)&_xmm);
    for ( i5 = 1i64; i5 != 33; i5 += 2i64 )
    {
      *(__m128i *)&v320[i5 + 1] = v247;
      v247 = _mm_add_epi8(v247, v17);
    }
    v249 = v246 + (v161 ^ v245);
    v250 = 8i64;
    v251 = 0;
    v252 = 0;
    do
    {
      v253 = *((_BYTE *)&v320[1] + v250);
      v254 = v252;
      v251 += *((_BYTE *)v320 + v252) + v253;
      *((_BYTE *)&v320[1] + v250) = *((_BYTE *)&v320[2] + v251);
      *((_BYTE *)&v320[2] + v251) = v253;
      ++v252;
      if ( v254 >= 7 )
        v252 = 0;
      ++v250;
    }
    while ( v250 != 264 );
    v255 = v231 + v234;
    v256 = 0i64;
    LOBYTE(v257) = 0;
    v258 = 0;
    do
    {
      v257 = (unsigned __int8)(v257 + 1);
      v259 = *((_BYTE *)&v320[2] + v257);
      v258 += v259;
      v260 = *((_BYTE *)&v320[2] + v258);
      *((_BYTE *)&v320[2] + v257) = v260;
      *((_BYTE *)&v320[2] + v258) = v259;
      *((_BYTE *)&v320[-1] + v256++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v259 + v260));
    }
    while ( v256 != 8 );
    v261 = *(unsigned int *)(v216 + v219 + 24);
    v262 = 0i64;
    if ( *(_DWORD *)(v216 + v219 + 24) )
    {
      v322 = (v161 ^ v319) + *(unsigned int *)(v216 + v219 + 36);
      v263 = _mm_load_si128((const __m128i *)&_xmm);
      v264 = 0i64;
      while ( 1 )
      {
        v320[0] = 3786i64;
        v319 = 3596i64;
        v265 = 1i64;
        v266 = v263;
        do
        {
          *(__m128i *)&v320[v265 + 1] = v266;
          v266 = _mm_add_epi8(v266, v17);
          v265 += 2i64;
        }
        while ( v265 != 33 );
        v267 = 0;
        v268 = 8i64;
        v269 = 0;
        do
        {
          v270 = *((_BYTE *)&v320[1] + v268);
          v271 = v269;
          v267 += *((_BYTE *)v320 + v269) + v270;
          *((_BYTE *)&v320[1] + v268) = *((_BYTE *)&v320[2] + v267);
          *((_BYTE *)&v320[2] + v267) = v270;
          ++v269;
          if ( v271 >= 7 )
            v269 = 0;
          ++v268;
        }
        while ( v268 != 264 );
        v272 = 0i64;
        LOBYTE(v273) = 0;
        v274 = 0;
        do
        {
          v273 = (unsigned __int8)(v273 + 1);
          v275 = *((_BYTE *)&v320[2] + v273);
          v274 += v275;
          v276 = *((_BYTE *)&v320[2] + v274);
          *((_BYTE *)&v320[2] + v273) = v276;
          *((_BYTE *)&v320[2] + v274) = v275;
          *((_BYTE *)&v320[-1] + v272++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v275 + v276));
        }
        while ( v272 != 8 );
        v277 = *(unsigned int *)(v249 + 4 * v264);
        v278 = *(_BYTE *)((v161 ^ v319) + v277);
        if ( v278 )
        {
          v279 = (char *)(v277 + (v161 ^ v319) + 1);
          v280 = 0xCBF29CE4843FCD9Fui64;
          do
          {
            v280 = 0x100000001B3i64 * (v278 ^ (unsigned __int64)v280);
            v278 = *v279++;
          }
          while ( v278 );
          if ( v280 == 0xCC1730B76CA73B5Aui64 )
            break;
        }
        if ( ++v264 == v261 )
          goto LABEL_192;
      }
      v320[0] = 3786i64;
      v319 = 3596i64;
      v281 = _mm_load_si128((const __m128i *)&_xmm);
      for ( i6 = 1i64; i6 != 33; i6 += 2i64 )
      {
        *(__m128i *)&v320[i6 + 1] = v281;
        v281 = _mm_add_epi8(v281, v17);
      }
      v283 = 8i64;
      v284 = 0;
      v285 = 0;
      do
      {
        v286 = *((_BYTE *)&v320[1] + v283);
        v287 = v285;
        v284 += *((_BYTE *)v320 + v285) + v286;
        *((_BYTE *)&v320[1] + v283) = *((_BYTE *)&v320[2] + v284);
        *((_BYTE *)&v320[2] + v284) = v286;
        ++v285;
        if ( v287 >= 7 )
          v285 = 0;
        ++v283;
      }
      while ( v283 != 264 );
      v288 = 0i64;
      LOBYTE(v289) = 0;
      v290 = 0;
      do
      {
        v289 = (unsigned __int8)(v289 + 1);
        v291 = *((_BYTE *)&v320[2] + v289);
        v290 += v291;
        v292 = *((_BYTE *)&v320[2] + v290);
        *((_BYTE *)&v320[2] + v289) = v292;
        *((_BYTE *)&v320[2] + v290) = v291;
        *((_BYTE *)&v320[-1] + v288++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v291 + v292));
      }
      while ( v288 != 8 );
      v293 = v319;
      v294 = *(unsigned int *)(v255 + 4i64 * *(unsigned __int16 *)(v322 + 2i64 * (unsigned int)v264));
      v320[0] = 3596i64;
      v319 = 3786i64;
      v295 = _mm_load_si128((const __m128i *)&_xmm);
      for ( i7 = 1i64; i7 != 33; i7 += 2i64 )
      {
        *(__m128i *)&v320[i7 + 1] = v295;
        v295 = _mm_add_epi8(v295, v17);
      }
      v297 = 8i64;
      v298 = 0;
      v299 = 0;
      do
      {
        v300 = *((_BYTE *)&v320[1] + v297);
        v301 = v299;
        v298 += *((_BYTE *)v320 + v299) + v300;
        *((_BYTE *)&v320[1] + v297) = *((_BYTE *)&v320[2] + v298);
        *((_BYTE *)&v320[2] + v298) = v300;
        ++v299;
        if ( v301 >= 7 )
          v299 = 0;
        ++v297;
      }
      while ( v297 != 264 );
      v302 = 0i64;
      LOBYTE(v303) = 0;
      v304 = 0;
      do
      {
        v303 = (unsigned __int8)(v303 + 1);
        v305 = *((_BYTE *)&v320[2] + v303);
        v304 += v305;
        v306 = *((_BYTE *)&v320[2] + v304);
        *((_BYTE *)&v320[2] + v303) = v306;
        *((_BYTE *)&v320[2] + v304) = v305;
        *((_BYTE *)&v320[-1] + v302++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v305 + v306));
      }
      while ( v302 != 8 );
      v262 = v319 ^ (v294 + (v161 ^ v293));
    }
LABEL_192:
    v320[0] = 3596i64;
    v319 = 3786i64;
    v307 = _mm_load_si128((const __m128i *)&_xmm);
    for ( i8 = 1i64; i8 != 33; i8 += 2i64 )
    {
      *(__m128i *)&v320[i8 + 1] = v307;
      v307 = _mm_add_epi8(v307, v17);
    }
    v309 = 8i64;
    v310 = 0;
    v311 = 0;
    do
    {
      v312 = *((_BYTE *)&v320[1] + v309);
      v313 = v311;
      v310 += *((_BYTE *)v320 + v311) + v312;
      *((_BYTE *)&v320[1] + v309) = *((_BYTE *)&v320[2] + v310);
      *((_BYTE *)&v320[2] + v310) = v312;
      ++v311;
      if ( v313 >= 7 )
        v311 = 0;
      ++v309;
    }
    while ( v309 != 264 );
    v314 = 0i64;
    LOBYTE(v315) = 0;
    v316 = 0;
    do
    {
      v315 = (unsigned __int8)(v315 + 1);
      v317 = *((_BYTE *)&v320[2] + v315);
      v316 += v317;
      v318 = *((_BYTE *)&v320[2] + v316);
      *((_BYTE *)&v320[2] + v315) = v318;
      *((_BYTE *)&v320[2] + v316) = v317;
      *((_BYTE *)&v320[-1] + v314++) ^= *((_BYTE *)&v320[2] + (unsigned __int8)(v317 + v318));
    }
    while ( v314 != 8 );
    ((void (__fastcall *)(unsigned __int16 *, __int64))(v319 ^ v262))(v321, 1701736270i64);
  }
}
```

## Compile
- Visual Studio 2022 & WDK10
- llvm-msvc [[link]](https://github.com/NewWorldComingSoon/llvm-msvc-build)

## Credit
- https://github.com/hypervisor/kli
