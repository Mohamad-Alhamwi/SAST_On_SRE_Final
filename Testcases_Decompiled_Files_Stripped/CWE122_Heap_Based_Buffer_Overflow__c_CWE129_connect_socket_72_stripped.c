
undefined8 FUN_001037dc(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_001031a0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00105234(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001051fd,local_18);
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




void FUN_00103a59(undefined8 param_1,undefined8 param_2)

{
  FUN_00103f9f(param_1,param_2);
  return;
}




void FUN_0010434c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001044fc(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001050ff(void)

{
  return 1;
}




void FUN_00103c56(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104142(param_2);
  uVar2 = FUN_00104142(param_1);
  FUN_00104154(uVar2,uVar1,param_3);
  return;
}




void FUN_00103a27(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103f78(param_1,param_2,param_3);
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00102530();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00102fa4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001038ba(param_2);
  FUN_00103869(&local_31,uVar1);
  uVar1 = FUN_00103842(param_2);
                    /* try { // try from 0010300a to 0010300e has its CatchHandler @ 00103077 */
  FUN_001038cc(param_1,uVar1,&local_31);
  FUN_00102da6(&local_31);
  uVar2 = FUN_00103160(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010398a(param_2);
  uVar4 = FUN_00103932(param_2);
                    /* try { // try from 00103058 to 0010305c has its CatchHandler @ 00103095 */
  uVar1 = FUN_001039e2(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105184(void)

{
  return;
}




undefined8 FUN_00102c9f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104c2c("Calling good()...");
  FUN_00102c8a();
  FUN_00104c2c("Finished good()");
  FUN_00104c2c("Calling bad()...");
  FUN_001025e9();
  FUN_00104c2c("Finished bad()");
  return 0;
}




undefined8 FUN_001040c2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102eb0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001031c2(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00102e60(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031a0(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001051a5(void)

{
  return;
}




void FUN_00105158(void)

{
  return;
}




void FUN_0010519a(void)

{
  return;
}




void FUN_001051dc(void)

{
  return;
}




void FUN_00104b21(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_00104c08(param_1,2);
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
    FUN_00104c2c("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00104c84(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00102d7a(undefined8 param_1)

{
  FUN_001030c4(param_1);
  FUN_001030e4(param_1);
  return;
}




undefined8 FUN_0010476d(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00103aa6(&local_10);
  return *puVar1;
}




bool FUN_00105301(pthread_t *param_1)

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




void FUN_001030e4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00105142(void)

{
  return;
}




void FUN_00103b18(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103fb2(param_1);
  FUN_00104017(*param_1,uVar1);
  return;
}




void FUN_0010518f(void)

{
  return;
}




undefined8 FUN_00103e5b(undefined8 param_1,undefined8 param_2)

{
  FUN_00103e88(param_1,param_2);
  return param_1;
}




void FUN_00103a84(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00104dae(undefined4 param_1)

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




undefined8 FUN_00103fc8(undefined8 param_1)

{
  return param_1;
}




long FUN_00104c08(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_00102dc6(long *param_1)

{
  FUN_00103126(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00102d1a(param_1);
  return;
}




void FUN_00104219(undefined8 param_1,undefined8 param_2)

{
  FUN_00104466(param_1,param_2,0);
  return;
}




void FUN_00104ebc(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001043b6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_0010535c(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103f42(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001042a7(param_1,param_2,param_3);
  return;
}




void FUN_00104e5b(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103ca7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010418e(param_1,param_2,param_3);
  return;
}




void FUN_00103172(undefined8 param_1,undefined8 param_2)

{
  FUN_00103a59(param_1,param_2);
  return;
}




void FUN_00105417(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_0010398a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00103a84(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001043cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001045a3(param_1,param_2,param_3);
  return;
}




void FUN_001039e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103f42(param_1,param_2,param_3);
  return;
}




void FUN_00104154(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103ab8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00103fc8(param_3);
  uVar2 = FUN_00103fb2(param_1);
  FUN_00103fda(*param_1,uVar2,uVar1);
  return;
}




void FUN_001053f8(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102da6(undefined8 param_1)

{
  FUN_00103116(param_1);
  return;
}




void FUN_00102e18(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103160(param_1);
  FUN_00103172(*param_1,param_1[1],uVar1);
  FUN_00102dc6(param_1);
  return;
}




void FUN_00103270(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00103cdc(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00103790(local_80);
      local_60 = FUN_00103b6a(&local_88,&local_78);
      local_70 = FUN_00103dcc(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00103160(local_80);
                    /* try { // try from 0010357a to 00103605 has its CatchHandler @ 001036bd */
      FUN_00103ca7(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00103160(local_80);
      puVar2 = (undefined8 *)FUN_001031c2(&local_88);
      local_70 = FUN_00103e03(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00103160(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_001031c2(&local_88);
      local_70 = FUN_00103e03(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00103160(local_80);
      FUN_00103172(*local_80,local_80[1],uVar1);
      FUN_00103126(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00103ab8(local_38,param_1,param_4);
                    /* try { // try from 001032fa to 001034cd has its CatchHandler @ 0010369f */
      local_50 = FUN_00103b4c(local_38);
      local_78 = FUN_00102e60(local_80);
      local_48 = FUN_00103b6a(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00103160(local_80);
        FUN_00103bae(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_001031c2(&local_88);
        FUN_00103c06(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_001031c2(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_001031c2(&local_88);
        FUN_00103c56(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00103160(local_80);
        lVar4 = FUN_00103ca7(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00103160(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_001031c2(&local_88);
        FUN_00103bae(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_001031c2(&local_88);
        FUN_00103c56(*puVar2,local_40,local_50);
      }
      FUN_00103b18(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001048ba(undefined8 *param_1)

{
  return *param_1;
}




long FUN_00103842(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_0010408d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010434c(param_1,param_2,param_3);
  return;
}




void FUN_001029f7(void)

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
  FUN_00102d5a(local_88);
  local_9c = -1;
  local_98 = 0xffffffff;
  local_98 = socket(2,1,6);
  if (local_98 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00102aaa to 00102c11 has its CatchHandler @ 00102c5d */
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
  local_90 = FUN_00102e60(local_88);
  FUN_00102eb0(local_68,&local_90);
  FUN_00102ede(local_88,local_68[0],1,&local_9c);
  local_90 = FUN_00102e60(local_88);
  FUN_00102eb0(local_68,&local_90);
  FUN_00102ede(local_88,local_68[0],1,&local_9c);
  local_90 = FUN_00102e60(local_88);
  FUN_00102eb0(local_68,&local_90);
  FUN_00102ede(local_88,local_68[0],1,&local_9c);
  FUN_00102fa4(local_68,local_88);
                    /* try { // try from 00102c19 to 00102c1d has its CatchHandler @ 00102c48 */
  FUN_00104b21(local_68);
  FUN_00102e18(local_68);
  FUN_00102e18(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 * FUN_00104726(undefined4 *param_1,long param_2,undefined4 *param_3)

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




void FUN_001051fd(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00105163(void)

{
  return;
}




undefined8 FUN_0010537f(undefined8 *param_1)

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




void FUN_00102c8a(void)

{
  FUN_0010287c();
  FUN_001029f7();
  return;
}




void FUN_001045f1(undefined8 param_1)

{
  FUN_0010463e(param_1);
  return;
}




undefined8 FUN_00102d04(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010431a(void)

{
  return;
}




void FUN_00103c06(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001040c2(param_2);
  uVar2 = FUN_001040c2(param_1);
  FUN_001040d4(uVar2,uVar1,param_3);
  return;
}




ulong FUN_00103cdc(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_001041c4(param_1);
  lVar2 = FUN_00103842(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00103842(local_40);
  local_30 = FUN_00103842(local_40);
  plVar3 = (long *)FUN_001041ea(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00103842(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_001041c4(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_001041c4(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00104e89(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001031a0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_0010452d(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




ulong FUN_00104f1c(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060fc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103aa6(undefined8 param_1)

{
  return param_1;
}




void FUN_001051d1(void)

{
  return;
}




void FUN_00104e30(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001025e9(void)

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
  FUN_00102d5a(local_88);
  local_9c = -1;
  local_98 = 0xffffffff;
  local_98 = socket(2,1,6);
  if (local_98 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 0010269c to 00102803 has its CatchHandler @ 0010284f */
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
  local_90 = FUN_00102e60(local_88);
  FUN_00102eb0(local_68,&local_90);
  FUN_00102ede(local_88,local_68[0],1,&local_9c);
  local_90 = FUN_00102e60(local_88);
  FUN_00102eb0(local_68,&local_90);
  FUN_00102ede(local_88,local_68[0],1,&local_9c);
  local_90 = FUN_00102e60(local_88);
  FUN_00102eb0(local_68,&local_90);
  FUN_00102ede(local_88,local_68[0],1,&local_9c);
  FUN_00102fa4(local_68,local_88);
                    /* try { // try from 0010280b to 0010280f has its CatchHandler @ 0010283a */
  FUN_00104967(local_68);
  FUN_00102e18(local_68);
  FUN_00102e18(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001048cf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104904(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00104247(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010432e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104cac(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102ede(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_001031d4(param_1);
  local_18 = FUN_0010322b(&local_38,&local_20);
  local_20 = FUN_00103790(local_30);
  uVar1 = FUN_001037dc(&local_20,local_18);
  FUN_00103270(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00103790(local_30);
  FUN_001037dc(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00108ea0)();
  return;
}




undefined8 FUN_001043fd(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_001045f1(param_1);
  puVar1 = (undefined8 *)FUN_0010460f(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103116(void)

{
  return;
}




void FUN_001051f2(void)

{
  return;
}




void FUN_00103b4c(undefined8 param_1)

{
  FUN_00103fb2(param_1);
  return;
}




undefined8 FUN_001038ba(undefined8 param_1)

{
  return param_1;
}




long FUN_0010322b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00103aa6(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00103aa6(param_2);
  return lVar1 - *plVar2 >> 2;
}




ulong * FUN_001041ea(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_0010514d(void)

{
  return;
}




void FUN_00103f9f(void)

{
  return;
}




void FUN_001051bb(void)

{
  return;
}




void FUN_00102d3a(undefined8 param_1)

{
  FUN_00102d7a(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102584) */
/* WARNING: Removing unreachable block (ram,0x00102590) */

void FUN_00102560(void)

{
  return;
}




void FUN_00104294(void)

{
  return;
}




undefined8 FUN_00103932(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103a84(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104c84(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001051c6(void)

{
  return;
}




void FUN_001044fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001046d6(param_1,param_2,param_3);
  return;
}




void FUN_00104017(undefined8 param_1,undefined8 param_2)

{
  FUN_0010431a(param_1,param_2);
  return;
}




void FUN_00104668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00104142(param_3);
  uVar2 = FUN_0010476d(local_28);
  uVar3 = FUN_0010476d(local_20);
  uVar1 = FUN_0010478e(uVar3,uVar2,uVar1);
  FUN_001043b6(&local_30,uVar1);
  return;
}




undefined8 FUN_00103dcc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00104219(param_1,param_2);
  }
  return uVar1;
}




void FUN_00104466(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010463e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




undefined8 FUN_001031c2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d1a(undefined8 param_1)

{
  FUN_00102da6(param_1);
  return;
}




void FUN_00103a18(void)

{
  return;
}




void * FUN_00104904(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void * FUN_00104857(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_001042a7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001044ac(param_1,param_2,param_3);
  return;
}




void FUN_0010516e(void)

{
  return;
}




void FUN_0010432e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001051e7(void)

{
  return;
}




void FUN_001044ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104656(param_2);
  uVar2 = FUN_00104656(param_1);
  FUN_00104668(uVar2,uVar1,param_3);
  return;
}




int FUN_0010511d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00104d58(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010418e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001043cc(param_1,param_2,param_3);
  return;
}




void FUN_001030c4(undefined8 param_1)

{
  FUN_00103a18(param_1);
  return;
}




void FUN_00104e08(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103ee8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00103dcc(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




ulong * FUN_0010460f(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00104c2c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103fda(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103fc8(param_3);
  FUN_001042d8(param_1,param_2,uVar1);
  return;
}




ulong FUN_00105020(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00106104,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001047e9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00104142(param_3);
  uVar2 = FUN_00104142(local_28);
  uVar3 = FUN_00104142(local_20);
  uVar1 = FUN_001048cf(uVar3,uVar2,uVar1);
  FUN_001043b6(&local_30,uVar1);
  return;
}




void FUN_00104d02(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_00103b6a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001031c2(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001031c2(param_2);
  return lVar1 - *plVar2 >> 2;
}




undefined8 FUN_001031d4(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103a84(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00104142(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010510e(void)

{
  return 0;
}




void FUN_001041c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001038ba(param_1);
  FUN_001043fd(uVar1);
  return;
}




void FUN_00103e03(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104247(param_2);
  uVar2 = FUN_00104247(param_1);
  FUN_0010408d(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00104041(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010432e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001051b0(void)

{
  return;
}




void FUN_00102d5a(undefined8 param_1)

{
  FUN_00102d3a(param_1);
  return;
}




undefined8 FUN_00103160(undefined8 param_1)

{
  return param_1;
}




void FUN_00104967(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_00104c08(param_1,2);
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
    FUN_00104c2c("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00104c84(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00105436(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00104cd8(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00103790(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031a0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104d83(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00105137(void)

{
  return;
}




void FUN_001038cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103eb2(param_1,param_3);
                    /* try { // try from 00103906 to 0010390a has its CatchHandler @ 0010390d */
  FUN_00103ee8(param_1,param_2);
  return;
}




long FUN_00103fb2(long param_1)

{
  return param_1 + 8;
}




void FUN_00104a44(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_00104c08(param_1,2);
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
    FUN_00104c2c("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00104c84(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_001046d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001047c3(param_2);
  uVar2 = FUN_001047c3(param_1);
  FUN_001047e9(uVar2,uVar1,param_3);
  return;
}




void FUN_001045a3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00104142(param_1);
  uVar1 = FUN_00104726(uVar1,param_2,param_3);
  FUN_001043b6(&local_10,uVar1);
  return;
}




void FUN_00105179(void)

{
  return;
}




void FUN_00103f78(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00104656(undefined8 param_1)

{
  return param_1;
}




void FUN_001040d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00104142(param_3);
  uVar2 = FUN_00104142(local_28);
  uVar3 = FUN_00104142(local_20);
  uVar1 = FUN_00104381(uVar3,uVar2,uVar1);
  FUN_001043b6(&local_30,uVar1);
  return;
}




void FUN_00103eb2(undefined8 param_1,undefined8 param_2)

{
  FUN_00103e88(param_1,param_2);
  FUN_001030e4(param_1);
  return;
}




undefined8 FUN_00103869(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103e5b(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00104381(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010452d(param_1,param_2,param_3);
  return;
}




void FUN_00104c52(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_0010463e(void)

{
  return 0x1fffffffffffffff;
}




void FUN_001047c3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001048ba(&local_10);
  FUN_001040c2(uVar1);
  return;
}




void FUN_00103126(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00103a27(param_1,param_2,param_3);
  }
  return;
}




void FUN_001054e0(void)

{
  return;
}




void FUN_00104d2d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010478e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104857(param_1,param_2,param_3);
  return;
}




void FUN_00103bae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104041(param_2);
  uVar2 = FUN_00104041(param_1);
  FUN_0010408d(uVar2,uVar1,param_3,param_4);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102543) */
/* WARNING: Removing unreachable block (ram,0x0010254f) */

void FUN_00102530(void)

{
  return;
}




void FUN_00103e88(undefined8 param_1,undefined8 param_2)

{
  FUN_00104294(param_1,param_2);
  return;
}




void FUN_001042d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00103fc8(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00102d04(4,param_2);
  *puVar2 = uVar1;
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




void FUN_0010287c(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102d5a(local_58);
  local_64 = 7;
  local_60 = FUN_00102e60(local_58);
  FUN_00102eb0(local_38,&local_60);
                    /* try { // try from 001028ec to 00102981 has its CatchHandler @ 001029cd */
  FUN_00102ede(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00102e60(local_58);
  FUN_00102eb0(local_38,&local_60);
  FUN_00102ede(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00102e60(local_58);
  FUN_00102eb0(local_38,&local_60);
  FUN_00102ede(local_58,local_38[0],1,&local_64);
  FUN_00102fa4(local_38,local_58);
                    /* try { // try from 00102989 to 0010298d has its CatchHandler @ 001029b8 */
  FUN_00104a44(local_38);
  FUN_00102e18(local_38);
  FUN_00102e18(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



