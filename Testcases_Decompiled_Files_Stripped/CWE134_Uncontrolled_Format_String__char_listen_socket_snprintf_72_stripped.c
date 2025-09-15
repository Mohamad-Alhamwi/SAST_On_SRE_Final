
void FUN_0010357e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001038c6(param_1);
  FUN_001038d8(*param_1,param_1[1],uVar1);
  FUN_0010352c(param_1);
  return;
}




void FUN_00105624(void)

{
  return;
}




void FUN_00105687(void)

{
  return;
}




void FUN_001038d8(undefined8 param_1,undefined8 param_2)

{
  FUN_001041bf(param_1,param_2);
  return;
}




void FUN_0010477d(undefined8 param_1,undefined8 param_2)

{
  FUN_00104a86(param_1,param_2);
  return;
}




void FUN_00105183(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00103fcf(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001045c1(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_001038c6(undefined8 param_1)

{
  return param_1;
}




void FUN_00105367(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




long FUN_001028e0(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_001058a3(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00105980(void)

{
  return;
}




void FUN_0010440d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001048f8(param_1,param_2,param_3);
  return;
}




void FUN_0010270d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001028e0(param_1,2);
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  snprintf(local_78,99,(char *)*puVar1);
  FUN_001050d7(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102629(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001028e0(param_1,2);
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  snprintf(local_78,99,(char *)*puVar1);
  FUN_001050d7(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001055aa(void)

{
  return 1;
}




void FUN_001052b3(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_001054cb(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001055f8(void)

{
  return;
}




void FUN_001058c2(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00104d5d(undefined8 param_1)

{
  FUN_00104daa(param_1);
  return;
}




void FUN_00104ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104c68(param_1,param_2,param_3);
  return;
}




void FUN_0010562f(void)

{
  return;
}




void FUN_00102d4b(void)

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
  FUN_001034c0(local_c8);
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
  local_d0 = FUN_001035c6(local_c8);
  FUN_00103616(local_a8,&local_d0);
                    /* try { // try from 00102e5c to 00102f21 has its CatchHandler @ 00102f79 */
  FUN_00103644(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_001035c6(local_c8);
  FUN_00103616(local_a8,&local_d0);
  FUN_00103644(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_001035c6(local_c8);
  FUN_00103616(local_a8,&local_d0);
  FUN_00103644(local_c8,local_a8[0],1,&local_d8);
  FUN_0010370a(local_a8,local_c8);
                    /* try { // try from 00102f2c to 00102f30 has its CatchHandler @ 00102f61 */
  FUN_0010270d(local_a8);
  FUN_0010357e(local_a8);
  FUN_0010357e(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105910(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001056a8(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010522e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




long FUN_00103991(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010420c(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010420c(param_2);
  return lVar1 - *plVar2 >> 3;
}




ulong FUN_001053c7(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001046a8(param_1,param_2,param_3);
  return;
}




void FUN_00103906(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void * FUN_00104fc7(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001042b2(undefined8 param_1)

{
  FUN_00104718(param_1);
  return;
}




ulong * FUN_00104d7b(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001025c4) */
/* WARNING: Removing unreachable block (ram,0x001025d0) */

void FUN_001025a0(void)

{
  return;
}




void FUN_0010464e(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00104532(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_001050fd(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001047f3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104ab8(param_1,param_2,param_3);
  return;
}




void FUN_0010563a(void)

{
  return;
}




void FUN_001041ea(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void * FUN_00105074(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00104020(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010346a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010565b(void)

{
  return;
}




void FUN_0010384a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_00104828(undefined8 param_1)

{
  return param_1;
}




void FUN_0010387c(void)

{
  return;
}




void FUN_00104569(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001049b1(param_2);
  uVar2 = FUN_001049b1(param_1);
  FUN_001047f3(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_0010393a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001041ea(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00105650(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102583) */
/* WARNING: Removing unreachable block (ram,0x0010258f) */

void FUN_00102570(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00102570();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_0010350c(undefined8 param_1)

{
  FUN_0010387c(param_1);
  return;
}




void FUN_00104bd2(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00104daa(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_001035c6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103906(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001043bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001048a8(param_2);
  uVar2 = FUN_001048a8(param_1);
  FUN_001048ba(uVar2,uVar1,param_3);
  return;
}




void FUN_00104a9a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00105619(void)

{
  return;
}




void FUN_001052db(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00105645(void)

{
  return;
}




void FUN_00104983(undefined8 param_1,undefined8 param_2)

{
  FUN_00104bd2(param_1,param_2,0);
  return;
}




undefined8 FUN_0010472e(undefined8 param_1)

{
  return param_1;
}




long FUN_00103fa8(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00104032(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104618(param_1,param_3);
                    /* try { // try from 0010406c to 00104070 has its CatchHandler @ 00104073 */
  FUN_0010464e(param_1,param_2);
  return;
}




void FUN_001050d7(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103480(undefined8 param_1)

{
  FUN_0010350c(param_1);
  return;
}




void FUN_0010492e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104020(param_1);
  FUN_00104b69(uVar1);
  return;
}




void FUN_0010512f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001058e1(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010569d(void)

{
  return;
}




undefined8 FUN_00103928(undefined8 param_1)

{
  return param_1;
}




void FUN_001055ed(void)

{
  return;
}




void FUN_0010503f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00105074(param_1,param_2,param_3);
  return;
}




void FUN_00104c18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104dc2(param_2);
  uVar2 = FUN_00104dc2(param_1);
  FUN_00104dd4(uVar2,uVar1,param_3);
  return;
}




void FUN_001046a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104a11(param_1,param_2,param_3);
  return;
}




void FUN_00104e42(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104f33(param_2);
  uVar2 = FUN_00104f33(param_1);
  FUN_00104f59(uVar2,uVar1,param_3);
  return;
}




void FUN_001027f1(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001028e0(param_1,2);
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  snprintf(local_78,99,"%s",*puVar1);
  FUN_001050d7(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010483a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001048a8(param_3);
  uVar2 = FUN_001048a8(local_28);
  uVar3 = FUN_001048a8(local_20);
  uVar1 = FUN_00104aed(uVar3,uVar2,uVar1);
  FUN_00104b22(&local_30,uVar1);
  return;
}




void FUN_00102fa9(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_104;
  char *local_f8;
  undefined8 local_f0;
  size_t local_e8;
  char *local_e0;
  undefined local_d8 [32];
  undefined8 local_b8 [4];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034c0(local_d8);
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
  local_f8 = local_88;
  local_104 = -1;
  local_e8 = strlen(local_f8);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data[2] = '\0';
    local_98.sa_data[3] = '\0';
    local_98.sa_data[4] = '\0';
    local_98.sa_data[5] = '\0';
    local_98.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_98,0x10);
                    /* try { // try from 00103133 to 00103368 has its CatchHandler @ 001033c0 */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_104 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_104 != -1)) {
      sVar2 = recv(local_104,local_f8 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f8[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f8,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f8,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_104 != -1) {
    close(local_104);
  }
  local_f0 = FUN_001035c6(local_d8);
  FUN_00103616(local_b8,&local_f0);
  FUN_00103644(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001035c6(local_d8);
  FUN_00103616(local_b8,&local_f0);
  FUN_00103644(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001035c6(local_d8);
  FUN_00103616(local_b8,&local_f0);
  FUN_00103644(local_d8,local_b8[0],1,&local_f8);
  FUN_0010370a(local_b8,local_d8);
                    /* try { // try from 00103373 to 00103377 has its CatchHandler @ 001033a8 */
  FUN_001027f1(local_b8);
  FUN_0010357e(local_b8);
  FUN_0010357e(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010560e(void)

{
  return;
}




void FUN_001039d6(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00104442(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00103ef6(local_80);
      local_60 = FUN_001042d0(&local_88,&local_78);
      local_70 = FUN_00104532(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_001038c6(local_80);
                    /* try { // try from 00103ce0 to 00103d6b has its CatchHandler @ 00103e23 */
      FUN_0010440d(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_001038c6(local_80);
      puVar2 = (undefined8 *)FUN_00103928(&local_88);
      local_70 = FUN_00104569(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_001038c6(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00103928(&local_88);
      local_70 = FUN_00104569(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_001038c6(local_80);
      FUN_001038d8(*local_80,local_80[1],uVar1);
      FUN_0010388c(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010421e(local_38,param_1,param_4);
                    /* try { // try from 00103a60 to 00103c33 has its CatchHandler @ 00103e05 */
      local_50 = FUN_001042b2(local_38);
      local_78 = FUN_001035c6(local_80);
      local_48 = FUN_001042d0(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_001038c6(local_80);
        FUN_00104314(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00103928(&local_88);
        FUN_0010436c(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00103928(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00103928(&local_88);
        FUN_001043bc(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_001038c6(local_80);
        lVar4 = FUN_0010440d(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_001038c6(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00103928(&local_88);
        FUN_00104314(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00103928(&local_88);
        FUN_001043bc(*puVar2,local_40,local_50);
      }
      FUN_0010427e(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_0010393a(param_1);
  local_18 = FUN_00103991(&local_38,&local_20);
  local_20 = FUN_00103ef6(local_30);
  uVar1 = FUN_00103f42(&local_20,local_18);
  FUN_001039d6(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00103ef6(local_30);
  FUN_00103f42(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001034e0(undefined8 param_1)

{
  FUN_0010382a(param_1);
  FUN_0010384a(param_1);
  return;
}




void FUN_00104618(undefined8 param_1,undefined8 param_2)

{
  FUN_001045ee(param_1,param_2);
  FUN_0010384a(param_1);
  return;
}




void FUN_00105259(undefined4 param_1)

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




void FUN_0010421e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_0010472e(param_3);
  uVar2 = FUN_00104718(param_1);
  FUN_00104740(*param_1,uVar2,uVar1);
  return;
}




int FUN_001055c8(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001046de(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010382a(undefined8 param_1)

{
  FUN_0010417e(param_1);
  return;
}




void FUN_00104dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001048a8(param_3);
  uVar2 = FUN_00104edd(local_28);
  uVar3 = FUN_00104edd(local_20);
  uVar1 = FUN_00104efe(uVar3,uVar2,uVar1);
  FUN_00104b22(&local_30,uVar1);
  return;
}




void FUN_001055e2(void)

{
  return;
}




undefined8 FUN_0010582a(undefined8 *param_1)

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




void FUN_001048f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104b38(param_1,param_2,param_3);
  return;
}




void FUN_00104314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001047a7(param_2);
  uVar2 = FUN_001047a7(param_1);
  FUN_001047f3(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00104a42(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_0010472e(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010346a(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00104098(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001041ea(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001048a8(undefined8 param_1)

{
  return param_1;
}




void FUN_001034a0(undefined8 param_1)

{
  FUN_001034e0(param_1);
  return;
}




void FUN_0010388c(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010418d(param_1,param_2,param_3);
  }
  return;
}




void FUN_00104c68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104e42(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00104b69(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00104d5d(param_1);
  puVar1 = (undefined8 *)FUN_00104d7b(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00104705(void)

{
  return;
}




void FUN_00105306(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00104740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010472e(param_3);
  FUN_00104a42(param_1,param_2,uVar1);
  return;
}




void FUN_00105603(void)

{
  return;
}




undefined8 FUN_001056df(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001056a8,local_18);
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




void FUN_001048ba(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_001051d8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104f33(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010502a(&local_10);
  FUN_00104828(uVar1);
  return;
}




undefined8 FUN_001045c1(undefined8 param_1,undefined8 param_2)

{
  FUN_001045ee(param_1,param_2);
  return param_1;
}




void FUN_00102904(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_104;
  char *local_f8;
  undefined8 local_f0;
  size_t local_e8;
  char *local_e0;
  undefined local_d8 [32];
  undefined8 local_b8 [4];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034c0(local_d8);
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
  local_f8 = local_88;
  local_104 = -1;
  local_e8 = strlen(local_f8);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data[2] = '\0';
    local_98.sa_data[3] = '\0';
    local_98.sa_data[4] = '\0';
    local_98.sa_data[5] = '\0';
    local_98.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_98,0x10);
                    /* try { // try from 00102a8e to 00102cc3 has its CatchHandler @ 00102d1b */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_104 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_104 != -1)) {
      sVar2 = recv(local_104,local_f8 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f8[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f8,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f8,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_104 != -1) {
    close(local_104);
  }
  local_f0 = FUN_001035c6(local_d8);
  FUN_00103616(local_b8,&local_f0);
  FUN_00103644(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001035c6(local_d8);
  FUN_00103616(local_b8,&local_f0);
  FUN_00103644(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001035c6(local_d8);
  FUN_00103616(local_b8,&local_f0);
  FUN_00103644(local_d8,local_b8[0],1,&local_f8);
  FUN_0010370a(local_b8,local_d8);
                    /* try { // try from 00102cce to 00102cd2 has its CatchHandler @ 00102d03 */
  FUN_00102629(local_b8);
  FUN_0010357e(local_b8);
  FUN_0010357e(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0010502a(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001041bf(undefined8 param_1,undefined8 param_2)

{
  FUN_00104705(param_1,param_2);
  return;
}




undefined8 FUN_001049b1(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104a9a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00104daa(void)

{
  return 0xfffffffffffffff;
}




long FUN_001042d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00103928(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00103928(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00105157(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00104b38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104d0f(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00104edd(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010420c(&local_10);
  return *puVar1;
}




undefined8 FUN_00103ef6(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103906(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001034c0(undefined8 param_1)

{
  FUN_001034a0(param_1);
  return;
}




undefined8 FUN_00104532(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00104983(param_1,param_2);
  }
  return uVar1;
}




void FUN_001051ad(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001045ee(undefined8 param_1,undefined8 param_2)

{
  FUN_001049fe(param_1,param_2);
  return;
}




undefined8 FUN_001040f0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001041ea(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010436c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104828(param_2);
  uVar2 = FUN_00104828(param_1);
  FUN_0010483a(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001055b9(void)

{
  return 0;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00108e90)();
  return;
}




undefined8 FUN_00103405(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001050d7("Calling good()...");
  FUN_001033f0();
  FUN_001050d7("Finished good()");
  FUN_001050d7("Calling bad()...");
  FUN_00102904();
  FUN_001050d7("Finished bad()");
  return 0;
}




long FUN_00104c99(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00105666(void)

{
  return;
}




undefined8 * FUN_00104e92(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_0010352c(long *param_1)

{
  FUN_0010388c(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00103480(param_1);
  return;
}




undefined8 FUN_00105807(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00104f59(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001048a8(param_3);
  uVar2 = FUN_001048a8(local_28);
  uVar3 = FUN_001048a8(local_20);
  uVar1 = FUN_0010503f(uVar3,uVar2,uVar1);
  FUN_00104b22(&local_30,uVar1);
  return;
}




void FUN_00105203(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010370a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00104020(param_2);
  FUN_00103fcf(&local_31,uVar1);
  uVar1 = FUN_00103fa8(param_2);
                    /* try { // try from 00103770 to 00103774 has its CatchHandler @ 001037dd */
  FUN_00104032(param_1,uVar1,&local_31);
  FUN_0010350c(&local_31);
  uVar2 = FUN_001038c6(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001040f0(param_2);
  uVar4 = FUN_00104098(param_2);
                    /* try { // try from 001037be to 001037c2 has its CatchHandler @ 001037fb */
  uVar1 = FUN_00104148(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010427e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104718(param_1);
  FUN_0010477d(*param_1,uVar1);
  return;
}




void FUN_00105692(void)

{
  return;
}




void FUN_00104d0f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001048a8(param_1);
  uVar1 = FUN_00104e92(uVar1,param_2,param_3);
  FUN_00104b22(&local_10,uVar1);
  return;
}




void FUN_00104a86(void)

{
  return;
}




ulong * FUN_00104954(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00105334(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_0010420c(undefined8 param_1)

{
  return param_1;
}




void FUN_00104a11(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104c18(param_1,param_2,param_3);
  return;
}




ulong FUN_00104442(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_0010492e(param_1);
  lVar2 = FUN_00103fa8(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00103fa8(local_40);
  local_30 = FUN_00103fa8(local_40);
  plVar3 = (long *)FUN_00104954(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00103fa8(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_0010492e(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_0010492e(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010418d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001046de(param_1,param_2,param_3);
  return;
}




void FUN_00103616(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103928(param_2);
  *param_1 = *puVar1;
  return;
}




bool FUN_001057ac(pthread_t *param_1)

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




undefined8 FUN_001047a7(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104a9a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00104dc2(undefined8 param_1)

{
  return param_1;
}




void FUN_001049fe(void)

{
  return;
}




undefined8 FUN_00104b22(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001033f0(void)

{
  FUN_00102d4b();
  FUN_00102fa9();
  return;
}




void FUN_0010567c(void)

{
  return;
}




void FUN_00104efe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104fc7(param_1,param_2,param_3);
  return;
}




void FUN_00104aed(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104c99(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103f42(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00103906(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010417e(void)

{
  return;
}




long FUN_00104718(long param_1)

{
  return param_1 + 8;
}




void FUN_00105671(void)

{
  return;
}



