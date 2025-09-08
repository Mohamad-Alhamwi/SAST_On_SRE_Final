
void FUN_00103108(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00104e95(void)

{
  return;
}




void FUN_00105110(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103e1a(param_1,param_3);
                    /* try { // try from 0010386e to 00103872 has its CatchHandler @ 00103875 */
  FUN_00103e50(param_1,param_2);
  return;
}




undefined8 FUN_001041af(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104296(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00104bbf(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103a20(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00103f30(param_3);
  uVar2 = FUN_00103f1a(param_1);
  FUN_00103f42(*param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00103822(undefined8 param_1)

{
  return param_1;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00108e90)();
  return;
}




void FUN_00102d0e(undefined8 param_1)

{
  FUN_0010307e(param_1);
  return;
}




void FUN_00104e11(void)

{
  return;
}




void FUN_00102629(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_0010275c(param_1,2);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_00104927(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




long FUN_00103f1a(long param_1)

{
  return param_1 + 8;
}




void FUN_00102cc2(undefined8 param_1)

{
  FUN_00102ca2(param_1);
  return;
}




void FUN_00102ca2(undefined8 param_1)

{
  FUN_00102ce2(param_1);
  return;
}




void FUN_00104e32(void)

{
  return;
}




void FUN_00104de5(void)

{
  return;
}




void FUN_00104e27(void)

{
  return;
}




void FUN_00104e69(void)

{
  return;
}




void * FUN_001047bf(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00102bf6(void)

{
  FUN_00102a7b();
  return;
}




ulong * FUN_00104577(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00104ea0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102d80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001030c8(param_1);
  FUN_001030da(*param_1,param_1[1],uVar1);
  FUN_00102d2e(param_1);
  return;
}




int FUN_00104dc0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103980(void)

{
  return;
}




void FUN_00104e1c(void)

{
  return;
}




void FUN_00103b6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010402a(param_2);
  uVar2 = FUN_0010402a(param_1);
  FUN_0010403c(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_0010389a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001039ec(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001049fb(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103e1a(undefined8 param_1,undefined8 param_2)

{
  FUN_00103df0(param_1,param_2);
  FUN_0010304c(param_1);
  return;
}




undefined8 FUN_00104822(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00102c6b(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010403c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001040aa(param_3);
  uVar2 = FUN_001040aa(local_28);
  uVar3 = FUN_001040aa(local_20);
  uVar1 = FUN_001042e9(uVar3,uVar2,uVar1);
  FUN_0010431e(&local_30,uVar1);
  return;
}




void FUN_00104afe(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010420f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104414(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00104ed7(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104ea0,local_18);
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




undefined8 FUN_00103d34(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00104181(param_1,param_2);
  }
  return uVar1;
}




void FUN_00104aab(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103a80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103f1a(param_1);
  FUN_00103f7f(*param_1,uVar1);
  return;
}




void FUN_00102f0c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103822(param_2);
  FUN_001037d1(&local_31,uVar1);
  uVar1 = FUN_001037aa(param_2);
                    /* try { // try from 00102f72 to 00102f76 has its CatchHandler @ 00102fdf */
  FUN_00103834(param_1,uVar1,&local_31);
  FUN_00102d0e(&local_31);
  uVar2 = FUN_001030c8(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001038f2(param_2);
  uVar4 = FUN_0010389a(param_2);
                    /* try { // try from 00102fc0 to 00102fc4 has its CatchHandler @ 00102ffd */
  uVar1 = FUN_0010394a(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00105022(undefined8 *param_1)

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




undefined8 FUN_00103744(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00103108(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00103f30(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00102c6b(4,param_2);
  *puVar2 = uVar1;
  return;
}




long FUN_001037aa(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_00103f7f(undefined8 param_1,undefined8 param_2)

{
  FUN_00104282(param_1,param_2);
  return;
}




void FUN_0010394a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103eaa(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00104fff(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00102c06(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001048cf("Calling good()...");
  FUN_00102bf6();
  FUN_001048cf("Finished good()");
  FUN_001048cf("Calling bad()...");
  FUN_00102780();
  FUN_001048cf("Finished bad()");
  return 0;
}




void FUN_00102c82(undefined8 param_1)

{
  FUN_00102d0e(param_1);
  return;
}




undefined8 FUN_001030c8(undefined8 param_1)

{
  return param_1;
}




undefined4 * FUN_0010468e(undefined4 *param_1,long param_2,undefined4 *param_3)

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




undefined8 FUN_0010312a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f07(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025c4) */
/* WARNING: Removing unreachable block (ram,0x001025d0) */

void FUN_001025a0(void)

{
  return;
}




void FUN_00104559(undefined8 param_1)

{
  FUN_001045a6(param_1);
  return;
}




void FUN_00104e8a(void)

{
  return;
}




void FUN_00104df0(void)

{
  return;
}




bool FUN_00104fa4(pthread_t *param_1)

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




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00102570();
    DAT_00109020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00104365(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_00104559(param_1);
  puVar1 = (undefined8 *)FUN_00104577(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_001026c2(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_0010275c(param_1,2);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_00104927(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




ulong * FUN_00104152(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00103a0e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ab4(undefined8 param_1)

{
  FUN_00103f1a(param_1);
  return;
}




void FUN_00104ad3(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010302c(undefined8 param_1)

{
  FUN_00103980(param_1);
  return;
}




undefined8 FUN_0010431e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00104b2c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001038f2(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001039ec(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104e5e(void)

{
  return;
}




void FUN_00104a51(undefined4 param_1)

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




undefined8 FUN_001046d5(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00103a0e(&local_10);
  return *puVar1;
}




undefined8 FUN_001040aa(undefined8 param_1)

{
  return param_1;
}




void FUN_001048f5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102ce2(undefined8 param_1)

{
  FUN_0010302c(param_1);
  FUN_0010304c(param_1);
  return;
}




void FUN_00104282(void)

{
  return;
}




undefined8 FUN_00102dc8(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103108(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104e7f(void)

{
  return;
}




void FUN_0010398f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103ee0(param_1,param_2,param_3);
  return;
}




long FUN_00103193(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00103a0e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00103a0e(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_0010308e(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010398f(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_0010402a(undefined8 param_1)

{
  return param_1;
}




void FUN_00104dda(void)

{
  return;
}




undefined8 FUN_00103dc3(undefined8 param_1,undefined8 param_2)

{
  FUN_00103df0(param_1,param_2);
  return param_1;
}




void FUN_00104e48(void)

{
  return;
}




void FUN_00102780(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined local_88 [32];
  undefined8 local_68 [4];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102cc2(local_88);
  local_a0 = -1;
  local_98 = 0xffffffff;
  local_9c = -1;
  local_98 = socket(2,1,6);
  if (local_98 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(local_98,&local_48,0x10);
                    /* try { // try from 0010287a to 00102a02 has its CatchHandler @ 00102a4e */
    if (((iVar1 != -1) && (iVar1 = listen(local_98,5), iVar1 != -1)) &&
       (local_9c = accept(local_98,(sockaddr *)0x0,(socklen_t *)0x0), local_9c != -1)) {
      sVar2 = recv(local_9c,local_2e,0xd,0);
      local_94 = (int)sVar2;
      if ((local_94 != -1) && (local_94 != 0)) {
        local_2e[local_94] = '\0';
        local_a0 = atoi(local_2e);
      }
    }
  }
  if (local_98 != -1) {
    close(local_98);
  }
  if (local_9c != -1) {
    close(local_9c);
  }
  local_90 = FUN_00102dc8(local_88);
  FUN_00102e18(local_68,&local_90);
  FUN_00102e46(local_88,local_68[0],1,&local_a0);
  local_90 = FUN_00102dc8(local_88);
  FUN_00102e18(local_68,&local_90);
  FUN_00102e46(local_88,local_68[0],1,&local_a0);
  local_90 = FUN_00102dc8(local_88);
  FUN_00102e18(local_68,&local_90);
  FUN_00102e46(local_88,local_68[0],1,&local_a0);
  FUN_00102f0c(local_68,local_88);
                    /* try { // try from 00102a0a to 00102a0e has its CatchHandler @ 00102a39 */
  FUN_00102629(local_68);
  FUN_00102d80(local_68);
  FUN_00102d80(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001040bc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




undefined8 FUN_001036f8(undefined8 param_1)

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




void FUN_001048cf(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00104e53(void)

{
  return;
}




void FUN_001042e9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104495(param_1,param_2,param_3);
  return;
}




void FUN_00103eaa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010420f(param_1,param_2,param_3);
  return;
}




long FUN_00104495(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




long FUN_00103ad2(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010312a(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010312a(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00104296(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010304c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




long FUN_0010275c(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




undefined8 FUN_001037d1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103dc3(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001046f6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001047bf(param_1,param_2,param_3);
  return;
}




void FUN_0010463e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010472b(param_2);
  uVar2 = FUN_0010472b(param_1);
  FUN_00104751(uVar2,uVar1,param_3);
  return;
}




void FUN_001040f6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104334(param_1,param_2,param_3);
  return;
}




void FUN_00104dfb(void)

{
  return;
}




void FUN_00104181(undefined8 param_1,undefined8 param_2)

{
  FUN_001043ce(param_1,param_2,0);
  return;
}




void FUN_00104e74(void)

{
  return;
}




void FUN_001042b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104464(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00104da2(void)

{
  return 1;
}




void FUN_001049a5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103fa9(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104296(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d2e(long *param_1)

{
  FUN_0010308e(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00102c82(param_1);
  return;
}




void FUN_00104a26(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_00103c44(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_0010412c(param_1);
  lVar2 = FUN_001037aa(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001037aa(local_40);
  local_30 = FUN_001037aa(local_40);
  plVar3 = (long *)FUN_00104152(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001037aa(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_0010412c(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_0010412c(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001043ce(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001045a6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




void FUN_00104837(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010486c(param_1,param_2,param_3);
  return;
}




void FUN_00103e50(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00103d34(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




void FUN_00104b5f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001045d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001040aa(param_3);
  uVar2 = FUN_001046d5(local_28);
  uVar3 = FUN_001046d5(local_20);
  uVar1 = FUN_001046f6(uVar3,uVar2,uVar1);
  FUN_0010431e(&local_30,uVar1);
  return;
}




void FUN_0010494f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001039c1(undefined8 param_1,undefined8 param_2)

{
  FUN_00103f07(param_1,param_2);
  return;
}




void FUN_0010307e(void)

{
  return;
}




void FUN_00103f42(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103f30(param_3);
  FUN_00104240(param_1,param_2,uVar1);
  return;
}




ulong FUN_00104cc3(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ff5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001042b4(param_1,param_2,param_3);
  return;
}




void FUN_00103b16(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103fa9(param_2);
  uVar2 = FUN_00103fa9(param_1);
  FUN_00103ff5(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103ee0(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00104e3d(void)

{
  return;
}




void FUN_00102a7b(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102cc2(local_58);
  local_64 = 0x14;
  local_60 = FUN_00102dc8(local_58);
  FUN_00102e18(local_38,&local_60);
                    /* try { // try from 00102aeb to 00102b80 has its CatchHandler @ 00102bcc */
  FUN_00102e46(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00102dc8(local_58);
  FUN_00102e18(local_38,&local_60);
  FUN_00102e46(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00102dc8(local_58);
  FUN_00102e18(local_38,&local_60);
  FUN_00102e46(local_58,local_38[0],1,&local_64);
  FUN_00102f0c(local_38,local_58);
                    /* try { // try from 00102b88 to 00102b8c has its CatchHandler @ 00102bb7 */
  FUN_001026c2(local_38);
  FUN_00102d80(local_38);
  FUN_00102d80(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e46(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_0010313c(param_1);
  local_18 = FUN_00103193(&local_38,&local_20);
  local_20 = FUN_001036f8(local_30);
  uVar1 = FUN_00103744(&local_20,local_18);
  FUN_001031d8(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001036f8(local_30);
  FUN_00103744(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010472b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00104822(&local_10);
  FUN_0010402a(uVar1);
  return;
}




void FUN_0010509b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00104927(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001030da(undefined8 param_1,undefined8 param_2)

{
  FUN_001039c1(param_1,param_2);
  return;
}




void FUN_001049d0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00104db1(void)

{
  return 0;
}




void FUN_001031d8(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00103c44(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001036f8(local_80);
      local_60 = FUN_00103ad2(&local_88,&local_78);
      local_70 = FUN_00103d34(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_001030c8(local_80);
                    /* try { // try from 001034e2 to 0010356d has its CatchHandler @ 00103625 */
      FUN_00103c0f(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_001030c8(local_80);
      puVar2 = (undefined8 *)FUN_0010312a(&local_88);
      local_70 = FUN_00103d6b(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_001030c8(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_0010312a(&local_88);
      local_70 = FUN_00103d6b(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_001030c8(local_80);
      FUN_001030da(*local_80,local_80[1],uVar1);
      FUN_0010308e(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00103a20(local_38,param_1,param_4);
                    /* try { // try from 00103262 to 00103435 has its CatchHandler @ 00103607 */
      local_50 = FUN_00103ab4(local_38);
      local_78 = FUN_00102dc8(local_80);
      local_48 = FUN_00103ad2(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_001030c8(local_80);
        FUN_00103b16(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_0010312a(&local_88);
        FUN_00103b6e(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_0010312a(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_0010312a(&local_88);
        FUN_00103bbe(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_001030c8(local_80);
        lVar4 = FUN_00103c0f(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_001030c8(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_0010312a(&local_88);
        FUN_00103b16(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_0010312a(&local_88);
        FUN_00103bbe(*puVar2,local_40,local_50);
      }
      FUN_00103a80(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103df0(undefined8 param_1,undefined8 param_2)

{
  FUN_001041fc(param_1,param_2);
  return;
}




void FUN_00105180(void)

{
  return;
}




void FUN_00104751(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001040aa(param_3);
  uVar2 = FUN_001040aa(local_28);
  uVar3 = FUN_001040aa(local_20);
  uVar1 = FUN_00104837(uVar3,uVar2,uVar1);
  FUN_0010431e(&local_30,uVar1);
  return;
}




void FUN_0010450b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001040aa(param_1);
  uVar1 = FUN_0010468e(uVar1,param_2,param_3);
  FUN_0010431e(&local_10,uVar1);
  return;
}




void FUN_00104334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010450b(param_1,param_2,param_3);
  return;
}




void FUN_00104e06(void)

{
  return;
}




void FUN_00103d6b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001041af(param_2);
  uVar2 = FUN_001041af(param_1);
  FUN_00103ff5(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00104464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010463e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103f30(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c0f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001040f6(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010313c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001039ec(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001041fc(void)

{
  return;
}




void * FUN_0010486c(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00104414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001045be(param_2);
  uVar2 = FUN_001045be(param_1);
  FUN_001045d0(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001045be(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e18(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010312a(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_001050d9(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010497b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001045a6(void)

{
  return 0x1fffffffffffffff;
}




void FUN_001039ec(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103bbe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001040aa(param_2);
  uVar2 = FUN_001040aa(param_1);
  FUN_001040bc(uVar2,uVar1,param_3);
  return;
}




void FUN_0010412c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103822(param_1);
  FUN_00104365(uVar1);
  return;
}




void FUN_001050ba(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102583) */
/* WARNING: Removing unreachable block (ram,0x0010258f) */

void FUN_00102570(void)

{
  return;
}



