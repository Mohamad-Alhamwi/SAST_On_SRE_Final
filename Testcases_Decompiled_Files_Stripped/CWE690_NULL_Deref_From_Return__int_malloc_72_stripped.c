
void FUN_001036cf(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103a5a(void)

{
  return 0;
}




void FUN_00103ad0(void)

{
  return;
}




undefined8 FUN_00103a4b(void)

{
  return 1;
}




undefined8 FUN_00102f43(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103137(param_1);
  puVar1 = (undefined8 *)FUN_00103155(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00101ae4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001023fa(param_2);
  FUN_001023a9(&local_31,uVar1);
  uVar1 = FUN_00102382(param_2);
                    /* try { // try from 00101b4a to 00101b4e has its CatchHandler @ 00101bb7 */
  FUN_0010240c(param_1,uVar1,&local_31);
  FUN_001018e6(&local_31);
  uVar2 = FUN_00101ca0(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001024ca(param_2);
  uVar4 = FUN_00102472(param_2);
                    /* try { // try from 00101b98 to 00101b9c has its CatchHandler @ 00101bd5 */
  uVar1 = FUN_00102522(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void * FUN_001033a1(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001030e9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102c82(param_1);
  uVar1 = FUN_0010326c(uVar1,param_2,param_3);
  FUN_00102efc(&local_10,uVar1);
  return;
}




void FUN_00103d82(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101c04(undefined8 param_1)

{
  FUN_00102558(param_1);
  return;
}




void FUN_0010268c(undefined8 param_1)

{
  FUN_00102af2(param_1);
  return;
}




void FUN_00102746(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c02(param_2);
  uVar2 = FUN_00102c02(param_1);
  FUN_00102c14(uVar2,uVar1,param_3);
  return;
}




void FUN_0010330d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103404(&local_10);
  FUN_00102c02(uVar1);
  return;
}




void FUN_001025c4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001029c8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102dd8(param_1,param_2);
  return;
}




void FUN_001032d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033a1(param_1,param_2,param_3);
  return;
}




void FUN_001031ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102c82(param_3);
  uVar2 = FUN_001032b7(local_28);
  uVar3 = FUN_001032b7(local_20);
  uVar1 = FUN_001032d8(uVar3,uVar2,uVar1);
  FUN_00102efc(&local_30,uVar1);
  return;
}




void FUN_001035d0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001019f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101d02(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103419(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010344e(param_1,param_2,param_3);
  return;
}




void FUN_001017cf(void)

{
  FUN_0010164c();
  return;
}




void FUN_00103a99(void)

{
  return;
}




undefined8 FUN_001017df(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103578("Calling good()...");
  FUN_001017cf();
  FUN_00103578("Finished good()");
  FUN_00103578("Calling bad()...");
  FUN_001014c9();
  FUN_00103578("Finished bad()");
  return 0;
}




undefined8 FUN_00101844(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103b07(void)

{
  return;
}




void FUN_00102e60(void)

{
  return;
}




void FUN_00102a82(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102deb(param_1,param_2,param_3);
  return;
}




int FUN_00103a69(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_001023fa(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102d8b(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e74(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d08(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023fa(param_1);
  FUN_00102f43(uVar1);
  return;
}




void FUN_00102943(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d8b(param_2);
  uVar2 = FUN_00102d8b(param_1);
  FUN_00102bcd(uVar2,uVar1,param_3,param_4);
  return;
}




bool FUN_00103c4d(pthread_t *param_1)

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




undefined8 * FUN_0010326c(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00102adf(void)

{
  return;
}




void FUN_00103b33(void)

{
  return;
}




void FUN_00103adb(void)

{
  return;
}




void FUN_00103578(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103808(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




ulong FUN_00103868(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103a8e(void)

{
  return;
}




void FUN_0010321c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010330d(param_2);
  uVar2 = FUN_0010330d(param_1);
  FUN_00103333(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001032b7(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001025e6(&local_10);
  return *puVar1;
}




ulong FUN_0010281c(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102d08(param_1);
  lVar2 = FUN_00102382(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102382(local_40);
  local_30 = FUN_00102382(local_40);
  plVar3 = (long *)FUN_00102d2e(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102382(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102d08(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102d08(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001018e6(undefined8 param_1)

{
  FUN_00101c56(param_1);
  return;
}




void FUN_00103679(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101d02(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d5d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fac(param_1,param_2,0);
  return;
}




void FUN_00102522(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102a82(param_1,param_2,param_3);
  return;
}




void FUN_001036fa(undefined4 param_1)

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




void FUN_00103d63(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103042(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010321c(param_1,param_2,param_3);
  return;
}




long FUN_00103073(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00102e74(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103137(undefined8 param_1)

{
  FUN_00103184(param_1);
  return;
}




void FUN_00103ac5(void)

{
  return;
}




void FUN_0010240c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001029f2(param_1,param_3);
                    /* try { // try from 00102446 to 0010244a has its CatchHandler @ 0010244d */
  FUN_00102a28(param_1,param_2);
  return;
}




void FUN_00103ae6(void)

{
  return;
}




void FUN_00102c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102c82(param_3);
  uVar2 = FUN_00102c82(local_28);
  uVar3 = FUN_00102c82(local_20);
  uVar1 = FUN_00102ec7(uVar3,uVar2,uVar1);
  FUN_00102efc(&local_30,uVar1);
  return;
}




void FUN_0010359e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010189a(undefined8 param_1)

{
  FUN_0010187a(param_1);
  return;
}




ulong * FUN_00102d2e(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_0010187a(undefined8 param_1)

{
  FUN_001018ba(param_1);
  return;
}




void FUN_00103a83(void)

{
  return;
}




void FUN_00102fac(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103184(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00103333(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102c82(param_3);
  uVar2 = FUN_00102c82(local_28);
  uVar3 = FUN_00102c82(local_20);
  uVar1 = FUN_00103419(uVar3,uVar2,uVar1);
  FUN_00102efc(&local_30,uVar1);
  return;
}




void FUN_00102e92(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103042(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101d14(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001025c4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102599(undefined8 param_1,undefined8 param_2)

{
  FUN_00102adf(param_1,param_2);
  return;
}




void * FUN_0010344e(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103aa4(void)

{
  return;
}




void FUN_0010377c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010364e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101ce0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_00102382(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00101c24(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103b49(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102567(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ab8(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103184(void)

{
  return 0xfffffffffffffff;
}




void FUN_00102a28(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_0010290c(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00101cb2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102599(param_1,param_2);
  return;
}




void FUN_00102f12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030e9(param_1,param_2,param_3);
  return;
}




void FUN_001037d5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_0010231c(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101ce0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001018ba(undefined8 param_1)

{
  FUN_00101c04(param_1);
  FUN_00101c24(param_1);
  return;
}




undefined8 FUN_001025e6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103ccb(undefined8 *param_1)

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




void FUN_00103af1(void)

{
  return;
}




void FUN_001035f8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101958(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ca0(param_1);
  FUN_00101cb2(*param_1,param_1[1],uVar1);
  FUN_00101906(param_1);
  return;
}




void FUN_00102dd8(void)

{
  return;
}




ulong * FUN_00103155(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




ulong FUN_0010396c(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010164c(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010189a(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(4);
  local_60 = FUN_001019a0(local_58);
  FUN_001019f0(local_38,&local_60);
                    /* try { // try from 001016c4 to 00101759 has its CatchHandler @ 001017a5 */
  FUN_00101a1e(local_58,local_38[0],1,&local_68);
  local_60 = FUN_001019a0(local_58);
  FUN_001019f0(local_38,&local_60);
  FUN_00101a1e(local_58,local_38[0],1,&local_68);
  local_60 = FUN_001019a0(local_58);
  FUN_001019f0(local_38,&local_60);
  FUN_00101a1e(local_58,local_38[0],1,&local_68);
  FUN_00101ae4(local_38,local_58);
                    /* try { // try from 00101761 to 00101765 has its CatchHandler @ 00101790 */
  FUN_001034ff(local_38);
  FUN_00101958(local_38);
  FUN_00101958(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001024ca(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001025c4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102b08(undefined8 param_1)

{
  return param_1;
}




void FUN_00101906(long *param_1)

{
  FUN_00101c66(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_0010185a(param_1);
  return;
}




long FUN_00102af2(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00101ca0(undefined8 param_1)

{
  return param_1;
}




long FUN_00101d6b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001025e6(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001025e6(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00103404(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102cd2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f12(param_1,param_2,param_3);
  return;
}




void FUN_00103b28(void)

{
  return;
}




undefined8 FUN_00103ca8(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00102b81(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e74(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102deb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ff2(param_1,param_2,param_3);
  return;
}




void FUN_001034b1(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103554(param_1,2);
  __ptr = (undefined4 *)*puVar1;
  *__ptr = 5;
  FUN_001035d0(*__ptr);
  free(__ptr);
  return;
}




void FUN_00103aaf(void)

{
  return;
}




void FUN_00103624(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103e20(void)

{
  return;
}




void FUN_00102bcd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e92(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_00103afc(void)

{
  return;
}




void FUN_00101c66(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102567(param_1,param_2,param_3);
  }
  return;
}




void FUN_00102e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102b08(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101844(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_0010319c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d44(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101c56(void)

{
  return;
}




void FUN_00102c94(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




long FUN_00103554(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_001036a4(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102c02(undefined8 param_1)

{
  return param_1;
}




void FUN_001037a7(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001023a9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010299b(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101410();
    DAT_00107020 = 1;
    return;
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee8)();
  return;
}




undefined8 FUN_001019a0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ce0(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102558(void)

{
  return;
}




void FUN_00102ec7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103073(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103b80(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103b49,local_18);
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




void FUN_00101db0(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_0010281c(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001022d0(local_80);
      local_60 = FUN_001026aa(&local_88,&local_78);
      local_70 = FUN_0010290c(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101ca0(local_80);
                    /* try { // try from 001020ba to 00102145 has its CatchHandler @ 001021fd */
      FUN_001027e7(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101ca0(local_80);
      puVar2 = (undefined8 *)FUN_00101d02(&local_88);
      local_70 = FUN_00102943(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101ca0(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101d02(&local_88);
      local_70 = FUN_00102943(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101ca0(local_80);
      FUN_00101cb2(*local_80,local_80[1],uVar1);
      FUN_00101c66(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001025f8(local_38,param_1,param_4);
                    /* try { // try from 00101e3a to 0010200d has its CatchHandler @ 001021df */
      local_50 = FUN_0010268c(local_38);
      local_78 = FUN_001019a0(local_80);
      local_48 = FUN_001026aa(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101ca0(local_80);
        FUN_001026ee(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101d02(&local_88);
        FUN_00102746(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101d02(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101d02(&local_88);
        FUN_00102796(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101ca0(local_80);
        lVar4 = FUN_001027e7(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101ca0(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101d02(&local_88);
        FUN_001026ee(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101d02(&local_88);
        FUN_00102796(*puVar2,local_40,local_50);
      }
      FUN_00102658(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a1e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101d14(param_1);
  local_18 = FUN_00101d6b(&local_38,&local_20);
  local_20 = FUN_001022d0(local_30);
  uVar1 = FUN_0010231c(&local_20,local_18);
  FUN_00101db0(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001022d0(local_30);
  FUN_0010231c(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102472(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001025c4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102b57(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e60(param_1,param_2);
  return;
}




void FUN_00103b3e(void)

{
  return;
}




void FUN_00103db0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001029f2(undefined8 param_1,undefined8 param_2)

{
  FUN_001029c8(param_1,param_2);
  FUN_00101c24(param_1);
  return;
}




void FUN_00102ab8(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102b1a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b08(param_3);
  FUN_00102e1c(param_1,param_2,uVar1);
  return;
}




void FUN_0010185a(undefined8 param_1)

{
  FUN_001018e6(param_1);
  return;
}




void FUN_001014c9(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010189a(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(4);
  local_60 = FUN_001019a0(local_58);
  FUN_001019f0(local_38,&local_60);
                    /* try { // try from 00101541 to 001015d6 has its CatchHandler @ 00101622 */
  FUN_00101a1e(local_58,local_38[0],1,&local_68);
  local_60 = FUN_001019a0(local_58);
  FUN_001019f0(local_38,&local_60);
  FUN_00101a1e(local_58,local_38[0],1,&local_68);
  local_60 = FUN_001019a0(local_58);
  FUN_001019f0(local_38,&local_60);
  FUN_00101a1e(local_58,local_38[0],1,&local_68);
  FUN_00101ae4(local_38,local_58);
                    /* try { // try from 001015de to 001015e2 has its CatchHandler @ 0010160d */
  FUN_001034b1(local_38);
  FUN_00101958(local_38);
  FUN_00101958(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001022d0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ce0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b1d(void)

{
  return;
}




void FUN_00103754(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




long FUN_001026aa(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101d02(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101d02(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102658(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102af2(param_1);
  FUN_00102b57(*param_1,uVar1);
  return;
}




undefined8 FUN_0010290c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102d5d(param_1,param_2);
  }
  return uVar1;
}




void FUN_001034ff(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103554(param_1,2);
  __ptr = (undefined4 *)*puVar1;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 5;
    FUN_001035d0(*__ptr);
    free(__ptr);
  }
  return;
}




void FUN_001027e7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cd2(param_1,param_2,param_3);
  return;
}




void FUN_001025f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102b08(param_3);
  uVar2 = FUN_00102af2(param_1);
  FUN_00102b1a(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103aba(void)

{
  return;
}




void FUN_00102796(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c82(param_2);
  uVar2 = FUN_00102c82(param_1);
  FUN_00102c94(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102efc(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102c82(undefined8 param_1)

{
  return param_1;
}




void FUN_001026ee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102b81(param_2);
  uVar2 = FUN_00102b81(param_1);
  FUN_00102bcd(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103b12(void)

{
  return;
}




undefined8 FUN_0010299b(undefined8 param_1,undefined8 param_2)

{
  FUN_001029c8(param_1,param_2);
  return param_1;
}




void FUN_00102ff2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010319c(param_2);
  uVar2 = FUN_0010319c(param_1);
  FUN_001031ae(uVar2,uVar1,param_3);
  return;
}



