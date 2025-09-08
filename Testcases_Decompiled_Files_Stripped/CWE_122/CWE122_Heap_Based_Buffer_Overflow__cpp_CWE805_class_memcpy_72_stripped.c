
void FUN_0010346a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010355b(param_2);
  uVar2 = FUN_0010355b(param_1);
  FUN_00103581(uVar2,uVar1,param_3);
  return;
}




void FUN_001036ff(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00103e2f(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103881(undefined4 param_1)

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




void * FUN_0010369c(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00102e1b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030e0(param_1,param_2,param_3);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101470();
    DAT_00107020 = 1;
    return;
  }
  return;
}




undefined8 FUN_0010314a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103160(param_1,param_2,param_3);
  return;
}




void FUN_00103c57(void)

{
  return;
}




void FUN_00101529(undefined8 param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_348;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001016f2(param_1,2);
  __dest = (undefined4 *)*puVar1;
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_338[local_348 * 2] = 0;
    local_338[local_348 * 2 + 1] = 0;
  }
  memcpy(__dest,local_338,800);
  FUN_00103757(*__dest);
  if (__dest != (undefined4 *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101f62(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102812(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010251e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f2e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001030e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103290(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101eee(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102718(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102812(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001030c2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103026(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




undefined8 FUN_00103191(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103385(param_1);
  puVar1 = (undefined8 *)FUN_001033a3(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_001037ab(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010398f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102d2d(void)

{
  return;
}




void FUN_001027b5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d06(param_1,param_2,param_3);
  return;
}




void FUN_00103725(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101bee(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f2e(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c40(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c16(param_1,param_2);
  FUN_00101e72(param_1);
  return;
}




void FUN_00102b91(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102fd9(param_2);
  uVar2 = FUN_00102fd9(param_1);
  FUN_00102e1b(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010265a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c40(param_1,param_3);
                    /* try { // try from 00102694 to 00102698 has its CatchHandler @ 0010269b */
  FUN_00102c76(param_1,param_2);
  return;
}




void FUN_00103c20(void)

{
  return;
}




void FUN_0010306a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d56(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a91(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103ca4(void)

{
  return;
}




void FUN_00103ecb(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102812(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00103be1(void)

{
  return 0;
}




void FUN_001038db(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




long FUN_001032c1(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void * FUN_001035ef(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103eea(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00103652(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103c78(void)

{
  return;
}




void FUN_0010377f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103039(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103240(param_1,param_2,param_3);
  return;
}




void FUN_001030ae(void)

{
  return;
}




undefined8 FUN_001025f7(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102be9(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_001033ea(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101a91(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102c16(undefined8 param_1,undefined8 param_2)

{
  FUN_00103026(param_1,param_2);
  return;
}




void FUN_00101e52(undefined8 param_1)

{
  FUN_001027a6(param_1);
  return;
}




undefined8 * FUN_001034ba(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00103c4c(void)

{
  return;
}




undefined8 FUN_00102ed0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ee2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




long FUN_00102d40(long param_1)

{
  return param_1 + 8;
}




void FUN_00102f56(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102648(param_1);
  FUN_00103191(uVar1);
  return;
}




undefined8 FUN_00103d07(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103cd0,local_18);
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




void FUN_00103856(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c3e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f50(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103903(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001029e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ed0(param_2);
  uVar2 = FUN_00102ed0(param_1);
  FUN_00102ee2(uVar2,uVar1,param_3);
  return;
}




void FUN_00103337(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102ed0(param_1);
  uVar1 = FUN_001034ba(uVar1,param_2,param_3);
  FUN_0010314a(&local_10,uVar1);
  return;
}




undefined8 FUN_00102be9(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c16(param_1,param_2);
  return param_1;
}




void FUN_00103757(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102e50(undefined8 param_1)

{
  return param_1;
}




void FUN_00103caf(void)

{
  return;
}




void FUN_00103115(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032c1(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102d56(undefined8 param_1)

{
  return param_1;
}




void FUN_00101aa8(undefined8 param_1)

{
  FUN_00101b34(param_1);
  return;
}




void FUN_00103f09(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101eb4(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001027b5(param_1,param_2,param_3);
  }
  return;
}




void FUN_001031fa(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001033d2(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_001037d5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103526(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035ef(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001033d2(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103c99(void)

{
  return;
}




undefined8 FUN_00101a2c(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036ff("Calling good()...");
  FUN_00101a1c();
  FUN_001036ff("Finished good()");
  FUN_001036ff("Calling bad()...");
  FUN_00101716();
  FUN_001036ff("Finished bad()");
  return 0;
}




void FUN_00101b54(long *param_1)

{
  FUN_00101eb4(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101aa8(param_1);
  return;
}




void FUN_0010160d(undefined8 param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_348;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001016f2(param_1,2);
  __dest = (undefined4 *)*puVar1;
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_338[local_348 * 2] = 0;
    local_338[local_348 * 2 + 1] = 0;
  }
  memcpy(__dest,local_338,800);
  FUN_00103757(*__dest);
  if (__dest != (undefined4 *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c0a(void)

{
  return;
}




void FUN_00101ea4(void)

{
  return;
}




void FUN_00102fab(undefined8 param_1,undefined8 param_2)

{
  FUN_001031fa(param_1,param_2,0);
  return;
}




void FUN_001027a6(void)

{
  return;
}




void FUN_00101a1c(void)

{
  FUN_00101899();
  return;
}




undefined8 FUN_00102dcf(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030c2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103cba(void)

{
  return;
}




void FUN_00103581(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ed0(param_3);
  uVar2 = FUN_00102ed0(local_28);
  uVar3 = FUN_00102ed0(local_20);
  uVar1 = FUN_00103667(uVar3,uVar2,uVar1);
  FUN_0010314a(&local_30,uVar1);
  return;
}




void FUN_00101b34(undefined8 param_1)

{
  FUN_00101ea4(param_1);
  return;
}




void FUN_00101f00(undefined8 param_1,undefined8 param_2)

{
  FUN_001027e7(param_1,param_2);
  return;
}




void FUN_00103c36(void)

{
  return;
}




void FUN_0010392e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103f40(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103385(undefined8 param_1)

{
  FUN_001033d2(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed0)();
  return;
}




void FUN_00102c76(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b5a(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




ulong * FUN_00102f7c(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103667(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010369c(param_1,param_2,param_3);
  return;
}




void FUN_00101d32(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102648(param_2);
  FUN_001025f7(&local_31,uVar1);
  uVar1 = FUN_001025d0(param_2);
                    /* try { // try from 00101d98 to 00101d9c has its CatchHandler @ 00101e05 */
  FUN_0010265a(param_1,uVar1,&local_31);
  FUN_00101b34(&local_31);
  uVar2 = FUN_00101eee(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102718(param_2);
  uVar4 = FUN_001026c0(param_2);
                    /* try { // try from 00101de6 to 00101dea has its CatchHandler @ 00101e23 */
  uVar1 = FUN_00102770(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102846(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d56(param_3);
  uVar2 = FUN_00102d40(param_1);
  FUN_00102d68(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103cc5(void)

{
  return;
}




bool FUN_00103dd4(pthread_t *param_1)

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




void FUN_00103fb0(void)

{
  return;
}




undefined8 FUN_00102834(undefined8 param_1)

{
  return param_1;
}




void FUN_00101899(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ae8(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 001018ce to 001019a6 has its CatchHandler @ 001019f2 */
  local_68 = operator_new__(800);
  local_60 = FUN_00101bee(local_58);
  FUN_00101c3e(local_38,&local_60);
  FUN_00101c6c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bee(local_58);
  FUN_00101c3e(local_38,&local_60);
  FUN_00101c6c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bee(local_58);
  FUN_00101c3e(local_38,&local_60);
  FUN_00101c6c(local_58,local_38[0],1,&local_68);
  FUN_00101d32(local_38,local_58);
                    /* try { // try from 001019ae to 001019b2 has its CatchHandler @ 001019dd */
  FUN_0010160d(local_38);
  FUN_00101ba6(local_38);
  FUN_00101ba6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c83(void)

{
  return;
}




void FUN_00101ac8(undefined8 param_1)

{
  FUN_00101b08(param_1);
  return;
}




void FUN_00103160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103337(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102b5a(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102fab(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_00103bd2(void)

{
  return 1;
}




void FUN_00103c2b(void)

{
  return;
}




long FUN_001028f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f50(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f50(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103039(param_1,param_2,param_3);
  return;
}




void FUN_00103800(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong * FUN_001033a3(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c6d(void)

{
  return;
}




void FUN_0010293c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dcf(param_2);
  uVar2 = FUN_00102dcf(param_1);
  FUN_00102e1b(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103c8e(void)

{
  return;
}




void FUN_0010395c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101716(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ae8(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 0010174b to 00101823 has its CatchHandler @ 0010186f */
  local_68 = operator_new__(400);
  local_60 = FUN_00101bee(local_58);
  FUN_00101c3e(local_38,&local_60);
  FUN_00101c6c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bee(local_58);
  FUN_00101c3e(local_38,&local_60);
  FUN_00101c6c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bee(local_58);
  FUN_00101c3e(local_38,&local_60);
  FUN_00101c6c(local_58,local_38[0],1,&local_68);
  FUN_00101d32(local_38,local_58);
                    /* try { // try from 0010182b to 0010182f has its CatchHandler @ 0010185a */
  FUN_00101529(local_38);
  FUN_00101ba6(local_38);
  FUN_00101ba6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d06(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00102fd9(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030c2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c41(void)

{
  return;
}




long FUN_001016f2(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




ulong FUN_00102a6a(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f56(param_1);
  lVar2 = FUN_001025d0(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001025d0(local_40);
  local_30 = FUN_001025d0(local_40);
  plVar3 = (long *)FUN_00102f7c(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001025d0(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f56(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f56(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010346a(param_1,param_2,param_3);
  return;
}




void FUN_001033fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ed0(param_3);
  uVar2 = FUN_00103505(local_28);
  uVar3 = FUN_00103505(local_20);
  uVar1 = FUN_00103526(uVar3,uVar2,uVar1);
  FUN_0010314a(&local_30,uVar1);
  return;
}




void FUN_00102994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e50(param_2);
  uVar2 = FUN_00102e50(param_1);
  FUN_00102e62(uVar2,uVar1,param_3);
  return;
}




void FUN_0010355b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103652(&local_10);
  FUN_00102e50(uVar1);
  return;
}




void FUN_00101ba6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101eee(param_1);
  FUN_00101f00(*param_1,param_1[1],uVar1);
  FUN_00101b54(param_1);
  return;
}




void FUN_00101e72(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00102d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d56(param_3);
  FUN_0010306a(param_1,param_2,uVar1);
  return;
}




void FUN_00103c15(void)

{
  return;
}




void FUN_00101ae8(undefined8 param_1)

{
  FUN_00101ac8(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00101c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f62(param_1);
  local_18 = FUN_00101fb9(&local_38,&local_20);
  local_20 = FUN_0010251e(local_30);
  uVar1 = FUN_0010256a(&local_20,local_18);
  FUN_00101ffe(local_30,uVar1,param_3,param_4);
  local_20 = FUN_0010251e(local_30);
  FUN_0010256a(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001028da(undefined8 param_1)

{
  FUN_00102d40(param_1);
  return;
}




int FUN_00103bf0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103c62(void)

{
  return;
}




void FUN_00102770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cd0(param_1,param_2,param_3);
  return;
}




void FUN_001027e7(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d2d(param_1,param_2);
  return;
}




void FUN_001028a6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d40(param_1);
  FUN_00102da5(*param_1,uVar1);
  return;
}




void FUN_00101b08(undefined8 param_1)

{
  FUN_00101e52(param_1);
  FUN_00101e72(param_1);
  return;
}




ulong FUN_00103af3(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00103505(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102834(&local_10);
  return *puVar1;
}




long FUN_00101fb9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102834(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102834(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00103e52(undefined8 *param_1)

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




undefined8 FUN_00101f50(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102648(undefined8 param_1)

{
  return param_1;
}




void FUN_00103240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033ea(param_2);
  uVar2 = FUN_001033ea(param_1);
  FUN_001033fc(uVar2,uVar1,param_3);
  return;
}




long FUN_001025d0(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00101f2e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010382b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_0010256a(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f2e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102da5(undefined8 param_1,undefined8 param_2)

{
  FUN_001030ae(param_1,param_2);
  return;
}




void FUN_00102a35(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f20(param_1,param_2,param_3);
  return;
}




void FUN_00101ffe(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a6a(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_0010251e(local_80);
      local_60 = FUN_001028f8(&local_88,&local_78);
      local_70 = FUN_00102b5a(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101eee(local_80);
                    /* try { // try from 00102308 to 00102393 has its CatchHandler @ 0010244b */
      FUN_00102a35(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101eee(local_80);
      puVar2 = (undefined8 *)FUN_00101f50(&local_88);
      local_70 = FUN_00102b91(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101eee(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f50(&local_88);
      local_70 = FUN_00102b91(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101eee(local_80);
      FUN_00101f00(*local_80,local_80[1],uVar1);
      FUN_00101eb4(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102846(local_38,param_1,param_4);
                    /* try { // try from 00102088 to 0010225b has its CatchHandler @ 0010242d */
      local_50 = FUN_001028da(local_38);
      local_78 = FUN_00101bee(local_80);
      local_48 = FUN_001028f8(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101eee(local_80);
        FUN_0010293c(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f50(&local_88);
        FUN_00102994(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f50(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f50(&local_88);
        FUN_001029e4(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101eee(local_80);
        lVar4 = FUN_00102a35(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101eee(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f50(&local_88);
        FUN_0010293c(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f50(&local_88);
        FUN_001029e4(*puVar2,local_40,local_50);
      }
      FUN_001028a6(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_001039ef(long param_1,ulong param_2,long param_3)

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




void FUN_00103cd0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001026c0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102812(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e62(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ed0(param_3);
  uVar2 = FUN_00102ed0(local_28);
  uVar3 = FUN_00102ed0(local_20);
  uVar1 = FUN_00103115(uVar3,uVar2,uVar1);
  FUN_0010314a(&local_30,uVar1);
  return;
}



