
undefined8 FUN_001034e1(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102810(&local_10);
  return *puVar1;
}




void FUN_00103733(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103ea7(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001038df(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103701(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102e3e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102eac(param_3);
  uVar2 = FUN_00102eac(local_28);
  uVar3 = FUN_00102eac(local_20);
  uVar1 = FUN_001030f1(uVar3,uVar2,uVar1);
  FUN_00103126(&local_30,uVar1);
  return;
}




void FUN_001015eb(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_FS_OFFSET;
  byte bVar4;
  ulong local_1b8;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)FUN_001016ce(param_1,2);
  puVar1 = (undefined4 *)*puVar2;
  puVar2 = local_1a8;
  for (lVar3 = 0x32; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar4 * -2 + 1;
  }
  for (local_1b8 = 0; local_1b8 < 100; local_1b8 = local_1b8 + 1) {
    puVar1[local_1b8] = *(undefined4 *)((long)local_1a8 + local_1b8 * 4);
  }
  FUN_00103733(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010316d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103361(param_1);
  puVar1 = (undefined8 *)FUN_0010337f(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




ulong * FUN_00102f58(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c49(void)

{
  return;
}




long FUN_001016ce(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00101fda(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a46(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001024fa(local_80);
      local_60 = FUN_001028d4(&local_88,&local_78);
      local_70 = FUN_00102b36(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101eca(local_80);
                    /* try { // try from 001022e4 to 0010236f has its CatchHandler @ 00102427 */
      FUN_00102a11(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101eca(local_80);
      puVar2 = (undefined8 *)FUN_00101f2c(&local_88);
      local_70 = FUN_00102b6d(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101eca(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f2c(&local_88);
      local_70 = FUN_00102b6d(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101eca(local_80);
      FUN_00101edc(*local_80,local_80[1],uVar1);
      FUN_00101e90(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102822(local_38,param_1,param_4);
                    /* try { // try from 00102064 to 00102237 has its CatchHandler @ 00102409 */
      local_50 = FUN_001028b6(local_38);
      local_78 = FUN_00101bca(local_80);
      local_48 = FUN_001028d4(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101eca(local_80);
        FUN_00102918(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f2c(&local_88);
        FUN_00102970(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f2c(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f2c(&local_88);
        FUN_001029c0(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101eca(local_80);
        lVar4 = FUN_00102a11(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101eca(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f2c(&local_88);
        FUN_00102918(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f2c(&local_88);
        FUN_001029c0(*puVar2,local_40,local_50);
      }
      FUN_00102882(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001025ac(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_00103126(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101f0a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102782(void)

{
  return;
}




void FUN_001030f1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010329d(param_1,param_2,param_3);
  return;
}




void FUN_00103046(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d32(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a6d(8,param_2);
  *puVar2 = uVar1;
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101450();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_0010321c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033c6(param_2);
  uVar2 = FUN_001033c6(param_1);
  FUN_001033d8(uVar2,uVar1,param_3);
  return;
}




void FUN_001037dc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00103acf(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102d32(undefined8 param_1)

{
  return param_1;
}




void FUN_001027ee(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010375b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f3e(param_1);
  local_18 = FUN_00101f95(&local_38,&local_20);
  local_20 = FUN_001024fa(local_30);
  uVar1 = FUN_00102546(&local_20,local_18);
  FUN_00101fda(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001024fa(local_30);
  FUN_00102546(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103015(param_1,param_2,param_3);
  return;
}




void FUN_00102bf2(undefined8 param_1,undefined8 param_2)

{
  FUN_00103002(param_1,param_2);
  return;
}




undefined8 FUN_001026f4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001027ee(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c12(void)

{
  return;
}




void FUN_0010309e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103c96(void)

{
  return;
}




void FUN_00103ee5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102822(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d32(param_3);
  uVar2 = FUN_00102d1c(param_1);
  FUN_00102d44(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103be6(void)

{
  return;
}




void FUN_0010390a(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103361(undefined8 param_1)

{
  FUN_001033ae(param_1);
  return;
}




void FUN_00103643(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103678(param_1,param_2,param_3);
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




void * FUN_00103678(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103c6a(void)

{
  return;
}




void FUN_001037b1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010308a(void)

{
  return;
}




void FUN_001030bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010326c(param_1,param_2,param_3);
  return;
}




void FUN_00102636(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c1c(param_1,param_3);
                    /* try { // try from 00102670 to 00102674 has its CatchHandler @ 00102677 */
  FUN_00102c52(param_1,param_2);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




void FUN_00103446(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103537(param_2);
  uVar2 = FUN_00103537(param_1);
  FUN_0010355d(uVar2,uVar1,param_3);
  return;
}




void FUN_00101aa4(undefined8 param_1)

{
  FUN_00101ae4(param_1);
  return;
}




void FUN_00102c52(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b36(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00101e80(void)

{
  return;
}




void FUN_00103502(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035cb(param_1,param_2,param_3);
  return;
}




void FUN_00103c3e(void)

{
  return;
}




void FUN_00102efc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010313c(param_1,param_2,param_3);
  return;
}




void FUN_00102f32(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102624(param_1);
  FUN_0010316d(uVar1);
  return;
}




void FUN_00102d44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d32(param_3);
  FUN_00103046(param_1,param_2,uVar1);
  return;
}




void FUN_00102f87(undefined8 param_1,undefined8 param_2)

{
  FUN_001031d6(param_1,param_2,0);
  return;
}




undefined8 FUN_00103e0b(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001038b7(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d0e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102624(param_2);
  FUN_001025d3(&local_31,uVar1);
  uVar1 = FUN_001025ac(param_2);
                    /* try { // try from 00101d74 to 00101d78 has its CatchHandler @ 00101de1 */
  FUN_00102636(param_1,uVar1,&local_31);
  FUN_00101b10(&local_31);
  uVar2 = FUN_00101eca(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001026f4(param_2);
  uVar4 = FUN_0010269c(param_2);
                    /* try { // try from 00101dc2 to 00101dc6 has its CatchHandler @ 00101dff */
  uVar1 = FUN_0010274c(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103938(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_00102a46(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f32(param_1);
  lVar2 = FUN_001025ac(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001025ac(local_40);
  local_30 = FUN_001025ac(local_40);
  plVar3 = (long *)FUN_00102f58(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001025ac(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f32(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f32(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong * FUN_0010337f(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102c1c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bf2(param_1,param_2);
  FUN_00101e4e(param_1);
  return;
}




void FUN_00103787(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00102eac(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ca1(void)

{
  return;
}




void FUN_0010313c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103313(param_1,param_2,param_3);
  return;
}




void FUN_00102d81(undefined8 param_1,undefined8 param_2)

{
  FUN_0010308a(param_1,param_2);
  return;
}




void FUN_00101ac4(undefined8 param_1)

{
  FUN_00101aa4(param_1);
  return;
}




void FUN_00103f80(void)

{
  return;
}




void FUN_00101edc(undefined8 param_1,undefined8 param_2)

{
  FUN_001027c3(param_1,param_2);
  return;
}




void FUN_0010326c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103446(param_1,param_2,param_3);
  return;
}




void FUN_00103807(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010355d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102eac(param_3);
  uVar2 = FUN_00102eac(local_28);
  uVar3 = FUN_00102eac(local_20);
  uVar1 = FUN_00103643(uVar3,uVar2,uVar1);
  FUN_00103126(&local_30,uVar1);
  return;
}




void FUN_001033d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102eac(param_3);
  uVar2 = FUN_001034e1(local_28);
  uVar3 = FUN_001034e1(local_20);
  uVar1 = FUN_00103502(uVar3,uVar2,uVar1);
  FUN_00103126(&local_30,uVar1);
  return;
}




void FUN_00103c8b(void)

{
  return;
}




void FUN_00101a84(undefined8 param_1)

{
  FUN_00101b10(param_1);
  return;
}




undefined8 FUN_00101bca(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f0a(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001016f2(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ac4(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 00101727 to 001017ff has its CatchHandler @ 0010184b */
  local_68 = operator_new__(200);
  local_60 = FUN_00101bca(local_58);
  FUN_00101c1a(local_38,&local_60);
  FUN_00101c48(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bca(local_58);
  FUN_00101c1a(local_38,&local_60);
  FUN_00101c48(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bca(local_58);
  FUN_00101c1a(local_38,&local_60);
  FUN_00101c48(local_58,local_38[0],1,&local_68);
  FUN_00101d0e(local_38,local_58);
                    /* try { // try from 00101807 to 0010180b has its CatchHandler @ 00101836 */
  FUN_00101509(local_38);
  FUN_00101b82(local_38);
  FUN_00101b82(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bfc(void)

{
  return;
}




undefined8 FUN_00101eca(undefined8 param_1)

{
  return param_1;
}




void FUN_00103002(void)

{
  return;
}




void FUN_001027c3(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d09(param_1,param_2);
  return;
}




undefined8 FUN_00101a6d(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102e2c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103cac(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_0010362e(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101b82(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101eca(param_1);
  FUN_00101edc(*param_1,param_1[1],uVar1);
  FUN_00101b30(param_1);
  return;
}




undefined8 FUN_00101f2c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c28(void)

{
  return;
}




void FUN_0010396b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001033ae(void)

{
  return 0xfffffffffffffff;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00102ce2(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00102fb5(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010309e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001036db(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101e4e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_001028b6(undefined8 param_1)

{
  FUN_00102d1c(param_1);
  return;
}




undefined8 FUN_00103ce3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103cac,local_18);
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




undefined8 FUN_00103e2e(undefined8 *param_1)

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




void FUN_00102882(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d1c(param_1);
  FUN_00102d81(*param_1,uVar1);
  return;
}




undefined8 FUN_00101a08(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036db("Calling good()...");
  FUN_001019f8();
  FUN_001036db("Finished good()");
  FUN_001036db("Calling bad()...");
  FUN_001016f2();
  FUN_001036db("Finished bad()");
  return 0;
}




void FUN_00103c75(void)

{
  return;
}




void FUN_00101ae4(undefined8 param_1)

{
  FUN_00101e2e(param_1);
  FUN_00101e4e(param_1);
  return;
}




void FUN_001031d6(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001033ae(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00102bc5(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bf2(param_1,param_2);
  return param_1;
}




int FUN_00103bcc(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103c1d(void)

{
  return;
}




void FUN_00102970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e2c(param_2);
  uVar2 = FUN_00102e2c(param_1);
  FUN_00102e3e(uVar2,uVar1,param_3);
  return;
}




void FUN_00102d09(void)

{
  return;
}




void FUN_00103832(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001033c6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c5f(void)

{
  return;
}




void FUN_001029c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102eac(param_2);
  uVar2 = FUN_00102eac(param_1);
  FUN_00102ebe(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c80(void)

{
  return;
}




ulong FUN_001039cb(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001019f8(void)

{
  FUN_00101875();
  return;
}




long FUN_00102d1c(long param_1)

{
  return param_1 + 8;
}




void FUN_00103015(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010321c(param_1,param_2,param_3);
  return;
}




void FUN_00103c33(void)

{
  return;
}




void FUN_00101875(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ac4(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 001018aa to 00101982 has its CatchHandler @ 001019ce */
  local_68 = operator_new__(400);
  local_60 = FUN_00101bca(local_58);
  FUN_00101c1a(local_38,&local_60);
  FUN_00101c48(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bca(local_58);
  FUN_00101c1a(local_38,&local_60);
  FUN_00101c48(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bca(local_58);
  FUN_00101c1a(local_38,&local_60);
  FUN_00101c48(local_58,local_38[0],1,&local_68);
  FUN_00101d0e(local_38,local_58);
                    /* try { // try from 0010198a to 0010198e has its CatchHandler @ 001019b9 */
  FUN_001015eb(local_38);
  FUN_00101b82(local_38);
  FUN_00101b82(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b6d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102fb5(param_2);
  uVar2 = FUN_00102fb5(param_1);
  FUN_00102df7(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103313(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102eac(param_1);
  uVar1 = FUN_00103496(uVar1,param_2,param_3);
  FUN_00103126(&local_10,uVar1);
  return;
}




undefined8 * FUN_00103496(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00102a11(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102efc(param_1,param_2,param_3);
  return;
}




void * FUN_001035cb(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101c1a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f2c(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00101e90(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102791(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00102dab(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010309e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00103c07(void)

{
  return;
}




void FUN_00101b10(undefined8 param_1)

{
  FUN_00101e80(param_1);
  return;
}




void FUN_00101509(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_FS_OFFSET;
  byte bVar4;
  ulong local_1b8;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)FUN_001016ce(param_1,2);
  puVar1 = (undefined4 *)*puVar2;
  puVar2 = local_1a8;
  for (lVar3 = 0x32; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar4 * -2 + 1;
  }
  for (local_1b8 = 0; local_1b8 < 100; local_1b8 = local_1b8 + 1) {
    puVar1[local_1b8] = *(undefined4 *)((long)local_1a8 + local_1b8 * 4);
  }
  FUN_00103733(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e2e(undefined8 param_1)

{
  FUN_00102782(param_1);
  return;
}




void FUN_00102918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dab(param_2);
  uVar2 = FUN_00102dab(param_1);
  FUN_00102df7(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103bf1(void)

{
  return;
}




void FUN_00103c54(void)

{
  return;
}




void FUN_00102791(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ce2(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102810(undefined8 param_1)

{
  return param_1;
}




long FUN_001028d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f2c(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f2c(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101b30(long *param_1)

{
  FUN_00101e90(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a84(param_1);
  return;
}




undefined8 FUN_00103bbd(void)

{
  return 0;
}




void FUN_00103537(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010362e(&local_10);
  FUN_00102e2c(uVar1);
  return;
}




undefined8 FUN_001024fa(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f0a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ec6(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




long FUN_00101f95(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102810(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102810(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_0010269c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027ee(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_0010329d(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_00102624(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101f3e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027ee(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010385d(undefined4 param_1)

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




undefined8 FUN_001025d3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102bc5(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102df7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030bc(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102b36(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f87(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_00102546(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f0a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103bae(void)

{
  return 1;
}




bool FUN_00103db0(pthread_t *param_1)

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




void FUN_0010274c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cac(param_1,param_2,param_3);
  return;
}




void FUN_00102ebe(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}



