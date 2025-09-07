
void FUN_00102960(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00104b00(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00104cb6(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102c10(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103016(param_1,param_2);
  lVar1 = FUN_00103086(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010309c(param_1);
                    /* try { // try from 00102c6b to 00102c6f has its CatchHandler @ 00102c75 */
    uVar3 = FUN_001030b2(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_001038f4(undefined8 param_1,undefined8 param_2)

{
  FUN_001040d8(param_1,param_2);
  return;
}




undefined8 FUN_0010450e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined4 FUN_00102dca(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00103230(param_1);
  return unaff_EBX;
}




long FUN_00102ae4(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00102d5c(param_1,param_2);
  local_28 = FUN_00102d86(param_1);
  cVar2 = FUN_00102da4(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00102dca(param_1);
    uVar3 = FUN_00102df0(&local_38);
    cVar2 = FUN_00102e12(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00102b84;
    }
  }
  bVar1 = true;
LAB_00102b84:
  if (bVar1) {
    uVar3 = FUN_00102e39(param_2);
    FUN_00102e76(local_30,uVar3);
    FUN_00102eae(&local_28,&local_38);
    local_38 = FUN_00102ed0(param_1,local_28,&DAT_00106004,local_30,&local_39);
  }
  lVar4 = FUN_00102df0(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00104708(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_001047b8(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104ffb(void)

{
  return;
}




undefined8 FUN_00104fbc(void)

{
  return 0;
}




void FUN_00103230(void)

{
  return;
}




void FUN_0010505e(void)

{
  return;
}




void FUN_001047b8(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010486a(param_2);
  puVar2 = (undefined4 *)FUN_00103bbe(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00105006(void)

{
  return;
}




undefined8 FUN_00104691(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010476c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103bfa(param_1);
  uVar2 = FUN_00104759(param_2);
  FUN_001047fc(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_001048e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00104759(param_3);
  puVar3 = (undefined8 *)FUN_001028b2(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




int FUN_00104fcb(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00104094(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00105032(void)

{
  return;
}




long FUN_00103d6a(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00104b32(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102524) */
/* WARNING: Removing unreachable block (ram,0x00102530) */

void FUN_00102500(void)

{
  return;
}




bool FUN_001051af(pthread_t *param_1)

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




void FUN_00104ff0(void)

{
  return;
}




void FUN_00104d37(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00104576(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001046f0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00102cdc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00103125(local_28);
    FUN_00102cdc(param_1,uVar1);
    lVar2 = FUN_0010313b(local_28);
    FUN_00103152(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00104759(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102e76(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103260(param_2);
  FUN_00103272(param_1,uVar1);
  return param_1;
}




void FUN_00102c9c(undefined8 param_1)

{
  FUN_00103116(param_1);
  return;
}




undefined8 FUN_0010432e(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00103125(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_001040aa(undefined8 param_1,undefined8 param_2)

{
  FUN_001038f4(param_1,param_2);
  return param_1;
}




undefined8 FUN_0010330e(undefined8 param_1)

{
  return param_1;
}




void FUN_00104444(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00104691(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001043e1(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103932(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00104b5a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103086(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001043e1(undefined8 param_1)

{
  return param_1;
}




void FUN_00102df0(undefined8 *param_1)

{
  FUN_0010323e(*param_1);
  return;
}




void FUN_0010283d(void)

{
  FUN_001026e3();
  return;
}




void FUN_00104bdb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102a4a(long param_1)

{
  FUN_00102c9c(param_1);
  FUN_00102cbc(param_1);
  FUN_00102936(param_1 + 8);
  return;
}




undefined8 FUN_00103950(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00103a76(param_1);
  uVar2 = FUN_001040ec(param_2);
  uVar1 = FUN_00104102(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00103f7c(param_1);
  uVar2 = FUN_00104271(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00103d6a(param_1);
  uVar2 = FUN_0010428f(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00102a86(undefined8 param_1)

{
  FUN_00102ccc(param_1);
  return;
}




void FUN_00103272(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103260(param_2);
  FUN_00103b68(param_1,uVar1);
  return;
}




void FUN_00102ccc(void)

{
  return;
}




void FUN_00104bb0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_00102908(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103f92(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001043e1(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001043e1(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001029a0(undefined8 param_1)

{
  FUN_00102a86(param_1);
  return;
}




undefined8 FUN_001031e0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103886(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010501c(void)

{
  return;
}




undefined8 FUN_00103d54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00104ada(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001046a4(undefined8 param_1)

{
  return param_1;
}




void FUN_00104b86(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103ba0(undefined8 param_1)

{
  FUN_0010432e(param_1);
  return;
}




void FUN_00103886(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010520a(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00102da4(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00105074(void)

{
  return;
}




undefined4 FUN_00102e12(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_0010503d(void)

{
  return;
}




undefined8 FUN_001043f4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103886(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010284d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104ada("Calling good()...");
  FUN_0010283d();
  FUN_00104ada("Finished good()");
  FUN_00104ada("Calling bad()...");
  FUN_00102589();
  FUN_00104ada("Finished bad()");
  return 0;
}




void FUN_00105053(void)

{
  return;
}




void FUN_00103b4a(undefined8 param_1)

{
  FUN_0010431c(param_1);
  return;
}




void FUN_0010448c(undefined8 param_1)

{
  FUN_001046a4(param_1);
  return;
}




void FUN_00104fe5(void)

{
  return;
}




void FUN_00104d09(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102cbc(void)

{
  return;
}




void FUN_001048c5(undefined8 param_1)

{
  FUN_00103ba0(param_1);
  return;
}




void FUN_00104371(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0010330e(param_5);
  uVar2 = FUN_001032fc(param_4);
  uVar3 = FUN_001032ea(param_3);
  FUN_001045c6(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001050ab(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001050e2(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001050ab,local_18);
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




undefined8 * FUN_00103fda(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00103320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00103bfa(param_1);
  uVar2 = FUN_0010330e(param_4);
  uVar3 = FUN_001032fc(param_3);
  uVar4 = FUN_001032ea(param_2);
  FUN_00103c26(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00104271(undefined8 param_1)

{
  FUN_001028db(param_1);
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109eb8)();
  return;
}




void FUN_00105380(void)

{
  return;
}




void FUN_001039f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010323e(param_2);
  uVar2 = FUN_001042ae(param_1);
  FUN_001042c0(uVar2,uVar1);
  return;
}




void _FINI_0(void)

{
  if (DAT_0010a020 == '\0') {
    if (PTR___cxa_finalize_00109fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_0010a008);
    }
    FUN_001024d0();
    DAT_0010a020 = 1;
    return;
  }
  return;
}




void FUN_00104a08(undefined8 param_1)

{
  undefined8 *puVar1;
  size_t __n;
  long in_FS_OFFSET;
  undefined4 local_54;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 2;
  puVar1 = (undefined8 *)FUN_00102ae4(param_1,&local_54);
  local_50 = (char *)*puVar1;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __n = strlen(local_50);
  memcpy(&local_48,local_50,__n);
  local_18 = local_18 & 0xff;
  FUN_00104ada(local_50);
  if (local_50 != (char *)0x0) {
    operator_delete__(local_50);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102d46(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001029e0(undefined8 param_1)

{
  FUN_001029c0(param_1);
  return;
}




void FUN_001050a0(void)

{
  return;
}




long FUN_001028db(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_001032fc(undefined8 param_1)

{
  return param_1;
}




void FUN_00105310(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001045c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032ea(param_3);
  uVar1 = FUN_001032fc(param_4);
  FUN_00102e4c(local_38,uVar1);
  FUN_0010330e(param_5);
  uVar1 = FUN_001028b2(0x10,param_2);
                    /* try { // try from 0010464e to 00104652 has its CatchHandler @ 00104655 */
  FUN_00104708(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105027(void)

{
  return;
}




void FUN_001030b2(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103932(local_18,param_1);
  FUN_00103950(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010486a(undefined8 param_1)

{
  FUN_001048c5(param_1);
  return;
}




void FUN_00105048(void)

{
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_001033a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00103d04(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00103a76(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00103d80(local_50);
    cVar2 = FUN_00102e12(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00103d80(local_50);
      cVar2 = FUN_00102e12(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00104032(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00103d6a(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00103d6a(local_60);
          local_48[1] = 0;
          FUN_00103d9e(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00104006(local_48);
          uVar6 = FUN_00103d80(*puVar5);
          cVar2 = FUN_00102e12(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00103dde(local_60,param_3);
          }
          else {
            lVar3 = FUN_00103125(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00103d9e(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00103f92(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00103f7c(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00103f7c(local_60);
        uVar6 = FUN_00103f7c(local_60);
        FUN_00103f92(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00103fda(local_48);
        uVar6 = FUN_00103d80(*puVar5);
        cVar2 = FUN_00102e12(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00103dde(local_60,param_3);
        }
        else {
          lVar3 = FUN_00103125(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00103d9e(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00103f92(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_0010372e;
  }
  lVar3 = FUN_00103d54(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00103442:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00103d6a(local_60);
    uVar6 = FUN_00103d80(*puVar5);
    cVar2 = FUN_00102e12(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00103442;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00103d6a(local_60);
    local_48[1] = 0;
    FUN_00103d9e(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00103dde(local_60,param_3);
  }
LAB_0010372e:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00102a20(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c10(param_1,param_2);
  return;
}




long FUN_00104102(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001044aa(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_0010450e(param_2);
                    /* try { // try from 00104171 to 00104203 has its CatchHandler @ 0010422f */
    uVar2 = FUN_00104102(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00104524(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001044aa(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_0010450e(local_38);
      uVar2 = FUN_00104102(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00104524(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00104888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104759(param_3);
  FUN_001048e4(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00104fad(void)

{
  return 1;
}




undefined8 FUN_00103a8c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00103749(local_38);
    cVar1 = FUN_00102e12(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00103125(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010313b(local_38);
    }
  }
  FUN_00103886(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103152(undefined8 param_1,undefined8 param_2)

{
  FUN_001039f8(param_1,param_2);
  FUN_00103a3c(param_1,param_2);
  return;
}




void FUN_00103c26(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001028b2(0x30,param_2);
  uVar1 = FUN_0010330e(param_5);
  uVar2 = FUN_001032fc(param_4);
  uVar3 = FUN_001032ea(param_3);
  uVar4 = FUN_0010323e(param_2);
  uVar5 = FUN_001042ae(param_1);
                    /* try { // try from 00103cb5 to 00103cb9 has its CatchHandler @ 00103cbc */
  FUN_00104371(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102e39(undefined8 param_1)

{
  return param_1;
}




void FUN_00103a3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001042ae(param_1);
  FUN_001042ea(uVar1,param_2,1);
  return;
}




undefined8 FUN_001028b2(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102aa6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d46(param_1);
  FUN_00102cdc(param_1,uVar1);
  FUN_001029a0(param_1);
  return;
}




undefined8 * FUN_00104006(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




long FUN_00103f7c(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103749(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00104072(param_1);
  FUN_00104094(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001046b6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00104759(param_2);
  FUN_0010476c(uVar1,uVar2);
  return;
}




undefined8 FUN_001038a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001040aa(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00104936(undefined8 param_1)

{
  undefined8 *puVar1;
  size_t __n;
  long in_FS_OFFSET;
  undefined4 local_54;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 2;
  puVar1 = (undefined8 *)FUN_00102ae4(param_1,&local_54);
  local_50 = (char *)*puVar1;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __n = strlen(local_50);
  memcpy(&local_48,local_50,__n);
  local_18 = local_18 & 0xff;
  FUN_00104ada(local_50);
  if (local_50 != (char *)0x0) {
    operator_delete__(local_50);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104d6a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




long FUN_00103a76(long param_1)

{
  return param_1 + 8;
}




void FUN_0010453a(void)

{
  return;
}




void FUN_001042ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010454e(param_1,param_2,param_3);
  return;
}




void FUN_001032aa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103ba0(param_2);
  uVar1 = FUN_00103bbe(uVar1);
  FUN_00103bd0(param_1,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001024e3) */
/* WARNING: Removing unreachable block (ram,0x001024ef) */

void FUN_001024d0(void)

{
  return;
}




void FUN_00104343(undefined8 param_1,undefined8 param_2)

{
  FUN_00104576(param_1,param_2,0);
  return;
}




void FUN_00103016(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001038a4(param_1,param_2);
  FUN_0010391e(param_1,param_2);
  FUN_00102936(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010508a(void)

{
  return;
}




undefined8 FUN_00103bbe(undefined8 param_1)

{
  return param_1;
}




void FUN_001040d8(void)

{
  return;
}




undefined8 FUN_0010313b(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined4 * FUN_001044aa(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00104072(param_2);
  puVar2 = (undefined4 *)FUN_001046b6(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_00103dde(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102d46(param_1);
  local_50 = FUN_00103a76(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00103749(local_58);
    local_59 = FUN_00102e12(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00103125(local_58);
    }
    else {
      local_58 = FUN_0010313b(local_58);
    }
  }
  FUN_00103886(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001043f4(param_1);
    cVar1 = FUN_00102da4(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00104444(local_38,&local_58,&local_50);
      goto LAB_00103f60;
    }
    FUN_00103fda(&local_48);
  }
  uVar2 = FUN_00103d80(local_48);
  cVar1 = FUN_00102e12(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00104032(local_38,&local_48,&local_40);
  }
  else {
    FUN_00104444(local_38,&local_58,&local_50);
  }
LAB_00103f60:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_001042ae(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d5c(undefined8 param_1,undefined8 param_2)

{
  FUN_00103190(param_1,param_2);
  return;
}




void FUN_001028c8(void)

{
  return;
}




undefined8 FUN_00103260(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001052a6(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_001032ea(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e4c(undefined8 param_1,undefined8 param_2)

{
  FUN_001032aa(param_1,param_2);
  return;
}




void FUN_00103190(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103a76(param_1);
  uVar2 = FUN_00102d46(param_1);
  FUN_00103a8c(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_001047fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001028b2(0x30,param_2);
  uVar1 = FUN_00104759(param_3);
  uVar2 = FUN_0010323e(param_2);
  uVar3 = FUN_001042ae(param_1);
  FUN_00104888(uVar3,uVar2,uVar1);
  return;
}




void FUN_00105095(void)

{
  return;
}




void FUN_001026e3(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029e0(local_88);
                    /* try { // try from 00102713 to 001027c4 has its CatchHandler @ 00102810 */
  __s = operator_new__(100);
  memset(__s,0x41,0x31);
  *(undefined *)((long)__s + 0x31) = 0;
  local_58[0] = 0;
  puVar1 = (undefined8 *)FUN_00102ae4(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00102ae4(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00102ae4(local_88,local_58);
  *puVar1 = __s;
  FUN_00102a20(local_58,local_88);
                    /* try { // try from 001027cc to 001027d0 has its CatchHandler @ 001027fb */
  FUN_00104a08(local_58);
  FUN_00102a00(local_58);
  FUN_00102a00(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104032(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001043e1(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_001052e4(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00104c06(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010428f(undefined8 param_1)

{
  FUN_00102908(param_1);
  return;
}




void FUN_00102936(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00102960(param_1);
  return;
}




ulong FUN_00104ece(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010609c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010431c(undefined8 param_1)

{
  return param_1;
}




void FUN_0010454e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102a00(undefined8 param_1)

{
  FUN_00102aa6(param_1);
  return;
}




void FUN_00103116(void)

{
  return;
}




void FUN_0010507f(void)

{
  return;
}




void FUN_00104cde(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00104072(long param_1)

{
  FUN_0010448c(param_1 + 0x20);
  return;
}




undefined8 FUN_00103d04(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103886(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103260(param_2);
  FUN_00103bd0(param_1,uVar1);
  return;
}




undefined8 FUN_0010522d(undefined8 *param_1)

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




undefined8 FUN_001046f0(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




long FUN_0010309c(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103bfa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001042ae(param_1);
  FUN_00104343(uVar1,1);
  return;
}




void FUN_0010323e(long param_1)

{
  FUN_00103b4a(param_1 + 0x20);
  return;
}




void FUN_00105069(void)

{
  return;
}




undefined8
FUN_00102ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_0010330e(param_5);
  uVar2 = FUN_001032fc(param_4);
  uVar3 = FUN_001032ea(param_3);
  local_40 = FUN_00103320(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102f4c to 00102f8f has its CatchHandler @ 00102fcd */
  uVar1 = FUN_00103749(local_40);
  local_38 = FUN_001033a0(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00103152(param_1,local_40);
    FUN_00103886(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010379c(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_001029c0(undefined8 param_1)

{
  FUN_00102a4a(param_1);
  return;
}




ulong FUN_00104dca(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00106094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00105011(void)

{
  return;
}




void FUN_0010391e(void)

{
  return;
}




undefined8 FUN_001040ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103bd0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103260(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00103d9e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001043e1(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001052c5(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102589(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029e0(local_88);
                    /* try { // try from 001025b9 to 0010266a has its CatchHandler @ 001026b6 */
  __s = operator_new__(100);
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  local_58[0] = 0;
  puVar1 = (undefined8 *)FUN_00102ae4(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00102ae4(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00102ae4(local_88,local_58);
  *puVar1 = __s;
  FUN_00102a20(local_58,local_88);
                    /* try { // try from 00102672 to 00102676 has its CatchHandler @ 001026a1 */
  FUN_00104936(local_58);
  FUN_00102a00(local_58);
  FUN_00102a00(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104c5c(undefined4 param_1)

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




void FUN_001042c0(undefined8 param_1,undefined8 param_2)

{
  FUN_0010453a(param_1,param_2);
  return;
}




void FUN_00103d80(undefined8 param_1)

{
  FUN_00103749(param_1);
  return;
}




void FUN_00102d86(undefined8 param_1)

{
  FUN_001031e0(param_1);
  return;
}




void FUN_00102eae(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8
FUN_0010379c(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00103a76(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00103d80(param_3);
      uVar5 = FUN_00103749(param_4);
      cVar1 = FUN_00102e12(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00103820;
      }
    }
  }
  bVar2 = true;
LAB_00103820:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00103886(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00104c31(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}



