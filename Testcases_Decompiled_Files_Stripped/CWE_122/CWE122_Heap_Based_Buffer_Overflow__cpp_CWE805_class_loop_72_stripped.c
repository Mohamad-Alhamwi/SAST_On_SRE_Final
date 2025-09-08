
void * FUN_001036d4(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001038b9(undefined4 param_1)

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




undefined8 FUN_00103c19(void)

{
  return 0;
}




void FUN_0010388e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103011(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030fa(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101ae0(undefined8 param_1)

{
  FUN_00101b6c(param_1);
  return;
}




ulong * FUN_001033db(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001030fa(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103cf2(void)

{
  return;
}




void FUN_00101b00(undefined8 param_1)

{
  FUN_00101b40(param_1);
  return;
}




undefined8 FUN_001026f8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010284a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001027de(void)

{
  return;
}




void FUN_0010336f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102f08(param_1);
  uVar1 = FUN_001034f2(uVar1,param_2,param_3);
  FUN_00103182(&local_10,uVar1);
  return;
}




long FUN_00102608(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00102912(undefined8 param_1)

{
  FUN_00102d78(param_1);
  return;
}




long FUN_001032f9(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_001031c9(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001033bd(param_1);
  puVar1 = (undefined8 *)FUN_001033db(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_00101a64(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103737("Calling good()...");
  FUN_00101a54();
  FUN_00103737("Finished good()");
  FUN_00103737("Calling bad()...");
  FUN_0010174e();
  FUN_00103737("Finished bad()");
  return 0;
}




undefined8 FUN_00103422(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




void FUN_00103994(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00103c63(void)

{
  return;
}




undefined8 FUN_00102f08(undefined8 param_1)

{
  return param_1;
}




void FUN_001029cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e88(param_2);
  uVar2 = FUN_00102e88(param_1);
  FUN_00102e9a(uVar2,uVar1,param_3);
  return;
}




void FUN_00103913(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101f38(undefined8 param_1,undefined8 param_2)

{
  FUN_0010281f(param_1,param_2);
  return;
}




undefined8 FUN_00102e07(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030fa(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102d8e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010287e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d8e(param_3);
  uVar2 = FUN_00102d78(param_1);
  FUN_00102da0(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103cbb(void)

{
  return;
}




void FUN_00103278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103422(param_2);
  uVar2 = FUN_00103422(param_1);
  FUN_00103434(uVar2,uVar1,param_3);
  return;
}




void FUN_00103f03(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102a6d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f58(param_1,param_2,param_3);
  return;
}




void FUN_00103c8f(void)

{
  return;
}




int FUN_00103c28(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_0010353d(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010286c(&local_10);
  return *puVar1;
}




void FUN_0010380d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103838(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103d3f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d08,local_18);
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




void FUN_00103966(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103232(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010340a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_001032c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034a2(param_1,param_2,param_3);
  return;
}




void FUN_0010284a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_0010172a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_0010368a(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101c76(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f88(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00102ddd(undefined8 param_1,undefined8 param_2)

{
  FUN_001030e6(param_1,param_2);
  return;
}




long FUN_00101ff1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010286c(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010286c(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103737(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103ce7(void)

{
  return;
}




void FUN_001030a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d8e(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101ac9(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001030e6(void)

{
  return;
}




void FUN_00102f1a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032c8(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103c0a(void)

{
  return 1;
}




void FUN_00101f66(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103c42(void)

{
  return;
}




void FUN_00102d08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103071(param_1,param_2,param_3);
  return;
}




void FUN_0010355e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103627(param_1,param_2,param_3);
  return;
}




void FUN_00101509(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  ulong local_350;
  ulong local_348;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)FUN_0010172a(param_1,2);
  puVar1 = (undefined4 *)*puVar2;
  for (local_350 = 0; local_350 < 100; local_350 = local_350 + 1) {
    *(undefined4 *)(&uStack_338 + local_350) = 0;
    *(undefined4 *)((long)&uStack_338 + local_350 * 8 + 4) = 0;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined8 *)(puVar1 + local_348 * 2) = (&uStack_338)[local_348];
  }
  FUN_0010378f(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102da0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d8e(param_3);
  FUN_001030a2(param_1,param_2,uVar1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101450();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_0010393b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010305e(void)

{
  return;
}




void FUN_00103f22(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001033bd(undefined8 param_1)

{
  FUN_0010340a(param_1);
  return;
}




void FUN_00102f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103198(param_1,param_2,param_3);
  return;
}




void FUN_00101ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f9a(param_1);
  local_18 = FUN_00101ff1(&local_38,&local_20);
  local_20 = FUN_00102556(local_30);
  uVar1 = FUN_001025a2(&local_20,local_18);
  FUN_00102036(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102556(local_30);
  FUN_001025a2(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001025a2(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f66(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f08(param_3);
  uVar2 = FUN_0010353d(local_28);
  uVar3 = FUN_0010353d(local_20);
  uVar1 = FUN_0010355e(uVar3,uVar2,uVar1);
  FUN_00103182(&local_30,uVar1);
  return;
}




void FUN_001039c7(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010378f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void * FUN_00103627(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00103e8a(undefined8 *param_1)

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




undefined8 FUN_00101c26(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f66(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101eec(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001027ed(param_1,param_2,param_3);
  }
  return;
}




void FUN_00101b20(undefined8 param_1)

{
  FUN_00101b00(param_1);
  return;
}




void FUN_00103ca5(void)

{
  return;
}




undefined8 FUN_00102556(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f66(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103182(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e07(param_2);
  uVar2 = FUN_00102e07(param_1);
  FUN_00102e53(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101bde(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f26(param_1);
  FUN_00101f38(*param_1,param_1[1],uVar1);
  FUN_00101b8c(param_1);
  return;
}




void FUN_00102fe3(undefined8 param_1,undefined8 param_2)

{
  FUN_00103232(param_1,param_2,0);
  return;
}




void FUN_00103f41(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001037e3(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101edc(void)

{
  return;
}




void FUN_00101619(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  ulong local_350;
  ulong local_348;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)FUN_0010172a(param_1,2);
  puVar1 = (undefined4 *)*puVar2;
  for (local_350 = 0; local_350 < 100; local_350 = local_350 + 1) {
    *(undefined4 *)(&uStack_338 + local_350) = 0;
    *(undefined4 *)((long)&uStack_338 + local_350 * 8 + 4) = 0;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined8 *)(puVar1 + local_348 * 2) = (&uStack_338)[local_348];
  }
  FUN_0010378f(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010262f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102c21(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103cd1(void)

{
  return;
}




void FUN_00103c4d(void)

{
  return;
}




void FUN_00103593(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010368a(&local_10);
  FUN_00102e88(uVar1);
  return;
}




void FUN_001018d1(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b20(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 00101906 to 001019de has its CatchHandler @ 00101a2a */
  local_68 = operator_new__(800);
  local_60 = FUN_00101c26(local_58);
  FUN_00101c76(local_38,&local_60);
  FUN_00101ca4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c26(local_58);
  FUN_00101c76(local_38,&local_60);
  FUN_00101ca4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c26(local_58);
  FUN_00101c76(local_38,&local_60);
  FUN_00101ca4(local_58,local_38[0],1,&local_68);
  FUN_00101d6a(local_38,local_58);
                    /* try { // try from 001019e6 to 001019ea has its CatchHandler @ 00101a15 */
  FUN_00101619(local_38);
  FUN_00101bde(local_38);
  FUN_00101bde(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e53(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103118(param_1,param_2,param_3);
  return;
}




void FUN_0010314d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032f9(param_1,param_2,param_3);
  return;
}




void FUN_00103863(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101f9a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010284a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102b92(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102fe3(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103f70(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010174e(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b20(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 00101783 to 0010185b has its CatchHandler @ 001018a7 */
  local_68 = operator_new__(400);
  local_60 = FUN_00101c26(local_58);
  FUN_00101c76(local_38,&local_60);
  FUN_00101ca4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c26(local_58);
  FUN_00101c76(local_38,&local_60);
  FUN_00101ca4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c26(local_58);
  FUN_00101c76(local_38,&local_60);
  FUN_00101ca4(local_58,local_38[0],1,&local_68);
  FUN_00101d6a(local_38,local_58);
                    /* try { // try from 00101863 to 00101867 has its CatchHandler @ 00101892 */
  FUN_00101509(local_38);
  FUN_00101bde(local_38);
  FUN_00101bde(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00102aa2(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f8e(param_1);
  lVar2 = FUN_00102608(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102608(local_40);
  local_30 = FUN_00102608(local_40);
  plVar3 = (long *)FUN_00102fb4(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102608(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f8e(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f8e(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101b8c(long *param_1)

{
  FUN_00101eec(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101ae0(param_1);
  return;
}




bool FUN_00103e0c(pthread_t *param_1)

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




void FUN_00101d6a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102680(param_2);
  FUN_0010262f(&local_31,uVar1);
  uVar1 = FUN_00102608(param_2);
                    /* try { // try from 00101dd0 to 00101dd4 has its CatchHandler @ 00101e3d */
  FUN_00102692(param_1,uVar1,&local_31);
  FUN_00101b6c(&local_31);
  uVar2 = FUN_00101f26(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102750(param_2);
  uVar4 = FUN_001026f8(param_2);
                    /* try { // try from 00101e1e to 00101e22 has its CatchHandler @ 00101e5b */
  uVar1 = FUN_001027a8(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010340a(void)

{
  return 0xfffffffffffffff;
}




long FUN_00102d78(long param_1)

{
  return param_1 + 8;
}




void FUN_00103c84(void)

{
  return;
}




void FUN_00103cc6(void)

{
  return;
}




void FUN_00102c4e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010305e(param_1,param_2);
  return;
}




undefined8 FUN_00102e88(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103a27(long param_1,ulong param_2,long param_3)

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




void FUN_001035b9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f08(param_3);
  uVar2 = FUN_00102f08(local_28);
  uVar3 = FUN_00102f08(local_20);
  uVar1 = FUN_0010369f(uVar3,uVar2,uVar1);
  FUN_00103182(&local_30,uVar1);
  return;
}




void FUN_00103d08(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102c78(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c4e(param_1,param_2);
  FUN_00101eaa(param_1);
  return;
}




undefined8 FUN_00103e67(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103c58(void)

{
  return;
}




void FUN_00101b6c(undefined8 param_1)

{
  FUN_00101edc(param_1);
  return;
}




void FUN_00102e9a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f08(param_3);
  uVar2 = FUN_00102f08(local_28);
  uVar3 = FUN_00102f08(local_20);
  uVar1 = FUN_0010314d(uVar3,uVar2,uVar1);
  FUN_00103182(&local_30,uVar1);
  return;
}




void FUN_00103198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010336f(param_1,param_2,param_3);
  return;
}




void FUN_00103cdc(void)

{
  return;
}




void FUN_00101b40(undefined8 param_1)

{
  FUN_00101e8a(param_1);
  FUN_00101eaa(param_1);
  return;
}




void FUN_00102d65(void)

{
  return;
}




undefined8 * FUN_001034f2(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_0010369f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036d4(param_1,param_2,param_3);
  return;
}




void FUN_00102cae(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b92(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_001037b7(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101f26(undefined8 param_1)

{
  return param_1;
}




void FUN_00102036(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102aa2(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102556(local_80);
      local_60 = FUN_00102930(&local_88,&local_78);
      local_70 = FUN_00102b92(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101f26(local_80);
                    /* try { // try from 00102340 to 001023cb has its CatchHandler @ 00102483 */
      FUN_00102a6d(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101f26(local_80);
      puVar2 = (undefined8 *)FUN_00101f88(&local_88);
      local_70 = FUN_00102bc9(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101f26(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f88(&local_88);
      local_70 = FUN_00102bc9(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101f26(local_80);
      FUN_00101f38(*local_80,local_80[1],uVar1);
      FUN_00101eec(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010287e(local_38,param_1,param_4);
                    /* try { // try from 001020c0 to 00102293 has its CatchHandler @ 00102465 */
      local_50 = FUN_00102912(local_38);
      local_78 = FUN_00101c26(local_80);
      local_48 = FUN_00102930(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101f26(local_80);
        FUN_00102974(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f88(&local_88);
        FUN_001029cc(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f88(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f88(&local_88);
        FUN_00102a1c(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101f26(local_80);
        lVar4 = FUN_00102a6d(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101f26(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f88(&local_88);
        FUN_00102974(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f88(&local_88);
        FUN_00102a1c(*puVar2,local_40,local_50);
      }
      FUN_001028de(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a54(void)

{
  FUN_001018d1();
  return;
}




void FUN_00102f8e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102680(param_1);
  FUN_001031c9(uVar1);
  return;
}




void FUN_00103cb0(void)

{
  return;
}




void FUN_00101e8a(undefined8 param_1)

{
  FUN_001027de(param_1);
  return;
}




undefined8 FUN_00101ac9(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00101f88(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c21(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c4e(param_1,param_2);
  return param_1;
}




void FUN_00103c9a(void)

{
  return;
}




void FUN_00103cfd(void)

{
  return;
}




long FUN_00102930(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f88(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f88(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f08(param_2);
  uVar2 = FUN_00102f08(param_1);
  FUN_00102f1a(uVar2,uVar1,param_3);
  return;
}




void FUN_00102bc9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103011(param_2);
  uVar2 = FUN_00103011(param_1);
  FUN_00102e53(uVar2,uVar1,param_3,param_4);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00101eaa(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103c79(void)

{
  return;
}




void FUN_0010375d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102750(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010284a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102692(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c78(param_1,param_3);
                    /* try { // try from 001026cc to 001026d0 has its CatchHandler @ 001026d3 */
  FUN_00102cae(param_1,param_2);
  return;
}




undefined8 FUN_0010286c(undefined8 param_1)

{
  return param_1;
}




void FUN_001034a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103593(param_2);
  uVar2 = FUN_00103593(param_1);
  FUN_001035b9(uVar2,uVar1,param_3);
  return;
}




void FUN_0010281f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d65(param_1,param_2);
  return;
}




undefined8 FUN_00102680(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103b2b(long param_1,ulong param_2,long param_3)

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




void FUN_001027ed(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d3e(param_1,param_2,param_3);
  return;
}




ulong * FUN_00102fb4(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102d3e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001027a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d08(param_1,param_2,param_3);
  return;
}




void FUN_00103c6e(void)

{
  return;
}




void FUN_00103fe0(void)

{
  return;
}




void FUN_001028de(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d78(param_1);
  FUN_00102ddd(*param_1,uVar1);
  return;
}




void FUN_00103071(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103278(param_1,param_2,param_3);
  return;
}



