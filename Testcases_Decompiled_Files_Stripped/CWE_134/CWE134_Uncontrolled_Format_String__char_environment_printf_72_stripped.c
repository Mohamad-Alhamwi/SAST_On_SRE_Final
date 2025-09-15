
void FUN_0010371c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010380d(param_2);
  uVar2 = FUN_0010380d(param_1);
  FUN_00103833(uVar2,uVar1,param_3);
  return;
}




void FUN_001039b1(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103a60(param_1,2);
  printf((char *)*puVar1);
  return;
}




void FUN_0010404a(void)

{
  return;
}




void FUN_00103b5a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void * FUN_0010394e(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001030cd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103392(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




undefined8 FUN_001033fc(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001031d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103412(param_1,param_2,param_3);
  return;
}




void FUN_00103fb0(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




undefined8 FUN_00102214(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102ac4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001027d0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021e0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103392(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103542(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001021a0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001029ca(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102ac4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103374(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001032d8(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ed0)();
  return;
}




undefined8 FUN_00103443(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103637(param_1);
  puVar1 = (undefined8 *)FUN_00103655(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103a84(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103c60(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102fdf(void)

{
  return;
}




void FUN_00102a67(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fb8(param_1,param_2,param_3);
  return;
}




void FUN_001039ed(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103a60(param_1,2);
  printf((char *)*puVar1);
  return;
}




undefined8 FUN_00101ea0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021e0(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102ef2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ec8(param_1,param_2);
  FUN_00102124(param_1);
  return;
}




void FUN_00102e43(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010328b(param_2);
  uVar2 = FUN_0010328b(param_1);
  FUN_001030cd(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010290c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ef2(param_1,param_3);
                    /* try { // try from 00102946 to 0010294a has its CatchHandler @ 0010294d */
  FUN_00102f28(param_1,param_2);
  return;
}




undefined8 FUN_00103f66(void)

{
  return 0;
}




void FUN_0010331c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00103008(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101d43(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103ffd(void)

{
  return;
}




undefined8 FUN_0010408c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104055,local_18);
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




void FUN_00102ac4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103d14(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103b85(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_00103573(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void * FUN_001038a1(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




bool FUN_00104159(pthread_t *param_1)

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




undefined8 FUN_00103904(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103fd1(void)

{
  return;
}




long FUN_00103a60(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_001032eb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034f2(param_1,param_2,param_3);
  return;
}




void FUN_00103360(void)

{
  return;
}




undefined8 FUN_001028a9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e9b(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_0010369c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101d43(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102ec8(undefined8 param_1,undefined8 param_2)

{
  FUN_001032d8(param_1,param_2);
  return;
}




void FUN_00102104(undefined8 param_1)

{
  FUN_00102a58(param_1);
  return;
}




undefined8 * FUN_0010376c(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00103fa5(void)

{
  return;
}




undefined8 FUN_00103182(undefined8 param_1)

{
  return param_1;
}




void FUN_00103194(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




long FUN_00102ff2(long param_1)

{
  return param_1 + 8;
}




void FUN_00104330(void)

{
  return;
}




void FUN_00103208(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028fa(param_1);
  FUN_00103443(uVar1);
  return;
}




void FUN_00104034(void)

{
  return;
}




void FUN_00103b30(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101ef0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102202(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103bb0(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102c96(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103182(param_2);
  uVar2 = FUN_00103182(param_1);
  FUN_00103194(uVar2,uVar1,param_3);
  return;
}




void FUN_001035e9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103182(param_1);
  uVar1 = FUN_0010376c(uVar1,param_2,param_3);
  FUN_001033fc(&local_10,uVar1);
  return;
}




void FUN_0010428e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102e9b(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ec8(param_1,param_2);
  return param_1;
}




void FUN_00103a29(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103a60(param_1,2);
  puts((char *)*puVar1);
  return;
}




undefined8 FUN_00103102(undefined8 param_1)

{
  return param_1;
}




void FUN_00104008(void)

{
  return;
}




void FUN_001033c7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103573(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103008(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d5a(undefined8 param_1)

{
  FUN_00101de6(param_1);
  return;
}




undefined8 FUN_001041b4(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102166(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102a67(param_1,param_2,param_3);
  }
  return;
}




void FUN_001034ac(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103684(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00103aaa(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001037d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001038a1(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103684(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103ff2(void)

{
  return;
}




undefined8 FUN_00101cde(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a84("Calling good()...");
  FUN_00101cc9();
  FUN_00103a84("Finished good()");
  FUN_00103a84("Calling bad()...");
  FUN_00101529();
  FUN_00103a84("Finished bad()");
  return 0;
}




void FUN_00101e06(long *param_1)

{
  FUN_00102166(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101d5a(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101470();
    DAT_00108020 = 1;
    return;
  }
  return;
}




ulong FUN_00103e78(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102156(void)

{
  return;
}




void FUN_0010325d(undefined8 param_1,undefined8 param_2)

{
  FUN_001034ac(param_1,param_2,0);
  return;
}




void FUN_00102a58(void)

{
  return;
}




void FUN_00101cc9(void)

{
  FUN_001017ca();
  FUN_00101a28();
  return;
}




undefined8 FUN_00103081(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103374(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104013(void)

{
  return;
}




void FUN_00103833(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103182(param_3);
  uVar2 = FUN_00103182(local_28);
  uVar3 = FUN_00103182(local_20);
  uVar1 = FUN_00103919(uVar3,uVar2,uVar1);
  FUN_001033fc(&local_30,uVar1);
  return;
}




void FUN_00101de6(undefined8 param_1)

{
  FUN_00102156(param_1);
  return;
}




void FUN_001021b2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a99(param_1,param_2);
  return;
}




void FUN_00103f8f(void)

{
  return;
}




void FUN_0010426f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103bdb(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001041d7(undefined8 *param_1)

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




void FUN_00103637(undefined8 param_1)

{
  FUN_00103684(param_1);
  return;
}




void FUN_00102f28(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102e0c(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




ulong * FUN_0010322e(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103919(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010394e(param_1,param_2,param_3);
  return;
}




void FUN_00101fe4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001028fa(param_2);
  FUN_001028a9(&local_31,uVar1);
  uVar1 = FUN_00102882(param_2);
                    /* try { // try from 0010204a to 0010204e has its CatchHandler @ 001020b7 */
  FUN_0010290c(param_1,uVar1,&local_31);
  FUN_00101de6(&local_31);
  uVar2 = FUN_001021a0(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001029ca(param_2);
  uVar4 = FUN_00102972(param_2);
                    /* try { // try from 00102098 to 0010209c has its CatchHandler @ 001020d5 */
  uVar1 = FUN_00102a22(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102af8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00103008(param_3);
  uVar2 = FUN_00102ff2(param_1);
  FUN_0010301a(*param_1,uVar2,uVar1);
  return;
}




void FUN_0010401e(void)

{
  return;
}




void FUN_0010403f(void)

{
  return;
}




void FUN_00104250(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102ae6(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a28(void)

{
  long in_FS_OFFSET;
  char *local_e8;
  undefined8 local_e0;
  size_t local_d8;
  char *local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d9a(local_c8);
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
  local_d0 = getenv("ADD");
  if (local_d0 != (char *)0x0) {
    strncat(local_e8 + local_d8,local_d0,99 - local_d8);
  }
  local_e0 = FUN_00101ea0(local_c8);
  FUN_00101ef0(local_a8,&local_e0);
                    /* try { // try from 00101b7c to 00101c41 has its CatchHandler @ 00101c99 */
  FUN_00101f1e(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00101ea0(local_c8);
  FUN_00101ef0(local_a8,&local_e0);
  FUN_00101f1e(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00101ea0(local_c8);
  FUN_00101ef0(local_a8,&local_e0);
  FUN_00101f1e(local_c8,local_a8[0],1,&local_e8);
  FUN_00101fe4(local_a8,local_c8);
                    /* try { // try from 00101c4c to 00101c50 has its CatchHandler @ 00101c81 */
  FUN_00103a29(local_a8);
  FUN_00101e58(local_a8);
  FUN_00101e58(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fdc(void)

{
  return;
}




void FUN_00101d7a(undefined8 param_1)

{
  FUN_00101dba(param_1);
  return;
}




void FUN_00103412(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035e9(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102e0c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0010325d(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103ce1(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




int FUN_00103f75(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




long FUN_00102baa(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102202(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102202(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102f82(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032eb(param_1,param_2,param_3);
  return;
}




void FUN_00103adc(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




ulong * FUN_00103655(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103fc6(void)

{
  return;
}




void FUN_00102bee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103081(param_2);
  uVar2 = FUN_00103081(param_1);
  FUN_001030cd(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103fe7(void)

{
  return;
}




void FUN_00103c06(undefined4 param_1)

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




void FUN_001017ca(void)

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
  FUN_00101d9a(local_c8);
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
  local_d0 = FUN_00101ea0(local_c8);
  FUN_00101ef0(local_a8,&local_d0);
                    /* try { // try from 001018db to 001019a0 has its CatchHandler @ 001019f8 */
  FUN_00101f1e(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101ea0(local_c8);
  FUN_00101ef0(local_a8,&local_d0);
  FUN_00101f1e(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101ea0(local_c8);
  FUN_00101ef0(local_a8,&local_d0);
  FUN_00101f1e(local_c8,local_a8[0],1,&local_d8);
  FUN_00101fe4(local_a8,local_c8);
                    /* try { // try from 001019ab to 001019af has its CatchHandler @ 001019e0 */
  FUN_001039ed(local_a8);
  FUN_00101e58(local_a8);
  FUN_00101e58(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102fb8(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_0010328b(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103374(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f9a(void)

{
  return;
}




void FUN_00101529(void)

{
  long in_FS_OFFSET;
  char *local_e8;
  undefined8 local_e0;
  size_t local_d8;
  char *local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d9a(local_c8);
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
  local_d0 = getenv("ADD");
  if (local_d0 != (char *)0x0) {
    strncat(local_e8 + local_d8,local_d0,99 - local_d8);
  }
  local_e0 = FUN_00101ea0(local_c8);
  FUN_00101ef0(local_a8,&local_e0);
                    /* try { // try from 0010167d to 00101742 has its CatchHandler @ 0010179a */
  FUN_00101f1e(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00101ea0(local_c8);
  FUN_00101ef0(local_a8,&local_e0);
  FUN_00101f1e(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00101ea0(local_c8);
  FUN_00101ef0(local_a8,&local_e0);
  FUN_00101f1e(local_c8,local_a8[0],1,&local_e8);
  FUN_00101fe4(local_a8,local_c8);
                    /* try { // try from 0010174d to 00101751 has its CatchHandler @ 00101782 */
  FUN_001039b1(local_a8);
  FUN_00101e58(local_a8);
  FUN_00101e58(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00102d1c(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00103208(param_1);
  lVar2 = FUN_00102882(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102882(local_40);
  local_30 = FUN_00102882(local_40);
  plVar3 = (long *)FUN_0010322e(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102882(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00103208(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00103208(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103542(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010371c(param_1,param_2,param_3);
  return;
}




void FUN_001036ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103182(param_3);
  uVar2 = FUN_001037b7(local_28);
  uVar3 = FUN_001037b7(local_20);
  uVar1 = FUN_001037d8(uVar3,uVar2,uVar1);
  FUN_001033fc(&local_30,uVar1);
  return;
}




void FUN_00102c46(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103102(param_2);
  uVar2 = FUN_00103102(param_1);
  FUN_00103114(uVar2,uVar1,param_3);
  return;
}




void FUN_0010380d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103904(&local_10);
  FUN_00103102(uVar1);
  return;
}




void FUN_00101e58(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021a0(param_1);
  FUN_001021b2(*param_1,param_1[1],uVar1);
  FUN_00101e06(param_1);
  return;
}




void FUN_00102124(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_0010301a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103008(param_3);
  FUN_0010331c(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00103f57(void)

{
  return 1;
}




void FUN_00101d9a(undefined8 param_1)

{
  FUN_00101d7a(param_1);
  return;
}




void FUN_00102b8c(undefined8 param_1)

{
  FUN_00102ff2(param_1);
  return;
}




void FUN_00101f1e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00102214(param_1);
  local_18 = FUN_0010226b(&local_38,&local_20);
  local_20 = FUN_001027d0(local_30);
  uVar1 = FUN_0010281c(&local_20,local_18);
  FUN_001022b0(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001027d0(local_30);
  FUN_0010281c(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001042c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




ulong FUN_00103d74(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103fbb(void)

{
  return;
}




void FUN_00102a22(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f82(param_1,param_2,param_3);
  return;
}




void FUN_00102a99(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fdf(param_1,param_2);
  return;
}




void FUN_00102b58(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ff2(param_1);
  FUN_00103057(*param_1,uVar1);
  return;
}




void FUN_00101dba(undefined8 param_1)

{
  FUN_00102104(param_1);
  FUN_00102124(param_1);
  return;
}




void FUN_00103cb3(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001037b7(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102ae6(&local_10);
  return *puVar1;
}




long FUN_0010226b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102ae6(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102ae6(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00104055(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00102202(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001028fa(undefined8 param_1)

{
  return param_1;
}




void FUN_001034f2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010369c(param_2);
  uVar2 = FUN_0010369c(param_1);
  FUN_001036ae(uVar2,uVar1,param_3);
  return;
}




long FUN_00102882(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_001021e0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103b04(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010281c(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_001021e0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103057(undefined8 param_1,undefined8 param_2)

{
  FUN_00103360(param_1,param_2);
  return;
}




void FUN_00102ce7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031d2(param_1,param_2,param_3);
  return;
}




void FUN_001022b0(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102d1c(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001027d0(local_80);
      local_60 = FUN_00102baa(&local_88,&local_78);
      local_70 = FUN_00102e0c(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_001021a0(local_80);
                    /* try { // try from 001025ba to 00102645 has its CatchHandler @ 001026fd */
      FUN_00102ce7(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_001021a0(local_80);
      puVar2 = (undefined8 *)FUN_00102202(&local_88);
      local_70 = FUN_00102e43(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_001021a0(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00102202(&local_88);
      local_70 = FUN_00102e43(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_001021a0(local_80);
      FUN_001021b2(*local_80,local_80[1],uVar1);
      FUN_00102166(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102af8(local_38,param_1,param_4);
                    /* try { // try from 0010233a to 0010250d has its CatchHandler @ 001026df */
      local_50 = FUN_00102b8c(local_38);
      local_78 = FUN_00101ea0(local_80);
      local_48 = FUN_00102baa(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_001021a0(local_80);
        FUN_00102bee(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00102202(&local_88);
        FUN_00102c46(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00102202(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00102202(&local_88);
        FUN_00102c96(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_001021a0(local_80);
        lVar4 = FUN_00102ce7(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_001021a0(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00102202(&local_88);
        FUN_00102bee(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00102202(&local_88);
        FUN_00102c96(*puVar2,local_40,local_50);
      }
      FUN_00102b58(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c88(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00104029(void)

{
  return;
}




undefined8 FUN_00102972(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102ac4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103182(param_3);
  uVar2 = FUN_00103182(local_28);
  uVar3 = FUN_00103182(local_20);
  uVar1 = FUN_001033c7(uVar3,uVar2,uVar1);
  FUN_001033fc(&local_30,uVar1);
  return;
}



