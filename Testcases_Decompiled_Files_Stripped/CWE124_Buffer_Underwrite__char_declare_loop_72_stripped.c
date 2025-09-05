
void FUN_0010381b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00103a35(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c7c(void)

{
  return;
}




void FUN_001039d5(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103126(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032d6(param_1,param_2,param_3);
  return;
}




void FUN_00101bec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f34(param_1);
  FUN_00101f46(*param_1,param_1[1],uVar1);
  FUN_00101b9a(param_1);
  return;
}




undefined8 FUN_0010354b(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010287a(&local_10);
  return *puVar1;
}




void FUN_00103240(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103418(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00103e98(undefined8 *param_1)

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




undefined8 FUN_00101c34(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f74(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102858(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001028ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d86(param_1);
  FUN_00102deb(*param_1,uVar1);
  return;
}




void FUN_001034b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001035a1(param_2);
  uVar2 = FUN_001035a1(param_1);
  FUN_001035c7(uVar2,uVar1,param_3);
  return;
}




void FUN_001027b6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d16(param_1,param_2,param_3);
  return;
}




ulong FUN_00102ab0(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f9c(param_1);
  lVar2 = FUN_00102616(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102616(local_40);
  local_30 = FUN_00102616(local_40);
  plVar3 = (long *)FUN_00102fc2(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102616(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f9c(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f9c(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103442(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f16(param_3);
  uVar2 = FUN_0010354b(local_28);
  uVar3 = FUN_0010354b(local_20);
  uVar1 = FUN_0010356c(uVar3,uVar2,uVar1);
  FUN_00103190(&local_30,uVar1);
  return;
}




void FUN_001033cb(undefined8 param_1)

{
  FUN_00103418(param_1);
  return;
}




void FUN_00101b7a(undefined8 param_1)

{
  FUN_00101eea(param_1);
  return;
}




void FUN_001035a1(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103698(&local_10);
  FUN_00102e96(uVar1);
  return;
}




void FUN_001015a2(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_0010165c(param_1,2);
  lVar1 = *plVar2;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)(lVar1 + local_88) = local_78[local_88];
  }
  *(undefined *)(lVar1 + 99) = 0;
  FUN_00103745(lVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




int FUN_00103c36(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




long FUN_0010165c(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00101680(void)

{
  long in_FS_OFFSET;
  undefined *local_d8;
  undefined8 local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [3];
  undefined auStack_90 [8];
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b2e(local_c8);
  memset(local_88,0x41,99);
  local_25 = 0;
  local_d8 = auStack_90;
  local_d0 = FUN_00101c34(local_c8);
  FUN_00101c84(local_a8,&local_d0);
                    /* try { // try from 00101726 to 001017eb has its CatchHandler @ 00101843 */
  FUN_00101cb2(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101c34(local_c8);
  FUN_00101c84(local_a8,&local_d0);
  FUN_00101cb2(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101c34(local_c8);
  FUN_00101c84(local_a8,&local_d0);
  FUN_00101cb2(local_c8,local_a8[0],1,&local_d8);
  FUN_00101d78(local_a8,local_c8);
                    /* try { // try from 001017f6 to 001017fa has its CatchHandler @ 0010182b */
  FUN_001014e9(local_a8);
  FUN_00101bec(local_a8);
  FUN_00101bec(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103cb3(void)

{
  return;
}




undefined8 FUN_0010301f(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103108(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102c2f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c5c(param_1,param_2);
  return param_1;
}




ulong FUN_00103b39(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102564(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f74(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f66(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031a6(param_1,param_2,param_3);
  return;
}




void FUN_00102ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f16(param_3);
  uVar2 = FUN_00102f16(local_28);
  uVar3 = FUN_00102f16(local_20);
  uVar1 = FUN_0010315b(uVar3,uVar2,uVar1);
  FUN_00103190(&local_30,uVar1);
  return;
}




void FUN_00102a2a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f16(param_2);
  uVar2 = FUN_00102f16(param_1);
  FUN_00102f28(uVar2,uVar1,param_3);
  return;
}




void FUN_00103d0b(void)

{
  return;
}




undefined8 FUN_00103418(void)

{
  return 0xfffffffffffffff;
}




void FUN_00102c86(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c5c(param_1,param_2);
  FUN_00101eb8(param_1);
  return;
}




void FUN_00103cdf(void)

{
  return;
}




void FUN_00103c87(void)

{
  return;
}




void FUN_001036ad(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036e2(param_1,param_2,param_3);
  return;
}




void FUN_00103949(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103974(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103f4f(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00103c27(void)

{
  return 0;
}




ulong * FUN_001033e9(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00103430(undefined8 param_1)

{
  return param_1;
}




void FUN_00102982(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e15(param_2);
  uVar2 = FUN_00102e15(param_1);
  FUN_00102e61(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101aee(undefined8 param_1)

{
  FUN_00101b7a(param_1);
  return;
}




void FUN_001037c5(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101efa(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001027fb(param_1,param_2,param_3);
  }
  return;
}




void FUN_00102f28(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




undefined8 FUN_0010268e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103846(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103e75(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001031a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010337d(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001031d7(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001033cb(param_1);
  puVar1 = (undefined8 *)FUN_001033e9(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_0010306c(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ee0)();
  return;
}




void FUN_00103286(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103430(param_2);
  uVar2 = FUN_00103430(param_1);
  FUN_00103442(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c71(void)

{
  return;
}




undefined8 FUN_001025b0(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f74(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c92(void)

{
  return;
}




void FUN_00102deb(undefined8 param_1,undefined8 param_2)

{
  FUN_001030f4(param_1,param_2);
  return;
}




void * FUN_001036e2(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00101a72(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103745("Calling good()...");
  FUN_00101a62();
  FUN_00103745("Finished good()");
  FUN_00103745("Calling bad()...");
  FUN_00101680();
  FUN_00103745("Finished bad()");
  return 0;
}




undefined8 FUN_00102f16(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a62(void)

{
  FUN_00101873();
  return;
}




undefined8 FUN_00103c18(void)

{
  return 1;
}




void FUN_0010315b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103307(param_1,param_2,param_3);
  return;
}




undefined8 * FUN_00103500(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_0010307f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103286(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101f34(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010275e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102858(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001035c7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f16(param_3);
  uVar2 = FUN_00102f16(local_28);
  uVar3 = FUN_00102f16(local_20);
  uVar1 = FUN_001036ad(uVar3,uVar2,uVar1);
  FUN_00103190(&local_30,uVar1);
  return;
}




void FUN_00103c50(void)

{
  return;
}




void FUN_0010389c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010379d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101eea(void)

{
  return;
}




long FUN_00101fff(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010287a(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010287a(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101c84(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f96(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103cf5(void)

{
  return;
}




undefined8 FUN_00102706(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102858(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00103307(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00102bd7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010301f(param_2);
  uVar2 = FUN_0010301f(param_1);
  FUN_00102e61(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101eb8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103108(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103921(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101fa8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102858(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101ad7(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001027ec(void)

{
  return;
}




undefined8 FUN_00103d4d(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d16,local_18);
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




void FUN_00103c9d(void)

{
  return;
}




void FUN_00103745(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101b2e(undefined8 param_1)

{
  FUN_00101b0e(param_1);
  return;
}




void FUN_00102f9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010268e(param_1);
  FUN_001031d7(uVar1);
  return;
}




void FUN_001032d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034b0(param_1,param_2,param_3);
  return;
}




void FUN_001039a2(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_0010165c(param_1,2);
  lVar1 = *plVar2;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)(lVar1 + local_88) = local_78[local_88];
  }
  *(undefined *)(lVar1 + 99) = 0;
  FUN_00103745(lVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010263d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102c2f(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102d16(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010307f(param_1,param_2,param_3);
  return;
}




void FUN_00101b0e(undefined8 param_1)

{
  FUN_00101b4e(param_1);
  return;
}




void FUN_00102cbc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102ba0(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00101e98(undefined8 param_1)

{
  FUN_001027ec(param_1);
  return;
}




void FUN_00103f80(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101f46(undefined8 param_1,undefined8 param_2)

{
  FUN_0010282d(param_1,param_2);
  return;
}




void FUN_0010356c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103635(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102e96(undefined8 param_1)

{
  return param_1;
}




void FUN_00103cd4(void)

{
  return;
}




void FUN_00103d16(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




long FUN_00102d86(long param_1)

{
  return param_1 + 8;
}




ulong * FUN_00102fc2(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c5b(void)

{
  return;
}




void FUN_0010376b(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103f30(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00102d9c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ff0(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00103ca8(void)

{
  return;
}




void FUN_00101d78(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010268e(param_2);
  FUN_0010263d(&local_31,uVar1);
  uVar1 = FUN_00102616(param_2);
                    /* try { // try from 00101dde to 00101de2 has its CatchHandler @ 00101e4b */
  FUN_001026a0(param_1,uVar1,&local_31);
  FUN_00101b7a(&local_31);
  uVar2 = FUN_00101f34(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010275e(param_2);
  uVar4 = FUN_00102706(param_2);
                    /* try { // try from 00101e2c to 00101e30 has its CatchHandler @ 00101e69 */
  uVar1 = FUN_001027b6(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ff1(undefined8 param_1,undefined8 param_2)

{
  FUN_00103240(param_1,param_2,0);
  return;
}




void FUN_0010337d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102f16(param_1);
  uVar1 = FUN_00103500(uVar1,param_2,param_3);
  FUN_00103190(&local_10,uVar1);
  return;
}




bool FUN_00103e1a(pthread_t *param_1)

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




void FUN_00101cb2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101fa8(param_1);
  local_18 = FUN_00101fff(&local_38,&local_20);
  local_20 = FUN_00102564(local_30);
  uVar1 = FUN_001025b0(&local_20,local_18);
  FUN_00102044(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102564(local_30);
  FUN_001025b0(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e61(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103126(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103698(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001037f1(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102dae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d9c(param_3);
  FUN_001030b0(param_1,param_2,uVar1);
  return;
}




void FUN_001038c7(undefined4 param_1)

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




void FUN_00102044(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102ab0(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102564(local_80);
      local_60 = FUN_0010293e(&local_88,&local_78);
      local_70 = FUN_00102ba0(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101f34(local_80);
                    /* try { // try from 0010234e to 001023d9 has its CatchHandler @ 00102491 */
      FUN_00102a7b(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101f34(local_80);
      puVar2 = (undefined8 *)FUN_00101f96(&local_88);
      local_70 = FUN_00102bd7(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101f34(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f96(&local_88);
      local_70 = FUN_00102bd7(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101f34(local_80);
      FUN_00101f46(*local_80,local_80[1],uVar1);
      FUN_00101efa(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010288c(local_38,param_1,param_4);
                    /* try { // try from 001020ce to 001022a1 has its CatchHandler @ 00102473 */
      local_50 = FUN_00102920(local_38);
      local_78 = FUN_00101c34(local_80);
      local_48 = FUN_0010293e(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101f34(local_80);
        FUN_00102982(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f96(&local_88);
        FUN_001029da(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f96(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f96(&local_88);
        FUN_00102a2a(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101f34(local_80);
        lVar4 = FUN_00102a7b(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101f34(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f96(&local_88);
        FUN_00102982(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f96(&local_88);
        FUN_00102a2a(*puVar2,local_40,local_50);
      }
      FUN_001028ec(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_001026a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c86(param_1,param_3);
                    /* try { // try from 001026da to 001026de has its CatchHandler @ 001026e1 */
  FUN_00102cbc(param_1,param_2);
  return;
}




void FUN_00101b4e(undefined8 param_1)

{
  FUN_00101e98(param_1);
  FUN_00101eb8(param_1);
  return;
}




void FUN_001030b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d9c(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101ad7(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103d00(void)

{
  return;
}




void FUN_00101f74(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101b9a(long *param_1)

{
  FUN_00101efa(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101aee(param_1);
  return;
}




long FUN_00102616(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00102d73(void)

{
  return;
}




void FUN_00103cea(void)

{
  return;
}




void FUN_00103f11(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102ba0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102ff1(param_1,param_2);
  }
  return uVar1;
}




void FUN_00102c5c(undefined8 param_1,undefined8 param_2)

{
  FUN_0010306c(param_1,param_2);
  return;
}




void FUN_00102d4c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101873(void)

{
  long in_FS_OFFSET;
  undefined *local_d8;
  undefined8 local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b2e(local_c8);
  memset(local_88,0x41,99);
  local_25 = 0;
  local_d8 = local_88;
  local_d0 = FUN_00101c34(local_c8);
  FUN_00101c84(local_a8,&local_d0);
                    /* try { // try from 00101915 to 001019da has its CatchHandler @ 00101a32 */
  FUN_00101cb2(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101c34(local_c8);
  FUN_00101c84(local_a8,&local_d0);
  FUN_00101cb2(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101c34(local_c8);
  FUN_00101c84(local_a8,&local_d0);
  FUN_00101cb2(local_c8,local_a8[0],1,&local_d8);
  FUN_00101d78(local_a8,local_c8);
                    /* try { // try from 001019e5 to 001019e9 has its CatchHandler @ 00101a1a */
  FUN_001015a2(local_a8);
  FUN_00101bec(local_a8);
  FUN_00101bec(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101430();
    DAT_00108020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00101f96(undefined8 param_1)

{
  return param_1;
}




void FUN_00103cc9(void)

{
  return;
}




void FUN_00103871(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_0010287a(undefined8 param_1)

{
  return param_1;
}




void FUN_0010282d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d73(param_1,param_2);
  return;
}




void FUN_001029da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e96(param_2);
  uVar2 = FUN_00102e96(param_1);
  FUN_00102ea8(uVar2,uVar1,param_3);
  return;
}




void * FUN_00103635(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




long FUN_0010293e(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f96(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f96(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001027fb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d4c(param_1,param_2,param_3);
  return;
}




void FUN_00103c66(void)

{
  return;
}




void FUN_00102920(undefined8 param_1)

{
  FUN_00102d86(param_1);
  return;
}




void FUN_001030f4(void)

{
  return;
}




undefined8 FUN_00102e15(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103108(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010288c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d9c(param_3);
  uVar2 = FUN_00102d86(param_1);
  FUN_00102dae(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103cbe(void)

{
  return;
}




void FUN_00102a7b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f66(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103190(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



