
void FUN_0010381f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103854(param_1,param_2,param_3);
  return;
}




void FUN_00103a0e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103d8a(void)

{
  return 1;
}




void FUN_001039e3(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103169(undefined8 param_1,undefined8 param_2)

{
  FUN_001033b6(param_1,param_2,0);
  return;
}




undefined8 FUN_00101c53(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103541(undefined8 param_1)

{
  FUN_0010358e(param_1);
  return;
}




void FUN_0010326a(void)

{
  return;
}




void FUN_00103e67(void)

{
  return;
}




void FUN_00101c6a(undefined8 param_1)

{
  FUN_00101cf6(param_1);
  return;
}




void FUN_0010281c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e02(param_1,param_3);
                    /* try { // try from 00102856 to 0010285a has its CatchHandler @ 0010285d */
  FUN_00102e38(param_1,param_2);
  return;
}




void FUN_00102932(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e92(param_1,param_2,param_3);
  return;
}




long FUN_0010347d(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




undefined8 FUN_0010272c(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_001020f0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a68(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102f02(param_1);
  FUN_00102f67(*param_1,uVar1);
  return;
}




void FUN_0010344c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103626(param_1,param_2,param_3);
  return;
}




void FUN_0010331c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034f3(param_1,param_2,param_3);
  return;
}




void FUN_00101bd9(void)

{
  FUN_001018cb();
  FUN_00101a46();
  return;
}




undefined8 FUN_0010358e(void)

{
  return 0x1fffffffffffffff;
}




void FUN_00103ae6(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00103dd8(void)

{
  return;
}




void FUN_00103024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103092(param_3);
  uVar2 = FUN_00103092(local_28);
  uVar3 = FUN_00103092(local_20);
  uVar1 = FUN_001032d1(uVar3,uVar2,uVar1);
  FUN_00103306(&local_30,uVar1);
  return;
}




void FUN_00102afe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f91(param_2);
  uVar2 = FUN_00102f91(param_1);
  FUN_00102fdd(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103a39(undefined4 param_1)

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




undefined8 FUN_001020b0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f67(undefined8 param_1,undefined8 param_2)

{
  FUN_0010326a(param_1,param_2);
  return;
}




long FUN_00102f02(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_001029f6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e30(void)

{
  return;
}




void FUN_001033b6(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010358e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




undefined8 FUN_0010400a(undefined8 *param_1)

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




void FUN_00102ba6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103092(param_2);
  uVar2 = FUN_00103092(param_1);
  FUN_001030a4(uVar2,uVar1,param_3);
  return;
}




void FUN_00103e04(void)

{
  return;
}




undefined8 FUN_00103d99(void)

{
  return 0;
}




undefined4 * FUN_00103676(undefined4 *param_1,long param_2,undefined4 *param_3)

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




void FUN_00103963(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010398d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103e88(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103abb(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010334d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_00103541(param_1);
  puVar1 = (undefined8 *)FUN_0010355f(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_001033fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001035a6(param_2);
  uVar2 = FUN_001035a6(param_1);
  FUN_001035b8(uVar2,uVar1,param_3);
  return;
}




void FUN_001029a9(undefined8 param_1,undefined8 param_2)

{
  FUN_00102eef(param_1,param_2);
  return;
}




long FUN_00101714(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void * FUN_001037a7(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




undefined8 FUN_00101db0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020f0(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f2a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102f18(param_3);
  FUN_00103228(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00102124(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001029d4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void * FUN_00103854(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00103e5c(void)

{
  return;
}




void FUN_001031f7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033fc(param_1,param_2,param_3);
  return;
}




void FUN_00103228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102f18(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101c53(4,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00103092(undefined8 param_1)

{
  return param_1;
}




void FUN_0010327e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00104160(void)

{
  return;
}




ulong FUN_00103cab(long param_1,ulong param_2,long param_3)

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




void FUN_001020c2(undefined8 param_1,undefined8 param_2)

{
  FUN_001029a9(param_1,param_2);
  return;
}




int FUN_00103da8(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102e38(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102d1c(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




undefined8 FUN_001036bd(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001029f6(&local_10);
  return *puVar1;
}




void FUN_0010159f(undefined8 param_1)

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
  piVar1 = (int *)FUN_00101714(param_1,2);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_0010390f(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_001038b7("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102f18(undefined8 param_1)

{
  return param_1;
}




void FUN_001014e9(undefined8 param_1)

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
  piVar1 = (int *)FUN_00101714(param_1,2);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_0010390f(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_001038b7("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103a93(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103197(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010327e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104083(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001034f3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103092(param_1);
  uVar1 = FUN_00103676(uVar1,param_2,param_3);
  FUN_00103306(&local_10,uVar1);
  return;
}




void FUN_001030a4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00101e00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102112(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_001026e0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020f0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001035a6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b14(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001038dd(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103739(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103092(param_3);
  uVar2 = FUN_00103092(local_28);
  uVar3 = FUN_00103092(local_20);
  uVar1 = FUN_0010381f(uVar3,uVar2,uVar1);
  FUN_00103306(&local_30,uVar1);
  return;
}




undefined8 FUN_00103fe7(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101d68(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020b0(param_1);
  FUN_001020c2(*param_1,param_1[1],uVar1);
  FUN_00101d16(param_1);
  return;
}




void FUN_00102066(void)

{
  return;
}




void FUN_00101c8a(undefined8 param_1)

{
  FUN_00101cca(param_1);
  return;
}




void FUN_00103e1a(void)

{
  return;
}




void FUN_001021c0(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102c2c(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001026e0(local_80);
      local_60 = FUN_00102aba(&local_88,&local_78);
      local_70 = FUN_00102d1c(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_001020b0(local_80);
                    /* try { // try from 001024ca to 00102555 has its CatchHandler @ 0010260d */
      FUN_00102bf7(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_001020b0(local_80);
      puVar2 = (undefined8 *)FUN_00102112(&local_88);
      local_70 = FUN_00102d53(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_001020b0(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00102112(&local_88);
      local_70 = FUN_00102d53(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_001020b0(local_80);
      FUN_001020c2(*local_80,local_80[1],uVar1);
      FUN_00102076(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00102a08(local_38,param_1,param_4);
                    /* try { // try from 0010224a to 0010241d has its CatchHandler @ 001025ef */
      local_50 = FUN_00102a9c(local_38);
      local_78 = FUN_00101db0(local_80);
      local_48 = FUN_00102aba(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_001020b0(local_80);
        FUN_00102afe(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_00102112(&local_88);
        FUN_00102b56(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00102112(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00102112(&local_88);
        FUN_00102ba6(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_001020b0(local_80);
        lVar4 = FUN_00102bf7(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_001020b0(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00102112(&local_88);
        FUN_00102afe(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_00102112(&local_88);
        FUN_00102ba6(*puVar2,local_40,local_50);
      }
      FUN_00102a68(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001032d1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010347d(param_1,param_2,param_3);
  return;
}




long FUN_00102aba(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102112(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102112(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00101d16(long *param_1)

{
  FUN_00102076(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00101c6a(param_1);
  return;
}




ulong * FUN_0010313a(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001040a2(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103937(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102034(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00101655(undefined8 param_1)

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
  piVar2 = (int *)FUN_00101714(param_1,2);
  iVar1 = *piVar2;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_001038b7("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_0010390f(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102792(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_00103e46(void)

{
  return;
}




void FUN_00103dc2(void)

{
  return;
}




void FUN_001036de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001037a7(param_1,param_2,param_3);
  return;
}




void FUN_001018cb(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101caa(local_58);
  local_64 = 7;
  local_60 = FUN_00101db0(local_58);
  FUN_00101e00(local_38,&local_60);
                    /* try { // try from 0010193b to 001019d0 has its CatchHandler @ 00101a1c */
  FUN_00101e2e(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101db0(local_58);
  FUN_00101e00(local_38,&local_60);
  FUN_00101e2e(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101db0(local_58);
  FUN_00101e00(local_38,&local_60);
  FUN_00101e2e(local_58,local_38[0],1,&local_64);
  FUN_00101ef4(local_38,local_58);
                    /* try { // try from 001019d8 to 001019dc has its CatchHandler @ 00101a07 */
  FUN_0010159f(local_38);
  FUN_00101d68(local_38);
  FUN_00101d68(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102f91(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010327e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010329c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010344c(param_1,param_2,param_3);
  return;
}




void FUN_001039b8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ee0)();
  return;
}




undefined8 FUN_00102112(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00102c2c(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00103114(param_1);
  lVar2 = FUN_00102792(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102792(local_40);
  local_30 = FUN_00102792(local_40);
  plVar3 = (long *)FUN_0010313a(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102792(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00103114(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00103114(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001040c1(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101738(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101caa(local_58);
  local_64 = 0xffffffff;
                    /* try { // try from 00101781 to 00101855 has its CatchHandler @ 001018a1 */
  __isoc99_fscanf(stdin,&DAT_00105055,&local_64);
  local_60 = FUN_00101db0(local_58);
  FUN_00101e00(local_38,&local_60);
  FUN_00101e2e(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101db0(local_58);
  FUN_00101e00(local_38,&local_60);
  FUN_00101e2e(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101db0(local_58);
  FUN_00101e00(local_38,&local_60);
  FUN_00101e2e(local_58,local_38[0],1,&local_64);
  FUN_00101ef4(local_38,local_58);
                    /* try { // try from 0010185d to 00101861 has its CatchHandler @ 0010188c */
  FUN_001014e9(local_38);
  FUN_00101d68(local_38);
  FUN_00101d68(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102bf7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030de(param_1,param_2,param_3);
  return;
}




void FUN_00101cf6(undefined8 param_1)

{
  FUN_00102066(param_1);
  return;
}




undefined8 FUN_00103ebf(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103e88,local_18);
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




void FUN_00101e2e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00102124(param_1);
  local_18 = FUN_0010217b(&local_38,&local_20);
  local_20 = FUN_001026e0(local_30);
  uVar1 = FUN_0010272c(&local_20,local_18);
  FUN_001021c0(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001026e0(local_30);
  FUN_0010272c(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong * FUN_0010355f(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102eef(void)

{
  return;
}




void FUN_00103df9(void)

{
  return;
}




void FUN_00103e3b(void)

{
  return;
}




undefined8 FUN_00102dab(undefined8 param_1,undefined8 param_2)

{
  FUN_00102dd8(param_1,param_2);
  return param_1;
}




void FUN_00102fdd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010329c(param_1,param_2,param_3);
  return;
}




void FUN_00103b47(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103713(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010380a(&local_10);
  FUN_00103012(uVar1);
  return;
}




void FUN_00103e7d(void)

{
  return;
}




void FUN_00102dd8(undefined8 param_1,undefined8 param_2)

{
  FUN_001031e4(param_1,param_2);
  return;
}




bool FUN_00103f8c(pthread_t *param_1)

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




void FUN_00103dcd(void)

{
  return;
}




void FUN_00101cca(undefined8 param_1)

{
  FUN_00102014(param_1);
  FUN_00102034(param_1);
  return;
}




undefined8 FUN_00103012(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103306(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103e51(void)

{
  return;
}




void FUN_00101caa(undefined8 param_1)

{
  FUN_00101c8a(param_1);
  return;
}




void FUN_00102ec8(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103626(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103713(param_2);
  uVar2 = FUN_00103713(param_1);
  FUN_00103739(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_0010380a(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102e02(undefined8 param_1,undefined8 param_2)

{
  FUN_00102dd8(param_1,param_2);
  FUN_00102034(param_1);
  return;
}




void FUN_0010390f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102076(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102977(param_1,param_2,param_3);
  }
  return;
}




long FUN_0010217b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001029f6(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001029f6(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00101a46(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101caa(local_58);
  local_64 = 0xffffffff;
                    /* try { // try from 00101a8f to 00101b63 has its CatchHandler @ 00101baf */
  __isoc99_fscanf(stdin,&DAT_00105055,&local_64);
  local_60 = FUN_00101db0(local_58);
  FUN_00101e00(local_38,&local_60);
  FUN_00101e2e(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101db0(local_58);
  FUN_00101e00(local_38,&local_60);
  FUN_00101e2e(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101db0(local_58);
  FUN_00101e00(local_38,&local_60);
  FUN_00101e2e(local_58,local_38[0],1,&local_64);
  FUN_00101ef4(local_38,local_58);
                    /* try { // try from 00101b6b to 00101b6f has its CatchHandler @ 00101b9a */
  FUN_00101655(local_38);
  FUN_00101d68(local_38);
  FUN_00101d68(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001030de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010331c(param_1,param_2,param_3);
  return;
}




void FUN_00103e25(void)

{
  return;
}




void FUN_00101ef4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010280a(param_2);
  FUN_001027b9(&local_31,uVar1);
  uVar1 = FUN_00102792(param_2);
                    /* try { // try from 00101f5a to 00101f5e has its CatchHandler @ 00101fc7 */
  FUN_0010281c(param_1,uVar1,&local_31);
  FUN_00101cf6(&local_31);
  uVar2 = FUN_001020b0(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001028da(param_2);
  uVar4 = FUN_00102882(param_2);
                    /* try { // try from 00101fa8 to 00101fac has its CatchHandler @ 00101fe5 */
  uVar1 = FUN_00102932(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101bee(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001038b7("Calling good()...");
  FUN_00101bd9();
  FUN_001038b7("Finished good()");
  FUN_001038b7("Calling bad()...");
  FUN_00101738();
  FUN_001038b7("Finished bad()");
  return 0;
}




void FUN_001020f0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102d53(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103197(param_2);
  uVar2 = FUN_00103197(param_1);
  FUN_00102fdd(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103e0f(void)

{
  return;
}




void FUN_00103e72(void)

{
  return;
}




void FUN_00102a9c(undefined8 param_1)

{
  FUN_00102f02(param_1);
  return;
}




void FUN_00102b56(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103012(param_2);
  uVar2 = FUN_00103012(param_1);
  FUN_00103024(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102d1c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103169(param_1,param_2);
  }
  return uVar1;
}




void _FINI_0(void)

{
  if (DAT_00108028 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101430();
    DAT_00108028 = 1;
    return;
  }
  return;
}




void FUN_00102014(undefined8 param_1)

{
  FUN_00102968(param_1);
  return;
}




void FUN_00103dee(void)

{
  return;
}




void FUN_001038b7(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102882(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001029d4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010280a(undefined8 param_1)

{
  return param_1;
}




void FUN_001029d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001035b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103092(param_3);
  uVar2 = FUN_001036bd(local_28);
  uVar3 = FUN_001036bd(local_20);
  uVar1 = FUN_001036de(uVar3,uVar2,uVar1);
  FUN_00103306(&local_30,uVar1);
  return;
}




void FUN_00102977(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ec8(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001027b9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102dab(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




ulong FUN_00103ba7(long param_1,ulong param_2,long param_3)

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




void FUN_00102968(void)

{
  return;
}




void FUN_00103114(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010280a(param_1);
  FUN_0010334d(uVar1);
  return;
}




void FUN_00102e92(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031f7(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001028da(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001029d4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103de3(void)

{
  return;
}




void FUN_001040f0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102a08(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102f18(param_3);
  uVar2 = FUN_00102f02(param_1);
  FUN_00102f2a(*param_1,uVar2,uVar1);
  return;
}




void FUN_001031e4(void)

{
  return;
}



