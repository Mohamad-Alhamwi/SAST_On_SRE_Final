
void FUN_00103590(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00103ffc(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00103ab0(local_80);
      local_60 = FUN_00103e8a(&local_88,&local_78);
      local_70 = FUN_001040ec(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00103480(local_80);
                    /* try { // try from 0010389a to 00103925 has its CatchHandler @ 001039dd */
      FUN_00103fc7(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00103480(local_80);
      puVar2 = (undefined8 *)FUN_001034e2(&local_88);
      local_70 = FUN_00104123(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00103480(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_001034e2(&local_88);
      local_70 = FUN_00104123(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00103480(local_80);
      FUN_00103492(*local_80,local_80[1],uVar1);
      FUN_00103446(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00103dd8(local_38,param_1,param_4);
                    /* try { // try from 0010361a to 001037ed has its CatchHandler @ 001039bf */
      local_50 = FUN_00103e6c(local_38);
      local_78 = FUN_00103180(local_80);
      local_48 = FUN_00103e8a(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00103480(local_80);
        FUN_00103ece(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_001034e2(&local_88);
        FUN_00103f26(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_001034e2(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_001034e2(&local_88);
        FUN_00103f76(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00103480(local_80);
        lVar4 = FUN_00103fc7(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00103480(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_001034e2(&local_88);
        FUN_00103ece(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_001034e2(&local_88);
        FUN_00103f76(*puVar2,local_40,local_50);
      }
      FUN_00103e38(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001053b7(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103d38(void)

{
  return;
}




void FUN_0010463a(void)

{
  return;
}




int FUN_00105178(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103ece(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104361(param_2);
  uVar2 = FUN_00104361(param_1);
  FUN_001043ad(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103d02(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104262(param_1,param_2,param_3);
  return;
}




void FUN_0010269f(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = (int *)FUN_00102814(param_1,2);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00104cdf(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00104c87("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001031d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001034e2(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_001051f5(void)

{
  return;
}




void FUN_00102cae(void)

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
  FUN_0010307a(local_88);
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
                    /* try { // try from 00102da8 to 00102f30 has its CatchHandler @ 00102f7c */
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
  local_90 = FUN_00103180(local_88);
  FUN_001031d0(local_68,&local_90);
  FUN_001031fe(local_88,local_68[0],1,&local_a0);
  local_90 = FUN_00103180(local_88);
  FUN_001031d0(local_68,&local_90);
  FUN_001031fe(local_88,local_68[0],1,&local_a0);
  local_90 = FUN_00103180(local_88);
  FUN_001031d0(local_68,&local_90);
  FUN_001031fe(local_88,local_68[0],1,&local_a0);
  FUN_001032c4(local_68,local_88);
                    /* try { // try from 00102f38 to 00102f3c has its CatchHandler @ 00102f67 */
  FUN_00102755(local_68);
  FUN_00103138(local_68);
  FUN_00103138(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00104361(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010464e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103138(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103480(param_1);
  FUN_00103492(*param_1,param_1[1],uVar1);
  FUN_001030e6(param_1);
  return;
}




void FUN_001030e6(long *param_1)

{
  FUN_00103446(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_0010303a(param_1);
  return;
}




void FUN_00105216(void)

{
  return;
}




void FUN_001051c9(void)

{
  return;
}




void FUN_0010520b(void)

{
  return;
}




void FUN_0010524d(void)

{
  return;
}




void FUN_00104c87(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010305a(undefined8 param_1)

{
  FUN_0010309a(param_1);
  return;
}




void FUN_001049f6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104ae3(param_2);
  uVar2 = FUN_00104ae3(param_1);
  FUN_00104b09(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001053da(undefined8 *param_1)

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




void FUN_001032c4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103bda(param_2);
  FUN_00103b89(&local_31,uVar1);
  uVar1 = FUN_00103b62(param_2);
                    /* try { // try from 0010332a to 0010332e has its CatchHandler @ 00103397 */
  FUN_00103bec(param_1,uVar1,&local_31);
  FUN_001030c6(&local_31);
  uVar2 = FUN_00103480(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00103caa(param_2);
  uVar4 = FUN_00103c52(param_2);
                    /* try { // try from 00103378 to 0010337c has its CatchHandler @ 001033b5 */
  uVar1 = FUN_00103d02(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001051b3(void)

{
  return;
}




undefined8 FUN_00103dc6(undefined8 param_1)

{
  return param_1;
}




void FUN_00105200(void)

{
  return;
}




undefined8 FUN_001040ec(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00104539(param_1,param_2);
  }
  return uVar1;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00108ea0)();
  return;
}




void FUN_00103d47(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104298(param_1,param_2,param_3);
  return;
}




void FUN_00104e8b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001042bf(void)

{
  return;
}




void FUN_00104cad(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010309a(undefined8 param_1)

{
  FUN_001033e4(param_1);
  FUN_00103404(param_1);
  return;
}




void FUN_001044e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103bda(param_1);
  FUN_0010471d(uVar1);
  return;
}




ulong FUN_0010507b(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00106100,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010466c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010481c(param_1,param_2,param_3);
  return;
}




void FUN_00105453(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001041d2(undefined8 param_1,undefined8 param_2)

{
  FUN_001041a8(param_1,param_2);
  FUN_00103404(param_1);
  return;
}




void FUN_00104f17(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103f26(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001043e2(param_2);
  uVar2 = FUN_001043e2(param_1);
  FUN_001043f4(uVar2,uVar1,param_3);
  return;
}




void FUN_00103446(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00103d47(param_1,param_2,param_3);
  }
  return;
}




void FUN_001054c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001041d2(param_1,param_3);
                    /* try { // try from 00103c26 to 00103c2a has its CatchHandler @ 00103c2d */
  FUN_00104208(param_1,param_2);
  return;
}




void FUN_001046a1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010484d(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103c52(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103da4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001043f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00104462(param_3);
  uVar2 = FUN_00104462(local_28);
  uVar3 = FUN_00104462(local_20);
  uVar1 = FUN_001046a1(uVar3,uVar2,uVar1);
  FUN_001046d6(&local_30,uVar1);
  return;
}




void FUN_00103da4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00105491(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010307a(undefined8 param_1)

{
  FUN_0010305a(param_1);
  return;
}




void FUN_001030c6(undefined8 param_1)

{
  FUN_00103436(param_1);
  return;
}




undefined8 FUN_001034f4(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103da4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104b09(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00104462(param_3);
  uVar2 = FUN_00104462(local_28);
  uVar3 = FUN_00104462(local_20);
  uVar1 = FUN_00104bef(uVar3,uVar2,uVar1);
  FUN_001046d6(&local_30,uVar1);
  return;
}




undefined8 FUN_00103ab0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034c0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104337(undefined8 param_1,undefined8 param_2)

{
  FUN_0010463a(param_1,param_2);
  return;
}




void FUN_00102838(void)

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
  FUN_0010307a(local_88);
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
                    /* try { // try from 00102932 to 00102aba has its CatchHandler @ 00102b06 */
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
  local_90 = FUN_00103180(local_88);
  FUN_001031d0(local_68,&local_90);
  FUN_001031fe(local_88,local_68[0],1,&local_a0);
  local_90 = FUN_00103180(local_88);
  FUN_001031d0(local_68,&local_90);
  FUN_001031fe(local_88,local_68[0],1,&local_a0);
  local_90 = FUN_00103180(local_88);
  FUN_001031d0(local_68,&local_90);
  FUN_001031fe(local_88,local_68[0],1,&local_a0);
  FUN_001032c4(local_68,local_88);
                    /* try { // try from 00102ac2 to 00102ac6 has its CatchHandler @ 00102af1 */
  FUN_001025e9(local_68);
  FUN_00103138(local_68);
  FUN_00103138(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00104988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00104462(param_3);
  uVar2 = FUN_00104a8d(local_28);
  uVar3 = FUN_00104a8d(local_20);
  uVar1 = FUN_00104aae(uVar3,uVar2,uVar1);
  FUN_001046d6(&local_30,uVar1);
  return;
}




bool FUN_0010535c(pthread_t *param_1)

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




void FUN_001051d4(void)

{
  return;
}




void FUN_00105472(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102b33(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010307a(local_58);
  local_64 = 7;
  local_60 = FUN_00103180(local_58);
  FUN_001031d0(local_38,&local_60);
                    /* try { // try from 00102ba3 to 00102c38 has its CatchHandler @ 00102c84 */
  FUN_001031fe(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00103180(local_58);
  FUN_001031d0(local_38,&local_60);
  FUN_001031fe(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00103180(local_58);
  FUN_001031d0(local_38,&local_60);
  FUN_001031fe(local_58,local_38[0],1,&local_64);
  FUN_001032c4(local_38,local_58);
                    /* try { // try from 00102c40 to 00102c44 has its CatchHandler @ 00102c6f */
  FUN_0010269f(local_38);
  FUN_00103138(local_38);
  FUN_00103138(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0010484d(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_00102fa9(void)

{
  FUN_00102b33();
  FUN_00102cae();
  return;
}




void FUN_001045c7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001047cc(param_1,param_2,param_3);
  return;
}




long FUN_00103e8a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001034e2(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001034e2(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00103f76(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104462(param_2);
  uVar2 = FUN_00104462(param_1);
  FUN_00104474(uVar2,uVar1,param_3);
  return;
}




ulong FUN_00104f77(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060f8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103480(undefined8 param_1)

{
  return param_1;
}




void FUN_001047cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104976(param_2);
  uVar2 = FUN_00104976(param_1);
  FUN_00104988(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_0010515a(void)

{
  return 1;
}




void FUN_00103d79(undefined8 param_1,undefined8 param_2)

{
  FUN_001042bf(param_1,param_2);
  return;
}




void FUN_00105242(void)

{
  return;
}




void FUN_00104ee4(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102755(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  long in_FS_OFFSET;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = (int *)FUN_00102814(param_1,2);
  iVar1 = *piVar2;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_00104c87("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00104cdf(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void * FUN_00104b77(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




ulong * FUN_0010450a(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00104d5d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103180(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034c0(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00102543) */
/* WARNING: Removing unreachable block (ram,0x0010254f) */

void FUN_00102530(void)

{
  return;
}




undefined8 FUN_001046d6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001033e4(undefined8 param_1)

{
  FUN_00103d38(param_1);
  return;
}




undefined8 FUN_0010528f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00105258,local_18);
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




void FUN_00103dd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_001042e8(param_3);
  uVar2 = FUN_001042d2(param_1);
  FUN_001042fa(*param_1,uVar2,uVar1);
  return;
}




long FUN_00103b62(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




undefined8 FUN_001034e2(undefined8 param_1)

{
  return param_1;
}




void FUN_001044ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001046ec(param_1,param_2,param_3);
  return;
}




void FUN_001051be(void)

{
  return;
}




void FUN_00104262(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001045c7(param_1,param_2,param_3);
  return;
}




void FUN_0010522c(void)

{
  return;
}




undefined8 FUN_00103023(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001025e9(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = (int *)FUN_00102814(param_1,2);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00104cdf(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00104c87("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104539(undefined8 param_1,undefined8 param_2)

{
  FUN_00104786(param_1,param_2,0);
  return;
}




undefined8 FUN_00103bda(undefined8 param_1)

{
  return param_1;
}




void FUN_00104d33(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00105237(void)

{
  return;
}




void FUN_00104786(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010495e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




undefined8 FUN_001042e8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010495e(void)

{
  return 0x1fffffffffffffff;
}




void FUN_00103fc7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001044ae(param_1,param_2,param_3);
  return;
}




void FUN_001046ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001048c3(param_1,param_2,param_3);
  return;
}




void FUN_00103492(undefined8 param_1,undefined8 param_2)

{
  FUN_00103d79(param_1,param_2);
  return;
}




undefined8 FUN_00102fbe(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104c87("Calling good()...");
  FUN_00102fa9();
  FUN_00104c87("Finished good()");
  FUN_00104c87("Calling bad()...");
  FUN_00102838();
  FUN_00104c87("Finished bad()");
  return 0;
}




undefined8 FUN_00103caa(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00103da4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00104bda(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00104ae3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00104bda(&local_10);
  FUN_001043e2(uVar1);
  return;
}




undefined8 FUN_00104567(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010464e(&local_18,param_1);
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




void FUN_001045f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_001042e8(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00103023(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00105258(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_0010471d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_00104911(param_1);
  puVar1 = (undefined8 *)FUN_0010492f(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_0010519d(void)

{
  return;
}




void FUN_00104e09(undefined4 param_1)

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




undefined8 FUN_00104462(undefined8 param_1)

{
  return param_1;
}




void FUN_001031fe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_001034f4(param_1);
  local_18 = FUN_0010354b(&local_38,&local_20);
  local_20 = FUN_00103ab0(local_30);
  uVar1 = FUN_00103afc(&local_20,local_18);
  FUN_00103590(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00103ab0(local_30);
  FUN_00103afc(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104eb6(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001041a8(undefined8 param_1,undefined8 param_2)

{
  FUN_001045b4(param_1,param_2);
  return;
}




void FUN_001048c3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00104462(param_1);
  uVar1 = FUN_00104a46(uVar1,param_2,param_3);
  FUN_001046d6(&local_10,uVar1);
  return;
}




void FUN_00104cdf(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




long FUN_001042d2(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00105169(void)

{
  return 0;
}




void FUN_00104aae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104b77(param_1,param_2,param_3);
  return;
}




void FUN_00104db3(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103e38(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001042d2(param_1);
  FUN_00104337(*param_1,uVar1);
  return;
}




void FUN_001034c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_001043e2(undefined8 param_1)

{
  return param_1;
}




void FUN_00105192(void)

{
  return;
}




void FUN_00104474(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




ulong FUN_00103ffc(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_001044e4(param_1);
  lVar2 = FUN_00103b62(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00103b62(local_40);
  local_30 = FUN_00103b62(local_40);
  plVar3 = (long *)FUN_0010450a(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00103b62(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_001044e4(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_001044e4(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001042fa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001042e8(param_3);
  FUN_001045f8(param_1,param_2,uVar1);
  return;
}




void FUN_00105221(void)

{
  return;
}




void FUN_0010303a(undefined8 param_1)

{
  FUN_001030c6(param_1);
  return;
}




void FUN_00103436(void)

{
  return;
}




void FUN_00104bef(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104c24(param_1,param_2,param_3);
  return;
}




void FUN_00105530(void)

{
  return;
}




void FUN_00104d88(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_0010354b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00103dc6(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00103dc6(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00104e63(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001051a8(void)

{
  return;
}




undefined8 FUN_00103b89(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010417b(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00102584) */
/* WARNING: Removing unreachable block (ram,0x00102590) */

void FUN_00102560(void)

{
  return;
}




void FUN_00104298(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void * FUN_00104c24(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




undefined8 FUN_00104976(undefined8 param_1)

{
  return param_1;
}




void FUN_0010481c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001049f6(param_1,param_2,param_3);
  return;
}




void FUN_001051ea(void)

{
  return;
}




void FUN_00104208(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_001040ec(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




ulong * FUN_0010492f(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001043ad(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010466c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010417b(undefined8 param_1,undefined8 param_2)

{
  FUN_001041a8(param_1,param_2);
  return param_1;
}




undefined8 FUN_00103afc(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_001034c0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010464e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00104d07(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00104911(undefined8 param_1)

{
  FUN_0010495e(param_1);
  return;
}




undefined8 FUN_00104a8d(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00103dc6(&local_10);
  return *puVar1;
}




void FUN_00103404(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00104dde(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined4 * FUN_00104a46(undefined4 *param_1,long param_2,undefined4 *param_3)

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




void FUN_00103e6c(undefined8 param_1)

{
  FUN_001042d2(param_1);
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




void FUN_00104123(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104567(param_2);
  uVar2 = FUN_00104567(param_1);
  FUN_001043ad(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001045b4(void)

{
  return;
}




long FUN_00102814(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}



