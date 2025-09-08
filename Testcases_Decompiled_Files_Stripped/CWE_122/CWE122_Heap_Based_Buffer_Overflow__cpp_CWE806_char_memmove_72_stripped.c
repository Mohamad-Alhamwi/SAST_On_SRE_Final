
undefined8 FUN_00103406(undefined8 param_1)

{
  return param_1;
}




void FUN_00103683(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036b8(param_1,param_2,param_3);
  return;
}




void FUN_00103847(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_0010366e(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102dc1(undefined8 param_1,undefined8 param_2)

{
  FUN_001030ca(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




void FUN_001030fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032ac(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102eec(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c5d(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_00101f4a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_00101fd5(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102850(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102850(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001030ca(void)

{
  return;
}




void FUN_00101ec0(void)

{
  return;
}




void FUN_00102676(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c5c(param_1,param_3);
                    /* try { // try from 001026b0 to 001026b4 has its CatchHandler @ 001026b7 */
  FUN_00102c92(param_1,param_2);
  return;
}




void FUN_00103086(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d72(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101aad(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102fc7(undefined8 param_1,undefined8 param_2)

{
  FUN_00103216(param_1,param_2,0);
  return;
}




void FUN_00103ce1(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ec8)();
  return;
}




undefined8 FUN_00103166(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




bool FUN_00103df0(pthread_t *param_1)

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




void FUN_00103773(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010394a(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102cec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103055(param_1,param_2,param_3);
  return;
}




void FUN_0010278c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cec(param_1,param_2,param_3);
  return;
}




void * FUN_001036b8(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101b70(long *param_1)

{
  FUN_00101ed0(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101ac4(param_1);
  return;
}




undefined8 FUN_00102c05(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c32(param_1,param_2);
  return param_1;
}




void FUN_00103cec(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




ulong FUN_00102a86(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f72(param_1);
  lVar2 = FUN_001025ec(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001025ec(local_40);
  local_30 = FUN_001025ec(local_40);
  plVar3 = (long *)FUN_00102f98(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001025ec(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f72(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f72(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00102613(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102c05(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103c26(void)

{
  return;
}




void FUN_00103042(void)

{
  return;
}




void FUN_00103caa(void)

{
  return;
}




void FUN_001027d1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d22(param_1,param_2,param_3);
  return;
}




ulong FUN_00103b0f(long param_1,ulong param_2,long param_3)

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




void FUN_00103872(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010325c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103406(param_2);
  uVar2 = FUN_00103406(param_1);
  FUN_00103418(uVar2,uVar1,param_3);
  return;
}




void FUN_00103577(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010366e(&local_10);
  FUN_00102e6c(uVar1);
  return;
}




void FUN_0010359d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102eec(param_3);
  uVar2 = FUN_00102eec(local_28);
  uVar3 = FUN_00102eec(local_20);
  uVar1 = FUN_00103683(uVar3,uVar2,uVar1);
  FUN_00103166(&local_30,uVar1);
  return;
}




void FUN_00103c7e(void)

{
  return;
}




void FUN_00103741(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102ff5(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030de(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103055(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010325c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102586(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f4a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong * FUN_001033bf(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103ccb(void)

{
  return;
}




void FUN_00101a38(void)

{
  FUN_0010189c();
  return;
}




void FUN_00103f06(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102bad(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ff5(param_2);
  uVar2 = FUN_00102ff5(param_1);
  FUN_00102e37(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f7e(param_1);
  local_18 = FUN_00101fd5(&local_38,&local_20);
  local_20 = FUN_0010253a(local_30);
  uVar1 = FUN_00102586(&local_20,local_18);
  FUN_0010201a(local_30,uVar1,param_3,param_4);
  local_20 = FUN_0010253a(local_30);
  FUN_00102586(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102eec(param_3);
  uVar2 = FUN_00103521(local_28);
  uVar3 = FUN_00103521(local_20);
  uVar1 = FUN_00103542(uVar3,uVar2,uVar1);
  FUN_00103166(&local_30,uVar1);
  return;
}




void FUN_00103c52(void)

{
  return;
}




undefined8 FUN_00102e6c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e7e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102eec(param_3);
  uVar2 = FUN_00102eec(local_28);
  uVar3 = FUN_00102eec(local_20);
  uVar1 = FUN_00103131(uVar3,uVar2,uVar1);
  FUN_00103166(&local_30,uVar1);
  return;
}




void FUN_00102d22(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102efe(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_0010381c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101bc2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f0a(param_1);
  FUN_00101f1c(*param_1,param_1[1],uVar1);
  FUN_00101b70(param_1);
  return;
}




void FUN_0010389d(undefined4 param_1)

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




void FUN_00102958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102deb(param_2);
  uVar2 = FUN_00102deb(param_1);
  FUN_00102e37(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001032ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103486(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102b76(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102fc7(param_1,param_2);
  }
  return uVar1;
}




void FUN_0010371b(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102deb(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030de(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001030de(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102d49(void)

{
  return;
}




undefined8 FUN_00101a48(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010371b("Calling good()...");
  FUN_00101a38();
  FUN_0010371b("Finished good()");
  FUN_0010371b("Calling bad()...");
  FUN_00101700();
  FUN_0010371b("Finished bad()");
  return 0;
}




void FUN_00101e8e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_0010317c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103353(param_1,param_2,param_3);
  return;
}




void FUN_0010379b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 * FUN_001034d6(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_001033a1(undefined8 param_1)

{
  FUN_001033ee(param_1);
  return;
}




void FUN_00103c9f(void)

{
  return;
}




undefined8 FUN_00103e6e(undefined8 *param_1)

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




void FUN_0010189c(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b04(local_58);
                    /* try { // try from 001018c9 to 001019c2 has its CatchHandler @ 00101a0e */
  local_68 = operator_new__(100);
  memset(local_68,0x41,0x31);
  *(undefined *)((long)local_68 + 0x31) = 0;
  local_60 = FUN_00101c0a(local_58);
  FUN_00101c5a(local_38,&local_60);
  FUN_00101c88(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c0a(local_58);
  FUN_00101c5a(local_38,&local_60);
  FUN_00101c88(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c0a(local_58);
  FUN_00101c5a(local_38,&local_60);
  FUN_00101c88(local_58,local_38[0],1,&local_68);
  FUN_00101d4e(local_38,local_58);
                    /* try { // try from 001019ca to 001019ce has its CatchHandler @ 001019f9 */
  FUN_00101612(local_38);
  FUN_00101bc2(local_38);
  FUN_00101bc2(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b24(undefined8 param_1)

{
  FUN_00101e6e(param_1);
  FUN_00101e8e(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101490();
    DAT_00107020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00103bfd(void)

{
  return 0;
}




void FUN_00101e6e(undefined8 param_1)

{
  FUN_001027c2(param_1);
  return;
}




void FUN_00102f72(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102664(param_1);
  FUN_001031ad(uVar1);
  return;
}




void FUN_00103cd6(void)

{
  return;
}




undefined8 FUN_00102734(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010282e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101700(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b04(local_58);
                    /* try { // try from 0010172d to 00101826 has its CatchHandler @ 00101872 */
  local_68 = operator_new__(100);
  memset(local_68,0x41,99);
  *(undefined *)((long)local_68 + 99) = 0;
  local_60 = FUN_00101c0a(local_58);
  FUN_00101c5a(local_38,&local_60);
  FUN_00101c88(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c0a(local_58);
  FUN_00101c5a(local_38,&local_60);
  FUN_00101c88(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c0a(local_58);
  FUN_00101c5a(local_38,&local_60);
  FUN_00101c88(local_58,local_38[0],1,&local_68);
  FUN_00101d4e(local_38,local_58);
                    /* try { // try from 0010182e to 00101832 has its CatchHandler @ 0010185d */
  FUN_00101549(local_38);
  FUN_00101bc2(local_38);
  FUN_00101bc2(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d72(param_3);
  FUN_00103086(param_1,param_2,uVar1);
  return;
}




void FUN_00103542(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010360b(param_1,param_2,param_3);
  return;
}




void FUN_00103fc0(void)

{
  return;
}




void FUN_00101b04(undefined8 param_1)

{
  FUN_00101ae4(param_1);
  return;
}




void FUN_00101ed0(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001027d1(param_1,param_2,param_3);
  }
  return;
}




void FUN_00103c3c(void)

{
  return;
}




void FUN_001038f7(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103f25(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




long FUN_001032dd(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00102c32(undefined8 param_1,undefined8 param_2)

{
  FUN_00103042(param_1,param_2);
  return;
}




void FUN_00102f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010317c(param_1,param_2,param_3);
  return;
}




void * FUN_0010360b(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101c5a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f6c(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_0010282e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103ee7(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102803(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d49(param_1,param_2);
  return;
}




long FUN_001016dc(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00103c89(void)

{
  return;
}




undefined8 FUN_00101aad(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103131(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032dd(param_1,param_2,param_3);
  return;
}




void FUN_00102a51(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f3c(param_1,param_2,param_3);
  return;
}




ulong FUN_00103a0b(long param_1,ulong param_2,long param_3)

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




void FUN_00103c31(void)

{
  return;
}




void FUN_001028c2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d5c(param_1);
  FUN_00102dc1(*param_1,uVar1);
  return;
}




void FUN_00102c5c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c32(param_1,param_2);
  FUN_00101e8e(param_1);
  return;
}




void FUN_001037c7(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103353(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102eec(param_1);
  uVar1 = FUN_001034d6(uVar1,param_2,param_3);
  FUN_00103166(&local_10,uVar1);
  return;
}




undefined8 FUN_00103d23(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103cec,local_18);
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




void FUN_00103c73(void)

{
  return;
}




void FUN_001028f6(undefined8 param_1)

{
  FUN_00102d5c(param_1);
  return;
}




void FUN_00103c94(void)

{
  return;
}




void FUN_00103f50(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010391f(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101612(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t __n;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001016dc(param_1,2);
  __s = (char *)*puVar1;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __n = strlen(__s);
  memmove(&local_48,__s,__n);
  local_18 = local_18 & 0xff;
  FUN_0010371b(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c92(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b76(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




ulong * FUN_00102f98(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c47(void)

{
  return;
}




void FUN_00101549(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t __n;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001016dc(param_1,2);
  __s = (char *)*puVar1;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __n = strlen(__s);
  memmove(&local_48,__s,__n);
  local_18 = local_18 & 0xff;
  FUN_0010371b(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102eec(param_2);
  uVar2 = FUN_00102eec(param_1);
  FUN_00102efe(uVar2,uVar1,param_3);
  return;
}




void FUN_00103216(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001033ee(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_001033ee(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103cc0(void)

{
  return;
}




long FUN_00102914(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f6c(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f6c(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00103521(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102850(&local_10);
  return *puVar1;
}




void FUN_00101b50(undefined8 param_1)

{
  FUN_00101ec0(param_1);
  return;
}




void FUN_00101d4e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102664(param_2);
  FUN_00102613(&local_31,uVar1);
  uVar1 = FUN_001025ec(param_2);
                    /* try { // try from 00101db4 to 00101db8 has its CatchHandler @ 00101e21 */
  FUN_00102676(param_1,uVar1,&local_31);
  FUN_00101b50(&local_31);
  uVar2 = FUN_00101f0a(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102734(param_2);
  uVar4 = FUN_001026dc(param_2);
                    /* try { // try from 00101e02 to 00101e06 has its CatchHandler @ 00101e3f */
  uVar1 = FUN_0010278c(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102d5c(long param_1)

{
  return param_1 + 8;
}




int FUN_00103c0c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101ac4(undefined8 param_1)

{
  FUN_00101b50(param_1);
  return;
}




void FUN_00102862(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d72(param_3);
  uVar2 = FUN_00102d5c(param_1);
  FUN_00102d84(*param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00101c0a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f4a(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103bee(void)

{
  return 1;
}




void FUN_00103c68(void)

{
  return;
}




undefined8 FUN_001026dc(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010282e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001027c2(void)

{
  return;
}




undefined8 FUN_00102850(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ae4(undefined8 param_1)

{
  FUN_00101b24(param_1);
  return;
}




void FUN_001039ab(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103486(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103577(param_2);
  uVar2 = FUN_00103577(param_1);
  FUN_0010359d(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00101f6c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103e4b(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f1c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102803(param_1,param_2);
  return;
}




long FUN_001025ec(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00103cb5(void)

{
  return;
}




undefined8 FUN_001031ad(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001033a1(param_1);
  puVar1 = (undefined8 *)FUN_001033bf(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_0010253a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f4a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101f0a(undefined8 param_1)

{
  return param_1;
}




void FUN_001037f1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010201a(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a86(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_0010253a(local_80);
      local_60 = FUN_00102914(&local_88,&local_78);
      local_70 = FUN_00102b76(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101f0a(local_80);
                    /* try { // try from 00102324 to 001023af has its CatchHandler @ 00102467 */
      FUN_00102a51(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101f0a(local_80);
      puVar2 = (undefined8 *)FUN_00101f6c(&local_88);
      local_70 = FUN_00102bad(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101f0a(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f6c(&local_88);
      local_70 = FUN_00102bad(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101f0a(local_80);
      FUN_00101f1c(*local_80,local_80[1],uVar1);
      FUN_00101ed0(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102862(local_38,param_1,param_4);
                    /* try { // try from 001020a4 to 00102277 has its CatchHandler @ 00102449 */
      local_50 = FUN_001028f6(local_38);
      local_78 = FUN_00101c0a(local_80);
      local_48 = FUN_00102914(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101f0a(local_80);
        FUN_00102958(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f6c(&local_88);
        FUN_001029b0(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f6c(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f6c(&local_88);
        FUN_00102a00(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101f0a(local_80);
        lVar4 = FUN_00102a51(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101f0a(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f6c(&local_88);
        FUN_00102958(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f6c(&local_88);
        FUN_00102a00(*puVar2,local_40,local_50);
      }
      FUN_001028c2(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102d72(undefined8 param_1)

{
  return param_1;
}




void FUN_001029b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e6c(param_2);
  uVar2 = FUN_00102e6c(param_1);
  FUN_00102e7e(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00101f7e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010282e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103978(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102664(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e37(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030fc(param_1,param_2,param_3);
  return;
}



