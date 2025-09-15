
undefined8 FUN_00102d6f(void)

{
  return 1;
}




void FUN_0010167e(undefined8 *param_1)

{
  FUN_001016be(*param_1);
  return;
}




undefined8 FUN_00102d7e(void)

{
  return 0;
}




void FUN_001030a6(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102fcc(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101e38(undefined8 param_1)

{
  FUN_00101ee4(param_1);
  return;
}




void FUN_00102066(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001016be(local_20);
    uVar3 = FUN_001022ea(param_1);
    FUN_001022fc(uVar3,uVar2);
    FUN_00102326(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102508(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102570(undefined8 *param_1)

{
  FUN_00102736(*param_1);
  return;
}




void FUN_00101e98(undefined8 param_1)

{
  FUN_00101f04(param_1);
  return;
}




void FUN_001024c6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024b4(param_2);
  FUN_0010248a(param_1,uVar1);
  FUN_00101de2(param_1);
  return;
}




ulong FUN_00102b8c(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102432(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void _FINI_0(void)

{
  if (DAT_00107028 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101430();
    DAT_00107028 = 1;
    return;
  }
  return;
}




void FUN_00102948(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102972(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010299d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101dcb(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102e36(void)

{
  return;
}




void FUN_0010195a(void)

{
  long in_FS_OFFSET;
  undefined8 *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
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
  FUN_00101e78(local_c8);
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
  local_d0 = &local_88;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
                    /* try { // try from 00101a30 to 00101a7f has its CatchHandler @ 00101ad7 */
  FUN_00101f30(local_c8,&local_d0);
  FUN_00101f30(local_c8,&local_d0);
  FUN_00101f30(local_c8,&local_d0);
  FUN_00101f6a(local_a8,local_c8);
                    /* try { // try from 00101a8a to 00101a8e has its CatchHandler @ 00101abf */
  FUN_0010152a(local_a8);
  FUN_00101e98(local_a8);
  FUN_00101e98(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f6a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102196(param_2);
  FUN_00102145(&local_21,uVar1);
  FUN_001021a8(param_1,&local_21);
  FUN_00101ee4(&local_21);
  uVar1 = FUN_00102230(param_2);
  uVar2 = FUN_001021e0(param_2);
                    /* try { // try from 00101ff6 to 00101ffa has its CatchHandler @ 00101ffd */
  FUN_0010227c(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101d66(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010289c("Calling good()...");
  FUN_00101d51();
  FUN_0010289c("Finished good()");
  FUN_0010289c("Calling bad()...");
  FUN_00101710();
  FUN_0010289c("Finished bad()");
  return 0;
}




undefined8 FUN_0010160e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016a0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001021a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024b4(param_2);
  FUN_001024c6(param_1,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001015b0(param_1);
  fprintf(stdout,(char *)*puVar1);
  return;
}




undefined8 FUN_001024b4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102526(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




undefined8 FUN_00102230(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102508(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010156b(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001015b0(param_1);
  fprintf(stdout,"%s\n",*puVar1);
  return;
}




void FUN_001027c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102355(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101dcb(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102aa0(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102dde(void)

{
  return;
}




void FUN_00102e62(void)

{
  return;
}




void FUN_00102758(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010227c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_00102526(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102570(&local_18);
    FUN_00102592(local_10,uVar2);
    FUN_0010254c(&local_18);
  }
  return;
}




void FUN_00102626(undefined8 param_1)

{
  FUN_0010277f(param_1,1);
  return;
}




void FUN_001025f3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102758(param_1,param_2,param_3);
  return;
}




void FUN_00101de2(undefined8 param_1)

{
  FUN_00101e02(param_1);
  return;
}




void FUN_00102804(undefined8 param_1)

{
  FUN_00102872(param_1);
  return;
}




undefined8 FUN_00102872(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102355(undefined8 param_1)

{
  return param_1;
}




void FUN_00101eb8(undefined8 param_1)

{
  FUN_00102036(param_1);
  FUN_00101de2(param_1);
  return;
}




void FUN_00102326(undefined8 param_1,undefined8 param_2)

{
  FUN_001025f3(param_1,param_2,1);
  return;
}




void FUN_00102e41(void)

{
  return;
}




void FUN_00102a1e(undefined4 param_1)

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




void FUN_001029f3(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001015b0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010160e(param_1);
  FUN_0010165a(&local_18);
  FUN_0010167e(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102684(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001025f3(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102de9(void)

{
  return;
}




bool FUN_00102f71(pthread_t *param_1)

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




undefined8 FUN_00102368(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102626(param_1);
  uVar2 = FUN_001022ea(param_1);
  FUN_0010264a(local_38,uVar2,uVar1);
  uVar3 = FUN_00102355(param_2);
  uVar4 = FUN_001016be(uVar1);
  FUN_001026c3(uVar2,uVar4,uVar3);
  FUN_00102700(local_38,0);
  FUN_00102684(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00101f04(undefined8 param_1)

{
  FUN_00102066(param_1);
  FUN_00101e38(param_1);
  return;
}




void FUN_001016a0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102dd3(void)

{
  return;
}




void FUN_00102e20(void)

{
  return;
}




int FUN_00102d8d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_0010245c(undefined8 param_1,undefined8 param_2)

{
  FUN_0010248a(param_1,param_2);
  return param_1;
}




undefined8 FUN_00102ea4(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102e6d,local_18);
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




void FUN_00102dc8(void)

{
  return;
}




void FUN_0010264a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001027ad(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101ee4(undefined8 param_1)

{
  FUN_00102056(param_1);
  return;
}




void FUN_00102a78(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102e15(void)

{
  return;
}




undefined8 FUN_001016fe(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102fef(undefined8 *param_1)

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




void FUN_00101f30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010160e(param_1);
  FUN_001020e4(param_1,uVar1,param_2);
  return;
}




void FUN_0010152a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001015b0(param_1);
  fprintf(stdout,(char *)*puVar1);
  return;
}




void FUN_00102af9(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001021e0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102508(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010291c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102e57(void)

{
  return;
}




void FUN_00102acb(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101e78(undefined8 param_1)

{
  FUN_00101e58(param_1);
  return;
}




undefined8 FUN_00102145(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010245c(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102592(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102355(param_2);
  uVar2 = FUN_0010160e(param_1);
  FUN_001020e4(param_1,uVar2,uVar1);
  return;
}




void FUN_001025e0(void)

{
  return;
}




void FUN_00101710(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_e0;
  size_t local_d8;
  FILE *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e78(local_c8);
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
  local_e0 = local_88;
  local_d8 = strlen(local_e0);
  if (1 < 100 - local_d8) {
                    /* try { // try from 001017ea to 001018d2 has its CatchHandler @ 0010192a */
    local_d0 = fopen("/tmp/file.txt","r");
    if (local_d0 != (FILE *)0x0) {
      pcVar1 = fgets(local_e0 + local_d8,100 - (int)local_d8,local_d0);
      if (pcVar1 == (char *)0x0) {
        FUN_0010289c("fgets() failed");
        local_e0[local_d8] = '\0';
      }
      fclose(local_d0);
    }
  }
  FUN_00101f30(local_c8,&local_e0);
  FUN_00101f30(local_c8,&local_e0);
  FUN_00101f30(local_c8,&local_e0);
  FUN_00101f6a(local_a8,local_c8);
                    /* try { // try from 001018dd to 001018e1 has its CatchHandler @ 00101912 */
  FUN_001014e9(local_a8);
  FUN_00101e98(local_a8);
  FUN_00101e98(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102dbd(void)

{
  return;
}




void FUN_00102df4(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00102056(void)

{
  return;
}




void FUN_001022da(void)

{
  return;
}




void FUN_001022fc(undefined8 param_1,undefined8 param_2)

{
  FUN_001025e0(param_1,param_2);
  return;
}




void FUN_00102036(undefined8 param_1)

{
  FUN_001022da(param_1);
  return;
}




void FUN_001020e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00102355(param_3);
  p_Var2 = (_List_node_base *)FUN_00102368(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102432(param_1,1);
  return;
}




undefined8 FUN_001027ad(undefined8 param_1)

{
  return param_1;
}




long * FUN_0010165a(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_0010248a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102722(param_1,param_2);
  return;
}




void FUN_0010289c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102db2(void)

{
  return;
}




void FUN_0010277f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102822(param_1,param_2,0);
  return;
}




void FUN_00102da7(void)

{
  return;
}




void FUN_001016be(long param_1)

{
  FUN_001016e0(param_1 + 0x10);
  return;
}




undefined8 FUN_001022ea(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e2b(void)

{
  return;
}




undefined8 FUN_00102884(void)

{
  return 0x555555555555555;
}




void FUN_00102736(long param_1)

{
  FUN_00102804(param_1 + 0x10);
  return;
}




void FUN_00102822(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102884(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001028c2(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102b2c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102e6d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102dff(void)

{
  return;
}




ulong FUN_00102c90(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040bc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e4c(void)

{
  return;
}




void FUN_00101e58(undefined8 param_1)

{
  FUN_00101eb8(param_1);
  return;
}




long FUN_00102700(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001028f4(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 * FUN_0010254c(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00101e02(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_001016e0(undefined8 param_1)

{
  FUN_001016fe(param_1);
  return;
}




void FUN_001029c8(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102e0a(void)

{
  return;
}




void FUN_001030e0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103087(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




void FUN_001026c3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102355(param_3);
  FUN_001027c0(param_1,param_2,uVar1);
  return;
}




void FUN_00103068(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102722(void)

{
  return;
}




void FUN_00103150(void)

{
  return;
}




void FUN_00101d51(void)

{
  FUN_0010195a();
  FUN_00101b07();
  return;
}




void FUN_00101b07(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_e0;
  size_t local_d8;
  FILE *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e78(local_c8);
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
  local_e0 = local_88;
  local_d8 = strlen(local_e0);
  if (1 < 100 - local_d8) {
                    /* try { // try from 00101be1 to 00101cc9 has its CatchHandler @ 00101d21 */
    local_d0 = fopen("/tmp/file.txt","r");
    if (local_d0 != (FILE *)0x0) {
      pcVar1 = fgets(local_e0 + local_d8,100 - (int)local_d8,local_d0);
      if (pcVar1 == (char *)0x0) {
        FUN_0010289c("fgets() failed");
        local_e0[local_d8] = '\0';
      }
      fclose(local_d0);
    }
  }
  FUN_00101f30(local_c8,&local_e0);
  FUN_00101f30(local_c8,&local_e0);
  FUN_00101f30(local_c8,&local_e0);
  FUN_00101f6a(local_a8,local_c8);
                    /* try { // try from 00101cd4 to 00101cd8 has its CatchHandler @ 00101d09 */
  FUN_0010156b(local_a8);
  FUN_00101e98(local_a8);
  FUN_00101e98(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102196(undefined8 param_1)

{
  return param_1;
}



