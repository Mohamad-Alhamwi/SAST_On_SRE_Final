
void FUN_00103c93(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_001035e2(param_3);
  uVar2 = FUN_001035e2(local_28);
  uVar3 = FUN_001035e2(local_20);
  uVar1 = FUN_00103d79(uVar3,uVar2,uVar1);
  FUN_0010385c(&local_30,uVar1);
  return;
}




void FUN_00103ebd(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




undefined8 FUN_00102d5a(undefined8 param_1)

{
  return param_1;
}




void FUN_001037c0(void)

{
  return;
}




void FUN_001018d6(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_e8;
  undefined8 local_e0;
  size_t local_d8;
  FILE *local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021fa(local_c8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_e8 = local_88;
  local_d8 = strlen(local_e8);
  if (1 < 100 - local_d8) {
                    /* try { // try from 001019b0 to 00101b49 has its CatchHandler @ 00101ba1 */
    local_d0 = fopen("/tmp/file.txt","r");
    if (local_d0 != (FILE *)0x0) {
      pcVar1 = fgets(local_e8 + local_d8,100 - (int)local_d8,local_d0);
      if (pcVar1 == (char *)0x0) {
        FUN_00103e11("fgets() failed");
        local_e8[local_d8] = '\0';
      }
      fclose(local_d0);
    }
  }
  local_e0 = FUN_00102300(local_c8);
  FUN_00102350(local_a8,&local_e0);
  FUN_0010237e(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00102300(local_c8);
  FUN_00102350(local_a8,&local_e0);
  FUN_0010237e(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00102300(local_c8);
  FUN_00102350(local_a8,&local_e0);
  FUN_0010237e(local_c8,local_a8[0],1,&local_e8);
  FUN_00102444(local_a8,local_c8);
                    /* try { // try from 00101b54 to 00101b58 has its CatchHandler @ 00101b89 */
  FUN_0010163f(local_a8);
  FUN_001022b8(local_a8);
  FUN_001022b8(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




long FUN_001039d3(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




ulong FUN_00104205(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050d4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104040(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102584(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00104353(void)

{
  return;
}




ulong * FUN_00103ab5(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_001042e4(void)

{
  return 1;
}




undefined8 FUN_001038a3(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103a97(param_1);
  puVar1 = (undefined8 *)FUN_00103ab5(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103a97(undefined8 param_1)

{
  FUN_00103ae4(param_1);
  return;
}




undefined8 * FUN_00103bcc(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  long local_18;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_0010406e(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010343f(void)

{
  return;
}




void FUN_00104327(void)

{
  return;
}




void FUN_00103147(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103632(param_1,param_2,param_3);
  return;
}




void * FUN_00103d01(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00104564(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_001043b6(void)

{
  return;
}




ulong FUN_00104101(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050cc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f3d(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_0010385c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101682(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vfprintf(stdout,param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103a49(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001035e2(param_1);
  uVar1 = FUN_00103bcc(uVar1,param_2,param_3);
  FUN_0010385c(&local_10,uVar1);
  return;
}




undefined8 FUN_001021a4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void _FINI_0(void)

{
  if (DAT_00108028 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_001014b0();
    DAT_00108028 = 1;
    return;
  }
  return;
}




void FUN_00103632(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103872(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102300(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102640(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00103452(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00102674(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102f24(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103738(void)

{
  return;
}




undefined8 FUN_00102dd2(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102f24(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010461b(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00103d64(undefined8 *param_1)

{
  return *param_1;
}




void FUN_0010221a(undefined8 param_1)

{
  FUN_00102564(param_1);
  FUN_00102584(param_1);
  return;
}




void FUN_001036bd(undefined8 param_1,undefined8 param_2)

{
  FUN_0010390c(param_1,param_2,0);
  return;
}




void FUN_00101bd1(void)

{
  long in_FS_OFFSET;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021fa(local_c8);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_d8 = &local_88;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  local_d0 = FUN_00102300(local_c8);
  FUN_00102350(local_a8,&local_d0);
                    /* try { // try from 00101ce2 to 00101da7 has its CatchHandler @ 00101dff */
  FUN_0010237e(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00102300(local_c8);
  FUN_00102350(local_a8,&local_d0);
  FUN_0010237e(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00102300(local_c8);
  FUN_00102350(local_a8,&local_d0);
  FUN_0010237e(local_c8,local_a8[0],1,&local_d8);
  FUN_00102444(local_a8,local_c8);
                    /* try { // try from 00101db2 to 00101db6 has its CatchHandler @ 00101de7 */
  FUN_00101758(local_a8);
  FUN_001022b8(local_a8);
  FUN_001022b8(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103e11(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102e2a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102f24(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ec0)();
  return;
}




undefined8 FUN_00102600(undefined8 param_1)

{
  return param_1;
}




void FUN_0010163f(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001018b2(param_1,2);
  FUN_00101569(*puVar1,*puVar1);
  return;
}




void * FUN_00103dae(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103328(undefined8 param_1,undefined8 param_2)

{
  FUN_00103738(param_1,param_2);
  return;
}




void FUN_00102564(undefined8 param_1)

{
  FUN_00102eb8(param_1);
  return;
}




int FUN_00104302(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001030f6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001035e2(param_2);
  uVar2 = FUN_001035e2(param_1);
  FUN_001035f4(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c6d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103d64(&local_10);
  FUN_00103562(uVar1);
  return;
}




void FUN_0010390c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103ae4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00103d79(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103dae(param_1,param_2,param_3);
  return;
}




void FUN_00102f58(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00103468(param_3);
  uVar2 = FUN_00103452(param_1);
  FUN_0010347a(*param_1,uVar2,uVar1);
  return;
}




long FUN_00102ce2(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_001043c1(void)

{
  return;
}




long FUN_001018b2(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00104369(void)

{
  return;
}




void FUN_00101e2f(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_e8;
  undefined8 local_e0;
  size_t local_d8;
  FILE *local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021fa(local_c8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_e8 = local_88;
  local_d8 = strlen(local_e8);
  if (1 < 100 - local_d8) {
                    /* try { // try from 00101f09 to 001020a2 has its CatchHandler @ 001020fa */
    local_d0 = fopen("/tmp/file.txt","r");
    if (local_d0 != (FILE *)0x0) {
      pcVar1 = fgets(local_e8 + local_d8,100 - (int)local_d8,local_d0);
      if (pcVar1 == (char *)0x0) {
        FUN_00103e11("fgets() failed");
        local_e8[local_d8] = '\0';
      }
      fclose(local_d0);
    }
  }
  local_e0 = FUN_00102300(local_c8);
  FUN_00102350(local_a8,&local_e0);
  FUN_0010237e(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00102300(local_c8);
  FUN_00102350(local_a8,&local_e0);
  FUN_0010237e(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00102300(local_c8);
  FUN_00102350(local_a8,&local_e0);
  FUN_0010237e(local_c8,local_a8[0],1,&local_e8);
  FUN_00102444(local_a8,local_c8);
                    /* try { // try from 001020ad to 001020b1 has its CatchHandler @ 001020e2 */
  FUN_0010186e(local_a8);
  FUN_001022b8(local_a8);
  FUN_001022b8(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104332(void)

{
  return;
}




undefined8 FUN_001036eb(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001037d4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104348(void)

{
  return;
}




void FUN_00102f24(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010374b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103952(param_1,param_2,param_3);
  return;
}




void FUN_001040a1(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103f12(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101569(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vfprintf(stdout,param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103c6d(param_2);
  uVar2 = FUN_00103c6d(param_1);
  FUN_00103c93(uVar2,uVar1,param_3);
  return;
}




ulong * FUN_0010368e(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001043a0(void)

{
  return;
}




void FUN_001043ab(void)

{
  return;
}




void FUN_00103352(undefined8 param_1,undefined8 param_2)

{
  FUN_00103328(param_1,param_2);
  FUN_00102584(param_1);
  return;
}




long FUN_001026cb(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102f46(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102f46(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_001034e1(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001037d4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001045fc(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00104541(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102e82(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033e2(param_1,param_2,param_3);
  return;
}




void FUN_00103c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103d01(param_1,param_2,param_3);
  return;
}




void FUN_00101758(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001018b2(param_1,2);
  FUN_00101682(*puVar1,*puVar1);
  return;
}




void FUN_00104395(void)

{
  return;
}




undefined8 FUN_00102662(undefined8 param_1)

{
  return param_1;
}




bool FUN_001044e6(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




void FUN_00103872(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103a49(param_1,param_2,param_3);
  return;
}




void FUN_0010431c(void)

{
  return;
}




void FUN_00102266(long *param_1)

{
  FUN_001025c6(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_001021ba(param_1);
  return;
}




undefined8 FUN_00103afc(undefined8 param_1)

{
  return param_1;
}




void FUN_001046c0(void)

{
  return;
}




void FUN_0010433d(void)

{
  return;
}




void FUN_00102710(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 3) < param_3) {
      local_68 = FUN_0010317c(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102c30(local_80);
      local_60 = FUN_0010300a(&local_88,&local_78);
      local_70 = FUN_0010326c(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00102600(local_80);
                    /* try { // try from 00102a1a to 00102aa5 has its CatchHandler @ 00102b5d */
      FUN_00103147(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00102600(local_80);
      puVar2 = (undefined8 *)FUN_00102662(&local_88);
      local_70 = FUN_001032a3(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00102600(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00102662(&local_88);
      local_70 = FUN_001032a3(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00102600(local_80);
      FUN_00102612(*local_80,local_80[1],uVar1);
      FUN_001025c6(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102f58(local_38,param_1,param_4);
                    /* try { // try from 0010279a to 0010296d has its CatchHandler @ 00102b3f */
      local_50 = FUN_00102fec(local_38);
      local_78 = FUN_00102300(local_80);
      local_48 = FUN_0010300a(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00102600(local_80);
        FUN_0010304e(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00102662(&local_88);
        FUN_001030a6(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00102662(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00102662(&local_88);
        FUN_001030f6(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00102600(local_80);
        lVar4 = FUN_00103147(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00102600(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00102662(&local_88);
        FUN_0010304e(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00102662(&local_88);
        FUN_001030f6(*puVar2,local_40,local_50);
      }
      FUN_00102fb8(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001034b7(undefined8 param_1,undefined8 param_2)

{
  FUN_001037c0(param_1,param_2);
  return;
}




void FUN_00103b0e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_001035e2(param_3);
  uVar2 = FUN_00103c17(local_28);
  uVar3 = FUN_00103c17(local_20);
  uVar1 = FUN_00103c38(uVar3,uVar2,uVar1);
  FUN_0010385c(&local_30,uVar1);
  return;
}




void FUN_00104015(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102ef9(undefined8 param_1,undefined8 param_2)

{
  FUN_0010343f(param_1,param_2);
  return;
}




void FUN_0010237e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_00102674(param_1);
  local_18 = FUN_001026cb(&local_38,&local_20);
  local_20 = FUN_00102c30(local_30);
  uVar1 = FUN_00102c7c(&local_20,local_18);
  FUN_00102710(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102c30(local_30);
  FUN_00102c7c(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010304e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034e1(param_2);
  uVar2 = FUN_001034e1(param_1);
  FUN_0010352d(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010212a(void)

{
  FUN_00101bd1();
  FUN_00101e2f();
  return;
}




void FUN_00102eb8(void)

{
  return;
}




void FUN_00103388(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_0010326c(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




undefined8 FUN_001032fb(undefined8 param_1,undefined8 param_2)

{
  FUN_00103328(param_1,param_2);
  return param_1;
}




undefined8 FUN_00102c30(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102640(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103952(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103afc(param_2);
  uVar2 = FUN_00103afc(param_1);
  FUN_00103b0e(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102d09(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032fb(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00103c17(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102f46(&local_10);
  return *puVar1;
}




void FUN_00103f68(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102ec7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103418(param_1,param_2,param_3);
  return;
}




void FUN_001037f2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001039a2(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001035e2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102612(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ef9(param_1,param_2);
  return;
}




void FUN_00103668(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d5a(param_1);
  FUN_001038a3(uVar1);
  return;
}




void FUN_001021fa(undefined8 param_1)

{
  FUN_001021da(param_1);
  return;
}




void FUN_0010437f(void)

{
  return;
}




void FUN_00102fb8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103452(param_1);
  FUN_001034b7(*param_1,uVar1);
  return;
}




undefined8 FUN_00103468(undefined8 param_1)

{
  return param_1;
}




void FUN_00102350(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102662(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_0010377c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00103468(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001021a4(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001032a3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001036eb(param_2);
  uVar2 = FUN_001036eb(param_1);
  FUN_0010352d(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00103562(undefined8 param_1)

{
  return param_1;
}




void FUN_0010179b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vfprintf(stdout,"%s",&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001025c6(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102ec7(param_1,param_2,param_3);
  }
  return;
}




void FUN_001037d4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001043d7(void)

{
  return;
}




void FUN_00102640(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_0010213f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103e11("Calling good()...");
  FUN_0010212a();
  FUN_00103e11("Finished good()");
  FUN_00103e11("Calling bad()...");
  FUN_001018d6();
  FUN_00103e11("Finished bad()");
  return 0;
}




void FUN_00102444(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102d5a(param_2);
  FUN_00102d09(&local_31,uVar1);
  uVar1 = FUN_00102ce2(param_2);
                    /* try { // try from 001024aa to 001024ae has its CatchHandler @ 00102517 */
  FUN_00102d6c(param_1,uVar1,&local_31);
  FUN_00102246(&local_31);
  uVar2 = FUN_00102600(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102e2a(param_2);
  uVar4 = FUN_00102dd2(param_2);
                    /* try { // try from 001024f8 to 001024fc has its CatchHandler @ 00102535 */
  uVar1 = FUN_00102e82(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103ae4(void)

{
  return 0xfffffffffffffff;
}




void FUN_0010438a(void)

{
  return;
}




void FUN_001033e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010374b(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00104419(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001043e2,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_00103e37(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010352d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001037f2(param_1,param_2,param_3);
  return;
}




void FUN_00103fed(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001035f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103827(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001039d3(param_1,param_2,param_3);
  return;
}




void FUN_001045dd(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001022b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102600(param_1);
  FUN_00102612(*param_1,param_1[1],uVar1);
  FUN_00102266(param_1);
  return;
}




void FUN_00104374(void)

{
  return;
}




void FUN_00103ee7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103418(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001030a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103562(param_2);
  uVar2 = FUN_00103562(param_1);
  FUN_00103574(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102f46(undefined8 param_1)

{
  return param_1;
}




void FUN_001043cc(void)

{
  return;
}




void FUN_001039a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103b7c(param_1,param_2,param_3);
  return;
}




void FUN_00102246(undefined8 param_1)

{
  FUN_001025b6(param_1);
  return;
}




long FUN_0010300a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102662(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102662(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001025b6(void)

{
  return;
}




void FUN_0010435e(void)

{
  return;
}




void FUN_001021da(undefined8 param_1)

{
  FUN_0010221a(param_1);
  return;
}




void FUN_00103f93(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001042f3(void)

{
  return 0;
}




void FUN_00102d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103352(param_1,param_3);
                    /* try { // try from 00102da6 to 00102daa has its CatchHandler @ 00102dad */
  FUN_00103388(param_1,param_2);
  return;
}




void FUN_0010347a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103468(param_3);
  FUN_0010377c(param_1,param_2,uVar1);
  return;
}




void FUN_00102fec(undefined8 param_1)

{
  FUN_00103452(param_1);
  return;
}




undefined8 FUN_0010326c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_001036bd(param_1,param_2);
  }
  return uVar1;
}




void FUN_00104650(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




void FUN_001043e2(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103e91(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_001035e2(param_3);
  uVar2 = FUN_001035e2(local_28);
  uVar3 = FUN_001035e2(local_20);
  uVar1 = FUN_00103827(uVar3,uVar2,uVar1);
  FUN_0010385c(&local_30,uVar1);
  return;
}




ulong FUN_0010317c(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_00103668(param_1);
  lVar2 = FUN_00102ce2(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102ce2(local_40);
  local_30 = FUN_00102ce2(local_40);
  plVar3 = (long *)FUN_0010368e(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102ce2(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00103668(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00103668(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010186e(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001018b2(param_1,2);
  FUN_0010179b(*puVar1,*puVar1);
  return;
}




void FUN_001021ba(undefined8 param_1)

{
  FUN_00102246(param_1);
  return;
}




undefined8 FUN_00102c7c(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00102640(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103e69(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}



