
void FUN_0010349c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_001052ae(void)

{
  return;
}




undefined8 FUN_0010544f(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00103b48(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103558(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010450c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00104efb(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103dd0(void)

{
  return;
}




void FUN_00103628(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00104094(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00103b48(local_80);
      local_60 = FUN_00103f22(&local_88,&local_78);
      local_70 = FUN_00104184(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00103518(local_80);
                    /* try { // try from 00103932 to 001039bd has its CatchHandler @ 00103a75 */
      FUN_0010405f(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00103518(local_80);
      puVar2 = (undefined8 *)FUN_0010357a(&local_88);
      local_70 = FUN_001041bb(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00103518(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_0010357a(&local_88);
      local_70 = FUN_001041bb(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00103518(local_80);
      FUN_0010352a(*local_80,local_80[1],uVar1);
      FUN_001034de(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00103e70(local_38,param_1,param_4);
                    /* try { // try from 001036b2 to 00103885 has its CatchHandler @ 00103a57 */
      local_50 = FUN_00103f04(local_38);
      local_78 = FUN_00103218(local_80);
      local_48 = FUN_00103f22(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00103518(local_80);
        FUN_00103f66(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_0010357a(&local_88);
        FUN_00103fbe(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_0010357a(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_0010357a(&local_88);
        FUN_0010400e(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00103518(local_80);
        lVar4 = FUN_0010405f(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00103518(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_0010357a(&local_88);
        FUN_00103f66(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_0010357a(&local_88);
        FUN_0010400e(*puVar2,local_40,local_50);
      }
      FUN_00103ed0(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010522a(void)

{
  return;
}




undefined8 FUN_001030bb(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010426a(undefined8 param_1,undefined8 param_2)

{
  FUN_00104240(param_1,param_2);
  FUN_0010349c(param_1);
  return;
}




void FUN_00103041(void)

{
  FUN_00102bcb();
  FUN_00102d46();
  return;
}




void FUN_00102d46(void)

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
  FUN_00103112(local_88);
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
                    /* try { // try from 00102e40 to 00102fc8 has its CatchHandler @ 00103014 */
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
  local_90 = FUN_00103218(local_88);
  FUN_00103268(local_68,&local_90);
  FUN_00103296(local_88,local_68[0],1,&local_a0);
  local_90 = FUN_00103218(local_88);
  FUN_00103268(local_68,&local_90);
  FUN_00103296(local_88,local_68[0],1,&local_a0);
  local_90 = FUN_00103218(local_88);
  FUN_00103268(local_68,&local_90);
  FUN_00103296(local_88,local_68[0],1,&local_a0);
  FUN_0010335c(local_68,local_88);
                    /* try { // try from 00102fd0 to 00102fd4 has its CatchHandler @ 00102fff */
  FUN_001027cf(local_68);
  FUN_001031d0(local_68);
  FUN_001031d0(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010524b(void)

{
  return;
}




ulong FUN_00105113(long param_1,ulong param_2,long param_3)

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




void FUN_00105240(void)

{
  return;
}




void FUN_00105282(void)

{
  return;
}




undefined4 * FUN_00104ade(undefined4 *param_1,long param_2,undefined4 *param_3)

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




void FUN_001027cf(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_001028ac(param_1,2);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_00104d1f("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00104d77(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_00104864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104a0e(param_2);
  uVar2 = FUN_00104a0e(param_1);
  FUN_00104a20(uVar2,uVar1,param_3);
  return;
}




void FUN_001052b9(void)

{
  return;
}




void FUN_001030f2(undefined8 param_1)

{
  FUN_00103132(param_1);
  return;
}




void FUN_0010550a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00104faf(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00103c72(undefined8 param_1)

{
  return param_1;
}




void FUN_00105235(void)

{
  return;
}




void FUN_00103e70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00104380(param_3);
  uVar2 = FUN_0010436a(param_1);
  FUN_00104392(*param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00103b94(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00103558(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104d77(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




ulong FUN_00104094(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_0010457c(param_1);
  lVar2 = FUN_00103bfa(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00103bfa(local_40);
  local_30 = FUN_00103bfa(local_40);
  plVar3 = (long *)FUN_001045a2(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00103bfa(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_0010457c(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_0010457c(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00104b25(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00103e5e(&local_10);
  return *puVar1;
}




void FUN_001028d0(void)

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
  FUN_00103112(local_88);
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
                    /* try { // try from 001029ca to 00102b52 has its CatchHandler @ 00102b9e */
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
  local_90 = FUN_00103218(local_88);
  FUN_00103268(local_68,&local_90);
  FUN_00103296(local_88,local_68[0],1,&local_a0);
  local_90 = FUN_00103218(local_88);
  FUN_00103268(local_68,&local_90);
  FUN_00103296(local_88,local_68[0],1,&local_a0);
  local_90 = FUN_00103218(local_88);
  FUN_00103268(local_68,&local_90);
  FUN_00103296(local_88,local_68[0],1,&local_a0);
  FUN_0010335c(local_68,local_88);
                    /* try { // try from 00102b5a to 00102b5e has its CatchHandler @ 00102b89 */
  FUN_00102629(local_68);
  FUN_001031d0(local_68);
  FUN_001031d0(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00104392(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104380(param_3);
  FUN_00104690(param_1,param_2,uVar1);
  return;
}




void FUN_00104e4b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010457c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103c72(param_1);
  FUN_001047b5(uVar1);
  return;
}




void FUN_001052c4(void)

{
  return;
}




void FUN_00103f66(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001043f9(param_2);
  uVar2 = FUN_001043f9(param_1);
  FUN_00104445(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00104df5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103ddf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104330(param_1,param_2,param_3);
  return;
}




void FUN_0010317e(long *param_1)

{
  FUN_001034de(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_001030d2(param_1);
  return;
}




void FUN_001052e5(void)

{
  return;
}




undefined8 FUN_0010357a(undefined8 param_1)

{
  return param_1;
}




ulong * FUN_001045a2(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_0010358c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103e3c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104330(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00103c21(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104213(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001052da(void)

{
  return;
}




long FUN_001028ac(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_00102bcb(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103112(local_58);
  local_64 = 7;
  local_60 = FUN_00103218(local_58);
  FUN_00103268(local_38,&local_60);
                    /* try { // try from 00102c3b to 00102cd0 has its CatchHandler @ 00102d1c */
  FUN_00103296(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00103218(local_58);
  FUN_00103268(local_38,&local_60);
  FUN_00103296(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00103218(local_58);
  FUN_00103268(local_38,&local_60);
  FUN_00103296(local_58,local_38[0],1,&local_64);
  FUN_0010335c(local_38,local_58);
                    /* try { // try from 00102cd8 to 00102cdc has its CatchHandler @ 00102d07 */
  FUN_001026fc(local_38);
  FUN_001031d0(local_38);
  FUN_001031d0(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010335c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103c72(param_2);
  FUN_00103c21(&local_31,uVar1);
  uVar1 = FUN_00103bfa(param_2);
                    /* try { // try from 001033c2 to 001033c6 has its CatchHandler @ 0010342f */
  FUN_00103c84(param_1,uVar1,&local_31);
  FUN_0010315e(&local_31);
  uVar2 = FUN_00103518(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00103d42(param_2);
  uVar4 = FUN_00103cea(param_2);
                    /* try { // try from 00103410 to 00103414 has its CatchHandler @ 0010344d */
  uVar1 = FUN_00103d9a(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong * FUN_001049c7(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001034ce(void)

{
  return;
}




void FUN_00104240(undefined8 param_1,undefined8 param_2)

{
  FUN_0010464c(param_1,param_2);
  return;
}




void FUN_0010481e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001049f6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




void FUN_001052a3(void)

{
  return;
}




undefined8 FUN_001051f2(void)

{
  return 1;
}




void FUN_001052cf(void)

{
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00108e90)();
  return;
}




void FUN_001046e6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102583) */
/* WARNING: Removing unreachable block (ram,0x0010258f) */

void FUN_00102570(void)

{
  return;
}




void FUN_0010448c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001044fa(param_3);
  uVar2 = FUN_001044fa(local_28);
  uVar3 = FUN_001044fa(local_20);
  uVar1 = FUN_00104739(uVar3,uVar2,uVar1);
  FUN_0010476e(&local_30,uVar1);
  return;
}




void FUN_00103d9a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001042fa(param_1,param_2,param_3);
  return;
}




void FUN_00103e11(undefined8 param_1,undefined8 param_2)

{
  FUN_00104357(param_1,param_2);
  return;
}




void FUN_00104e20(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001031d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103518(param_1);
  FUN_0010352a(*param_1,param_1[1],uVar1);
  FUN_0010317e(param_1);
  return;
}




void FUN_00104690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00104380(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_001030bb(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00104e76(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001054eb(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




long FUN_00103bfa(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_00105277(void)

{
  return;
}




void FUN_00104dcb(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001049f6(void)

{
  return 0x1fffffffffffffff;
}




void FUN_001043cf(undefined8 param_1,undefined8 param_2)

{
  FUN_001046d2(param_1,param_2);
  return;
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




void * FUN_00104c0f(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




undefined8 FUN_00103056(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104d1f("Calling good()...");
  FUN_00103041();
  FUN_00104d1f("Finished good()");
  FUN_00104d1f("Calling bad()...");
  FUN_001028d0();
  FUN_00104d1f("Finished bad()");
  return 0;
}




void FUN_001045d1(undefined8 param_1,undefined8 param_2)

{
  FUN_0010481e(param_1,param_2,0);
  return;
}




void FUN_00103112(undefined8 param_1)

{
  FUN_001030f2(param_1);
  return;
}




void FUN_00105298(void)

{
  return;
}




void FUN_00103c84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010426a(param_1,param_3);
                    /* try { // try from 00103cbe to 00103cc2 has its CatchHandler @ 00103cc5 */
  FUN_001042a0(param_1,param_2);
  return;
}




undefined8 FUN_00103518(undefined8 param_1)

{
  return param_1;
}




void FUN_00103296(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_0010358c(param_1);
  local_18 = FUN_001035e3(&local_38,&local_20);
  local_20 = FUN_00103b48(local_30);
  uVar1 = FUN_00103b94(&local_20,local_18);
  FUN_00103628(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00103b48(local_30);
  FUN_00103b94(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104380(undefined8 param_1)

{
  return param_1;
}




ulong FUN_0010500f(long param_1,ulong param_2,long param_3)

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




void FUN_0010400e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001044fa(param_2);
  uVar2 = FUN_001044fa(param_1);
  FUN_0010450c(uVar2,uVar1,param_3);
  return;
}




void FUN_00105261(void)

{
  return;
}




void FUN_00102629(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_001028ac(param_1,2);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00104d1f("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00104d77(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




undefined8 FUN_001043f9(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001046e6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103558(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00104ba1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001044fa(param_3);
  uVar2 = FUN_001044fa(local_28);
  uVar3 = FUN_001044fa(local_20);
  uVar1 = FUN_00104c87(uVar3,uVar2,uVar1);
  FUN_0010476e(&local_30,uVar1);
  return;
}




void FUN_0010526c(void)

{
  return;
}




void FUN_0010465f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104864(param_1,param_2,param_3);
  return;
}




void FUN_001041bb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001045ff(param_2);
  uVar2 = FUN_001045ff(param_1);
  FUN_00104445(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00104784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010495b(param_1,param_2,param_3);
  return;
}




void FUN_00103e3c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_001045ff(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001046e6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103218(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103558(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x001025c4) */
/* WARNING: Removing unreachable block (ram,0x001025d0) */

void FUN_001025a0(void)

{
  return;
}




long FUN_001035e3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00103e5e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00103e5e(param_2);
  return lVar1 - *plVar2 >> 2;
}




undefined8 FUN_00104a0e(undefined8 param_1)

{
  return param_1;
}




void FUN_001049a9(undefined8 param_1)

{
  FUN_001049f6(param_1);
  return;
}




void FUN_00104445(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104704(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00105201(void)

{
  return 0;
}




undefined8 FUN_001044fa(undefined8 param_1)

{
  return param_1;
}




void FUN_0010528d(void)

{
  return;
}




void FUN_00105529(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010464c(void)

{
  return;
}




void FUN_00104f4e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00104d1f(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00104357(void)

{
  return;
}




void FUN_001030d2(undefined8 param_1)

{
  FUN_0010315e(param_1);
  return;
}




void FUN_00104d9f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




long FUN_00103f22(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010357a(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010357a(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00104704(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001048b4(param_1,param_2,param_3);
  return;
}




void FUN_00104b46(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104c0f(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00104184(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_001045d1(param_1,param_2);
  }
  return uVar1;
}




void FUN_00104ea1(undefined4 param_1)

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




void FUN_0010495b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001044fa(param_1);
  uVar1 = FUN_00104ade(uVar1,param_2,param_3);
  FUN_0010476e(&local_10,uVar1);
  return;
}




void FUN_00104c87(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104cbc(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103cea(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103e3c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103268(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010357a(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_001042fa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010465f(param_1,param_2,param_3);
  return;
}




void FUN_00104f23(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




long FUN_0010436a(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00103e5e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104213(undefined8 param_1,undefined8 param_2)

{
  FUN_00104240(param_1,param_2);
  return param_1;
}




void FUN_00105256(void)

{
  return;
}




void FUN_001026fc(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_001028ac(param_1,2);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00104d1f("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00104d77(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_0010315e(undefined8 param_1)

{
  FUN_001034ce(param_1);
  return;
}




void FUN_00104a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001044fa(param_3);
  uVar2 = FUN_00104b25(local_28);
  uVar3 = FUN_00104b25(local_20);
  uVar1 = FUN_00104b46(uVar3,uVar2,uVar1);
  FUN_0010476e(&local_30,uVar1);
  return;
}




void FUN_001052f0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00104c72(undefined8 *param_1)

{
  return *param_1;
}




void FUN_0010347c(undefined8 param_1)

{
  FUN_00103dd0(param_1);
  return;
}




void FUN_001055d0(void)

{
  return;
}




void FUN_00104d45(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00104f7c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010352a(undefined8 param_1,undefined8 param_2)

{
  FUN_00103e11(param_1,param_2);
  return;
}




void FUN_0010405f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104546(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00105472(undefined8 *param_1)

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




void FUN_00104a8e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104b7b(param_2);
  uVar2 = FUN_00104b7b(param_1);
  FUN_00104ba1(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001047b5(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_001049a9(param_1);
  puVar1 = (undefined8 *)FUN_001049c7(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_001046d2(void)

{
  return;
}




int FUN_00105210(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103fbe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010447a(param_2);
  uVar2 = FUN_0010447a(param_1);
  FUN_0010448c(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_0010476e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001042a0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00104184(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




void FUN_00103f04(undefined8 param_1)

{
  FUN_0010436a(param_1);
  return;
}




void FUN_001034de(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00103ddf(param_1,param_2,param_3);
  }
  return;
}




void FUN_00105560(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00104546(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104784(param_1,param_2,param_3);
  return;
}




void FUN_00104b7b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00104c72(&local_10);
  FUN_0010447a(uVar1);
  return;
}




void FUN_00104739(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001048e5(param_1,param_2,param_3);
  return;
}




long FUN_001048e5(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_00103132(undefined8 param_1)

{
  FUN_0010347c(param_1);
  FUN_0010349c(param_1);
  return;
}




bool FUN_001053f4(pthread_t *param_1)

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




void * FUN_00104cbc(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_001048b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104a8e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103d42(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00103e3c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ed0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010436a(param_1);
  FUN_001043cf(*param_1,uVar1);
  return;
}




undefined8 FUN_0010447a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00105327(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001052f0,local_18);
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



