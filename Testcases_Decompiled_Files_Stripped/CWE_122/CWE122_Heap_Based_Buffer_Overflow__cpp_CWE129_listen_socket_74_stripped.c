
undefined8 FUN_00104685(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001050ab("Calling good()...");
  FUN_00104670();
  FUN_001050ab("Finished good()");
  FUN_001050ab("Calling bad()...");
  FUN_00104004();
  FUN_001050ab("Finished bad()");
  return 0;
}




void FUN_0010482e(undefined8 param_1,undefined8 param_2)

{
  FUN_001048f2(param_1,param_2);
  return;
}




undefined8 FUN_00102dae(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103492(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102edc(param_5);
  uVar2 = FUN_00102eca(param_4);
  uVar3 = FUN_00102eb8(param_3);
  FUN_00103df0(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00103ece(undefined8 param_1)

{
  return param_1;
}




void FUN_00104ac4(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104bc6(local_18,param_1);
  FUN_00104be4(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001049be(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00103a56(local_28);
    FUN_001049be(param_1,uVar1);
    lVar2 = FUN_00103b8e(local_28);
    FUN_00103454(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00102965(void)

{
  return;
}




undefined8 FUN_00104cce(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103f1c(void)

{
  return 0x333333333333333;
}




void FUN_00104b28(void)

{
  return;
}




void FUN_00103d6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103ef4(param_1,param_2,param_3);
  return;
}




void FUN_00103ef4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00104004(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  long in_FS_OFFSET;
  int local_b8;
  int local_b4;
  undefined local_a8 [48];
  undefined4 local_78 [12];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001047ee(local_a8);
  local_b8 = -1;
  local_b4 = -1;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_48,0x10);
                    /* try { // try from 00104101 to 00104223 has its CatchHandler @ 00104272 */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_b4 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_b4 != -1)) {
      sVar2 = recv(local_b4,local_2e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_2e[iVar1] = '\0';
        local_b8 = atoi(local_2e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_b4 != -1) {
    close(local_b4);
  }
  local_78[0] = 0;
  piVar3 = (int *)FUN_00102978(local_a8,local_78);
  *piVar3 = local_b8;
  local_78[0] = 1;
  piVar3 = (int *)FUN_00102978(local_a8,local_78);
  *piVar3 = local_b8;
  local_78[0] = 2;
  piVar3 = (int *)FUN_00102978(local_a8,local_78);
  *piVar3 = local_b8;
  FUN_0010482e(local_78,local_a8);
                    /* try { // try from 0010422b to 0010422f has its CatchHandler @ 0010425d */
  FUN_00102649(local_78);
  FUN_0010480e(local_78);
  FUN_0010480e(local_a8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00104a28(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104b37(param_1,param_2);
  FUN_00104bb2(param_1,param_2);
  FUN_00104744(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001037ba(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_001056b3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010567c,local_18);
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




void FUN_00104bc6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001034dc(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  while (local_38 != 0) {
    uVar2 = FUN_00103317(local_38);
    cVar1 = FUN_00102b5a(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00103a56(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00103b8e(local_38);
    }
  }
  FUN_00103492(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




long FUN_001046ea(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00105157(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00104f6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010364a(param_1);
  uVar2 = FUN_00104f5a(param_2);
  FUN_00104fb8(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_0010562f(void)

{
  return;
}




long FUN_00104aae(long param_1)

{
  return param_1 + 0x10;
}




void FUN_001048b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001034b0(param_1);
  FUN_001049be(param_1,uVar1);
  FUN_001047ae(param_1);
  return;
}




void FUN_00103d26(undefined8 param_1)

{
  FUN_00103ece(param_1);
  return;
}




void FUN_00103ee0(void)

{
  return;
}




undefined8 FUN_00103afa(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00105645(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_0010a020 == '\0') {
    if (PTR___cxa_finalize_00109fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_0010a008);
    }
    FUN_00102590();
    DAT_0010a020 = 1;
    return;
  }
  return;
}




void FUN_001037d0(undefined8 param_1)

{
  FUN_00103317(param_1);
  return;
}




undefined4 FUN_00102b5a(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00103bb6(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102e0c(long param_1)

{
  FUN_0010359a(param_1 + 0x20);
  return;
}




void FUN_001051d7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




long FUN_00104717(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109e88)();
  return;
}




undefined8 FUN_00103b8e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001047ae(undefined8 param_1)

{
  FUN_00104894(param_1);
  return;
}




undefined8 FUN_00102e2e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ace(undefined8 param_1)

{
  FUN_00102dae(param_1);
  return;
}




void FUN_0010476e(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_0010558d(void)

{
  return 0;
}




void FUN_00103620(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102e2e(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_0010567c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001052da(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_0010294f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00104b88(undefined8 param_1,undefined8 param_2)

{
  FUN_00104cba(param_1,param_2);
  return;
}




long FUN_001034c6(long param_1)

{
  return param_1 + 8;
}




void FUN_00104670(void)

{
  FUN_001042a2();
  FUN_001043d2();
  return;
}




void FUN_00103da0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103f1c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_00104744(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010476e(param_1);
  return;
}




void FUN_001052af(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102f6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  lVar3 = FUN_00103754(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001034c6(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001037d0(local_50);
    cVar2 = FUN_00102b5a(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001037d0(local_50);
      cVar2 = FUN_00102b5a(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103a98(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001037ba(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001037ba(local_60);
          local_48[1] = 0;
          FUN_001037ee(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00103a6c(local_48);
          uVar6 = FUN_001037d0(*puVar5);
          cVar2 = FUN_00102b5a(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010382e(local_60,param_3);
          }
          else {
            lVar3 = FUN_00103a56(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001037ee(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001039e2(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001039cc(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001039cc(local_60);
        uVar6 = FUN_001039cc(local_60);
        FUN_001039e2(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00103a2a(local_48);
        uVar6 = FUN_001037d0(*puVar5);
        cVar2 = FUN_00102b5a(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010382e(local_60,param_3);
        }
        else {
          lVar3 = FUN_00103a56(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001037ee(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001039e2(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001032fc;
  }
  lVar3 = FUN_001037a4(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00103010:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001037ba(local_60);
    uVar6 = FUN_001037d0(*puVar5);
    cVar2 = FUN_00102b5a(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00103010;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001037ba(local_60);
    local_48[1] = 0;
    FUN_001037ee(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010382e(local_60,param_3);
  }
LAB_001032fc:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8
FUN_00102c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102edc(param_5);
  uVar2 = FUN_00102eca(param_4);
  uVar3 = FUN_00102eb8(param_3);
  local_40 = FUN_00102eee(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102c94 to 00102cd7 has its CatchHandler @ 00102d15 */
  uVar1 = FUN_00103317(local_40);
  local_38 = FUN_00102f6e(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00103454(param_1,local_40);
    FUN_00103492(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010336a(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00105619(void)

{
  return;
}




void FUN_00104fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010294f(0x28,param_2);
  uVar1 = FUN_00104f5a(param_3);
  uVar2 = FUN_00102e0c(param_2);
  uVar3 = FUN_00103bcc(param_1);
  FUN_00105026(uVar3,uVar2,uVar1);
  return;
}




void FUN_00104e53(undefined8 param_1)

{
  FUN_001046ea(param_1);
  return;
}




void FUN_00105650(void)

{
  return;
}




void FUN_00105308(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001055e2(void)

{
  return;
}




undefined8 FUN_00104be4(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001034c6(param_1);
  uVar2 = FUN_00104cce(param_2);
  uVar1 = FUN_00104ce4(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001039cc(param_1);
  uVar2 = FUN_00104e53(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001037ba(param_1);
  uVar2 = FUN_00104e71(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_00103ba4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010557e(void)

{
  return 1;
}




void FUN_00104cba(void)

{
  return;
}




void FUN_0010565b(void)

{
  return;
}




undefined8 FUN_00102edc(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103bcc(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104a98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104894(undefined8 param_1)

{
  FUN_001049ae(param_1);
  return;
}




void FUN_00103fe6(undefined8 param_1)

{
  FUN_001035f0(param_1);
  return;
}




void FUN_00103b54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103bcc(param_1);
  FUN_00103d6e(uVar1,param_2,1);
  return;
}




void FUN_00104f20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00104f5a(param_2);
  FUN_00104f6c(uVar1,uVar2);
  return;
}




undefined8 FUN_00104f5a(undefined8 param_1)

{
  return param_1;
}




void FUN_0010560e(void)

{
  return;
}




void FUN_0010364a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103bcc(param_1);
  FUN_00103bde(uVar1,1);
  return;
}




undefined8 FUN_00102b81(undefined8 param_1)

{
  return param_1;
}




void FUN_001039e2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103c7c(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103c7c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001051ac(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00105666(void)

{
  return;
}




void FUN_0010512b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102e40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102e2e(param_2);
  FUN_001035b8(param_1,uVar1);
  return;
}




void FUN_001043d2(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  long in_FS_OFFSET;
  int local_b8;
  int local_b4;
  undefined local_a8 [48];
  undefined4 local_78 [12];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001047ee(local_a8);
  local_b8 = -1;
  local_b4 = -1;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_48,0x10);
                    /* try { // try from 001044cf to 001045f1 has its CatchHandler @ 00104640 */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_b4 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_b4 != -1)) {
      sVar2 = recv(local_b4,local_2e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_2e[iVar1] = '\0';
        local_b8 = atoi(local_2e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_b4 != -1) {
    close(local_b4);
  }
  local_78[0] = 0;
  piVar3 = (int *)FUN_00102978(local_a8,local_78);
  *piVar3 = local_b8;
  local_78[0] = 1;
  piVar3 = (int *)FUN_00102978(local_a8,local_78);
  *piVar3 = local_b8;
  local_78[0] = 2;
  piVar3 = (int *)FUN_00102978(local_a8,local_78);
  *piVar3 = local_b8;
  FUN_0010482e(local_78,local_a8);
                    /* try { // try from 001045f9 to 001045fd has its CatchHandler @ 0010462b */
  FUN_00102847(local_78);
  FUN_0010480e(local_78);
  FUN_0010480e(local_a8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00104f0a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102b38(undefined8 *param_1)

{
  FUN_00102e0c(*param_1);
  return;
}




void FUN_00105103(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103d44(undefined8 param_1,undefined8 param_2)

{
  FUN_00103ee0(param_1,param_2);
  return;
}




undefined8 FUN_001057fe(undefined8 *param_1)

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




void FUN_00104bb2(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025a3) */
/* WARNING: Removing unreachable block (ram,0x001025af) */

void FUN_00102590(void)

{
  return;
}




void FUN_00103f86(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103fc8(param_2);
  puVar2 = (undefined4 *)FUN_0010360e(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




void FUN_0010522d(undefined4 param_1)

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




void FUN_00105877(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00104c8c(undefined8 param_1,undefined8 param_2)

{
  FUN_00104b88(param_1,param_2);
  return param_1;
}




void FUN_00102b94(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e78(param_1,param_2);
  return;
}




long FUN_001039cc(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103fc8(undefined8 param_1)

{
  FUN_00103fe6(param_1);
  return;
}




void FUN_001049ae(void)

{
  return;
}




undefined8 FUN_00102eca(undefined8 param_1)

{
  return param_1;
}




void FUN_00102748(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  piVar1 = (int *)FUN_00102978(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_001050ab("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00105103(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103492(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001055c1(void)

{
  return;
}




void FUN_00102e78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001035f0(param_2);
  uVar1 = FUN_0010360e(uVar1);
  FUN_00103620(param_1,uVar1);
  return;
}




ulong FUN_0010539b(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060e4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_0010549f(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060ec,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103676(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010294f(0x28,param_2);
  uVar1 = FUN_00102edc(param_5);
  uVar2 = FUN_00102eca(param_4);
  uVar3 = FUN_00102eb8(param_3);
  uVar4 = FUN_00102e0c(param_2);
  uVar5 = FUN_00103bcc(param_1);
                    /* try { // try from 00103705 to 00103709 has its CatchHandler @ 0010370c */
  FUN_00103c0c(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_0010360e(undefined8 param_1)

{
  return param_1;
}




void FUN_00105603(void)

{
  return;
}




void FUN_001058b5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102bbe(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102e2e(param_2);
  FUN_00102e40(param_1,uVar1);
  return param_1;
}




void FUN_00103df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102eb8(param_3);
  uVar1 = FUN_00102eca(param_4);
  FUN_00102b94(local_38,uVar1);
  FUN_00102edc(param_5);
  uVar1 = FUN_0010294f(8,param_2);
                    /* try { // try from 00103e78 to 00103e7c has its CatchHandler @ 00103e7f */
  FUN_00103f34(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d5e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034c6(param_1);
  uVar2 = FUN_001034b0(param_1);
  FUN_001034dc(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_001042a2(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001047ee(local_88);
  local_58[0] = 0;
                    /* try { // try from 001042f6 to 00104359 has its CatchHandler @ 001043a5 */
  puVar1 = (undefined4 *)FUN_00102978(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00102978(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00102978(local_88,local_58);
  *puVar1 = 7;
  FUN_0010482e(local_58,local_88);
                    /* try { // try from 00104361 to 00104365 has its CatchHandler @ 00104390 */
  FUN_00102748(local_58);
  FUN_0010480e(local_58);
  FUN_0010480e(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001048f2(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00104a28(param_1,param_2);
  lVar1 = FUN_00104a98(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00104aae(param_1);
                    /* try { // try from 0010494d to 00104951 has its CatchHandler @ 00104957 */
    uVar3 = FUN_00104ac4(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_001055ed(void)

{
  return;
}




undefined8 FUN_00102eb8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103c8e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103492(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103a98(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103c7c(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00105287(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102aec(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103b10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e0c(param_2);
  uVar2 = FUN_00103bcc(param_1);
  FUN_00103d44(uVar2,uVar1);
  return;
}




void FUN_00105950(void)

{
  return;
}




undefined4 * FUN_00104e90(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103ad8(param_2);
  puVar2 = (undefined4 *)FUN_00104f20(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103317(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103ad8(param_1);
  FUN_00103afa(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001037ee(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103c7c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102649(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  piVar1 = (int *)FUN_00102978(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_001050ab("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00105103(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




int FUN_0010559c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001055b6(void)

{
  return;
}




void FUN_00103bde(undefined8 param_1,undefined8 param_2)

{
  FUN_00103da0(param_1,param_2,0);
  return;
}




void FUN_001035f0(undefined8 param_1)

{
  FUN_00103bb6(param_1);
  return;
}




void FUN_001055d7(void)

{
  return;
}




undefined8 FUN_00103a56(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102aa4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d5e(param_1,param_2);
  return;
}




undefined8 FUN_00103c7c(undefined8 param_1)

{
  return param_1;
}




void FUN_00105064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00104f5a(param_3);
  puVar2 = (undefined8 *)FUN_0010294f(8,param_2);
  *puVar2 = *puVar1;
  return;
}




undefined4 FUN_00102b12(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102dfe(param_1);
  return unaff_EBX;
}




void FUN_00102847(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  piVar1 = (int *)FUN_00102978(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if ((local_1c < 0) || (9 < local_1c)) {
    FUN_001050ab("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00105103(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103f34(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103f86(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00103754(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103492(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001050d1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001047ce(undefined8 param_1)

{
  FUN_00104858(param_1);
  return;
}




undefined8 * FUN_00103a2a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_0010499e(void)

{
  return;
}




void FUN_00103ad8(long param_1)

{
  FUN_00103d26(param_1 + 0x20);
  return;
}




void FUN_00103cde(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103ebb(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103c7c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00105181(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025e4) */
/* WARNING: Removing unreachable block (ram,0x001025f0) */

void FUN_001025c0(void)

{
  return;
}




void FUN_00104e71(undefined8 param_1)

{
  FUN_00104717(param_1);
  return;
}




void FUN_00104858(long param_1)

{
  FUN_0010497e(param_1);
  FUN_0010499e(param_1);
  FUN_00104744(param_1 + 8);
  return;
}




undefined8 FUN_001037a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_001057db(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_001034b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102eee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0010364a(param_1);
  uVar2 = FUN_00102edc(param_4);
  uVar3 = FUN_00102eca(param_3);
  uVar4 = FUN_00102eb8(param_2);
  FUN_00103676(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00105026(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104f5a(param_3);
  FUN_00105064(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00103ebb(undefined8 param_1)

{
  return param_1;
}




void FUN_00103454(undefined8 param_1,undefined8 param_2)

{
  FUN_00103b10(param_1,param_2);
  FUN_00103b54(param_1,param_2);
  return;
}




long FUN_00102978(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined local_39;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = FUN_00102aa4(param_1,param_2);
  local_28 = FUN_00102ace(param_1);
  cVar2 = FUN_00102aec(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00102b12(param_1);
    uVar3 = FUN_00102b38(&local_38);
    cVar2 = FUN_00102b5a(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00102a18;
    }
  }
  bVar1 = true;
LAB_00102a18:
  if (bVar1) {
    uVar3 = FUN_00102b81(param_2);
    FUN_00102bbe(local_30,uVar3);
    FUN_00102bf6(&local_28,&local_38);
    local_38 = FUN_00102c18(param_1,local_28,&DAT_00106008,local_30,&local_39);
  }
  lVar4 = FUN_00102b38(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




void FUN_00105671(void)

{
  return;
}




long FUN_00104ce4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00104e90(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00104ef4(param_2);
                    /* try { // try from 00104d53 to 00104de5 has its CatchHandler @ 00104e11 */
    uVar2 = FUN_00104ce4(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00104f0a(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00104e90(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00104ef4(local_38);
      uVar2 = FUN_00104ce4(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00104f0a(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_001055cc(void)

{
  return;
}




bool FUN_00105780(pthread_t *param_1)

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




void FUN_00105624(void)

{
  return;
}




void FUN_00105896(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010497e(undefined8 param_1)

{
  FUN_00104b28(param_1);
  return;
}




undefined8 FUN_00104b37(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104c8c(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102dfe(void)

{
  return;
}




undefined8 FUN_0010382e(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char local_59;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = FUN_001034b0(param_1);
  local_50 = FUN_001034c6(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00103317(local_58);
    local_59 = FUN_00102b5a(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00103a56(local_58);
    }
    else {
      local_58 = FUN_00103b8e(local_58);
    }
  }
  FUN_00103492(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103c8e(param_1);
    cVar1 = FUN_00102aec(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103cde(local_38,&local_58,&local_50);
      goto LAB_001039b0;
    }
    FUN_00103a2a(&local_48);
  }
  uVar2 = FUN_001037d0(local_48);
  cVar1 = FUN_00102b5a(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103a98(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103cde(local_38,&local_58,&local_50);
  }
LAB_001039b0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8
FUN_0010336a(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    p_Var3 = (_Rb_tree_node_base *)FUN_001034c6(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001037d0(param_3);
      uVar5 = FUN_00103317(param_4);
      cVar1 = FUN_00102b5a(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001033ee;
      }
    }
  }
  bVar2 = true;
LAB_001033ee:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00103492(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001035b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102e2e(param_2);
  FUN_00103620(param_1,uVar1);
  return;
}




void FUN_00105202(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001050ab(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001058e0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010480e(undefined8 param_1)

{
  FUN_001048b4(param_1);
  return;
}




undefined8 * FUN_00103a6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_0010359a(undefined8 param_1)

{
  FUN_00103ba4(param_1);
  return;
}




void FUN_0010533b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001055f8(void)

{
  return;
}




void FUN_00102bf6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010563a(void)

{
  return;
}




void FUN_001047ee(undefined8 param_1)

{
  FUN_001047ce(param_1);
  return;
}



