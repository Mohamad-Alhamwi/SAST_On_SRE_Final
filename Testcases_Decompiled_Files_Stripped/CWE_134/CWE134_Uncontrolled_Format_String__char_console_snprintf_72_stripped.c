
undefined8 FUN_00102d44(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102e96(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f5e(undefined8 param_1)

{
  FUN_001033c4(param_1);
  return;
}




void FUN_0010387e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103a56(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_001042d0(void)

{
  return;
}




undefined8 FUN_0010326d(undefined8 param_1,undefined8 param_2)

{
  FUN_0010329a(param_1,param_2);
  return param_1;
}




void FUN_00102f2a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001033c4(param_1);
  FUN_00103429(*param_1,uVar1);
  return;
}




undefined8 FUN_001020b1(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103d83("Calling good()...");
  FUN_0010209c();
  FUN_00103d83("Finished good()");
  FUN_00103d83("Calling bad()...");
  FUN_00101804();
  FUN_00103d83("Finished bad()");
  return 0;
}




undefined8 FUN_00102572(undefined8 param_1)

{
  return param_1;
}




void FUN_0010433e(void)

{
  return;
}




void FUN_0010218c(undefined8 param_1)

{
  FUN_001024d6(param_1);
  FUN_001024f6(param_1);
  return;
}




void FUN_001035da(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ccc(param_1);
  FUN_00103815(uVar1);
  return;
}




void FUN_00102528(void)

{
  return;
}




void FUN_001024f6(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_0010438b(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104354,local_18);
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




void FUN_00104312(void)

{
  return;
}




void FUN_00104354(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010456e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103eaf(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001022c2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001025d4(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00103cd6(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001025b2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001042fc(void)

{
  return;
}




void FUN_00103068(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103554(param_2);
  uVar2 = FUN_00103554(param_1);
  FUN_00103566(uVar2,uVar1,param_3);
  return;
}




void FUN_00104349(void)

{
  return;
}




void FUN_0010338a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001016f1(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001017e0(param_1,2);
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  snprintf(local_78,99,"%s",*puVar1);
  FUN_00103d83(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102f7c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001025d4(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001025d4(param_2);
  return lVar1 - *plVar2 >> 3;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




undefined8 FUN_00104265(void)

{
  return 0;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ed0)();
  return;
}




undefined8 FUN_001034d4(undefined8 param_1)

{
  return param_1;
}




void FUN_00103eda(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001023b6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102ccc(param_2);
  FUN_00102c7b(&local_31,uVar1);
  uVar1 = FUN_00102c54(param_2);
                    /* try { // try from 0010241c to 00102420 has its CatchHandler @ 00102489 */
  FUN_00102cde(param_1,uVar1,&local_31);
  FUN_001021b8(&local_31);
  uVar2 = FUN_00102572(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102d9c(param_2);
  uVar4 = FUN_00102d44(param_2);
                    /* try { // try from 0010246a to 0010246e has its CatchHandler @ 001024a7 */
  uVar1 = FUN_00102df4(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103732(void)

{
  return;
}




void FUN_001042af(void)

{
  return;
}




void FUN_00103914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103aee(param_1,param_2,param_3);
  return;
}




void FUN_001033ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001033da(param_3);
  FUN_001036ee(param_1,param_2,uVar1);
  return;
}




void FUN_00104299(void)

{
  return;
}




void FUN_0010329a(undefined8 param_1,undefined8 param_2)

{
  FUN_001036aa(param_1,param_2);
  return;
}




void FUN_00102682(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_001030ee(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102ba2(local_80);
      local_60 = FUN_00102f7c(&local_88,&local_78);
      local_70 = FUN_001031de(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00102572(local_80);
                    /* try { // try from 0010298c to 00102a17 has its CatchHandler @ 00102acf */
      FUN_001030b9(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00102572(local_80);
      puVar2 = (undefined8 *)FUN_001025d4(&local_88);
      local_70 = FUN_00103215(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00102572(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_001025d4(&local_88);
      local_70 = FUN_00103215(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00102572(local_80);
      FUN_00102584(*local_80,local_80[1],uVar1);
      FUN_00102538(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102eca(local_38,param_1,param_4);
                    /* try { // try from 0010270c to 001028df has its CatchHandler @ 00102ab1 */
      local_50 = FUN_00102f5e(local_38);
      local_78 = FUN_00102272(local_80);
      local_48 = FUN_00102f7c(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00102572(local_80);
        FUN_00102fc0(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_001025d4(&local_88);
        FUN_00103018(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_001025d4(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_001025d4(&local_88);
        FUN_00103068(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00102572(local_80);
        lVar4 = FUN_001030b9(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00102572(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_001025d4(&local_88);
        FUN_00102fc0(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_001025d4(&local_88);
        FUN_00103068(*puVar2,local_40,local_50);
      }
      FUN_00102f2a(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e96(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_00103945(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_00102eb8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010365d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103746(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034d4(param_2);
  uVar2 = FUN_001034d4(param_1);
  FUN_001034e6(uVar2,uVar1,param_3);
  return;
}




void FUN_001022f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_001025e6(param_1);
  local_18 = FUN_0010263d(&local_38,&local_20);
  local_20 = FUN_00102ba2(local_30);
  uVar1 = FUN_00102bee(&local_20,local_18);
  FUN_00102682(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102ba2(local_30);
  FUN_00102bee(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001024d6(undefined8 param_1)

{
  FUN_00102e2a(param_1);
  return;
}




undefined8 FUN_00102ccc(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ddb(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




undefined8 FUN_00102d9c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102e96(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001035a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001037e4(param_1,param_2,param_3);
  return;
}




void FUN_0010214c(undefined8 param_1)

{
  FUN_0010218c(param_1);
  return;
}




void * FUN_00103c73(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00104630(void)

{
  return;
}




void FUN_0010431d(void)

{
  return;
}




void FUN_0010216c(undefined8 param_1)

{
  FUN_0010214c(param_1);
  return;
}




long FUN_001017e0(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00103aee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103bdf(param_2);
  uVar2 = FUN_00103bdf(param_1);
  FUN_00103c05(uVar2,uVar1,param_3);
  return;
}




void FUN_001021b8(undefined8 param_1)

{
  FUN_00102528(param_1);
  return;
}




void FUN_001037e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001039bb(param_1,param_2,param_3);
  return;
}




void FUN_00103215(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010365d(param_2);
  uVar2 = FUN_0010365d(param_1);
  FUN_0010349f(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001032c4(undefined8 param_1,undefined8 param_2)

{
  FUN_0010329a(param_1,param_2);
  FUN_001024f6(param_1);
  return;
}




void FUN_001042a4(void)

{
  return;
}




undefined8 FUN_00102ba2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001025b2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103a6e(undefined8 param_1)

{
  return param_1;
}




void FUN_001042ba(void)

{
  return;
}




void FUN_00102fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103453(param_2);
  uVar2 = FUN_00103453(param_1);
  FUN_0010349f(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010454f(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010428e(void)

{
  return;
}




undefined8 FUN_00102116(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103e03(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103746(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103fb2(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102538(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102e39(param_1,param_2,param_3);
  }
  return;
}




void FUN_00101804(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_e0;
  undefined8 local_d8;
  size_t local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010216c(local_c8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_e0 = local_88;
  local_d0 = strlen(local_e0);
  if (1 < 100 - local_d0) {
                    /* try { // try from 00101900 to 00101a99 has its CatchHandler @ 00101af1 */
    pcVar1 = fgets(local_e0 + local_d0,100 - (int)local_d0,stdin);
    if (pcVar1 == (char *)0x0) {
      FUN_00103d83("fgets() failed");
      local_e0[local_d0] = '\0';
    }
    else {
      local_d0 = strlen(local_e0);
      if ((local_d0 != 0) && (local_e0[local_d0 - 1] == '\n')) {
        local_e0[local_d0 - 1] = '\0';
      }
    }
  }
  local_d8 = FUN_00102272(local_c8);
  FUN_001022c2(local_a8,&local_d8);
  FUN_001022f0(local_c8,local_a8[0],1,&local_e0);
  local_d8 = FUN_00102272(local_c8);
  FUN_001022c2(local_a8,&local_d8);
  FUN_001022f0(local_c8,local_a8[0],1,&local_e0);
  local_d8 = FUN_00102272(local_c8);
  FUN_001022c2(local_a8,&local_d8);
  FUN_001022f0(local_c8,local_a8[0],1,&local_e0);
  FUN_001023b6(local_a8,local_c8);
                    /* try { // try from 00101aa4 to 00101aa8 has its CatchHandler @ 00101ad9 */
  FUN_00101529(local_a8);
  FUN_0010222a(local_a8);
  FUN_0010222a(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001039bb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103554(param_1);
  uVar1 = FUN_00103b3e(uVar1,param_2,param_3);
  FUN_001037ce(&local_10,uVar1);
  return;
}




undefined8 FUN_001025d4(undefined8 param_1)

{
  return param_1;
}




void FUN_001045c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001030b9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035a4(param_1,param_2,param_3);
  return;
}




void FUN_00102e2a(void)

{
  return;
}




undefined8 FUN_00102c7b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010326d(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001036ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_001033da(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00102116(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00104307(void)

{
  return;
}




undefined8 FUN_00103453(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103746(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001044b3(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010222a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102572(param_1);
  FUN_00102584(*param_1,param_1[1],uVar1);
  FUN_001021d8(param_1);
  return;
}




void FUN_0010209c(void)

{
  FUN_00101b21();
  FUN_00101d7f();
  return;
}




void FUN_00103764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103914(param_1,param_2,param_3);
  return;
}




void FUN_00102e6b(undefined8 param_1,undefined8 param_2)

{
  FUN_001033b1(param_1,param_2);
  return;
}




void FUN_00103f87(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_001044d6(undefined8 *param_1)

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




undefined8 FUN_00103a56(void)

{
  return 0xfffffffffffffff;
}




undefined8 FUN_00103554(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bdf(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103cd6(&local_10);
  FUN_001034d4(uVar1);
  return;
}




void FUN_001032fa(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_001031de(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103a09(undefined8 param_1)

{
  FUN_00103a56(param_1);
  return;
}




undefined8 FUN_00102bee(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_001025b2(&local_18,&local_20);
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




void FUN_001021d8(long *param_1)

{
  FUN_00102538(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_0010212c(param_1);
  return;
}




void FUN_00102eca(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_001033da(param_3);
  uVar2 = FUN_001033c4(param_1);
  FUN_001033ec(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103e2f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103da9(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103799(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103945(param_1,param_2,param_3);
  return;
}




void FUN_00104328(void)

{
  return;
}




undefined8 FUN_00103815(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103a09(param_1);
  puVar1 = (undefined8 *)FUN_00103a27(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_0010458d(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




ulong * FUN_00103a27(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001042e6(void)

{
  return;
}




ulong FUN_00104177(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050c4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001036aa(void)

{
  return;
}




void FUN_00102584(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e6b(param_1,param_2);
  return;
}




int FUN_00104274(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_001033da(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_00103b3e(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00103f05(undefined4 param_1)

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




void FUN_001034e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103554(param_3);
  uVar2 = FUN_00103554(local_28);
  uVar3 = FUN_00103554(local_20);
  uVar1 = FUN_00103799(uVar3,uVar2,uVar1);
  FUN_001037ce(&local_30,uVar1);
  return;
}




void FUN_00101529(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001017e0(param_1,2);
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  snprintf(local_78,99,(char *)*puVar1);
  FUN_00103d83(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001042c5(void)

{
  return;
}




void FUN_00103d83(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00104013(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




ulong FUN_001030ee(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_001035da(param_1);
  lVar2 = FUN_00102c54(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102c54(local_40);
  local_30 = FUN_00102c54(local_40);
  plVar3 = (long *)FUN_00103600(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102c54(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_001035da(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_001035da(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00102c54(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_0010362f(undefined8 param_1,undefined8 param_2)

{
  FUN_0010387e(param_1,param_2,0);
  return;
}




void FUN_001042db(void)

{
  return;
}




void FUN_001036bd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001038c4(param_1,param_2,param_3);
  return;
}




void FUN_00103354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036bd(param_1,param_2,param_3);
  return;
}




void FUN_00103566(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_0010160d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001017e0(param_1,2);
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  snprintf(local_78,99,(char *)*puVar1);
  FUN_00103d83(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102272(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001025b2(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




bool FUN_00104458(pthread_t *param_1)

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




long FUN_0010263d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102eb8(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102eb8(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103e59(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103fe0(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102cde(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032c4(param_1,param_3);
                    /* try { // try from 00102d18 to 00102d1c has its CatchHandler @ 00102d1f */
  FUN_001032fa(param_1,param_2);
  return;
}




undefined8 FUN_00104256(void)

{
  return 1;
}




void FUN_001042f1(void)

{
  return;
}




void FUN_00102e39(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010338a(param_1,param_2,param_3);
  return;
}




void FUN_00101b21(void)

{
  long in_FS_OFFSET;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010216c(local_c8);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_d8 = &local_88;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  local_d0 = FUN_00102272(local_c8);
  FUN_001022c2(local_a8,&local_d0);
                    /* try { // try from 00101c32 to 00101cf7 has its CatchHandler @ 00101d4f */
  FUN_001022f0(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00102272(local_c8);
  FUN_001022c2(local_a8,&local_d0);
  FUN_001022f0(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00102272(local_c8);
  FUN_001022c2(local_a8,&local_d0);
  FUN_001022f0(local_c8,local_a8[0],1,&local_d8);
  FUN_001023b6(local_a8,local_c8);
                    /* try { // try from 00101d02 to 00101d06 has its CatchHandler @ 00101d37 */
  FUN_0010160d(local_a8);
  FUN_0010222a(local_a8);
  FUN_0010222a(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010349f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103764(param_1,param_2,param_3);
  return;
}




void FUN_00103e84(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103c05(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103554(param_3);
  uVar2 = FUN_00103554(local_28);
  uVar3 = FUN_00103554(local_20);
  uVar1 = FUN_00103ceb(uVar3,uVar2,uVar1);
  FUN_001037ce(&local_30,uVar1);
  return;
}




void FUN_00103a80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103554(param_3);
  uVar2 = FUN_00103b89(local_28);
  uVar3 = FUN_00103b89(local_20);
  uVar1 = FUN_00103baa(uVar3,uVar2,uVar1);
  FUN_001037ce(&local_30,uVar1);
  return;
}




void FUN_00104333(void)

{
  return;
}




void FUN_00103429(undefined8 param_1,undefined8 param_2)

{
  FUN_00103732(param_1,param_2);
  return;
}




void FUN_00103baa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103c73(param_1,param_2,param_3);
  return;
}




ulong * FUN_00103600(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




long FUN_001033c4(long param_1)

{
  return param_1 + 8;
}




void FUN_00102df4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103354(param_1,param_2,param_3);
  return;
}




void FUN_001038c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103a6e(param_2);
  uVar2 = FUN_00103a6e(param_1);
  FUN_00103a80(uVar2,uVar1,param_3);
  return;
}




void FUN_00103f5f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103b89(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102eb8(&local_10);
  return *puVar1;
}




void * FUN_00103d20(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_001025e6(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102e96(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00104073(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050bc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ceb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103d20(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001031de(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0010362f(param_1,param_2);
  }
  return uVar1;
}




void FUN_00101d7f(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_e0;
  undefined8 local_d8;
  size_t local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010216c(local_c8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_e0 = local_88;
  local_d0 = strlen(local_e0);
  if (1 < 100 - local_d0) {
                    /* try { // try from 00101e7b to 00102014 has its CatchHandler @ 0010206c */
    pcVar1 = fgets(local_e0 + local_d0,100 - (int)local_d0,stdin);
    if (pcVar1 == (char *)0x0) {
      FUN_00103d83("fgets() failed");
      local_e0[local_d0] = '\0';
    }
    else {
      local_d0 = strlen(local_e0);
      if ((local_d0 != 0) && (local_e0[local_d0 - 1] == '\n')) {
        local_e0[local_d0 - 1] = '\0';
      }
    }
  }
  local_d8 = FUN_00102272(local_c8);
  FUN_001022c2(local_a8,&local_d8);
  FUN_001022f0(local_c8,local_a8[0],1,&local_e0);
  local_d8 = FUN_00102272(local_c8);
  FUN_001022c2(local_a8,&local_d8);
  FUN_001022f0(local_c8,local_a8[0],1,&local_e0);
  local_d8 = FUN_00102272(local_c8);
  FUN_001022c2(local_a8,&local_d8);
  FUN_001022f0(local_c8,local_a8[0],1,&local_e0);
  FUN_001023b6(local_a8,local_c8);
                    /* try { // try from 0010201f to 00102023 has its CatchHandler @ 00102054 */
  FUN_001016f1(local_a8);
  FUN_0010222a(local_a8);
  FUN_0010222a(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001033b1(void)

{
  return;
}




undefined8 FUN_001037ce(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010212c(undefined8 param_1)

{
  FUN_001021b8(param_1);
  return;
}



