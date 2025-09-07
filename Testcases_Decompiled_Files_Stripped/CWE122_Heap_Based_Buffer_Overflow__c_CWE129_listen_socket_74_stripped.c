
void FUN_001047cc(undefined8 param_1)

{
  FUN_00104856(param_1);
  return;
}




void FUN_0010499c(void)

{
  return;
}




undefined8 FUN_00102eb6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103ef2(param_1,param_2,param_3);
  return;
}




void FUN_00103fc6(undefined8 param_1)

{
  FUN_00103fe4(param_1);
  return;
}




undefined8 FUN_00104be2(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001034c4(param_1);
  uVar2 = FUN_00104ccc(param_2);
  uVar1 = FUN_00104ce2(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001039ca(param_1);
  uVar2 = FUN_00104e51(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001037b8(param_1);
  uVar2 = FUN_00104e6f(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_00104b35(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104c8a(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102b36(undefined8 *param_1)

{
  FUN_00102e0a(*param_1);
  return;
}




undefined8 FUN_00104f08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001042a0(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001047ec(local_88);
  local_58[0] = 0;
                    /* try { // try from 001042f4 to 00104357 has its CatchHandler @ 001043a3 */
  puVar1 = (undefined4 *)FUN_00102976(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00102976(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00102976(local_88,local_58);
  *puVar1 = 7;
  FUN_0010482c(local_58,local_88);
                    /* try { // try from 0010435f to 00104363 has its CatchHandler @ 0010438e */
  FUN_00102732(local_58);
  FUN_0010480c(local_58);
  FUN_0010480c(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104c8a(undefined8 param_1,undefined8 param_2)

{
  FUN_00104b86(param_1,param_2);
  return param_1;
}




void FUN_00103ef2(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00104002(void)

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
  FUN_001047ec(local_a8);
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
                    /* try { // try from 001040ff to 00104221 has its CatchHandler @ 00104270 */
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
  piVar3 = (int *)FUN_00102976(local_a8,local_78);
  *piVar3 = local_b8;
  local_78[0] = 1;
  piVar3 = (int *)FUN_00102976(local_a8,local_78);
  *piVar3 = local_b8;
  local_78[0] = 2;
  piVar3 = (int *)FUN_00102976(local_a8,local_78);
  *piVar3 = local_b8;
  FUN_0010482c(local_78,local_a8);
                    /* try { // try from 00104229 to 0010422d has its CatchHandler @ 0010425b */
  FUN_00102629(local_78);
  FUN_0010480c(local_78);
  FUN_0010480c(local_a8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00104715(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00104b86(undefined8 param_1,undefined8 param_2)

{
  FUN_00104cb8(param_1,param_2);
  return;
}




undefined8 * FUN_00103a28(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001058b3(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00104e51(undefined8 param_1)

{
  FUN_001046e8(param_1);
  return;
}




void FUN_00103648(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103bca(param_1);
  FUN_00103bdc(uVar1,1);
  return;
}




void FUN_001047ec(undefined8 param_1)

{
  FUN_001047cc(param_1);
  return;
}




void FUN_00105285(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00105101(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010566f(void)

{
  return;
}




void FUN_00104bc4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00104a26(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104b35(param_1,param_2);
  FUN_00104bb0(param_1,param_2);
  FUN_00104742(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103ecc(undefined8 param_1)

{
  return param_1;
}




void FUN_00103fe4(undefined8 param_1)

{
  FUN_001035ee(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102583) */
/* WARNING: Removing unreachable block (ram,0x0010258f) */

void FUN_00102570(void)

{
  return;
}




undefined8 FUN_00103bca(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001056b1(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010567a,local_18);
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




long FUN_00102976(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00102aa2(param_1,param_2);
  local_28 = FUN_00102acc(param_1);
  cVar2 = FUN_00102aea(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00102b10(param_1);
    uVar3 = FUN_00102b36(&local_38);
    cVar2 = FUN_00102b58(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00102a16;
    }
  }
  bVar1 = true;
LAB_00102a16:
  if (bVar1) {
    uVar3 = FUN_00102b7f(param_2);
    FUN_00102bbc(local_30,uVar3);
    FUN_00102bf4(&local_28,&local_38);
    local_38 = FUN_00102c16(param_1,local_28,&DAT_00106008,local_30,&local_39);
  }
  lVar4 = FUN_00102b36(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




undefined8 FUN_00103a54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102d5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034c4(param_1);
  uVar2 = FUN_001034ae(param_1);
  FUN_001034da(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103cdc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103eb9(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103c7a(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00102eda(undefined8 param_1)

{
  return param_1;
}




void FUN_00105306(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010480c(undefined8 param_1)

{
  FUN_001048b2(param_1);
  return;
}




void FUN_00102732(undefined8 param_1)

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
  piVar1 = (int *)FUN_00102976(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_001050a9("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00105101(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103c7a(undefined8 param_1)

{
  return param_1;
}




void FUN_00104892(undefined8 param_1)

{
  FUN_001049ac(param_1);
  return;
}




undefined8 FUN_00102eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00103648(param_1);
  uVar2 = FUN_00102eda(param_4);
  uVar3 = FUN_00102ec8(param_3);
  uVar4 = FUN_00102eb6(param_2);
  FUN_00103674(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00102b92(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e76(param_1,param_2);
  return;
}




void FUN_00104856(long param_1)

{
  FUN_0010497c(param_1);
  FUN_0010499c(param_1);
  FUN_00104742(param_1 + 8);
  return;
}




void FUN_001055e0(void)

{
  return;
}




void FUN_001037ce(undefined8 param_1)

{
  FUN_00103315(param_1);
  return;
}




void FUN_00105894(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_0010558b(void)

{
  return 0;
}




undefined4 FUN_00102b10(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102dfc(param_1);
  return unaff_EBX;
}




undefined8 FUN_00104ccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010361e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102e2c(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_001047ac(undefined8 param_1)

{
  FUN_00104892(param_1);
  return;
}




undefined8 FUN_00103f1a(void)

{
  return 0x333333333333333;
}




void FUN_0010482c(undefined8 param_1,undefined8 param_2)

{
  FUN_001048f0(param_1,param_2);
  return;
}




undefined8 FUN_0010557c(void)

{
  return 1;
}




long FUN_001034c4(long param_1)

{
  return param_1 + 8;
}




void FUN_00102e3e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102e2c(param_2);
  FUN_001035b6(param_1,uVar1);
  return;
}




void FUN_00105659(void)

{
  return;
}




void FUN_00105129(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00104f58(undefined8 param_1)

{
  return param_1;
}




bool FUN_0010577e(pthread_t *param_1)

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




int FUN_0010559a(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00105622(void)

{
  return;
}




void FUN_00104e6f(undefined8 param_1)

{
  FUN_00104715(param_1);
  return;
}




undefined8 FUN_00103c8c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103490(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001055d5(void)

{
  return;
}




undefined8 FUN_00104ef2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_001057d9(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103490(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103d24(undefined8 param_1)

{
  FUN_00103ecc(param_1);
  return;
}




void FUN_00104bb0(void)

{
  return;
}




void FUN_001049bc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00103a54(local_28);
    FUN_001049bc(param_1,uVar1);
    lVar2 = FUN_00103b8c(local_28);
    FUN_00103452(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




long FUN_001046e8(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00103c0a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102eda(param_5);
  uVar2 = FUN_00102ec8(param_4);
  uVar3 = FUN_00102eb6(param_3);
  FUN_00103dee(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001050a9(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001050cf(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010564e(void)

{
  return;
}




void FUN_001037ec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103c7a(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00102dac(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103490(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103af8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001052d8(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001057fc(undefined8 *param_1)

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




void FUN_0010522b(undefined4 param_1)

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




/* WARNING: Type propagation algorithm not settling */

long FUN_00102f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00103752(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001034c4(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001037ce(local_50);
    cVar2 = FUN_00102b58(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001037ce(local_50);
      cVar2 = FUN_00102b58(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103a96(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001037b8(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001037b8(local_60);
          local_48[1] = 0;
          FUN_001037ec(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00103a6a(local_48);
          uVar6 = FUN_001037ce(*puVar5);
          cVar2 = FUN_00102b58(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010382c(local_60,param_3);
          }
          else {
            lVar3 = FUN_00103a54(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001037ec(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001039e0(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001039ca(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001039ca(local_60);
        uVar6 = FUN_001039ca(local_60);
        FUN_001039e0(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00103a28(local_48);
        uVar6 = FUN_001037ce(*puVar5);
        cVar2 = FUN_00102b58(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010382c(local_60,param_3);
        }
        else {
          lVar3 = FUN_00103a54(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001037ec(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001039e0(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001032fa;
  }
  lVar3 = FUN_001037a2(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_0010300e:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001037b8(local_60);
    uVar6 = FUN_001037ce(*puVar5);
    cVar2 = FUN_00102b58(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_0010300e;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001037b8(local_60);
    local_48[1] = 0;
    FUN_001037ec(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010382c(local_60,param_3);
  }
LAB_001032fa:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_0010476c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00105062(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00104f58(param_3);
  puVar2 = (undefined8 *)FUN_0010294d(8,param_2);
  *puVar2 = *puVar1;
  return;
}




undefined8
FUN_00102c16(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00102eda(param_5);
  uVar2 = FUN_00102ec8(param_4);
  uVar3 = FUN_00102eb6(param_3);
  local_40 = FUN_00102eec(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102c92 to 00102cd5 has its CatchHandler @ 00102d13 */
  uVar1 = FUN_00103315(local_40);
  local_38 = FUN_00102f6c(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00103452(param_1,local_40);
    FUN_00103490(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00103368(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00105200(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103ede(void)

{
  return;
}




long FUN_00104ce2(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00104e8e(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00104ef2(param_2);
                    /* try { // try from 00104d51 to 00104de3 has its CatchHandler @ 00104e0f */
    uVar2 = FUN_00104ce2(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00104f08(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00104e8e(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00104ef2(local_38);
      uVar2 = FUN_00104ce2(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00104f08(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_0010294d(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010466e(void)

{
  FUN_001042a0();
  FUN_001043d0();
  return;
}




ulong FUN_00105399(long param_1,ulong param_2,long param_3)

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




undefined4 * FUN_00104e8e(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103ad6(param_2);
  puVar2 = (undefined4 *)FUN_00104f1e(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00102dfc(void)

{
  return;
}




void FUN_00103ad6(long param_1)

{
  FUN_00103d24(param_1 + 0x20);
  return;
}




undefined8 FUN_00104683(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001050a9("Calling good()...");
  FUN_0010466e();
  FUN_001050a9("Finished good()");
  FUN_001050a9("Calling bad()...");
  FUN_00104002();
  FUN_001050a9("Finished bad()");
  return 0;
}




void FUN_00104b26(void)

{
  return;
}




void FUN_00103452(undefined8 param_1,undefined8 param_2)

{
  FUN_00103b0e(param_1,param_2);
  FUN_00103b52(param_1,param_2);
  return;
}




void FUN_00102acc(undefined8 param_1)

{
  FUN_00102dac(param_1);
  return;
}




void FUN_001035ee(undefined8 param_1)

{
  FUN_00103bb4(param_1);
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109e90)();
  return;
}




void FUN_00103315(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103ad6(param_1);
  FUN_00103af8(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105601(void)

{
  return;
}




void FUN_001055bf(void)

{
  return;
}




void FUN_001055ca(void)

{
  return;
}




undefined8 FUN_0010382c(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001034ae(param_1);
  local_50 = FUN_001034c4(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00103315(local_58);
    local_59 = FUN_00102b58(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00103a54(local_58);
    }
    else {
      local_58 = FUN_00103b8c(local_58);
    }
  }
  FUN_00103490(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103c8c(param_1);
    cVar1 = FUN_00102aea(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103cdc(local_38,&local_58,&local_50);
      goto LAB_001039ae;
    }
    FUN_00103a28(&local_48);
  }
  uVar2 = FUN_001037ce(local_48);
  cVar1 = FUN_00102b58(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103a96(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103cdc(local_38,&local_58,&local_50);
  }
LAB_001039ae:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_001037b8(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00105643(void)

{
  return;
}




void FUN_00102e0a(long param_1)

{
  FUN_00103598(param_1 + 0x20);
  return;
}




void FUN_00103f32(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103f84(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e76(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001035ee(param_2);
  uVar1 = FUN_0010360c(uVar1);
  FUN_0010361e(param_1,uVar1);
  return;
}




void FUN_00104742(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010476c(param_1);
  return;
}




undefined8 FUN_00104a96(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010562d(void)

{
  return;
}




undefined8
FUN_00103368(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001034c4(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001037ce(param_3);
      uVar5 = FUN_00103315(param_4);
      cVar1 = FUN_00102b58(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001033ec;
      }
    }
  }
  bVar2 = true;
LAB_001033ec:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00103490(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103dee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102eb6(param_3);
  uVar1 = FUN_00102ec8(param_4);
  FUN_00102b92(local_38,uVar1);
  FUN_00102eda(param_5);
  uVar1 = FUN_0010294d(8,param_2);
                    /* try { // try from 00103e76 to 00103e7a has its CatchHandler @ 00103e7d */
  FUN_00103f32(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103ba2(undefined8 param_1)

{
  return param_1;
}




ulong FUN_0010549d(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102bbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102e2c(param_2);
  FUN_00102e3e(param_1,uVar1);
  return param_1;
}




void FUN_00103bdc(undefined8 param_1,undefined8 param_2)

{
  FUN_00103d9e(param_1,param_2,0);
  return;
}




void FUN_00102629(undefined8 param_1)

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
  piVar1 = (int *)FUN_00102976(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_001050a9("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00105101(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104fb6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010294d(0x28,param_2);
  uVar1 = FUN_00104f58(param_3);
  uVar2 = FUN_00102e0a(param_2);
  uVar3 = FUN_00103bca(param_1);
  FUN_00105024(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001034da(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00103315(local_38);
    cVar1 = FUN_00102b58(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00103a54(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00103b8c(local_38);
    }
  }
  FUN_00103490(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 * FUN_00103a6a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00102aa2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d5c(param_1,param_2);
  return;
}




void FUN_001055eb(void)

{
  return;
}




void FUN_001055f6(void)

{
  return;
}




void FUN_00103d42(undefined8 param_1,undefined8 param_2)

{
  FUN_00103ede(param_1,param_2);
  return;
}




undefined8 FUN_001037a2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00105617(void)

{
  return;
}




void FUN_00103b52(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103bca(param_1);
  FUN_00103d6c(uVar1,param_2,1);
  return;
}




undefined8 FUN_00102b7f(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d9e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103f1a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_0010517f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102bf4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00102aea(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_001043d0(void)

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
  FUN_001047ec(local_a8);
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
                    /* try { // try from 001044cd to 001045ef has its CatchHandler @ 0010463e */
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
  piVar3 = (int *)FUN_00102976(local_a8,local_78);
  *piVar3 = local_b8;
  local_78[0] = 1;
  piVar3 = (int *)FUN_00102976(local_a8,local_78);
  *piVar3 = local_b8;
  local_78[0] = 2;
  piVar3 = (int *)FUN_00102976(local_a8,local_78);
  *piVar3 = local_b8;
  FUN_0010482c(local_78,local_a8);
                    /* try { // try from 001045f7 to 001045fb has its CatchHandler @ 00104629 */
  FUN_0010283b(local_78);
  FUN_0010480c(local_78);
  FUN_0010480c(local_a8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00105024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104f58(param_3);
  FUN_00105062(param_1,param_2,uVar1);
  return;
}




long FUN_001039ca(long param_1)

{
  return param_1 + 0x18;
}




void FUN_001051d5(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001048b2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001034ae(param_1);
  FUN_001049bc(param_1,uVar1);
  FUN_001047ac(param_1);
  return;
}




void FUN_00103b0e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e0a(param_2);
  uVar2 = FUN_00103bca(param_1);
  FUN_00103d42(uVar2,uVar1);
  return;
}




void FUN_00104ac2(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104bc4(local_18,param_1);
  FUN_00104be2(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103bb4(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00103eb9(undefined8 param_1)

{
  return param_1;
}




void FUN_001052ad(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102963(void)

{
  return;
}




undefined8 FUN_00104f6a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103648(param_1);
  uVar2 = FUN_00104f58(param_2);
  FUN_00104fb6(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_001049ac(void)

{
  return;
}




void FUN_001039e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103c7a(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103c7a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00105950(void)

{
  return;
}




undefined8 FUN_0010360c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001034ae(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00105155(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103f84(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103fc6(param_2);
  puVar2 = (undefined4 *)FUN_0010360c(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




void FUN_0010283b(undefined8 param_1)

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
  piVar1 = (int *)FUN_00102976(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if ((local_1c < 0) || (9 < local_1c)) {
    FUN_001050a9("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00105101(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001035b6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102e2c(param_2);
  FUN_0010361e(param_1,uVar1);
  return;
}




undefined4 FUN_00102b58(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00105875(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00104f1e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00104f58(param_2);
  FUN_00104f6a(uVar1,uVar2);
  return;
}




void FUN_0010560c(void)

{
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




void FUN_00105664(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_0010a020 == '\0') {
    if (PTR___cxa_finalize_00109fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_0010a008);
    }
    FUN_00102570();
    DAT_0010a020 = 1;
    return;
  }
  return;
}




long FUN_00104aac(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00104cb8(void)

{
  return;
}




undefined8 FUN_00102ec8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103a96(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103c7a(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103598(undefined8 param_1)

{
  FUN_00103ba2(param_1);
  return;
}




undefined8 FUN_00103752(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103490(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00105339(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001051aa(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010497c(undefined8 param_1)

{
  FUN_00104b26(param_1);
  return;
}




undefined8 FUN_00103b8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010294d(0x28,param_2);
  uVar1 = FUN_00102eda(param_5);
  uVar2 = FUN_00102ec8(param_4);
  uVar3 = FUN_00102eb6(param_3);
  uVar4 = FUN_00102e0a(param_2);
  uVar5 = FUN_00103bca(param_1);
                    /* try { // try from 00103703 to 00103707 has its CatchHandler @ 0010370a */
  FUN_00103c0a(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_001055b4(void)

{
  return;
}




void FUN_00105638(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025c4) */
/* WARNING: Removing unreachable block (ram,0x001025d0) */

void FUN_001025a0(void)

{
  return;
}




undefined8 FUN_00102e2c(undefined8 param_1)

{
  return param_1;
}




void FUN_0010567a(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001048f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00104a26(param_1,param_2);
  lVar1 = FUN_00104a96(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00104aac(param_1);
                    /* try { // try from 0010494b to 0010494f has its CatchHandler @ 00104955 */
    uVar3 = FUN_00104ac2(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}



