
undefined8 FUN_0010348a(undefined8 param_1)

{
  return param_1;
}




void FUN_00105200(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001054e0(void)

{
  return;
}




undefined8 FUN_00103bfa(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103d4c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010455c(void)

{
  return;
}




ulong FUN_00105023(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00106108,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103de0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010427a(param_1);
  FUN_001042df(*param_1,uVar1);
  return;
}




void FUN_00103b94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010417a(param_1,param_3);
                    /* try { // try from 00103bce to 00103bd2 has its CatchHandler @ 00103bd5 */
  FUN_001041b0(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025a4) */
/* WARNING: Removing unreachable block (ram,0x001025b0) */

void FUN_00102580(void)

{
  return;
}




void FUN_0010308e(long *param_1)

{
  FUN_001033ee(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00102fe2(param_1);
  return;
}




void FUN_0010517c(void)

{
  return;
}




long FUN_0010288c(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




undefined8 FUN_00104290(undefined8 param_1)

{
  return param_1;
}




void FUN_00103042(undefined8 param_1)

{
  FUN_0010338c(param_1);
  FUN_001033ac(param_1);
  return;
}




void FUN_00103022(undefined8 param_1)

{
  FUN_00103002(param_1);
  return;
}




void FUN_0010519d(void)

{
  return;
}




void FUN_00105150(void)

{
  return;
}




void FUN_00105192(void)

{
  return;
}




void FUN_001051d4(void)

{
  return;
}




undefined8 FUN_00104b82(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00102f66(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104c2f("Calling good()...");
  FUN_00102f51();
  FUN_00104c2f("Finished good()");
  FUN_00104c2f("Calling bad()...");
  FUN_001028b0();
  FUN_00104c2f("Finished bad()");
  return 0;
}




undefined8 FUN_00104906(void)

{
  return 0x1fffffffffffffff;
}




undefined8 FUN_00105237(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00105200,local_18);
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




undefined8 FUN_00103128(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103468(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010513a(void)

{
  return;
}




void FUN_00103cef(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104240(param_1,param_2,param_3);
  return;
}




void FUN_00105187(void)

{
  return;
}




void FUN_00103f1e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010440a(param_2);
  uVar2 = FUN_0010440a(param_1);
  FUN_0010441c(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00103c52(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00103d4c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104d86(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001041b0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00104094(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




void FUN_00104b97(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104bcc(param_1,param_2,param_3);
  return;
}




void FUN_00102fe2(undefined8 param_1)

{
  FUN_0010306e(param_1);
  return;
}




undefined8 FUN_0010440a(undefined8 param_1)

{
  return param_1;
}




void FUN_00104e8c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001045a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00104290(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00102fcb(4,param_2);
  *puVar2 = uVar1;
  return;
}




bool FUN_00105304(pthread_t *param_1)

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




void FUN_001040cb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010450f(param_2);
  uVar2 = FUN_0010450f(param_1);
  FUN_00104355(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00104e33(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103e14(undefined8 param_1)

{
  FUN_0010427a(param_1);
  return;
}




void FUN_0010338c(undefined8 param_1)

{
  FUN_00103ce0(param_1);
  return;
}




void FUN_001053fb(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




long FUN_00103b0a(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_001045e2(void)

{
  return;
}




undefined8 FUN_00103b31(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104123(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00104309(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001045f6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ce0(void)

{
  return;
}




undefined8 FUN_00105382(undefined8 *param_1)

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




undefined8 FUN_00102fcb(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103002(undefined8 param_1)

{
  FUN_00103042(param_1);
  return;
}




void FUN_0010343a(undefined8 param_1,undefined8 param_2)

{
  FUN_00103d21(param_1,param_2);
  return;
}




undefined8 FUN_00104a35(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00103d6e(&local_10);
  return *puVar1;
}




undefined8 FUN_0010349c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103d4c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_0010427a(long param_1)

{
  return param_1 + 8;
}




void FUN_001026dc(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_0010288c(param_1,2);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00104c2f("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00104c87(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




ulong * FUN_001048d7(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001051f5(void)

{
  return;
}




void FUN_0010515b(void)

{
  return;
}




undefined8 FUN_0010535f(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001027af(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_0010288c(param_1,2);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_00104c2f("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00104c87(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_0010472e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00104906(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




void FUN_001028b0(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
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
  FUN_00103022(local_88);
  local_9c = -1;
  local_98 = 0xffffffff;
  local_98 = socket(2,1,6);
  if (local_98 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00102963 to 00102aca has its CatchHandler @ 00102b16 */
    iVar1 = connect(local_98,&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_98,local_2e,0xd,0);
      local_94 = (int)sVar2;
      if ((local_94 != -1) && (local_94 != 0)) {
        local_2e[local_94] = '\0';
        local_9c = atoi(local_2e);
      }
    }
  }
  if (local_98 != -1) {
    close(local_98);
  }
  local_90 = FUN_00103128(local_88);
  FUN_00103178(local_68,&local_90);
  FUN_001031a6(local_88,local_68[0],1,&local_9c);
  local_90 = FUN_00103128(local_88);
  FUN_00103178(local_68,&local_90);
  FUN_001031a6(local_88,local_68[0],1,&local_9c);
  local_90 = FUN_00103128(local_88);
  FUN_00103178(local_68,&local_90);
  FUN_001031a6(local_88,local_68[0],1,&local_9c);
  FUN_0010326c(local_68,local_88);
                    /* try { // try from 00102ad2 to 00102ad6 has its CatchHandler @ 00102b01 */
  FUN_00102609(local_68);
  FUN_001030e0(local_68);
  FUN_001030e0(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001044e1(undefined8 param_1,undefined8 param_2)

{
  FUN_0010472e(param_1,param_2,0);
  return;
}




void FUN_00103d80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00104290(param_3);
  uVar2 = FUN_0010427a(param_1);
  FUN_001042a2(*param_1,uVar2,uVar1);
  return;
}




long FUN_00103e32(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010348a(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010348a(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00104e5e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001033ac(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00104694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010486b(param_1,param_2,param_3);
  return;
}




void FUN_00104ebf(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103caa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010420a(param_1,param_2,param_3);
  return;
}




void FUN_001051c9(void)

{
  return;
}




void FUN_00104e0b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00102550();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00104a56(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104b1f(param_1,param_2,param_3);
  return;
}




void FUN_0010441c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00104c87(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010306e(undefined8 param_1)

{
  FUN_001033de(param_1);
  return;
}




void FUN_001045f6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103178(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010348a(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_001051ea(void)

{
  return;
}




void FUN_00103d21(undefined8 param_1,undefined8 param_2)

{
  FUN_00104267(param_1,param_2);
  return;
}




void FUN_00103538(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00103fa4(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00103a58(local_80);
      local_60 = FUN_00103e32(&local_88,&local_78);
      local_70 = FUN_00104094(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00103428(local_80);
                    /* try { // try from 00103842 to 001038cd has its CatchHandler @ 00103985 */
      FUN_00103f6f(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00103428(local_80);
      puVar2 = (undefined8 *)FUN_0010348a(&local_88);
      local_70 = FUN_001040cb(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00103428(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_0010348a(&local_88);
      local_70 = FUN_001040cb(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00103428(local_80);
      FUN_0010343a(*local_80,local_80[1],uVar1);
      FUN_001033ee(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00103d80(local_38,param_1,param_4);
                    /* try { // try from 001035c2 to 00103795 has its CatchHandler @ 00103967 */
      local_50 = FUN_00103e14(local_38);
      local_78 = FUN_00103128(local_80);
      local_48 = FUN_00103e32(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00103428(local_80);
        FUN_00103e76(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_0010348a(&local_88);
        FUN_00103ece(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_0010348a(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_0010348a(&local_88);
        FUN_00103f1e(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00103428(local_80);
        lVar4 = FUN_00103f6f(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00103428(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_0010348a(&local_88);
        FUN_00103e76(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_0010348a(&local_88);
        FUN_00103f1e(*puVar2,local_40,local_50);
      }
      FUN_00103de0(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103428(undefined8 param_1)

{
  return param_1;
}




void FUN_0010439c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010440a(param_3);
  uVar2 = FUN_0010440a(local_28);
  uVar3 = FUN_0010440a(local_20);
  uVar1 = FUN_00104649(uVar3,uVar2,uVar1);
  FUN_0010467e(&local_30,uVar1);
  return;
}




void FUN_00105145(void)

{
  return;
}




void FUN_00104150(undefined8 param_1,undefined8 param_2)

{
  FUN_0010455c(param_1,param_2);
  return;
}




void FUN_001051b3(void)

{
  return;
}




void FUN_00102cbe(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
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
  FUN_00103022(local_88);
  local_9c = -1;
  local_98 = 0xffffffff;
  local_98 = socket(2,1,6);
  if (local_98 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00102d71 to 00102ed8 has its CatchHandler @ 00102f24 */
    iVar1 = connect(local_98,&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_98,local_2e,0xd,0);
      local_94 = (int)sVar2;
      if ((local_94 != -1) && (local_94 != 0)) {
        local_2e[local_94] = '\0';
        local_9c = atoi(local_2e);
      }
    }
  }
  if (local_98 != -1) {
    close(local_98);
  }
  local_90 = FUN_00103128(local_88);
  FUN_00103178(local_68,&local_90);
  FUN_001031a6(local_88,local_68[0],1,&local_9c);
  local_90 = FUN_00103128(local_88);
  FUN_00103178(local_68,&local_90);
  FUN_001031a6(local_88,local_68[0],1,&local_9c);
  local_90 = FUN_00103128(local_88);
  FUN_00103178(local_68,&local_90);
  FUN_001031a6(local_88,local_68[0],1,&local_9c);
  FUN_0010326c(local_68,local_88);
                    /* try { // try from 00102ee0 to 00102ee4 has its CatchHandler @ 00102f0f */
  FUN_001027af(local_68);
  FUN_001030e0(local_68);
  FUN_001030e0(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Removing unreachable block (ram,0x00102563) */
/* WARNING: Removing unreachable block (ram,0x0010256f) */

void FUN_00102550(void)

{
  return;
}




void FUN_00104456(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104694(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103aa4(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00103468(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104c55(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001051be(void)

{
  return;
}




undefined8 FUN_0010467e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00104240(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010486b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010440a(param_1);
  uVar1 = FUN_001049ee(uVar1,param_2,param_3);
  FUN_0010467e(&local_10,uVar1);
  return;
}




void FUN_00103e76(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104309(param_2);
  uVar2 = FUN_00104309(param_1);
  FUN_00104355(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00104614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001047c4(param_1,param_2,param_3);
  return;
}




void FUN_001033de(void)

{
  return;
}




void FUN_00102b43(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103022(local_58);
  local_64 = 7;
  local_60 = FUN_00103128(local_58);
  FUN_00103178(local_38,&local_60);
                    /* try { // try from 00102bb3 to 00102c48 has its CatchHandler @ 00102c94 */
  FUN_001031a6(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00103128(local_58);
  FUN_00103178(local_38,&local_60);
  FUN_001031a6(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00103128(local_58);
  FUN_00103178(local_38,&local_60);
  FUN_001031a6(local_58,local_38[0],1,&local_64);
  FUN_0010326c(local_38,local_58);
                    /* try { // try from 00102c50 to 00102c54 has its CatchHandler @ 00102c7f */
  FUN_001026dc(local_38);
  FUN_001030e0(local_38);
  FUN_001030e0(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103b82(undefined8 param_1)

{
  return param_1;
}




void FUN_00104a8b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00104b82(&local_10);
  FUN_0010438a(uVar1);
  return;
}




undefined4 * FUN_001049ee(undefined4 *param_1,long param_2,undefined4 *param_3)

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




void FUN_0010448c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103b82(param_1);
  FUN_001046c5(uVar1);
  return;
}




void FUN_00105166(void)

{
  return;
}




undefined8 FUN_0010450f(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001045f6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001051df(void)

{
  return;
}




void FUN_00104649(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001047f5(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00105111(void)

{
  return 0;
}




void FUN_00104d30(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104355(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104614(param_1,param_2,param_3);
  return;
}




void FUN_001030e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103428(param_1);
  FUN_0010343a(*param_1,param_1[1],uVar1);
  FUN_0010308e(param_1);
  return;
}




void FUN_00104db1(undefined4 param_1)

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




undefined8 FUN_00104094(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_001044e1(param_1,param_2);
  }
  return uVar1;
}




void FUN_00104774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010491e(param_2);
  uVar2 = FUN_0010491e(param_1);
  FUN_00104930(uVar2,uVar1,param_3);
  return;
}




void * FUN_00104bcc(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_0010420a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010456f(param_1,param_2,param_3);
  return;
}




ulong FUN_00104f1f(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00106100,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010499e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104a8b(param_2);
  uVar2 = FUN_00104a8b(param_1);
  FUN_00104ab1(uVar2,uVar1,param_3);
  return;
}




void FUN_00104cdb(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103d4c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001033ee(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00103cef(param_1,param_2,param_3);
  }
  return;
}




void FUN_001042df(undefined8 param_1,undefined8 param_2)

{
  FUN_001045e2(param_1,param_2);
  return;
}




undefined8 FUN_00105102(void)

{
  return 1;
}




undefined8 FUN_0010438a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ece(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010438a(param_2);
  uVar2 = FUN_0010438a(param_1);
  FUN_0010439c(uVar2,uVar1,param_3);
  return;
}




void FUN_00104267(void)

{
  return;
}




void FUN_001051a8(void)

{
  return;
}




void FUN_00102f51(void)

{
  FUN_00102b43();
  FUN_00102cbe();
  return;
}




void FUN_0010326c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103b82(param_2);
  FUN_00103b31(&local_31,uVar1);
  uVar1 = FUN_00103b0a(param_2);
                    /* try { // try from 001032d2 to 001032d6 has its CatchHandler @ 0010333f */
  FUN_00103b94(param_1,uVar1,&local_31);
  FUN_0010306e(&local_31);
  uVar2 = FUN_00103428(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00103c52(param_2);
  uVar4 = FUN_00103bfa(param_2);
                    /* try { // try from 00103320 to 00103324 has its CatchHandler @ 0010335d */
  uVar1 = FUN_00103caa(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104ab1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010440a(param_3);
  uVar2 = FUN_0010440a(local_28);
  uVar3 = FUN_0010440a(local_20);
  uVar1 = FUN_00104b97(uVar3,uVar2,uVar1);
  FUN_0010467e(&local_30,uVar1);
  return;
}




void FUN_0010541a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00104caf(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103468(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00104d5b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




int FUN_00105120(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00103a58(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103468(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00108e98)();
  return;
}




void FUN_0010417a(undefined8 param_1,undefined8 param_2)

{
  FUN_00104150(param_1,param_2);
  FUN_001033ac(param_1);
  return;
}




void * FUN_00104b1f(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_001048b9(undefined8 param_1)

{
  FUN_00104906(param_1);
  return;
}




undefined8 FUN_001046c5(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_001048b9(param_1);
  puVar1 = (undefined8 *)FUN_001048d7(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00105171(void)

{
  return;
}




undefined8 FUN_00104123(undefined8 param_1,undefined8 param_2)

{
  FUN_00104150(param_1,param_2);
  return param_1;
}




long FUN_001047f5(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_001042a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104290(param_3);
  FUN_001045a0(param_1,param_2,uVar1);
  return;
}




ulong FUN_00103fa4(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_0010448c(param_1);
  lVar2 = FUN_00103b0a(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00103b0a(local_40);
  local_30 = FUN_00103b0a(local_40);
  plVar3 = (long *)FUN_001044b2(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00103b0a(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_0010448c(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_0010448c(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_001034f3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00103d6e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00103d6e(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_0010456f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104774(param_1,param_2,param_3);
  return;
}




void FUN_00104c2f(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001047c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010499e(param_1,param_2,param_3);
  return;
}




void FUN_00104930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010440a(param_3);
  uVar2 = FUN_00104a35(local_28);
  uVar3 = FUN_00104a35(local_20);
  uVar1 = FUN_00104a56(uVar3,uVar2,uVar1);
  FUN_0010467e(&local_30,uVar1);
  return;
}




void FUN_001031a6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_0010349c(param_1);
  local_18 = FUN_001034f3(&local_38,&local_20);
  local_20 = FUN_00103a58(local_30);
  uVar1 = FUN_00103aa4(&local_20,local_18);
  FUN_00103538(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00103a58(local_30);
  FUN_00103aa4(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105470(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00104d05(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010491e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103d6e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f6f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104456(param_1,param_2,param_3);
  return;
}




ulong * FUN_001044b2(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00105439(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102609(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_0010288c(param_1,2);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00104c2f("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00104c87(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}



