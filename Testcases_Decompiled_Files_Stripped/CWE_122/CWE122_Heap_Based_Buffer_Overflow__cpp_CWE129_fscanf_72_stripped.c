
void FUN_001034e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036be(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103755(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102a8e(&local_10);
  return *puVar1;
}




void FUN_00103ee9(void)

{
  return;
}




void FUN_00103975(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined4 * FUN_0010370e(undefined4 *param_1,long param_2,undefined4 *param_3)

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




void FUN_00102f2a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010328f(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010322f(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103316(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102fc2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102fb0(param_3);
  FUN_001032c0(param_1,param_2,uVar1);
  return;
}




int FUN_00103e40(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001020ac(undefined8 param_1)

{
  FUN_00102a00(param_1);
  return;
}




void FUN_0010210e(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102a0f(param_1,param_2,param_3);
  }
  return;
}




ulong * FUN_001031d2(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00101e48(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102188(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102258(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102cc4(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102778(local_80);
      local_60 = FUN_00102b52(&local_88,&local_78);
      local_70 = FUN_00102db4(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00102148(local_80);
                    /* try { // try from 00102562 to 001025ed has its CatchHandler @ 001026a5 */
      FUN_00102c8f(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00102148(local_80);
      puVar2 = (undefined8 *)FUN_001021aa(&local_88);
      local_70 = FUN_00102deb(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00102148(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_001021aa(&local_88);
      local_70 = FUN_00102deb(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00102148(local_80);
      FUN_0010215a(*local_80,local_80[1],uVar1);
      FUN_0010210e(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00102aa0(local_38,param_1,param_4);
                    /* try { // try from 001022e2 to 001024b5 has its CatchHandler @ 00102687 */
      local_50 = FUN_00102b34(local_38);
      local_78 = FUN_00101e48(local_80);
      local_48 = FUN_00102b52(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00102148(local_80);
        FUN_00102b96(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_001021aa(&local_88);
        FUN_00102bee(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_001021aa(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_001021aa(&local_88);
        FUN_00102c3e(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00102148(local_80);
        lVar4 = FUN_00102c8f(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00102148(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_001021aa(&local_88);
        FUN_00102b96(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_001021aa(&local_88);
        FUN_00102c3e(*puVar2,local_40,local_50);
      }
      FUN_00102b00(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001031ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028a2(param_1);
  FUN_001033e5(uVar1);
  return;
}




void FUN_001030bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010312a(param_3);
  uVar2 = FUN_0010312a(local_28);
  uVar3 = FUN_0010312a(local_20);
  uVar1 = FUN_00103369(uVar3,uVar2,uVar1);
  FUN_0010339e(&local_30,uVar1);
  return;
}




void FUN_0010328f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103494(param_1,param_2,param_3);
  return;
}




void * FUN_0010383f(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00103a50(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102db4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103201(param_1,param_2);
  }
  return uVar1;
}




long FUN_0010282a(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_00103776(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010383f(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101ceb(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102bee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001030aa(param_2);
  uVar2 = FUN_001030aa(param_1);
  FUN_001030bc(uVar2,uVar1,param_3);
  return;
}




void FUN_00102b34(undefined8 param_1)

{
  FUN_00102f9a(param_1);
  return;
}




undefined8 FUN_001021bc(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102a6c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103bdf(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010313c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103e9c(void)

{
  return;
}




void FUN_00103eff(void)

{
  return;
}




undefined8 FUN_001028a2(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b2b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001039a7(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034e4(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010363e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f0a(void)

{
  return;
}




void FUN_00103650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010312a(param_3);
  uVar2 = FUN_00103755(local_28);
  uVar3 = FUN_00103755(local_20);
  uVar1 = FUN_00103776(uVar3,uVar2,uVar1);
  FUN_0010339e(&local_30,uVar1);
  return;
}




void FUN_00103e70(void)

{
  return;
}




void FUN_001037d1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010312a(param_3);
  uVar2 = FUN_0010312a(local_28);
  uVar3 = FUN_0010312a(local_20);
  uVar1 = FUN_001038b7(uVar3,uVar2,uVar1);
  FUN_0010339e(&local_30,uVar1);
  return;
}




undefined8 FUN_0010312a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103176(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033b4(param_1,param_2,param_3);
  return;
}




void FUN_00102188(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010344e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103626(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




void FUN_001015fc(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_001017ac(param_1,2);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_0010394f("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001039a7(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_00102b96(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103029(param_2);
  uVar2 = FUN_00103029(param_1);
  FUN_00103075(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101d62(undefined8 param_1)

{
  FUN_001020ac(param_1);
  FUN_001020cc(param_1);
  return;
}




long FUN_00103515(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




undefined8 FUN_00103e31(void)

{
  return 0;
}




long FUN_00102f9a(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00102fb0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102deb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010322f(param_2);
  uVar2 = FUN_0010322f(param_1);
  FUN_00103075(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010411b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102fff(undefined8 param_1,undefined8 param_2)

{
  FUN_00103302(param_1,param_2);
  return;
}




void FUN_00103ed3(void)

{
  return;
}




void FUN_0010394f(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d02(undefined8 param_1)

{
  FUN_00101d8e(param_1);
  return;
}




void FUN_001039cf(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a6c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103369(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103515(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010407f(void *param_1)

{
  free(param_1);
  return 1;
}




long FUN_00102b52(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001021aa(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001021aa(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_001037ab(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001038a2(&local_10);
  FUN_001030aa(uVar1);
  return;
}




void FUN_00102f60(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103ea7(void)

{
  return;
}




void FUN_00103201(undefined8 param_1,undefined8 param_2)

{
  FUN_0010344e(param_1,param_2,0);
  return;
}




undefined8 FUN_00102e43(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e70(param_1,param_2);
  return param_1;
}




void FUN_001016cf(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_001017ac(param_1,2);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_0010394f("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001039a7(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_00103f15(void)

{
  return;
}




void FUN_00101e00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102148(param_1);
  FUN_0010215a(*param_1,param_1[1],uVar1);
  FUN_00101dae(param_1);
  return;
}




void FUN_001032c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102fb0(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101ceb(4,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_001038a2(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001035d9(undefined8 param_1)

{
  FUN_00103626(param_1);
  return;
}




undefined8 FUN_001033e5(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_001035d9(param_1);
  puVar1 = (undefined8 *)FUN_001035f7(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103e91(void)

{
  return;
}




void FUN_00101529(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_001017ac(param_1,2);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_0010394f("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001039a7(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_00101c71(void)

{
  FUN_00101963();
  FUN_00101ade();
  return;
}




void FUN_00103b7e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101dae(long *param_1)

{
  FUN_0010210e(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00101d02(param_1);
  return;
}




void FUN_00103075(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103334(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001027c4(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00102188(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void _FINI_0(void)

{
  if (DAT_00108028 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101470();
    DAT_00108028 = 1;
    return;
  }
  return;
}




void FUN_00102ed0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102db4(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




void FUN_00103eb2(void)

{
  return;
}




undefined8 FUN_00103626(void)

{
  return 0x1fffffffffffffff;
}




void FUN_00101ade(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d42(local_58);
  local_64 = 0xffffffff;
                    /* try { // try from 00101b27 to 00101bfb has its CatchHandler @ 00101c47 */
  __isoc99_fscanf(stdin,&DAT_00105055,&local_64);
  local_60 = FUN_00101e48(local_58);
  FUN_00101e98(local_38,&local_60);
  FUN_00101ec6(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e48(local_58);
  FUN_00101e98(local_38,&local_60);
  FUN_00101ec6(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e48(local_58);
  FUN_00101e98(local_38,&local_60);
  FUN_00101ec6(local_58,local_38[0],1,&local_64);
  FUN_00101f8c(local_38,local_58);
                    /* try { // try from 00101c03 to 00101c07 has its CatchHandler @ 00101c32 */
  FUN_001016cf(local_38);
  FUN_00101e00(local_38);
  FUN_00101e00(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e98(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001021aa(param_2);
  *param_1 = *puVar1;
  return;
}




ulong FUN_00103d43(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00105104,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




bool FUN_00104024(pthread_t *param_1)

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




void FUN_00104200(void)

{
  return;
}




void FUN_001039fb(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103f20(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_0010339e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102c3e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010312a(param_2);
  uVar2 = FUN_0010312a(param_1);
  FUN_0010313c(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00103029(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103316(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001036be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001037ab(param_2);
  uVar2 = FUN_001037ab(param_1);
  FUN_001037d1(uVar2,uVar1,param_3);
  return;
}




void FUN_00101d42(undefined8 param_1)

{
  FUN_00101d22(param_1);
  return;
}




undefined8 FUN_0010291a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102a6c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ebd(void)

{
  return;
}




void FUN_00103ede(void)

{
  return;
}




undefined8 FUN_00103f57(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103f20,local_18);
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




void FUN_001028b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e9a(param_1,param_3);
                    /* try { // try from 001028ee to 001028f2 has its CatchHandler @ 001028f5 */
  FUN_00102ed0(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00103e7b(void)

{
  return;
}




long FUN_001017ac(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_0010327c(void)

{
  return;
}




void FUN_00102b00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102f9a(param_1);
  FUN_00102fff(*param_1,uVar1);
  return;
}




void FUN_00103ad1(undefined4 param_1)

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




void FUN_0010413a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




ulong FUN_00103c3f(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050fc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a00(void)

{
  return;
}




void FUN_00102c8f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103176(param_1,param_2,param_3);
  return;
}




void FUN_001038b7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001038ec(param_1,param_2,param_3);
  return;
}




void FUN_001033b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010358b(param_1,param_2,param_3);
  return;
}




void FUN_00103e65(void)

{
  return;
}




void FUN_00102a0f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f60(param_1,param_2,param_3);
  return;
}




void FUN_00103e86(void)

{
  return;
}




void FUN_00103a25(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




ulong FUN_00102cc4(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_001031ac(param_1);
  lVar2 = FUN_0010282a(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010282a(local_40);
  local_30 = FUN_0010282a(local_40);
  plVar3 = (long *)FUN_001031d2(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010282a(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_001031ac(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_001031ac(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_001030aa(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103e22(void)

{
  return 1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ed0)();
  return;
}




void FUN_00102aa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102fb0(param_3);
  uVar2 = FUN_00102f9a(param_1);
  FUN_00102fc2(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103316(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010363e(param_2);
  uVar2 = FUN_0010363e(param_1);
  FUN_00103650(uVar2,uVar1,param_3);
  return;
}




void FUN_00102a41(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f87(param_1,param_2);
  return;
}




ulong * FUN_001035f7(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00101c86(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010394f("Calling good()...");
  FUN_00101c71();
  FUN_0010394f("Finished good()");
  FUN_0010394f("Calling bad()...");
  FUN_001017d0();
  FUN_0010394f("Finished bad()");
  return 0;
}




void FUN_00101d8e(undefined8 param_1)

{
  FUN_001020fe(param_1);
  return;
}




void FUN_00102e70(undefined8 param_1,undefined8 param_2)

{
  FUN_0010327c(param_1,param_2);
  return;
}




void FUN_00103bac(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001017d0(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d42(local_58);
  local_64 = 0xffffffff;
                    /* try { // try from 00101819 to 001018ed has its CatchHandler @ 00101939 */
  __isoc99_fscanf(stdin,&DAT_00105055,&local_64);
  local_60 = FUN_00101e48(local_58);
  FUN_00101e98(local_38,&local_60);
  FUN_00101ec6(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e48(local_58);
  FUN_00101e98(local_38,&local_60);
  FUN_00101ec6(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e48(local_58);
  FUN_00101e98(local_38,&local_60);
  FUN_00101ec6(local_58,local_38[0],1,&local_64);
  FUN_00101f8c(local_38,local_58);
                    /* try { // try from 001018f5 to 001018f9 has its CatchHandler @ 00101924 */
  FUN_00101529(local_38);
  FUN_00101e00(local_38);
  FUN_00101e00(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001029ca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f2a(param_1,param_2,param_3);
  return;
}




void FUN_00101d22(undefined8 param_1)

{
  FUN_00101d62(param_1);
  return;
}




undefined8 FUN_001040a2(undefined8 *param_1)

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




void FUN_00103b53(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00104190(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103e5a(void)

{
  return;
}




undefined8 FUN_00102778(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102188(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102851(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e43(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00102972(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102a6c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101963(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d42(local_58);
  local_64 = 7;
  local_60 = FUN_00101e48(local_58);
  FUN_00101e98(local_38,&local_60);
                    /* try { // try from 001019d3 to 00101a68 has its CatchHandler @ 00101ab4 */
  FUN_00101ec6(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e48(local_58);
  FUN_00101e98(local_38,&local_60);
  FUN_00101ec6(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e48(local_58);
  FUN_00101e98(local_38,&local_60);
  FUN_00101ec6(local_58,local_38[0],1,&local_64);
  FUN_00101f8c(local_38,local_58);
                    /* try { // try from 00101a70 to 00101a74 has its CatchHandler @ 00101a9f */
  FUN_001015fc(local_38);
  FUN_00101e00(local_38);
  FUN_00101e00(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103aa6(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010358b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010312a(param_1);
  uVar1 = FUN_0010370e(uVar1,param_2,param_3);
  FUN_0010339e(&local_10,uVar1);
  return;
}




void FUN_001020cc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103ef4(void)

{
  return;
}




void FUN_00101f8c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001028a2(param_2);
  FUN_00102851(&local_31,uVar1);
  uVar1 = FUN_0010282a(param_2);
                    /* try { // try from 00101ff2 to 00101ff6 has its CatchHandler @ 0010205f */
  FUN_001028b4(param_1,uVar1,&local_31);
  FUN_00101d8e(&local_31);
  uVar2 = FUN_00102148(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102972(param_2);
  uVar4 = FUN_0010291a(param_2);
                    /* try { // try from 00102040 to 00102044 has its CatchHandler @ 0010207d */
  uVar1 = FUN_001029ca(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001021aa(undefined8 param_1)

{
  return param_1;
}




void FUN_00104159(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103302(void)

{
  return;
}




void FUN_0010215a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a41(param_1,param_2);
  return;
}




void FUN_00101ec6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_001021bc(param_1);
  local_18 = FUN_00102213(&local_38,&local_20);
  local_20 = FUN_00102778(local_30);
  uVar1 = FUN_001027c4(&local_20,local_18);
  FUN_00102258(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102778(local_30);
  FUN_001027c4(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void * FUN_001038ec(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




undefined8 FUN_00102148(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e9a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e70(param_1,param_2);
  FUN_001020cc(param_1);
  return;
}




undefined8 FUN_00102a8e(undefined8 param_1)

{
  return param_1;
}




void FUN_001020fe(void)

{
  return;
}




void FUN_00103a7b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103ec8(void)

{
  return;
}




long FUN_00102213(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102a8e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102a8e(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00102f87(void)

{
  return;
}



