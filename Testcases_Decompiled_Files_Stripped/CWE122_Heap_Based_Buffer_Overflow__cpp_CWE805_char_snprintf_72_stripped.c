
void FUN_0010303a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103212(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_001032aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010339b(param_2);
  uVar2 = FUN_0010339b(param_1);
  FUN_001033c1(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c2f(void)

{
  return;
}




void * FUN_001034dc(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_0010323c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d10(param_3);
  uVar2 = FUN_00103345(local_28);
  uVar3 = FUN_00103345(local_20);
  uVar1 = FUN_00103366(uVar3,uVar2,uVar1);
  FUN_00102f8a(&local_30,uVar1);
  return;
}




void FUN_00102a80(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a56(param_1,param_2);
  FUN_00101cb2(param_1);
  return;
}




ulong * FUN_00102dbc(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




long FUN_00102b80(long param_1)

{
  return param_1 + 8;
}




void FUN_0010395c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101da2(param_1);
  local_18 = FUN_00101df9(&local_38,&local_20);
  local_20 = FUN_0010235e(local_30);
  uVar1 = FUN_001023aa(&local_20,local_18);
  FUN_00101e3e(local_30,uVar1,param_3,param_4);
  local_20 = FUN_0010235e(local_30);
  FUN_001023aa(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cb2(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00102d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fa0(param_1,param_2,param_3);
  return;
}




void FUN_00101994(long *param_1)

{
  FUN_00101cf4(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_001018e8(param_1);
  return;
}




undefined8 FUN_00101da2(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102652(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d22(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00102c5b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f20(param_1,param_2,param_3);
  return;
}




void FUN_00103ed6(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102e19(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f02(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010339b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103492(&local_10);
  FUN_00102c90(uVar1);
  return;
}




void FUN_001036f2(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102875(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d60(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010235e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d6e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 * FUN_001032fa(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_0010185d(void)

{
  FUN_001016d3();
  return;
}




long FUN_00102738(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101d90(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101d90(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102686(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102b96(param_3);
  uVar2 = FUN_00102b80(param_1);
  FUN_00102ba8(*param_1,uVar2,uVar1);
  return;
}




void FUN_00101d6e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010384e(undefined4 param_1)

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




void FUN_00102ca2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d10(param_3);
  uVar2 = FUN_00102d10(local_28);
  uVar3 = FUN_00102d10(local_20);
  uVar1 = FUN_00102f55(uVar3,uVar2,uVar1);
  FUN_00102f8a(&local_30,uVar1);
  return;
}




void FUN_00103be2(void)

{
  return;
}




void FUN_00103c45(void)

{
  return;
}




long FUN_00102410(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_001037a2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010353f(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001036a8(param_1,2);
  __s = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(__s,100,"%s",local_78);
  FUN_001036cc(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102eee(void)

{
  return;
}




ulong * FUN_001031e3(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c50(void)

{
  return;
}




undefined8 FUN_00103212(void)

{
  return 0xfffffffffffffff;
}




undefined8 FUN_00103b9f(void)

{
  return 1;
}




void FUN_00103366(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010342f(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102c90(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102d10(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101d2e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103177(param_1,param_2,param_3);
  return;
}




void FUN_0010271a(undefined8 param_1)

{
  FUN_00102b80(param_1);
  return;
}




void FUN_00101908(undefined8 param_1)

{
  FUN_00101948(param_1);
  return;
}




void FUN_00103080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010322a(param_2);
  uVar2 = FUN_0010322a(param_1);
  FUN_0010323c(uVar2,uVar1,param_3);
  return;
}




void FUN_00103929(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102b46(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103eb7(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102b6d(void)

{
  return;
}




ulong FUN_001028aa(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102d96(param_1);
  lVar2 = FUN_00102410(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102410(local_40);
  local_30 = FUN_00102410(local_40);
  plVar3 = (long *)FUN_00102dbc(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102410(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102d96(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102d96(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103c9d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00102b96(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c19(void)

{
  return;
}




void FUN_001034a7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034dc(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010186d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036cc("Calling good()...");
  FUN_0010185d();
  FUN_001036cc("Finished good()");
  FUN_001036cc("Calling bad()...");
  FUN_00101549();
  FUN_001036cc("Finished bad()");
  return 0;
}




void FUN_001035f3(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001036a8(param_1,2);
  __s = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(__s,100,"%s",local_78);
  FUN_001036cc(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001025f5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b46(param_1,param_2,param_3);
  return;
}




void FUN_00102f02(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103c87(void)

{
  return;
}




void FUN_001026e6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b80(param_1);
  FUN_00102be5(*param_1,uVar1);
  return;
}




undefined8 FUN_00103345(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102674(&local_10);
  return *puVar1;
}




void FUN_00102ab6(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_0010299a(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103bed(void)

{
  return;
}




void FUN_00102d96(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102488(param_1);
  FUN_00102fd1(uVar1);
  return;
}




undefined8 FUN_0010299a(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102deb(param_1,param_2);
  }
  return uVar1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ec8)();
  return;
}




void FUN_00103c5b(void)

{
  return;
}




void FUN_00101974(undefined8 param_1)

{
  FUN_00101ce4(param_1);
  return;
}




void FUN_00102e66(void)

{
  return;
}




void FUN_001033c1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d10(param_3);
  uVar2 = FUN_00102d10(local_28);
  uVar3 = FUN_00102d10(local_20);
  uVar1 = FUN_001034a7(uVar3,uVar2,uVar1);
  FUN_00102f8a(&local_30,uVar1);
  return;
}




long FUN_00103101(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_00102f8a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103bd7(void)

{
  return;
}




void FUN_00101549(void)

{
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101928(local_58);
  local_68 = (undefined *)0x0;
                    /* try { // try from 0010157e to 0010165d has its CatchHandler @ 001016a9 */
  local_68 = (undefined *)operator_new__(0x32);
  *local_68 = 0;
  local_60 = FUN_00101a2e(local_58);
  FUN_00101a7e(local_38,&local_60);
  FUN_00101aac(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a2e(local_58);
  FUN_00101a7e(local_38,&local_60);
  FUN_00101aac(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a2e(local_58);
  FUN_00101a7e(local_38,&local_60);
  FUN_00101aac(local_58,local_38[0],1,&local_68);
  FUN_00101b72(local_38,local_58);
                    /* try { // try from 00101665 to 00101669 has its CatchHandler @ 00101694 */
  FUN_0010353f(local_38);
  FUN_001019e6(local_38);
  FUN_001019e6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001037f8(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101948(undefined8 param_1)

{
  FUN_00101c92(param_1);
  FUN_00101cb2(param_1);
  return;
}




void FUN_00102be5(undefined8 param_1,undefined8 param_2)

{
  FUN_00102eee(param_1,param_2);
  return;
}




void FUN_00101e3e(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_001028aa(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_0010235e(local_80);
      local_60 = FUN_00102738(&local_88,&local_78);
      local_70 = FUN_0010299a(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101d2e(local_80);
                    /* try { // try from 00102148 to 001021d3 has its CatchHandler @ 0010228b */
      FUN_00102875(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101d2e(local_80);
      puVar2 = (undefined8 *)FUN_00101d90(&local_88);
      local_70 = FUN_001029d1(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101d2e(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101d90(&local_88);
      local_70 = FUN_001029d1(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101d2e(local_80);
      FUN_00101d40(*local_80,local_80[1],uVar1);
      FUN_00101cf4(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102686(local_38,param_1,param_4);
                    /* try { // try from 00101ec8 to 0010209b has its CatchHandler @ 0010226d */
      local_50 = FUN_0010271a(local_38);
      local_78 = FUN_00101a2e(local_80);
      local_48 = FUN_00102738(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101d2e(local_80);
        FUN_0010277c(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101d90(&local_88);
        FUN_001027d4(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101d90(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101d90(&local_88);
        FUN_00102824(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101d2e(local_80);
        lVar4 = FUN_00102875(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101d2e(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101d90(&local_88);
        FUN_0010277c(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101d90(&local_88);
        FUN_00102824(*puVar2,local_40,local_50);
      }
      FUN_001026e6(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a56(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e66(param_1,param_2);
  return;
}




void FUN_00103bf8(void)

{
  return;
}




void FUN_001031c5(undefined8 param_1)

{
  FUN_00103212(param_1);
  return;
}




void FUN_001019e6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d2e(param_1);
  FUN_00101d40(*param_1,param_1[1],uVar1);
  FUN_00101994(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101490();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_001038d0(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103c7c(void)

{
  return;
}




undefined8 FUN_00103e1f(undefined8 *param_1)

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




long FUN_001036a8(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00103c66(void)

{
  return;
}




void FUN_00102f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030d0(param_1,param_2,param_3);
  return;
}




void FUN_0010277c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c0f(param_2);
  uVar2 = FUN_00102c0f(param_1);
  FUN_00102c5b(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b96(param_3);
  FUN_00102eaa(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_0010322a(undefined8 param_1)

{
  return param_1;
}




void FUN_001018e8(undefined8 param_1)

{
  FUN_00101974(param_1);
  return;
}




undefined8 FUN_00102488(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c03(void)

{
  return;
}




void FUN_00103c24(void)

{
  return;
}




void FUN_00103c71(void)

{
  return;
}




undefined8 FUN_00102437(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a29(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00103bae(void)

{
  return 0;
}




void FUN_00102deb(undefined8 param_1,undefined8 param_2)

{
  FUN_0010303a(param_1,param_2,0);
  return;
}




undefined8 FUN_00102674(undefined8 param_1)

{
  return param_1;
}




void FUN_00103778(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00103cd4(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c9d,local_18);
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




void FUN_001038a8(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102558(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102652(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001027d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c90(param_2);
  uVar2 = FUN_00102c90(param_1);
  FUN_00102ca2(uVar2,uVar1,param_3);
  return;
}




void * FUN_0010342f(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00102f55(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103101(param_1,param_2,param_3);
  return;
}




ulong FUN_00103ac0(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001025b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b10(param_1,param_2,param_3);
  return;
}




int FUN_00103bbd(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001036cc(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001038fb(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d10(param_2);
  uVar2 = FUN_00102d10(param_1);
  FUN_00102d22(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102c0f(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f02(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102652(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102eaa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102b96(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001018d2(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00102fd1(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001031c5(param_1);
  puVar1 = (undefined8 *)FUN_001031e3(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_001025e6(void)

{
  return;
}




void FUN_00103177(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102d10(param_1);
  uVar1 = FUN_001032fa(uVar1,param_2,param_3);
  FUN_00102f8a(&local_10,uVar1);
  return;
}




void FUN_001016d3(void)

{
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101928(local_58);
  local_68 = (undefined *)0x0;
                    /* try { // try from 00101708 to 001017e7 has its CatchHandler @ 00101833 */
  local_68 = (undefined *)operator_new__(100);
  *local_68 = 0;
  local_60 = FUN_00101a2e(local_58);
  FUN_00101a7e(local_38,&local_60);
  FUN_00101aac(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a2e(local_58);
  FUN_00101a7e(local_38,&local_60);
  FUN_00101aac(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a2e(local_58);
  FUN_00101a7e(local_38,&local_60);
  FUN_00101aac(local_58,local_38[0],1,&local_68);
  FUN_00101b72(local_38,local_58);
                    /* try { // try from 001017ef to 001017f3 has its CatchHandler @ 0010181e */
  FUN_001035f3(local_38);
  FUN_001019e6(local_38);
  FUN_001019e6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101928(undefined8 param_1)

{
  FUN_00101908(param_1);
  return;
}




void FUN_001029d1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e19(param_2);
  uVar2 = FUN_00102e19(param_1);
  FUN_00102c5b(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103823(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




undefined8 FUN_00102500(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102652(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001018d2(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103e98(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103c92(void)

{
  return;
}




void FUN_001037cd(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103dfc(void *param_1)

{
  free(param_1);
  return 1;
}




ulong FUN_001039bc(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00101df9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102674(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102674(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_001023aa(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101d6e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010249a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102a80(param_1,param_3);
                    /* try { // try from 001024d4 to 001024d8 has its CatchHandler @ 001024db */
  FUN_00102ab6(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_0010374c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001030d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032aa(param_1,param_2,param_3);
  return;
}




void FUN_00101b72(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102488(param_2);
  FUN_00102437(&local_31,uVar1);
  uVar1 = FUN_00102410(param_2);
                    /* try { // try from 00101bd8 to 00101bdc has its CatchHandler @ 00101c45 */
  FUN_0010249a(param_1,uVar1,&local_31);
  FUN_00101974(&local_31);
  uVar2 = FUN_00101d2e(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102558(param_2);
  uVar4 = FUN_00102500(param_2);
                    /* try { // try from 00101c26 to 00101c2a has its CatchHandler @ 00101c63 */
  uVar1 = FUN_001025b0(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c3a(void)

{
  return;
}




void FUN_00101a7e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101d90(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00101d40(undefined8 param_1,undefined8 param_2)

{
  FUN_00102627(param_1,param_2);
  return;
}




bool FUN_00103da1(pthread_t *param_1)

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




void FUN_00103f80(void)

{
  return;
}




void FUN_00102e79(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103080(param_1,param_2,param_3);
  return;
}




void FUN_00101cf4(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001025f5(param_1,param_2,param_3);
  }
  return;
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




undefined8 FUN_00101a2e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d6e(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103492(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101ce4(void)

{
  return;
}




undefined8 FUN_00102a29(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a56(param_1,param_2);
  return param_1;
}




void FUN_00102627(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b6d(param_1,param_2);
  return;
}




void FUN_00101c92(undefined8 param_1)

{
  FUN_001025e6(param_1);
  return;
}




void FUN_00103724(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103c0e(void)

{
  return;
}




undefined8 FUN_00101d90(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e79(param_1,param_2,param_3);
  return;
}



