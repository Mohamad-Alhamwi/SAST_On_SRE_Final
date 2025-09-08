
void * FUN_0010366e(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103853(undefined4 param_1)

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




undefined8 FUN_00103bb3(void)

{
  return 0;
}




void FUN_00103828(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102fab(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103094(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101a7a(undefined8 param_1)

{
  FUN_00101b06(param_1);
  return;
}




ulong * FUN_00103375(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103094(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103c8c(void)

{
  return;
}




void FUN_00101a9a(undefined8 param_1)

{
  FUN_00101ada(param_1);
  return;
}




undefined8 FUN_00102692(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027e4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102778(void)

{
  return;
}




void FUN_00103309(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102ea2(param_1);
  uVar1 = FUN_0010348c(uVar1,param_2,param_3);
  FUN_0010311c(&local_10,uVar1);
  return;
}




long FUN_001025a2(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_001028ac(undefined8 param_1)

{
  FUN_00102d12(param_1);
  return;
}




long FUN_00103293(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_00103163(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103357(param_1);
  puVar1 = (undefined8 *)FUN_00103375(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_001019fe(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036d1("Calling good()...");
  FUN_001019ee();
  FUN_001036d1("Finished good()");
  FUN_001036d1("Calling bad()...");
  FUN_001016e8();
  FUN_001036d1("Finished bad()");
  return 0;
}




undefined8 FUN_001033bc(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed0)();
  return;
}




void FUN_0010392e(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_00103bfd(void)

{
  return;
}




undefined8 FUN_00102ea2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102966(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e22(param_2);
  uVar2 = FUN_00102e22(param_1);
  FUN_00102e34(uVar2,uVar1,param_3);
  return;
}




void FUN_001038ad(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101ed2(undefined8 param_1,undefined8 param_2)

{
  FUN_001027b9(param_1,param_2);
  return;
}




undefined8 FUN_00102da1(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103094(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102d28(undefined8 param_1)

{
  return param_1;
}




void FUN_00102818(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d28(param_3);
  uVar2 = FUN_00102d12(param_1);
  FUN_00102d3a(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103c55(void)

{
  return;
}




void FUN_00103212(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033bc(param_2);
  uVar2 = FUN_001033bc(param_1);
  FUN_001033ce(uVar2,uVar1,param_3);
  return;
}




void FUN_00103e9d(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102a07(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ef2(param_1,param_2,param_3);
  return;
}




void FUN_00103c29(void)

{
  return;
}




int FUN_00103bc2(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_001034d7(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102806(&local_10);
  return *puVar1;
}




void FUN_001037a7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001037d2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103cd9(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103ca2,local_18);
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




void FUN_00103900(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001031cc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001033a4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00103262(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010343c(param_1,param_2,param_3);
  return;
}




void FUN_001027e4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_001016c4(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_00103624(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101c10(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f22(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00102d77(undefined8 param_1,undefined8 param_2)

{
  FUN_00103080(param_1,param_2);
  return;
}




long FUN_00101f8b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102806(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102806(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001036d1(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103c81(void)

{
  return;
}




void FUN_0010303c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d28(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a63(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103080(void)

{
  return;
}




void FUN_00102eb4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_001030b2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103262(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103ba4(void)

{
  return 1;
}




void FUN_00101f00(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103bdc(void)

{
  return;
}




void FUN_00102ca2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010300b(param_1,param_2,param_3);
  return;
}




void FUN_001034f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035c1(param_1,param_2,param_3);
  return;
}




void FUN_00101529(undefined8 param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  ulong local_38;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)FUN_001016c4(param_1,2);
  pvVar1 = (void *)*puVar2;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar3 = strlen(local_1b);
  for (local_38 = 0; local_38 < sVar3 + 1; local_38 = local_38 + 1) {
    *(char *)((long)pvVar1 + local_38) = local_1b[local_38];
  }
  FUN_001036d1(pvVar1);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d28(param_3);
  FUN_0010303c(param_1,param_2,uVar1);
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




void FUN_001038d5(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102ff8(void)

{
  return;
}




void FUN_00103ebc(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103357(undefined8 param_1)

{
  FUN_001033a4(param_1);
  return;
}




void FUN_00102ef2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103132(param_1,param_2,param_3);
  return;
}




void FUN_00101c3e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f34(param_1);
  local_18 = FUN_00101f8b(&local_38,&local_20);
  local_20 = FUN_001024f0(local_30);
  uVar1 = FUN_0010253c(&local_20,local_18);
  FUN_00101fd0(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001024f0(local_30);
  FUN_0010253c(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010253c(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f00(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001033ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ea2(param_3);
  uVar2 = FUN_001034d7(local_28);
  uVar3 = FUN_001034d7(local_20);
  uVar1 = FUN_001034f8(uVar3,uVar2,uVar1);
  FUN_0010311c(&local_30,uVar1);
  return;
}




void FUN_00103961(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103729(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void * FUN_001035c1(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00103e24(undefined8 *param_1)

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




undefined8 FUN_00101bc0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f00(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e86(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102787(param_1,param_2,param_3);
  }
  return;
}




void FUN_00101aba(undefined8 param_1)

{
  FUN_00101a9a(param_1);
  return;
}




void FUN_00103c3f(void)

{
  return;
}




undefined8 FUN_001024f0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f00(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010311c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010290e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102da1(param_2);
  uVar2 = FUN_00102da1(param_1);
  FUN_00102ded(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101b78(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ec0(param_1);
  FUN_00101ed2(*param_1,param_1[1],uVar1);
  FUN_00101b26(param_1);
  return;
}




void FUN_00102f7d(undefined8 param_1,undefined8 param_2)

{
  FUN_001031cc(param_1,param_2,0);
  return;
}




void FUN_00103edb(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010377d(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101e76(void)

{
  return;
}




void FUN_001015f6(undefined8 param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  ulong local_38;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)FUN_001016c4(param_1,2);
  pvVar1 = (void *)*puVar2;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar3 = strlen(local_1b);
  for (local_38 = 0; local_38 < sVar3 + 1; local_38 = local_38 + 1) {
    *(char *)((long)pvVar1 + local_38) = local_1b[local_38];
  }
  FUN_001036d1(pvVar1);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001025c9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102bbb(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103c6b(void)

{
  return;
}




void FUN_00103be7(void)

{
  return;
}




void FUN_0010352d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103624(&local_10);
  FUN_00102e22(uVar1);
  return;
}




void FUN_0010186b(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101aba(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 001018a0 to 00101978 has its CatchHandler @ 001019c4 */
  local_68 = operator_new__(0xb);
  local_60 = FUN_00101bc0(local_58);
  FUN_00101c10(local_38,&local_60);
  FUN_00101c3e(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bc0(local_58);
  FUN_00101c10(local_38,&local_60);
  FUN_00101c3e(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bc0(local_58);
  FUN_00101c10(local_38,&local_60);
  FUN_00101c3e(local_58,local_38[0],1,&local_68);
  FUN_00101d04(local_38,local_58);
                    /* try { // try from 00101980 to 00101984 has its CatchHandler @ 001019af */
  FUN_001015f6(local_38);
  FUN_00101b78(local_38);
  FUN_00101b78(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ded(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030b2(param_1,param_2,param_3);
  return;
}




void FUN_001030e7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103293(param_1,param_2,param_3);
  return;
}




void FUN_001037fd(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101f34(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027e4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102b2c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f7d(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103f10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001016e8(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101aba(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 0010171d to 001017f5 has its CatchHandler @ 00101841 */
  local_68 = operator_new__(10);
  local_60 = FUN_00101bc0(local_58);
  FUN_00101c10(local_38,&local_60);
  FUN_00101c3e(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bc0(local_58);
  FUN_00101c10(local_38,&local_60);
  FUN_00101c3e(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bc0(local_58);
  FUN_00101c10(local_38,&local_60);
  FUN_00101c3e(local_58,local_38[0],1,&local_68);
  FUN_00101d04(local_38,local_58);
                    /* try { // try from 001017fd to 00101801 has its CatchHandler @ 0010182c */
  FUN_00101529(local_38);
  FUN_00101b78(local_38);
  FUN_00101b78(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00102a3c(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f28(param_1);
  lVar2 = FUN_001025a2(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001025a2(local_40);
  local_30 = FUN_001025a2(local_40);
  plVar3 = (long *)FUN_00102f4e(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001025a2(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f28(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f28(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101b26(long *param_1)

{
  FUN_00101e86(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a7a(param_1);
  return;
}




bool FUN_00103da6(pthread_t *param_1)

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




void FUN_00101d04(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010261a(param_2);
  FUN_001025c9(&local_31,uVar1);
  uVar1 = FUN_001025a2(param_2);
                    /* try { // try from 00101d6a to 00101d6e has its CatchHandler @ 00101dd7 */
  FUN_0010262c(param_1,uVar1,&local_31);
  FUN_00101b06(&local_31);
  uVar2 = FUN_00101ec0(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001026ea(param_2);
  uVar4 = FUN_00102692(param_2);
                    /* try { // try from 00101db8 to 00101dbc has its CatchHandler @ 00101df5 */
  uVar1 = FUN_00102742(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001033a4(void)

{
  return 0xfffffffffffffff;
}




long FUN_00102d12(long param_1)

{
  return param_1 + 8;
}




void FUN_00103c1e(void)

{
  return;
}




void FUN_00103c60(void)

{
  return;
}




void FUN_00102be8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ff8(param_1,param_2);
  return;
}




undefined8 FUN_00102e22(undefined8 param_1)

{
  return param_1;
}




ulong FUN_001039c1(long param_1,ulong param_2,long param_3)

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




void FUN_00103553(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ea2(param_3);
  uVar2 = FUN_00102ea2(local_28);
  uVar3 = FUN_00102ea2(local_20);
  uVar1 = FUN_00103639(uVar3,uVar2,uVar1);
  FUN_0010311c(&local_30,uVar1);
  return;
}




void FUN_00103ca2(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102c12(undefined8 param_1,undefined8 param_2)

{
  FUN_00102be8(param_1,param_2);
  FUN_00101e44(param_1);
  return;
}




undefined8 FUN_00103e01(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103bf2(void)

{
  return;
}




void FUN_00101b06(undefined8 param_1)

{
  FUN_00101e76(param_1);
  return;
}




void FUN_00102e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ea2(param_3);
  uVar2 = FUN_00102ea2(local_28);
  uVar3 = FUN_00102ea2(local_20);
  uVar1 = FUN_001030e7(uVar3,uVar2,uVar1);
  FUN_0010311c(&local_30,uVar1);
  return;
}




void FUN_00103132(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103309(param_1,param_2,param_3);
  return;
}




void FUN_00103c76(void)

{
  return;
}




void FUN_00101ada(undefined8 param_1)

{
  FUN_00101e24(param_1);
  FUN_00101e44(param_1);
  return;
}




void FUN_00102cff(void)

{
  return;
}




undefined8 * FUN_0010348c(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00103639(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010366e(param_1,param_2,param_3);
  return;
}




void FUN_00102c48(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b2c(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103751(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101ec0(undefined8 param_1)

{
  return param_1;
}




void FUN_00101fd0(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a3c(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001024f0(local_80);
      local_60 = FUN_001028ca(&local_88,&local_78);
      local_70 = FUN_00102b2c(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101ec0(local_80);
                    /* try { // try from 001022da to 00102365 has its CatchHandler @ 0010241d */
      FUN_00102a07(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101ec0(local_80);
      puVar2 = (undefined8 *)FUN_00101f22(&local_88);
      local_70 = FUN_00102b63(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101ec0(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f22(&local_88);
      local_70 = FUN_00102b63(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101ec0(local_80);
      FUN_00101ed2(*local_80,local_80[1],uVar1);
      FUN_00101e86(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102818(local_38,param_1,param_4);
                    /* try { // try from 0010205a to 0010222d has its CatchHandler @ 001023ff */
      local_50 = FUN_001028ac(local_38);
      local_78 = FUN_00101bc0(local_80);
      local_48 = FUN_001028ca(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101ec0(local_80);
        FUN_0010290e(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f22(&local_88);
        FUN_00102966(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f22(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f22(&local_88);
        FUN_001029b6(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101ec0(local_80);
        lVar4 = FUN_00102a07(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101ec0(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f22(&local_88);
        FUN_0010290e(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f22(&local_88);
        FUN_001029b6(*puVar2,local_40,local_50);
      }
      FUN_00102878(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001019ee(void)

{
  FUN_0010186b();
  return;
}




void FUN_00102f28(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010261a(param_1);
  FUN_00103163(uVar1);
  return;
}




void FUN_00103c4a(void)

{
  return;
}




void FUN_00101e24(undefined8 param_1)

{
  FUN_00102778(param_1);
  return;
}




undefined8 FUN_00101a63(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00101f22(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102bbb(undefined8 param_1,undefined8 param_2)

{
  FUN_00102be8(param_1,param_2);
  return param_1;
}




void FUN_00103c34(void)

{
  return;
}




void FUN_00103c97(void)

{
  return;
}




long FUN_001028ca(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f22(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f22(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001029b6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ea2(param_2);
  uVar2 = FUN_00102ea2(param_1);
  FUN_00102eb4(uVar2,uVar1,param_3);
  return;
}




void FUN_00102b63(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102fab(param_2);
  uVar2 = FUN_00102fab(param_1);
  FUN_00102ded(uVar2,uVar1,param_3,param_4);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00101e44(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103c13(void)

{
  return;
}




void FUN_001036f7(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_001026ea(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001027e4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010262c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c12(param_1,param_3);
                    /* try { // try from 00102666 to 0010266a has its CatchHandler @ 0010266d */
  FUN_00102c48(param_1,param_2);
  return;
}




undefined8 FUN_00102806(undefined8 param_1)

{
  return param_1;
}




void FUN_0010343c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010352d(param_2);
  uVar2 = FUN_0010352d(param_1);
  FUN_00103553(uVar2,uVar1,param_3);
  return;
}




void FUN_001027b9(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cff(param_1,param_2);
  return;
}




undefined8 FUN_0010261a(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103ac5(long param_1,ulong param_2,long param_3)

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




void FUN_00102787(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cd8(param_1,param_2,param_3);
  return;
}




ulong * FUN_00102f4e(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102cd8(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102742(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ca2(param_1,param_2,param_3);
  return;
}




void FUN_00103c08(void)

{
  return;
}




void FUN_00103f80(void)

{
  return;
}




void FUN_00102878(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d12(param_1);
  FUN_00102d77(*param_1,uVar1);
  return;
}




void FUN_0010300b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103212(param_1,param_2,param_3);
  return;
}



