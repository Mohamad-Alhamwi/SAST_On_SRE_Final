
void FUN_00103300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034da(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103575(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001028a4(&local_10);
  return *puVar1;
}




void FUN_00103d09(void)

{
  return;
}




void FUN_00103795(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 * FUN_0010352a(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00102d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030a9(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103049(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103132(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102dc6(param_3);
  FUN_001030da(param_1,param_2,uVar1);
  return;
}




int FUN_00103c60(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101ec2(undefined8 param_1)

{
  FUN_00102816(param_1);
  return;
}




void FUN_00101f24(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102825(param_1,param_2,param_3);
  }
  return;
}




ulong * FUN_00102fec(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00101c5e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f9e(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010206e(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102ada(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_0010258e(local_80);
      local_60 = FUN_00102968(&local_88,&local_78);
      local_70 = FUN_00102bca(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101f5e(local_80);
                    /* try { // try from 00102378 to 00102403 has its CatchHandler @ 001024bb */
      FUN_00102aa5(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101f5e(local_80);
      puVar2 = (undefined8 *)FUN_00101fc0(&local_88);
      local_70 = FUN_00102c01(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101f5e(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101fc0(&local_88);
      local_70 = FUN_00102c01(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101f5e(local_80);
      FUN_00101f70(*local_80,local_80[1],uVar1);
      FUN_00101f24(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001028b6(local_38,param_1,param_4);
                    /* try { // try from 001020f8 to 001022cb has its CatchHandler @ 0010249d */
      local_50 = FUN_0010294a(local_38);
      local_78 = FUN_00101c5e(local_80);
      local_48 = FUN_00102968(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101f5e(local_80);
        FUN_001029ac(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101fc0(&local_88);
        FUN_00102a04(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101fc0(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101fc0(&local_88);
        FUN_00102a54(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101f5e(local_80);
        lVar4 = FUN_00102aa5(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101f5e(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101fc0(&local_88);
        FUN_001029ac(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101fc0(&local_88);
        FUN_00102a54(*puVar2,local_40,local_50);
      }
      FUN_00102916(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102fc6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026b8(param_1);
  FUN_00103201(uVar1);
  return;
}




void FUN_00102ed2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f40(param_3);
  uVar2 = FUN_00102f40(local_28);
  uVar3 = FUN_00102f40(local_20);
  uVar1 = FUN_00103185(uVar3,uVar2,uVar1);
  FUN_001031ba(&local_30,uVar1);
  return;
}




void FUN_001030a9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032b0(param_1,param_2,param_3);
  return;
}




void * FUN_0010365f(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103870(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102bca(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0010301b(param_1,param_2);
  }
  return uVar1;
}




long FUN_00102640(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00103596(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010365f(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101b01(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102a04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ec0(param_2);
  uVar2 = FUN_00102ec0(param_1);
  FUN_00102ed2(uVar2,uVar1,param_3);
  return;
}




void FUN_0010294a(undefined8 param_1)

{
  FUN_00102db0(param_1);
  return;
}




undefined8 FUN_00101fd2(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102882(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001039ff(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102f52(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103cbc(void)

{
  return;
}




void FUN_00103d1f(void)

{
  return;
}




undefined8 FUN_001026b8(undefined8 param_1)

{
  return param_1;
}




void FUN_0010394b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001037c7(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103300(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010345a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d2a(void)

{
  return;
}




void FUN_0010346c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f40(param_3);
  uVar2 = FUN_00103575(local_28);
  uVar3 = FUN_00103575(local_20);
  uVar1 = FUN_00103596(uVar3,uVar2,uVar1);
  FUN_001031ba(&local_30,uVar1);
  return;
}




void FUN_00103c90(void)

{
  return;
}




void FUN_001035f1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f40(param_3);
  uVar2 = FUN_00102f40(local_28);
  uVar3 = FUN_00102f40(local_20);
  uVar1 = FUN_001036d7(uVar3,uVar2,uVar1);
  FUN_001031ba(&local_30,uVar1);
  return;
}




undefined8 FUN_00102f40(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031d0(param_1,param_2,param_3);
  return;
}




void FUN_00101f9e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010326a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103442(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00101547(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001015b0(param_1,2);
  if ((void *)*puVar1 != (void *)0x0) {
    operator_delete__((void *)*puVar1);
  }
  return;
}




void FUN_001029ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e3f(param_2);
  uVar2 = FUN_00102e3f(param_1);
  FUN_00102e8b(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101b78(undefined8 param_1)

{
  FUN_00101ec2(param_1);
  FUN_00101ee2(param_1);
  return;
}




long FUN_00103331(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_00103c51(void)

{
  return 0;
}




long FUN_00102db0(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00102dc6(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c01(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103049(param_2);
  uVar2 = FUN_00103049(param_1);
  FUN_00102e8b(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103f3b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102e15(undefined8 param_1,undefined8 param_2)

{
  FUN_0010311e(param_1,param_2);
  return;
}




void FUN_00103cf3(void)

{
  return;
}




void FUN_0010376f(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101b18(undefined8 param_1)

{
  FUN_00101ba4(param_1);
  return;
}




void FUN_001037ef(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102882(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103185(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103331(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103e9f(void *param_1)

{
  free(param_1);
  return 1;
}




long FUN_00102968(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101fc0(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101fc0(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001035cb(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001036c2(&local_10);
  FUN_00102ec0(uVar1);
  return;
}




void FUN_00102d76(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103cc7(void)

{
  return;
}




void FUN_0010301b(undefined8 param_1,undefined8 param_2)

{
  FUN_0010326a(param_1,param_2,0);
  return;
}




undefined8 FUN_00102c59(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c86(param_1,param_2);
  return param_1;
}




void FUN_00101585(undefined8 param_1)

{
  FUN_001015b0(param_1,2);
  return;
}




void FUN_00103d35(void)

{
  return;
}




void FUN_00101c16(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f5e(param_1);
  FUN_00101f70(*param_1,param_1[1],uVar1);
  FUN_00101bc4(param_1);
  return;
}




void FUN_001030da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102dc6(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101b01(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_001036c2(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001033f5(undefined8 param_1)

{
  FUN_00103442(param_1);
  return;
}




undefined8 FUN_00103201(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001033f5(param_1);
  puVar1 = (undefined8 *)FUN_00103413(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103cb1(void)

{
  return;
}




void FUN_00101509(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001015b0(param_1,2);
  if ((void *)*puVar1 != (void *)0x0) {
    operator_delete__((void *)*puVar1);
  }
  return;
}




void FUN_00101a87(void)

{
  FUN_0010176c();
  FUN_001018ef();
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ed8)();
  return;
}




void FUN_0010399e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101bc4(long *param_1)

{
  FUN_00101f24(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101b18(param_1);
  return;
}




void FUN_00102e8b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103150(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001025da(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f9e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101450();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_00102ce6(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102bca(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103cd2(void)

{
  return;
}




undefined8 FUN_00103442(void)

{
  return 0xfffffffffffffff;
}




void FUN_001018ef(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b58(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 00101924 to 00101a11 has its CatchHandler @ 00101a5d */
  local_68 = operator_new__(800);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  local_60 = FUN_00101c5e(local_58);
  FUN_00101cae(local_38,&local_60);
  FUN_00101cdc(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c5e(local_58);
  FUN_00101cae(local_38,&local_60);
  FUN_00101cdc(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c5e(local_58);
  FUN_00101cae(local_38,&local_60);
  FUN_00101cdc(local_58,local_38[0],1,&local_68);
  FUN_00101da2(local_38,local_58);
                    /* try { // try from 00101a19 to 00101a1d has its CatchHandler @ 00101a48 */
  FUN_00101585(local_38);
  FUN_00101c16(local_38);
  FUN_00101c16(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cae(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101fc0(param_2);
  *param_1 = *puVar1;
  return;
}




ulong FUN_00103b63(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




bool FUN_00103e44(pthread_t *param_1)

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




void FUN_00104020(void)

{
  return;
}




void FUN_0010381b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103d40(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001031ba(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102a54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f40(param_2);
  uVar2 = FUN_00102f40(param_1);
  FUN_00102f52(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102e3f(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103132(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001034da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001035cb(param_2);
  uVar2 = FUN_001035cb(param_1);
  FUN_001035f1(uVar2,uVar1,param_3);
  return;
}




void FUN_00101b58(undefined8 param_1)

{
  FUN_00101b38(param_1);
  return;
}




undefined8 FUN_00102730(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102882(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103cdd(void)

{
  return;
}




void FUN_00103cfe(void)

{
  return;
}




undefined8 FUN_00103d77(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d40,local_18);
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




void FUN_001026ca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cb0(param_1,param_3);
                    /* try { // try from 00102704 to 00102708 has its CatchHandler @ 0010270b */
  FUN_00102ce6(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00103c9b(void)

{
  return;
}




long FUN_001015b0(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00103096(void)

{
  return;
}




void FUN_00102916(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102db0(param_1);
  FUN_00102e15(*param_1,uVar1);
  return;
}




void FUN_001038f1(undefined4 param_1)

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




void FUN_00103f5a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




ulong FUN_00103a5f(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102816(void)

{
  return;
}




void FUN_00102aa5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f90(param_1,param_2,param_3);
  return;
}




void FUN_001036d7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010370c(param_1,param_2,param_3);
  return;
}




void FUN_001031d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033a7(param_1,param_2,param_3);
  return;
}




void FUN_00103c85(void)

{
  return;
}




void FUN_00102825(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d76(param_1,param_2,param_3);
  return;
}




void FUN_00103ca6(void)

{
  return;
}




void FUN_00103845(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




ulong FUN_00102ada(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102fc6(param_1);
  lVar2 = FUN_00102640(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102640(local_40);
  local_30 = FUN_00102640(local_40);
  plVar3 = (long *)FUN_00102fec(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102640(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102fc6(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102fc6(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00102ec0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103c42(void)

{
  return 1;
}




void FUN_001028b6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102dc6(param_3);
  uVar2 = FUN_00102db0(param_1);
  FUN_00102dd8(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103132(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001032b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010345a(param_2);
  uVar2 = FUN_0010345a(param_1);
  FUN_0010346c(uVar2,uVar1,param_3);
  return;
}




void FUN_00102857(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d9d(param_1,param_2);
  return;
}




ulong * FUN_00103413(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00101a9c(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010376f("Calling good()...");
  FUN_00101a87();
  FUN_0010376f("Finished good()");
  FUN_0010376f("Calling bad()...");
  FUN_001015d4();
  FUN_0010376f("Finished bad()");
  return 0;
}




void FUN_00101ba4(undefined8 param_1)

{
  FUN_00101f14(param_1);
  return;
}




void FUN_00102c86(undefined8 param_1,undefined8 param_2)

{
  FUN_00103096(param_1,param_2);
  return;
}




void FUN_001039cc(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001015d4(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b58(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 00101609 to 001016f6 has its CatchHandler @ 00101742 */
  local_68 = operator_new__(800);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  local_60 = FUN_00101c5e(local_58);
  FUN_00101cae(local_38,&local_60);
  FUN_00101cdc(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c5e(local_58);
  FUN_00101cae(local_38,&local_60);
  FUN_00101cdc(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c5e(local_58);
  FUN_00101cae(local_38,&local_60);
  FUN_00101cdc(local_58,local_38[0],1,&local_68);
  FUN_00101da2(local_38,local_58);
                    /* try { // try from 001016fe to 00101702 has its CatchHandler @ 0010172d */
  FUN_00101509(local_38);
  FUN_00101c16(local_38);
  FUN_00101c16(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001027e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d40(param_1,param_2,param_3);
  return;
}




void FUN_00101b38(undefined8 param_1)

{
  FUN_00101b78(param_1);
  return;
}




undefined8 FUN_00103ec2(undefined8 *param_1)

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




void FUN_00103973(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103fb0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103c7a(void)

{
  return;
}




undefined8 FUN_0010258e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f9e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102667(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102c59(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00102788(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102882(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010176c(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b58(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 001017a1 to 00101879 has its CatchHandler @ 001018c5 */
  local_68 = operator_new__(800);
  local_60 = FUN_00101c5e(local_58);
  FUN_00101cae(local_38,&local_60);
  FUN_00101cdc(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c5e(local_58);
  FUN_00101cae(local_38,&local_60);
  FUN_00101cdc(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c5e(local_58);
  FUN_00101cae(local_38,&local_60);
  FUN_00101cdc(local_58,local_38[0],1,&local_68);
  FUN_00101da2(local_38,local_58);
                    /* try { // try from 00101881 to 00101885 has its CatchHandler @ 001018b0 */
  FUN_00101547(local_38);
  FUN_00101c16(local_38);
  FUN_00101c16(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001038c6(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001033a7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102f40(param_1);
  uVar1 = FUN_0010352a(uVar1,param_2,param_3);
  FUN_001031ba(&local_10,uVar1);
  return;
}




void FUN_00101ee2(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103d14(void)

{
  return;
}




void FUN_00101da2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001026b8(param_2);
  FUN_00102667(&local_31,uVar1);
  uVar1 = FUN_00102640(param_2);
                    /* try { // try from 00101e08 to 00101e0c has its CatchHandler @ 00101e75 */
  FUN_001026ca(param_1,uVar1,&local_31);
  FUN_00101ba4(&local_31);
  uVar2 = FUN_00101f5e(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102788(param_2);
  uVar4 = FUN_00102730(param_2);
                    /* try { // try from 00101e56 to 00101e5a has its CatchHandler @ 00101e93 */
  uVar1 = FUN_001027e0(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101fc0(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f79(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010311e(void)

{
  return;
}




void FUN_00101f70(undefined8 param_1,undefined8 param_2)

{
  FUN_00102857(param_1,param_2);
  return;
}




void FUN_00101cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101fd2(param_1);
  local_18 = FUN_00102029(&local_38,&local_20);
  local_20 = FUN_0010258e(local_30);
  uVar1 = FUN_001025da(&local_20,local_18);
  FUN_0010206e(local_30,uVar1,param_3,param_4);
  local_20 = FUN_0010258e(local_30);
  FUN_001025da(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void * FUN_0010370c(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00101f5e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102cb0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c86(param_1,param_2);
  FUN_00101ee2(param_1);
  return;
}




undefined8 FUN_001028a4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101f14(void)

{
  return;
}




void FUN_0010389b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103ce8(void)

{
  return;
}




long FUN_00102029(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001028a4(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001028a4(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102d9d(void)

{
  return;
}



