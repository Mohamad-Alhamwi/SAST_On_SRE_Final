
void FUN_00103911(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103aef(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103df6(void)

{
  return;
}




void FUN_00103ac7(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010322b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103430(param_1,param_2,param_3);
  return;
}




void FUN_00101cde(undefined8 param_1)

{
  FUN_00101cbe(param_1);
  return;
}




undefined8 FUN_001035da(undefined8 param_1)

{
  return param_1;
}




void FUN_00103305(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034b1(param_1,param_2,param_3);
  return;
}




void FUN_00103ebc(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101cfe(undefined8 param_1)

{
  FUN_00102048(param_1);
  FUN_00102068(param_1);
  return;
}




void FUN_00102966(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ec6(param_1,param_2,param_3);
  return;
}




void FUN_001029dd(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f23(param_1,param_2);
  return;
}




ulong * FUN_00103593(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_0010283e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b32(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102fc5(param_2);
  uVar2 = FUN_00102fc5(param_1);
  FUN_00103011(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103575(undefined8 param_1)

{
  FUN_001035c2(param_1);
  return;
}




void FUN_00103430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001035da(param_2);
  uVar2 = FUN_001035da(param_1);
  FUN_001035ec(uVar2,uVar1,param_3);
  return;
}




void FUN_00101c9e(undefined8 param_1)

{
  FUN_00101d2a(param_1);
  return;
}




void FUN_0010365a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103747(param_2);
  uVar2 = FUN_00103747(param_1);
  FUN_0010376d(uVar2,uVar1,param_3);
  return;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101410();
    DAT_00108020 = 1;
    return;
  }
  return;
}




ulong FUN_00103bdb(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050f8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001014c9(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = (int *)FUN_001016f4(param_1,2);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103943(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_001038eb("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010157f(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = (int *)FUN_001016f4(param_1,2);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103943(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_001038eb("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103e2d(void)

{
  return;
}




void FUN_00103112(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103350(param_1,param_2,param_3);
  return;
}




void FUN_00102c2b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103112(param_1,param_2,param_3);
  return;
}




void FUN_00103b1a(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00102146(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103046(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f9b(undefined8 param_1,undefined8 param_2)

{
  FUN_0010329e(param_1,param_2);
  return;
}




void FUN_00102ad0(undefined8 param_1)

{
  FUN_00102f36(param_1);
  return;
}




void FUN_00103e85(void)

{
  return;
}




long FUN_001034b1(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_001040f5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102d50(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0010319d(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103e59(void)

{
  return;
}




void FUN_00103e01(void)

{
  return;
}




void FUN_00103747(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010383e(&local_10);
  FUN_00103046(uVar1);
  return;
}




void FUN_00103a17(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103a42(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010401b(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103b7b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010365a(param_1,param_2,param_3);
  return;
}




void FUN_00103527(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001030c6(param_1);
  uVar1 = FUN_001036aa(uVar1,param_2,param_3);
  FUN_0010333a(&local_10,uVar1);
  return;
}




void FUN_00102a3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102f4c(param_3);
  uVar2 = FUN_00102f36(param_1);
  FUN_00102f5e(*param_1,uVar2,uVar1);
  return;
}




void FUN_00101a50(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cde(local_58);
  local_64 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_64 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_64 = rand();
    local_64 = local_64 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_60 = FUN_00101de4(local_58);
  FUN_00101e34(local_38,&local_60);
                    /* try { // try from 00101b02 to 00101b97 has its CatchHandler @ 00101be3 */
  FUN_00101e62(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101de4(local_58);
  FUN_00101e34(local_38,&local_60);
  FUN_00101e62(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101de4(local_58);
  FUN_00101e34(local_38,&local_60);
  FUN_00101e62(local_58,local_38[0],1,&local_64);
  FUN_00101f28(local_38,local_58);
                    /* try { // try from 00101b9f to 00101ba3 has its CatchHandler @ 00101bce */
  FUN_00101635(local_38);
  FUN_00101d9c(local_38);
  FUN_00101d9c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void * FUN_00103888(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00101f28(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010283e(param_2);
  FUN_001027ed(&local_31,uVar1);
  uVar1 = FUN_001027c6(param_2);
                    /* try { // try from 00101f8e to 00101f92 has its CatchHandler @ 00101ffb */
  FUN_00102850(param_1,uVar1,&local_31);
  FUN_00101d2a(&local_31);
  uVar2 = FUN_001020e4(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010290e(param_2);
  uVar4 = FUN_001028b6(param_2);
                    /* try { // try from 00101fdc to 00101fe0 has its CatchHandler @ 00102019 */
  uVar1 = FUN_00102966(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103011(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032d0(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102714(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102124(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103943(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103eb1(void)

{
  return;
}




void FUN_001032b2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001032d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103480(param_1,param_2,param_3);
  return;
}




void FUN_00103148(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010283e(param_1);
  FUN_00103381(uVar1);
  return;
}




undefined8 FUN_0010333a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




int FUN_00103ddc(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102158(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102a08(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103e0c(void)

{
  return;
}




void FUN_00102f23(void)

{
  return;
}




void FUN_0010376d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001030c6(param_3);
  uVar2 = FUN_001030c6(local_28);
  uVar3 = FUN_001030c6(local_20);
  uVar1 = FUN_00103853(uVar3,uVar2,uVar1);
  FUN_0010333a(&local_30,uVar1);
  return;
}




void FUN_00101718(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cde(local_58);
  local_64 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_64 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_64 = rand();
    local_64 = local_64 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_60 = FUN_00101de4(local_58);
  FUN_00101e34(local_38,&local_60);
                    /* try { // try from 001017ca to 0010185f has its CatchHandler @ 001018ab */
  FUN_00101e62(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101de4(local_58);
  FUN_00101e34(local_38,&local_60);
  FUN_00101e62(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101de4(local_58);
  FUN_00101e34(local_38,&local_60);
  FUN_00101e62(local_58,local_38[0],1,&local_64);
  FUN_00101f28(local_38,local_58);
                    /* try { // try from 00101867 to 0010186b has its CatchHandler @ 00101896 */
  FUN_001014c9(local_38);
  FUN_00101d9c(local_38);
  FUN_00101d9c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102fc5(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032b2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001016f4(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_00103b48(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010325c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102f4c(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101c87(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00104120(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_001035c2(void)

{
  return 0x1fffffffffffffff;
}




ulong * FUN_0010316e(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102048(undefined8 param_1)

{
  FUN_0010299c(param_1);
  return;
}




undefined8 FUN_001027ed(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ddf(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined4 * FUN_001036aa(undefined4 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  long local_10;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_10 = param_2; local_10 != 0; local_10 = local_10 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




ulong FUN_00103cdf(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00105100,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103997(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103853(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103888(param_1,param_2,param_3);
  return;
}




void FUN_001040d6(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101e62(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00102158(param_1);
  local_18 = FUN_001021af(&local_38,&local_20);
  local_20 = FUN_00102714(local_30);
  uVar1 = FUN_00102760(&local_20,local_18);
  FUN_001021f4(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102714(local_30);
  FUN_00102760(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020f6(undefined8 param_1,undefined8 param_2)

{
  FUN_001029dd(param_1,param_2);
  return;
}




void FUN_00101d2a(undefined8 param_1)

{
  FUN_0010209a(param_1);
  return;
}




void FUN_00103e6f(void)

{
  return;
}




long FUN_001027c6(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




undefined8 FUN_00103381(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_00103575(param_1);
  puVar1 = (undefined8 *)FUN_00103593(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00102bda(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001030c6(param_2);
  uVar2 = FUN_001030c6(param_1);
  FUN_001030d8(uVar2,uVar1,param_3);
  return;
}




void FUN_00101e34(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102146(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103218(void)

{
  return;
}




void FUN_00104190(void)

{
  return;
}




void FUN_001039ec(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001020e4(undefined8 param_1)

{
  return param_1;
}




void FUN_001018d5(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cde(local_58);
  local_64 = 7;
  local_60 = FUN_00101de4(local_58);
  FUN_00101e34(local_38,&local_60);
                    /* try { // try from 00101945 to 001019da has its CatchHandler @ 00101a26 */
  FUN_00101e62(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101de4(local_58);
  FUN_00101e34(local_38,&local_60);
  FUN_00101e62(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101de4(local_58);
  FUN_00101e34(local_38,&local_60);
  FUN_00101e62(local_58,local_38[0],1,&local_64);
  FUN_00101f28(local_38,local_58);
                    /* try { // try from 001019e2 to 001019e6 has its CatchHandler @ 00101a11 */
  FUN_0010157f(local_38);
  FUN_00101d9c(local_38);
  FUN_00101d9c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e36(param_1,param_3);
                    /* try { // try from 0010288a to 0010288e has its CatchHandler @ 00102891 */
  FUN_00102e6c(param_1,param_2);
  return;
}




void FUN_00103e9b(void)

{
  return;
}




void FUN_00103e17(void)

{
  return;
}




void * FUN_001037db(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




undefined8 FUN_00101c22(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001038eb("Calling good()...");
  FUN_00101c0d();
  FUN_001038eb("Finished good()");
  FUN_001038eb("Calling bad()...");
  FUN_00101718();
  FUN_001038eb("Finished bad()");
  return 0;
}




void FUN_00103058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001030c6(param_3);
  uVar2 = FUN_001030c6(local_28);
  uVar3 = FUN_001030c6(local_20);
  uVar1 = FUN_00103305(uVar3,uVar2,uVar1);
  FUN_0010333a(&local_30,uVar1);
  return;
}




void FUN_00103350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103527(param_1,param_2,param_3);
  return;
}




void FUN_00103a6d(undefined4 param_1)

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




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_001021f4(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
    if ((ulong)(param_1[2] - param_1[1] >> 2) < param_3) {
      local_68 = FUN_00102c60(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102714(local_80);
      local_60 = FUN_00102aee(&local_88,&local_78);
      local_70 = FUN_00102d50(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_001020e4(local_80);
                    /* try { // try from 001024fe to 00102589 has its CatchHandler @ 00102641 */
      FUN_00102c2b(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_001020e4(local_80);
      puVar2 = (undefined8 *)FUN_00102146(&local_88);
      local_70 = FUN_00102d87(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_001020e4(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00102146(&local_88);
      local_70 = FUN_00102d87(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_001020e4(local_80);
      FUN_001020f6(*local_80,local_80[1],uVar1);
      FUN_001020aa(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00102a3c(local_38,param_1,param_4);
                    /* try { // try from 0010227e to 00102451 has its CatchHandler @ 00102623 */
      local_50 = FUN_00102ad0(local_38);
      local_78 = FUN_00101de4(local_80);
      local_48 = FUN_00102aee(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_001020e4(local_80);
        FUN_00102b32(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_00102146(&local_88);
        FUN_00102b8a(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00102146(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00102146(&local_88);
        FUN_00102bda(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_001020e4(local_80);
        lVar4 = FUN_00102c2b(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_001020e4(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00102146(&local_88);
        FUN_00102b32(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_00102146(&local_88);
        FUN_00102bda(*puVar2,local_40,local_50);
      }
      FUN_00102a9c(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102ddf(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e0c(param_1,param_2);
  return param_1;
}




void FUN_00101c0d(void)

{
  FUN_001018d5();
  FUN_00101a50();
  return;
}




void FUN_00102d87(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001031cb(param_2);
  uVar2 = FUN_001031cb(param_1);
  FUN_00103011(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00101de4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102124(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010403e(undefined8 *param_1)

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




void FUN_00102068(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_001035ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001030c6(param_3);
  uVar2 = FUN_001036f1(local_28);
  uVar3 = FUN_001036f1(local_20);
  uVar1 = FUN_00103712(uVar3,uVar2,uVar1);
  FUN_0010333a(&local_30,uVar1);
  return;
}




void FUN_00102f5e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102f4c(param_3);
  FUN_0010325c(param_1,param_2,uVar1);
  return;
}




void FUN_00103e4e(void)

{
  return;
}




void FUN_00103e90(void)

{
  return;
}




void FUN_00102e6c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102d50(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




undefined8 FUN_001030c6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103dbe(void)

{
  return 1;
}




undefined8 FUN_0010383e(undefined8 *param_1)

{
  return *param_1;
}




bool FUN_00103fc0(pthread_t *param_1)

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




void FUN_00102ec6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010322b(param_1,param_2,param_3);
  return;
}




void FUN_001040b7(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ee8)();
  return;
}




void FUN_00103e22(void)

{
  return;
}




void FUN_00101d9c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020e4(param_1);
  FUN_001020f6(*param_1,param_1[1],uVar1);
  FUN_00101d4a(param_1);
  return;
}




void FUN_001030d8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_001033ea(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001035c2(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




void FUN_00103ea6(void)

{
  return;
}




void FUN_00101d4a(long *param_1)

{
  FUN_001020aa(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00101c9e(param_1);
  return;
}




undefined8 FUN_00102f4c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103712(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001037db(param_1,param_2,param_3);
  return;
}




void FUN_001038eb(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102efc(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001039c1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102124(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00102760(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00102124(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101c87(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010319d(undefined8 param_1,undefined8 param_2)

{
  FUN_001033ea(param_1,param_2,0);
  return;
}




void FUN_00103e7a(void)

{
  return;
}




void FUN_0010209a(void)

{
  return;
}




void FUN_00101cbe(undefined8 param_1)

{
  FUN_00101cfe(param_1);
  return;
}




long FUN_001021af(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102a2a(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102a2a(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00102e36(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e0c(param_1,param_2);
  FUN_00102068(param_1);
  return;
}




void FUN_00103e64(void)

{
  return;
}




undefined8 FUN_00103ef3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103ebc,local_18);
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




void FUN_00102b8a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103046(param_2);
  uVar2 = FUN_00103046(param_1);
  FUN_00103058(uVar2,uVar1,param_3);
  return;
}




ulong FUN_00102c60(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00103148(param_1);
  lVar2 = FUN_001027c6(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001027c6(local_40);
  local_30 = FUN_001027c6(local_40);
  plVar3 = (long *)FUN_0010316e(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001027c6(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00103148(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00103148(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102e0c(undefined8 param_1,undefined8 param_2)

{
  FUN_00103218(param_1,param_2);
  return;
}




void FUN_00101635(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  long in_FS_OFFSET;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = (int *)FUN_001016f4(param_1,2);
  iVar1 = *piVar2;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_001038eb("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103943(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_001020aa(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001029ab(param_1,param_2,param_3);
  }
  return;
}




void FUN_00103e43(void)

{
  return;
}




void FUN_0010396b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010299c(void)

{
  return;
}




undefined8 FUN_0010290e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102a08(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a9c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102f36(param_1);
  FUN_00102f9b(*param_1,uVar1);
  return;
}




undefined8 FUN_001036f1(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102a2a(&local_10);
  return *puVar1;
}




undefined8 FUN_00102a2a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001028b6(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102a08(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103dcd(void)

{
  return 0;
}




void FUN_00102a08(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_001031cb(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032b2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102f36(long param_1)

{
  return param_1 + 8;
}




void FUN_001029ab(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102efc(param_1,param_2,param_3);
  return;
}




void FUN_00103e38(void)

{
  return;
}




long FUN_00102aee(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102146(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102146(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_0010329e(void)

{
  return;
}



