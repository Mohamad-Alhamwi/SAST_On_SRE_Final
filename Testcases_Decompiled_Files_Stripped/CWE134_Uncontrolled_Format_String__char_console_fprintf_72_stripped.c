
void FUN_00102c8b(undefined8 param_1,undefined8 param_2)

{
  FUN_001031d1(param_1,param_2);
  return;
}




void FUN_00102ed9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033c4(param_1,param_2,param_3);
  return;
}




void FUN_00103829(undefined8 param_1)

{
  FUN_00103876(param_1);
  return;
}




void FUN_00104127(void)

{
  return;
}




void FUN_001031aa(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103374(param_2);
  uVar2 = FUN_00103374(param_1);
  FUN_00103386(uVar2,uVar1,param_3);
  return;
}




void FUN_00101fac(undefined8 param_1)

{
  FUN_001022f6(param_1);
  FUN_00102316(param_1);
  return;
}




long FUN_0010245d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102cd8(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102cd8(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_0010436f(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001020e2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001023f4(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_001034dd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036e4(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001023f4(undefined8 param_1)

{
  return param_1;
}




void FUN_001023d2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00104169(void)

{
  return;
}




void FUN_00103dd2(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102348(void)

{
  return;
}




void FUN_00103bfb(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_001029c2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023d2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00104153(void)

{
  return;
}




undefined8 FUN_0010308d(undefined8 param_1,undefined8 param_2)

{
  FUN_001030ba(param_1,param_2);
  return param_1;
}




void FUN_00103249(undefined8 param_1,undefined8 param_2)

{
  FUN_00103552(param_1,param_2);
  return;
}




void FUN_00101ebc(void)

{
  FUN_00101941();
  FUN_00101b9f();
  return;
}




ulong FUN_00102f0e(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_001033fa(param_1);
  lVar2 = FUN_00102a74(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102a74(local_40);
  local_30 = FUN_00102a74(local_40);
  plVar3 = (long *)FUN_00103420(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102a74(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_001033fa(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_001033fa(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00101600(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_001042f6(undefined8 *param_1)

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




void FUN_001040cf(void)

{
  return;
}




void FUN_00101529(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101600(param_1,2);
  fprintf(stdout,(char *)*puVar1);
  return;
}




void FUN_001033fa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102aec(param_1);
  FUN_00103635(uVar1);
  return;
}




void FUN_00103e00(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102392(undefined8 param_1)

{
  return param_1;
}




void FUN_00103604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001037db(param_1,param_2,param_3);
  return;
}




void FUN_00104106(void)

{
  return;
}




undefined8 FUN_00103876(void)

{
  return 0xfffffffffffffff;
}




void _FINI_0(void)

{
  if (DAT_00108038 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101470();
    DAT_00108038 = 1;
    return;
  }
  return;
}




void FUN_00103306(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103374(param_3);
  uVar2 = FUN_00103374(local_28);
  uVar3 = FUN_00103374(local_20);
  uVar1 = FUN_001035b9(uVar3,uVar2,uVar1);
  FUN_001035ee(&local_30,uVar1);
  return;
}




void FUN_001040f0(void)

{
  return;
}




void FUN_001031d1(void)

{
  return;
}




undefined8 FUN_00102aec(undefined8 param_1)

{
  return param_1;
}




long FUN_00102d9c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001023f4(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001023f4(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_0010388e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103273(param_2);
  uVar2 = FUN_00103273(param_1);
  FUN_001032bf(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103566(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103035(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010347d(param_2);
  uVar2 = FUN_0010347d(param_1);
  FUN_001032bf(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102358(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102c59(param_1,param_2,param_3);
  }
  return;
}




void FUN_001023a4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c8b(param_1,param_2);
  return;
}




void FUN_00102c4a(void)

{
  return;
}




void FUN_00104174(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103ccf(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001015b5(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101600(param_1,2);
  fprintf(stdout,"%s\n",*puVar1);
  return;
}




void FUN_00102cb6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001034ca(void)

{
  return;
}




void FUN_0010204a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102392(param_1);
  FUN_001023a4(*param_1,param_1[1],uVar1);
  FUN_00101ff8(param_1);
  return;
}




void FUN_00103bc9(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001043e0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00102092(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023d2(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101ed1(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103ba3("Calling good()...");
  FUN_00101ebc();
  FUN_00103ba3("Finished good()");
  FUN_00103ba3("Calling bad()...");
  FUN_00101624();
  FUN_00103ba3("Finished bad()");
  return 0;
}




void FUN_00103a25(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103374(param_3);
  uVar2 = FUN_00103374(local_28);
  uVar3 = FUN_00103374(local_20);
  uVar1 = FUN_00103b0b(uVar3,uVar2,uVar1);
  FUN_001035ee(&local_30,uVar1);
  return;
}




void FUN_00102110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00102406(param_1);
  local_18 = FUN_0010245d(&local_38,&local_20);
  local_20 = FUN_001029c2(local_30);
  uVar1 = FUN_00102a0e(&local_20,local_18);
  FUN_001024a2(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001029c2(local_30);
  FUN_00102a0e(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00103765(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00103174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034dd(param_1,param_2,param_3);
  return;
}




long FUN_001031e4(long param_1)

{
  return param_1 + 8;
}




void FUN_001040fb(void)

{
  return;
}




void FUN_00102afe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030e4(param_1,param_3);
                    /* try { // try from 00102b38 to 00102b3c has its CatchHandler @ 00102b3f */
  FUN_0010311a(param_1,param_2);
  return;
}




void FUN_001039ca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103a93(param_1,param_2,param_3);
  return;
}




void FUN_00104111(void)

{
  return;
}




void FUN_0010156f(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101600(param_1,2);
  fprintf(stdout,(char *)*puVar1);
  return;
}




undefined8 FUN_00102ffe(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0010344f(param_1,param_2);
  }
  return uVar1;
}




void FUN_001040e5(void)

{
  return;
}




void FUN_00101fd8(undefined8 param_1)

{
  FUN_00102348(param_1);
  return;
}




void FUN_00103cfa(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103635(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103829(param_1);
  puVar1 = (undefined8 *)FUN_00103847(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_00104076(void)

{
  return 1;
}




undefined8 FUN_00102406(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102cb6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101f36(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001038a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103374(param_3);
  uVar2 = FUN_001039a9(local_28);
  uVar3 = FUN_001039a9(local_20);
  uVar1 = FUN_001039ca(uVar3,uVar2,uVar1);
  FUN_001035ee(&local_30,uVar1);
  return;
}




undefined8 FUN_00102a0e(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_001023d2(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001030ba(undefined8 param_1,undefined8 param_2)

{
  FUN_001034ca(param_1,param_2);
  return;
}




void FUN_00102cea(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_001031fa(param_3);
  uVar2 = FUN_001031e4(param_1);
  FUN_0010320c(*param_1,uVar2,uVar1);
  return;
}




void FUN_00102c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103174(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001035ee(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010415e(void)

{
  return;
}




void FUN_00103386(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_001022f6(undefined8 param_1)

{
  FUN_00102c4a(param_1);
  return;
}




void FUN_00101f8c(undefined8 param_1)

{
  FUN_00101f6c(param_1);
  return;
}




void FUN_0010369e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103876(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00102d7e(undefined8 param_1)

{
  FUN_001031e4(param_1);
  return;
}




ulong FUN_00103f97(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050c4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001042d3(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_001039a9(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102cd8(&local_10);
  return *puVar1;
}




void FUN_0010344f(undefined8 param_1,undefined8 param_2)

{
  FUN_0010369e(param_1,param_2,0);
  return;
}




void * FUN_00103b40(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_001031fa(undefined8 param_1)

{
  return param_1;
}




void FUN_0010390e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001039ff(param_2);
  uVar2 = FUN_001039ff(param_1);
  FUN_00103a25(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001041ab(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104174,local_18);
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




undefined8 FUN_00102b64(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102cb6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101624(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_e0;
  undefined8 local_d8;
  size_t local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f8c(local_c8);
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
  local_d0 = strlen(local_e0);
  if (1 < 100 - local_d0) {
                    /* try { // try from 00101720 to 001018b9 has its CatchHandler @ 00101911 */
    pcVar1 = fgets(local_e0 + local_d0,100 - (int)local_d0,stdin);
    if (pcVar1 == (char *)0x0) {
      FUN_00103ba3("fgets() failed");
      local_e0[local_d0] = '\0';
    }
    else {
      local_d0 = strlen(local_e0);
      if ((local_d0 != 0) && (local_e0[local_d0 - 1] == '\n')) {
        local_e0[local_d0 - 1] = '\0';
      }
    }
  }
  local_d8 = FUN_00102092(local_c8);
  FUN_001020e2(local_a8,&local_d8);
  FUN_00102110(local_c8,local_a8[0],1,&local_e0);
  local_d8 = FUN_00102092(local_c8);
  FUN_001020e2(local_a8,&local_d8);
  FUN_00102110(local_c8,local_a8[0],1,&local_e0);
  local_d8 = FUN_00102092(local_c8);
  FUN_001020e2(local_a8,&local_d8);
  FUN_00102110(local_c8,local_a8[0],1,&local_e0);
  FUN_001021d6(local_a8,local_c8);
                    /* try { // try from 001018c4 to 001018c8 has its CatchHandler @ 001018f9 */
  FUN_00101529(local_a8);
  FUN_0010204a(local_a8);
  FUN_0010204a(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001021d6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102aec(param_2);
  FUN_00102a9b(&local_31,uVar1);
  uVar1 = FUN_00102a74(param_2);
                    /* try { // try from 0010223c to 00102240 has its CatchHandler @ 001022a9 */
  FUN_00102afe(param_1,uVar1,&local_31);
  FUN_00101fd8(&local_31);
  uVar2 = FUN_00102392(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102bbc(param_2);
  uVar4 = FUN_00102b64(param_2);
                    /* try { // try from 0010228a to 0010228e has its CatchHandler @ 001022c7 */
  uVar1 = FUN_00102c14(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001032f4(param_2);
  uVar2 = FUN_001032f4(param_1);
  FUN_00103306(uVar2,uVar1,param_3);
  return;
}




void FUN_00103d25(undefined4 param_1)

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




void FUN_00103ca4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001036e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010388e(param_2);
  uVar2 = FUN_0010388e(param_1);
  FUN_001038a0(uVar2,uVar1,param_3);
  return;
}




void FUN_00104450(void)

{
  return;
}




void FUN_001037db(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103374(param_1);
  uVar1 = FUN_0010395e(uVar1,param_2,param_3);
  FUN_001035ee(&local_10,uVar1);
  return;
}




undefined8 * FUN_0010395e(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_0010413d(void)

{
  return;
}




void FUN_001040b9(void)

{
  return;
}




void FUN_00103584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103734(param_1,param_2,param_3);
  return;
}




void FUN_001024a2(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102f0e(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001029c2(local_80);
      local_60 = FUN_00102d9c(&local_88,&local_78);
      local_70 = FUN_00102ffe(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00102392(local_80);
                    /* try { // try from 001027ac to 00102837 has its CatchHandler @ 001028ef */
      FUN_00102ed9(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00102392(local_80);
      puVar2 = (undefined8 *)FUN_001023f4(&local_88);
      local_70 = FUN_00103035(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00102392(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_001023f4(&local_88);
      local_70 = FUN_00103035(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00102392(local_80);
      FUN_001023a4(*local_80,local_80[1],uVar1);
      FUN_00102358(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102cea(local_38,param_1,param_4);
                    /* try { // try from 0010252c to 001026ff has its CatchHandler @ 001028d1 */
      local_50 = FUN_00102d7e(local_38);
      local_78 = FUN_00102092(local_80);
      local_48 = FUN_00102d9c(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00102392(local_80);
        FUN_00102de0(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_001023f4(&local_88);
        FUN_00102e38(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_001023f4(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_001023f4(&local_88);
        FUN_00102e88(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00102392(local_80);
        lVar4 = FUN_00102ed9(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00102392(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_001023f4(&local_88);
        FUN_00102de0(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_001023f4(&local_88);
        FUN_00102e88(*puVar2,local_40,local_50);
      }
      FUN_00102d4a(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001040da(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




undefined8 FUN_001032f4(undefined8 param_1)

{
  return param_1;
}




void * FUN_00103a93(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103e33(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




ulong * FUN_00103420(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00101941(void)

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
  FUN_00101f8c(local_c8);
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
  local_d0 = FUN_00102092(local_c8);
  FUN_001020e2(local_a8,&local_d0);
                    /* try { // try from 00101a52 to 00101b17 has its CatchHandler @ 00101b6f */
  FUN_00102110(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00102092(local_c8);
  FUN_001020e2(local_a8,&local_d0);
  FUN_00102110(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00102092(local_c8);
  FUN_001020e2(local_a8,&local_d0);
  FUN_00102110(local_c8,local_a8[0],1,&local_d8);
  FUN_001021d6(local_a8,local_c8);
                    /* try { // try from 00101b22 to 00101b26 has its CatchHandler @ 00101b57 */
  FUN_0010156f(local_a8);
  FUN_0010204a(local_a8);
  FUN_0010204a(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010411c(void)

{
  return;
}




void FUN_00103c79(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




int FUN_00104094(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001030e4(undefined8 param_1,undefined8 param_2)

{
  FUN_001030ba(param_1,param_2);
  FUN_00102316(param_1);
  return;
}




undefined8 FUN_00102bbc(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102cb6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103552(void)

{
  return;
}




void FUN_00104132(void)

{
  return;
}




void FUN_001035b9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103765(param_1,param_2,param_3);
  return;
}




bool FUN_00104278(pthread_t *param_1)

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




void FUN_0010320c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001031fa(param_3);
  FUN_0010350e(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_0010347d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103566(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b9f(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_e0;
  undefined8 local_d8;
  size_t local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f8c(local_c8);
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
  local_d0 = strlen(local_e0);
  if (1 < 100 - local_d0) {
                    /* try { // try from 00101c9b to 00101e34 has its CatchHandler @ 00101e8c */
    pcVar1 = fgets(local_e0 + local_d0,100 - (int)local_d0,stdin);
    if (pcVar1 == (char *)0x0) {
      FUN_00103ba3("fgets() failed");
      local_e0[local_d0] = '\0';
    }
    else {
      local_d0 = strlen(local_e0);
      if ((local_d0 != 0) && (local_e0[local_d0 - 1] == '\n')) {
        local_e0[local_d0 - 1] = '\0';
      }
    }
  }
  local_d8 = FUN_00102092(local_c8);
  FUN_001020e2(local_a8,&local_d8);
  FUN_00102110(local_c8,local_a8[0],1,&local_e0);
  local_d8 = FUN_00102092(local_c8);
  FUN_001020e2(local_a8,&local_d8);
  FUN_00102110(local_c8,local_a8[0],1,&local_e0);
  local_d8 = FUN_00102092(local_c8);
  FUN_001020e2(local_a8,&local_d8);
  FUN_00102110(local_c8,local_a8[0],1,&local_e0);
  FUN_001021d6(local_a8,local_c8);
                    /* try { // try from 00101e3f to 00101e43 has its CatchHandler @ 00101e74 */
  FUN_001015b5(local_a8);
  FUN_0010204a(local_a8);
  FUN_0010204a(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102316(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ed0)();
  return;
}




undefined8 FUN_00102a9b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010308d(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103d7f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00104085(void)

{
  return 0;
}




void FUN_00102c59(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031aa(param_1,param_2,param_3);
  return;
}




void FUN_001040c4(void)

{
  return;
}




void FUN_00104148(void)

{
  return;
}




void FUN_00102d4a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001031e4(param_1);
  FUN_00103249(*param_1,uVar1);
  return;
}




void FUN_00101f4c(undefined8 param_1)

{
  FUN_00101fd8(param_1);
  return;
}




void FUN_001033c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103604(param_1,param_2,param_3);
  return;
}




void FUN_00103da7(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103ba3(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001039ff(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103af6(&local_10);
  FUN_001032f4(uVar1);
  return;
}




undefined8 FUN_00103374(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b0b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103b40(param_1,param_2,param_3);
  return;
}




void FUN_0010350e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_001031fa(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101f36(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001032bf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103584(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102cd8(undefined8 param_1)

{
  return param_1;
}




ulong * FUN_00103847(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




ulong FUN_00103e93(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050bc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103af6(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103c4f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001043ad(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




long FUN_00102a74(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_001040ae(void)

{
  return;
}




void FUN_00103c23(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010311a(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102ffe(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00101f6c(undefined8 param_1)

{
  FUN_00101fac(param_1);
  return;
}




undefined8 FUN_00103273(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103566(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010438e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010390e(param_1,param_2,param_3);
  return;
}




void FUN_00101ff8(long *param_1)

{
  FUN_00102358(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101f4c(param_1);
  return;
}



