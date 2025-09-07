
void FUN_0010366c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103759(param_2);
  uVar2 = FUN_00103759(param_1);
  FUN_0010377f(uVar2,uVar1,param_3);
  return;
}




void FUN_001038fd(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_0010402d(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103a7f(undefined4 param_1)

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




void * FUN_0010389a(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00103023(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032e2(param_1,param_2,param_3);
  return;
}




void FUN_001015c6(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_0010178a(param_1,2);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_001038fd("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00103955(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




undefined8 FUN_0010334c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103362(param_1,param_2,param_3);
  return;
}




void FUN_00103e55(void)

{
  return;
}




void FUN_001016a3(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_0010178a(param_1,2);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_001038fd("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00103955(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




undefined8 FUN_0010216a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102a1a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102726(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102136(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001032e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103492(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001020f6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102920(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102a1a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001032c4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010322a(void)

{
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




undefined8 FUN_00103393(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_00103587(param_1);
  puVar1 = (undefined8 *)FUN_001035a5(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_001039a9(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103b8d(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102f35(void)

{
  return;
}




void FUN_001029bd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f0e(param_1,param_2,param_3);
  return;
}




void FUN_00103923(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101df6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102136(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e48(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e1e(param_1,param_2);
  FUN_0010207a(param_1);
  return;
}




void FUN_00102d99(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001031dd(param_2);
  uVar2 = FUN_001031dd(param_1);
  FUN_00103023(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102862(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e48(param_1,param_3);
                    /* try { // try from 0010289c to 001028a0 has its CatchHandler @ 001028a3 */
  FUN_00102e7e(param_1,param_2);
  return;
}




void FUN_00103e1e(void)

{
  return;
}




void FUN_0010326e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102f5e(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101c99(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103ea2(void)

{
  return;
}




void FUN_001040c9(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102a1a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00103ddf(void)

{
  return 0;
}




void FUN_00103ad9(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




long FUN_001034c3(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void * FUN_001037ed(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_001040e8(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00103850(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103e76(void)

{
  return;
}




void FUN_0010397d(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010323d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103442(param_1,param_2,param_3);
  return;
}




void FUN_001032b0(void)

{
  return;
}




undefined8 FUN_001027ff(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102df1(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ee0)();
  return;
}




undefined8 FUN_001035ec(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101c99(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102e1e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010322a(param_1,param_2);
  return;
}




void FUN_0010205a(undefined8 param_1)

{
  FUN_001029ae(param_1);
  return;
}




undefined4 * FUN_001036bc(undefined4 *param_1,long param_2,undefined4 *param_3)

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




void FUN_00103e4a(void)

{
  return;
}




undefined8 FUN_001030d8(undefined8 param_1)

{
  return param_1;
}




void FUN_001030ea(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




long FUN_00102f48(long param_1)

{
  return param_1 + 8;
}




void FUN_0010315a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102850(param_1);
  FUN_00103393(uVar1);
  return;
}




undefined8 FUN_00103f05(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103ece,local_18);
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




void FUN_00103a54(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101e46(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102158(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103b01(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001030d8(param_2);
  uVar2 = FUN_001030d8(param_1);
  FUN_001030ea(uVar2,uVar1,param_3);
  return;
}




void FUN_00103539(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001030d8(param_1);
  uVar1 = FUN_001036bc(uVar1,param_2,param_3);
  FUN_0010334c(&local_10,uVar1);
  return;
}




undefined8 FUN_00102df1(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e1e(param_1,param_2);
  return param_1;
}




void FUN_00103955(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103058(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ead(void)

{
  return;
}




void FUN_00103317(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034c3(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102f5e(undefined8 param_1)

{
  return param_1;
}




void FUN_00101cb0(undefined8 param_1)

{
  FUN_00101d3c(param_1);
  return;
}




void FUN_00104107(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001020bc(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001029bd(param_1,param_2,param_3);
  }
  return;
}




void FUN_001033fc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001035d4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




void FUN_001039d3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001037ed(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001035d4(void)

{
  return 0x1fffffffffffffff;
}




void FUN_00103e97(void)

{
  return;
}




undefined8 FUN_00101c34(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001038fd("Calling good()...");
  FUN_00101c1f();
  FUN_001038fd("Finished good()");
  FUN_001038fd("Calling bad()...");
  FUN_001017ae();
  FUN_001038fd("Finished bad()");
  return 0;
}




void FUN_00101d5c(long *param_1)

{
  FUN_001020bc(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00101cb0(param_1);
  return;
}




long FUN_0010178a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_00103e08(void)

{
  return;
}




void FUN_001020ac(void)

{
  return;
}




void FUN_001031af(undefined8 param_1,undefined8 param_2)

{
  FUN_001033fc(param_1,param_2,0);
  return;
}




void FUN_001029ae(void)

{
  return;
}




void FUN_00101c1f(void)

{
  FUN_00101929();
  FUN_00101aa4();
  return;
}




undefined8 FUN_00102fd7(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032c4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103eb8(void)

{
  return;
}




void FUN_0010377f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001030d8(param_3);
  uVar2 = FUN_001030d8(local_28);
  uVar3 = FUN_001030d8(local_20);
  uVar1 = FUN_00103865(uVar3,uVar2,uVar1);
  FUN_0010334c(&local_30,uVar1);
  return;
}




void FUN_00101d3c(undefined8 param_1)

{
  FUN_001020ac(param_1);
  return;
}




void FUN_00102108(undefined8 param_1,undefined8 param_2)

{
  FUN_001029ef(param_1,param_2);
  return;
}




void FUN_00103e34(void)

{
  return;
}




void FUN_00103b2c(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00104140(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103587(undefined8 param_1)

{
  FUN_001035d4(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00102e7e(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102d62(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




ulong * FUN_00103180(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103865(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010389a(param_1,param_2,param_3);
  return;
}




void FUN_00101f3a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102850(param_2);
  FUN_001027ff(&local_31,uVar1);
  uVar1 = FUN_001027d8(param_2);
                    /* try { // try from 00101fa0 to 00101fa4 has its CatchHandler @ 0010200d */
  FUN_00102862(param_1,uVar1,&local_31);
  FUN_00101d3c(&local_31);
  uVar2 = FUN_001020f6(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102920(param_2);
  uVar4 = FUN_001028c8(param_2);
                    /* try { // try from 00101fee to 00101ff2 has its CatchHandler @ 0010202b */
  uVar1 = FUN_00102978(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a4e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102f5e(param_3);
  uVar2 = FUN_00102f48(param_1);
  FUN_00102f70(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103ec3(void)

{
  return;
}




bool FUN_00103fd2(pthread_t *param_1)

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




void FUN_001041b0(void)

{
  return;
}




undefined8 FUN_00102a3c(undefined8 param_1)

{
  return param_1;
}




void FUN_00101aa4(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cf0(local_58);
  local_64 = 10;
  local_60 = FUN_00101df6(local_58);
  FUN_00101e46(local_38,&local_60);
                    /* try { // try from 00101b14 to 00101ba9 has its CatchHandler @ 00101bf5 */
  FUN_00101e74(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101df6(local_58);
  FUN_00101e46(local_38,&local_60);
  FUN_00101e74(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101df6(local_58);
  FUN_00101e46(local_38,&local_60);
  FUN_00101e74(local_58,local_38[0],1,&local_64);
  FUN_00101f3a(local_38,local_58);
                    /* try { // try from 00101bb1 to 00101bb5 has its CatchHandler @ 00101be0 */
  FUN_001016a3(local_38);
  FUN_00101dae(local_38);
  FUN_00101dae(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103e81(void)

{
  return;
}




void FUN_00101cd0(undefined8 param_1)

{
  FUN_00101d10(param_1);
  return;
}




void FUN_00103362(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103539(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102d62(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_001031af(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_00103dd0(void)

{
  return 1;
}




void FUN_00103e29(void)

{
  return;
}




long FUN_00102b00(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102158(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102158(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00102ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010323d(param_1,param_2,param_3);
  return;
}




void FUN_001039fe(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong * FUN_001035a5(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103e6b(void)

{
  return;
}




void FUN_00102b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102fd7(param_2);
  uVar2 = FUN_00102fd7(param_1);
  FUN_00103023(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103e8c(void)

{
  return;
}




void FUN_00103b5a(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101929(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cf0(local_58);
  local_64 = 7;
  local_60 = FUN_00101df6(local_58);
  FUN_00101e46(local_38,&local_60);
                    /* try { // try from 00101999 to 00101a2e has its CatchHandler @ 00101a7a */
  FUN_00101e74(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101df6(local_58);
  FUN_00101e46(local_38,&local_60);
  FUN_00101e74(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101df6(local_58);
  FUN_00101e46(local_38,&local_60);
  FUN_00101e74(local_58,local_38[0],1,&local_64);
  FUN_00101f3a(local_38,local_58);
                    /* try { // try from 00101a36 to 00101a3a has its CatchHandler @ 00101a65 */
  FUN_001015c6(local_38);
  FUN_00101dae(local_38);
  FUN_00101dae(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102f0e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_001031dd(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032c4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103e3f(void)

{
  return;
}




void FUN_001017ae(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cf0(local_58);
  local_64 = 10;
  local_60 = FUN_00101df6(local_58);
  FUN_00101e46(local_38,&local_60);
                    /* try { // try from 0010181e to 001018b3 has its CatchHandler @ 001018ff */
  FUN_00101e74(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101df6(local_58);
  FUN_00101e46(local_38,&local_60);
  FUN_00101e74(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101df6(local_58);
  FUN_00101e46(local_38,&local_60);
  FUN_00101e74(local_58,local_38[0],1,&local_64);
  FUN_00101f3a(local_38,local_58);
                    /* try { // try from 001018bb to 001018bf has its CatchHandler @ 001018ea */
  FUN_001014e9(local_38);
  FUN_00101dae(local_38);
  FUN_00101dae(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00102c72(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_0010315a(param_1);
  lVar2 = FUN_001027d8(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001027d8(local_40);
  local_30 = FUN_001027d8(local_40);
  plVar3 = (long *)FUN_00103180(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001027d8(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_0010315a(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_0010315a(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103492(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010366c(param_1,param_2,param_3);
  return;
}




void FUN_001035fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001030d8(param_3);
  uVar2 = FUN_00103703(local_28);
  uVar3 = FUN_00103703(local_20);
  uVar1 = FUN_00103724(uVar3,uVar2,uVar1);
  FUN_0010334c(&local_30,uVar1);
  return;
}




void FUN_00102b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103058(param_2);
  uVar2 = FUN_00103058(param_1);
  FUN_0010306a(uVar2,uVar1,param_3);
  return;
}




void FUN_00103759(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103850(&local_10);
  FUN_00103058(uVar1);
  return;
}




void FUN_00101dae(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020f6(param_1);
  FUN_00102108(*param_1,param_1[1],uVar1);
  FUN_00101d5c(param_1);
  return;
}




void FUN_0010207a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00102f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102f5e(param_3);
  FUN_0010326e(param_1,param_2,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00103e13(void)

{
  return;
}




void FUN_00101cf0(undefined8 param_1)

{
  FUN_00101cd0(param_1);
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_0010178a(param_1,2);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_001038fd("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00103955(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00101e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_0010216a(param_1);
  local_18 = FUN_001021c1(&local_38,&local_20);
  local_20 = FUN_00102726(local_30);
  uVar1 = FUN_00102772(&local_20,local_18);
  FUN_00102206(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102726(local_30);
  FUN_00102772(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ae2(undefined8 param_1)

{
  FUN_00102f48(param_1);
  return;
}




int FUN_00103dee(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103e60(void)

{
  return;
}




void FUN_00102978(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ed8(param_1,param_2,param_3);
  return;
}




void FUN_001029ef(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f35(param_1,param_2);
  return;
}




void FUN_00102aae(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102f48(param_1);
  FUN_00102fad(*param_1,uVar1);
  return;
}




void FUN_00101d10(undefined8 param_1)

{
  FUN_0010205a(param_1);
  FUN_0010207a(param_1);
  return;
}




ulong FUN_00103cf1(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00103703(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102a3c(&local_10);
  return *puVar1;
}




long FUN_001021c1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102a3c(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102a3c(param_2);
  return lVar1 - *plVar2 >> 2;
}




undefined8 FUN_00104050(undefined8 *param_1)

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




undefined8 FUN_00102158(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102850(undefined8 param_1)

{
  return param_1;
}




void FUN_00103442(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001035ec(param_2);
  uVar2 = FUN_001035ec(param_1);
  FUN_001035fe(uVar2,uVar1,param_3);
  return;
}




long FUN_001027d8(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_00102136(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103a29(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102772(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00102136(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102fad(undefined8 param_1,undefined8 param_2)

{
  FUN_001032b0(param_1,param_2);
  return;
}




void FUN_00102c3d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103124(param_1,param_2,param_3);
  return;
}




void FUN_00102206(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102c72(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102726(local_80);
      local_60 = FUN_00102b00(&local_88,&local_78);
      local_70 = FUN_00102d62(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_001020f6(local_80);
                    /* try { // try from 00102510 to 0010259b has its CatchHandler @ 00102653 */
      FUN_00102c3d(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_001020f6(local_80);
      puVar2 = (undefined8 *)FUN_00102158(&local_88);
      local_70 = FUN_00102d99(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_001020f6(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00102158(&local_88);
      local_70 = FUN_00102d99(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_001020f6(local_80);
      FUN_00102108(*local_80,local_80[1],uVar1);
      FUN_001020bc(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00102a4e(local_38,param_1,param_4);
                    /* try { // try from 00102290 to 00102463 has its CatchHandler @ 00102635 */
      local_50 = FUN_00102ae2(local_38);
      local_78 = FUN_00101df6(local_80);
      local_48 = FUN_00102b00(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_001020f6(local_80);
        FUN_00102b44(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_00102158(&local_88);
        FUN_00102b9c(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00102158(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00102158(&local_88);
        FUN_00102bec(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_001020f6(local_80);
        lVar4 = FUN_00102c3d(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_001020f6(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00102158(&local_88);
        FUN_00102b44(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_00102158(&local_88);
        FUN_00102bec(*puVar2,local_40,local_50);
      }
      FUN_00102aae(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00103bed(long param_1,ulong param_2,long param_3)

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




void FUN_00103ece(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001028c8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102a1a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010306a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001030d8(param_3);
  uVar2 = FUN_001030d8(local_28);
  uVar3 = FUN_001030d8(local_20);
  uVar1 = FUN_00103317(uVar3,uVar2,uVar1);
  FUN_0010334c(&local_30,uVar1);
  return;
}



