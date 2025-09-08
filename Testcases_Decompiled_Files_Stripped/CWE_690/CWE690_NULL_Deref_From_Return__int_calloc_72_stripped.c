
void * FUN_00103540(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103725(undefined4 param_1)

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




undefined8 FUN_00103a85(void)

{
  return 0;
}




void FUN_001036fa(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102e7d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f66(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010194c(undefined8 param_1)

{
  FUN_001019d8(param_1);
  return;
}




ulong * FUN_00103247(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102f66(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103b5e(void)

{
  return;
}




void FUN_0010196c(undefined8 param_1)

{
  FUN_001019ac(param_1);
  return;
}




undefined8 FUN_00102564(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001026b6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010264a(void)

{
  return;
}




void FUN_001031db(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102d74(param_1);
  uVar1 = FUN_0010335e(uVar1,param_2,param_3);
  FUN_00102fee(&local_10,uVar1);
  return;
}




long FUN_00102474(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_0010277e(undefined8 param_1)

{
  FUN_00102be4(param_1);
  return;
}




long FUN_00103165(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_00103035(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103229(param_1);
  puVar1 = (undefined8 *)FUN_00103247(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_001018d0(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001035a3("Calling good()...");
  FUN_001018c0();
  FUN_001035a3("Finished good()");
  FUN_001035a3("Calling bad()...");
  FUN_001015b0();
  FUN_001035a3("Finished bad()");
  return 0;
}




undefined8 FUN_0010328e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103800(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00103acf(void)

{
  return;
}




undefined8 FUN_00102d74(undefined8 param_1)

{
  return param_1;
}




void FUN_00102838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cf4(param_2);
  uVar2 = FUN_00102cf4(param_1);
  FUN_00102d06(uVar2,uVar1,param_3);
  return;
}




void FUN_0010377f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101da4(undefined8 param_1,undefined8 param_2)

{
  FUN_0010268b(param_1,param_2);
  return;
}




undefined8 FUN_00102c73(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f66(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102bfa(undefined8 param_1)

{
  return param_1;
}




void FUN_001026ea(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102bfa(param_3);
  uVar2 = FUN_00102be4(param_1);
  FUN_00102c0c(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103b27(void)

{
  return;
}




void FUN_001030e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010328e(param_2);
  uVar2 = FUN_0010328e(param_1);
  FUN_001032a0(uVar2,uVar1,param_3);
  return;
}




void FUN_00103d6f(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001028d9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102dc4(param_1,param_2,param_3);
  return;
}




void FUN_00103afb(void)

{
  return;
}




int FUN_00103a94(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_001033a9(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001026d8(&local_10);
  return *puVar1;
}




void FUN_00103679(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001036a4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103bab(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103b74,local_18);
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




void FUN_001037d2(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010309e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103276(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00103134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010330e(param_1,param_2,param_3);
  return;
}




void FUN_001026b6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_0010158c(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_001034f6(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101ae2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101df4(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00102c49(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f52(param_1,param_2);
  return;
}




long FUN_00101e5d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001026d8(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001026d8(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001035a3(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103b53(void)

{
  return;
}




void FUN_00102f0e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102bfa(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101935(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102f52(void)

{
  return;
}




void FUN_00102d86(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00102f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103134(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103a76(void)

{
  return 1;
}




void FUN_00101dd2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103aae(void)

{
  return;
}




void FUN_00102b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102edd(param_1,param_2,param_3);
  return;
}




void FUN_001033ca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103493(param_1,param_2,param_3);
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010158c(param_1,2);
  __ptr = (undefined4 *)*puVar1;
  *__ptr = 5;
  FUN_001035fb(*__ptr);
  free(__ptr);
  return;
}




void FUN_00102c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102bfa(param_3);
  FUN_00102f0e(param_1,param_2,uVar1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101430();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_001037a7(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102eca(void)

{
  return;
}




void FUN_00103d8e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103229(undefined8 param_1)

{
  FUN_00103276(param_1);
  return;
}




void FUN_00102dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103004(param_1,param_2,param_3);
  return;
}




void FUN_00101b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101e06(param_1);
  local_18 = FUN_00101e5d(&local_38,&local_20);
  local_20 = FUN_001023c2(local_30);
  uVar1 = FUN_0010240e(&local_20,local_18);
  FUN_00101ea2(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001023c2(local_30);
  FUN_0010240e(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010240e(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101dd2(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001032a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d74(param_3);
  uVar2 = FUN_001033a9(local_28);
  uVar3 = FUN_001033a9(local_20);
  uVar1 = FUN_001033ca(uVar3,uVar2,uVar1);
  FUN_00102fee(&local_30,uVar1);
  return;
}




void FUN_00103833(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001035fb(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void * FUN_00103493(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00103cf6(undefined8 *param_1)

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




undefined8 FUN_00101a92(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dd2(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d58(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102659(param_1,param_2,param_3);
  }
  return;
}




void FUN_0010198c(undefined8 param_1)

{
  FUN_0010196c(param_1);
  return;
}




void FUN_00103b11(void)

{
  return;
}




undefined8 FUN_001023c2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dd2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102fee(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001027e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c73(param_2);
  uVar2 = FUN_00102c73(param_1);
  FUN_00102cbf(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101a4a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d92(param_1);
  FUN_00101da4(*param_1,param_1[1],uVar1);
  FUN_001019f8(param_1);
  return;
}




void FUN_00102e4f(undefined8 param_1,undefined8 param_2)

{
  FUN_0010309e(param_1,param_2,0);
  return;
}




void FUN_00103dad(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010364f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101d48(void)

{
  return;
}




void FUN_00101537(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010158c(param_1,2);
  __ptr = (undefined4 *)*puVar1;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 5;
    FUN_001035fb(*__ptr);
    free(__ptr);
  }
  return;
}




undefined8 FUN_0010249b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a8d(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103b3d(void)

{
  return;
}




void FUN_00103ab9(void)

{
  return;
}




void FUN_001033ff(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001034f6(&local_10);
  FUN_00102cf4(uVar1);
  return;
}




void FUN_00101738(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010198c(local_58);
  local_68 = (void *)0x0;
  local_68 = calloc(1,4);
  local_60 = FUN_00101a92(local_58);
  FUN_00101ae2(local_38,&local_60);
                    /* try { // try from 001017b5 to 0010184a has its CatchHandler @ 00101896 */
  FUN_00101b10(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a92(local_58);
  FUN_00101ae2(local_38,&local_60);
  FUN_00101b10(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a92(local_58);
  FUN_00101ae2(local_38,&local_60);
  FUN_00101b10(local_58,local_38[0],1,&local_68);
  FUN_00101bd6(local_38,local_58);
                    /* try { // try from 00101852 to 00101856 has its CatchHandler @ 00101881 */
  FUN_00101537(local_38);
  FUN_00101a4a(local_38);
  FUN_00101a4a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102cbf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f84(param_1,param_2,param_3);
  return;
}




void FUN_00102fb9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103165(param_1,param_2,param_3);
  return;
}




void FUN_001036cf(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101e06(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001026b6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001029fe(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102e4f(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103de0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001015b0(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010198c(local_58);
  local_68 = (void *)0x0;
  local_68 = calloc(1,4);
  local_60 = FUN_00101a92(local_58);
  FUN_00101ae2(local_38,&local_60);
                    /* try { // try from 0010162d to 001016c2 has its CatchHandler @ 0010170e */
  FUN_00101b10(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a92(local_58);
  FUN_00101ae2(local_38,&local_60);
  FUN_00101b10(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a92(local_58);
  FUN_00101ae2(local_38,&local_60);
  FUN_00101b10(local_58,local_38[0],1,&local_68);
  FUN_00101bd6(local_38,local_58);
                    /* try { // try from 001016ca to 001016ce has its CatchHandler @ 001016f9 */
  FUN_001014e9(local_38);
  FUN_00101a4a(local_38);
  FUN_00101a4a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_0010290e(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102dfa(param_1);
  lVar2 = FUN_00102474(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102474(local_40);
  local_30 = FUN_00102474(local_40);
  plVar3 = (long *)FUN_00102e20(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102474(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102dfa(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102dfa(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001019f8(long *param_1)

{
  FUN_00101d58(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_0010194c(param_1);
  return;
}




bool FUN_00103c78(pthread_t *param_1)

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




void FUN_00101bd6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001024ec(param_2);
  FUN_0010249b(&local_31,uVar1);
  uVar1 = FUN_00102474(param_2);
                    /* try { // try from 00101c3c to 00101c40 has its CatchHandler @ 00101ca9 */
  FUN_001024fe(param_1,uVar1,&local_31);
  FUN_001019d8(&local_31);
  uVar2 = FUN_00101d92(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001025bc(param_2);
  uVar4 = FUN_00102564(param_2);
                    /* try { // try from 00101c8a to 00101c8e has its CatchHandler @ 00101cc7 */
  uVar1 = FUN_00102614(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103276(void)

{
  return 0xfffffffffffffff;
}




long FUN_00102be4(long param_1)

{
  return param_1 + 8;
}




void FUN_00103af0(void)

{
  return;
}




void FUN_00103b32(void)

{
  return;
}




void FUN_00102aba(undefined8 param_1,undefined8 param_2)

{
  FUN_00102eca(param_1,param_2);
  return;
}




undefined8 FUN_00102cf4(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103893(long param_1,ulong param_2,long param_3)

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




void FUN_00103425(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d74(param_3);
  uVar2 = FUN_00102d74(local_28);
  uVar3 = FUN_00102d74(local_20);
  uVar1 = FUN_0010350b(uVar3,uVar2,uVar1);
  FUN_00102fee(&local_30,uVar1);
  return;
}




void FUN_00103b74(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102ae4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102aba(param_1,param_2);
  FUN_00101d16(param_1);
  return;
}




undefined8 FUN_00103cd3(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103ac4(void)

{
  return;
}




void FUN_001019d8(undefined8 param_1)

{
  FUN_00101d48(param_1);
  return;
}




void FUN_00102d06(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d74(param_3);
  uVar2 = FUN_00102d74(local_28);
  uVar3 = FUN_00102d74(local_20);
  uVar1 = FUN_00102fb9(uVar3,uVar2,uVar1);
  FUN_00102fee(&local_30,uVar1);
  return;
}




void FUN_00103004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031db(param_1,param_2,param_3);
  return;
}




void FUN_00103b48(void)

{
  return;
}




void FUN_001019ac(undefined8 param_1)

{
  FUN_00101cf6(param_1);
  FUN_00101d16(param_1);
  return;
}




void FUN_00102bd1(void)

{
  return;
}




undefined8 * FUN_0010335e(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_0010350b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103540(param_1,param_2,param_3);
  return;
}




void FUN_00102b1a(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_001029fe(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103623(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101d92(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ea2(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_0010290e(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001023c2(local_80);
      local_60 = FUN_0010279c(&local_88,&local_78);
      local_70 = FUN_001029fe(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101d92(local_80);
                    /* try { // try from 001021ac to 00102237 has its CatchHandler @ 001022ef */
      FUN_001028d9(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101d92(local_80);
      puVar2 = (undefined8 *)FUN_00101df4(&local_88);
      local_70 = FUN_00102a35(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101d92(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101df4(&local_88);
      local_70 = FUN_00102a35(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101d92(local_80);
      FUN_00101da4(*local_80,local_80[1],uVar1);
      FUN_00101d58(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001026ea(local_38,param_1,param_4);
                    /* try { // try from 00101f2c to 001020ff has its CatchHandler @ 001022d1 */
      local_50 = FUN_0010277e(local_38);
      local_78 = FUN_00101a92(local_80);
      local_48 = FUN_0010279c(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101d92(local_80);
        FUN_001027e0(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101df4(&local_88);
        FUN_00102838(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101df4(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101df4(&local_88);
        FUN_00102888(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101d92(local_80);
        lVar4 = FUN_001028d9(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101d92(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101df4(&local_88);
        FUN_001027e0(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101df4(&local_88);
        FUN_00102888(*puVar2,local_40,local_50);
      }
      FUN_0010274a(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001018c0(void)

{
  FUN_00101738();
  return;
}




void FUN_00102dfa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024ec(param_1);
  FUN_00103035(uVar1);
  return;
}




void FUN_00103b1c(void)

{
  return;
}




void FUN_00101cf6(undefined8 param_1)

{
  FUN_0010264a(param_1);
  return;
}




undefined8 FUN_00101935(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00101df4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102a8d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102aba(param_1,param_2);
  return param_1;
}




void FUN_00103b06(void)

{
  return;
}




void FUN_00103b69(void)

{
  return;
}




long FUN_0010279c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101df4(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101df4(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d74(param_2);
  uVar2 = FUN_00102d74(param_1);
  FUN_00102d86(uVar2,uVar1,param_3);
  return;
}




void FUN_00102a35(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e7d(param_2);
  uVar2 = FUN_00102e7d(param_1);
  FUN_00102cbf(uVar2,uVar1,param_3,param_4);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00101d16(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103ae5(void)

{
  return;
}




void FUN_001035c9(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_001025bc(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001026b6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001024fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ae4(param_1,param_3);
                    /* try { // try from 00102538 to 0010253c has its CatchHandler @ 0010253f */
  FUN_00102b1a(param_1,param_2);
  return;
}




undefined8 FUN_001026d8(undefined8 param_1)

{
  return param_1;
}




void FUN_0010330e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033ff(param_2);
  uVar2 = FUN_001033ff(param_1);
  FUN_00103425(uVar2,uVar1,param_3);
  return;
}




void FUN_0010268b(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bd1(param_1,param_2);
  return;
}




undefined8 FUN_001024ec(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103997(long param_1,ulong param_2,long param_3)

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




void FUN_00102659(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102baa(param_1,param_2,param_3);
  return;
}




ulong * FUN_00102e20(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102baa(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b74(param_1,param_2,param_3);
  return;
}




void FUN_00103ada(void)

{
  return;
}




void FUN_00103e50(void)

{
  return;
}




void FUN_0010274a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102be4(param_1);
  FUN_00102c49(*param_1,uVar1);
  return;
}




void FUN_00102edd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030e4(param_1,param_2,param_3);
  return;
}



