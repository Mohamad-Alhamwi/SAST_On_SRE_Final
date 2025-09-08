
undefined8 FUN_001034db(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010280a(&local_10);
  return *puVar1;
}




void FUN_0010372d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103ea1(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001038d9(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001036fb(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102e38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ea6(param_3);
  uVar2 = FUN_00102ea6(local_28);
  uVar3 = FUN_00102ea6(local_20);
  uVar1 = FUN_001030eb(uVar3,uVar2,uVar1);
  FUN_00103120(&local_30,uVar1);
  return;
}




void FUN_001015ce(undefined8 param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101694(param_1,2);
  __ptr = (void *)*puVar1;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)((long)__ptr + local_88) = local_78[local_88];
  }
  *(undefined *)((long)__ptr + 99) = 0;
  FUN_001036d5(__ptr);
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103167(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_0010335b(param_1);
  puVar1 = (undefined8 *)FUN_00103379(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




ulong * FUN_00102f52(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c43(void)

{
  return;
}




long FUN_00101694(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00101fd4(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a40(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001024f4(local_80);
      local_60 = FUN_001028ce(&local_88,&local_78);
      local_70 = FUN_00102b30(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101ec4(local_80);
                    /* try { // try from 001022de to 00102369 has its CatchHandler @ 00102421 */
      FUN_00102a0b(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101ec4(local_80);
      puVar2 = (undefined8 *)FUN_00101f26(&local_88);
      local_70 = FUN_00102b67(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101ec4(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f26(&local_88);
      local_70 = FUN_00102b67(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101ec4(local_80);
      FUN_00101ed6(*local_80,local_80[1],uVar1);
      FUN_00101e8a(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010281c(local_38,param_1,param_4);
                    /* try { // try from 0010205e to 00102231 has its CatchHandler @ 00102403 */
      local_50 = FUN_001028b0(local_38);
      local_78 = FUN_00101bc4(local_80);
      local_48 = FUN_001028ce(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101ec4(local_80);
        FUN_00102912(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f26(&local_88);
        FUN_0010296a(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f26(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f26(&local_88);
        FUN_001029ba(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101ec4(local_80);
        lVar4 = FUN_00102a0b(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101ec4(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f26(&local_88);
        FUN_00102912(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f26(&local_88);
        FUN_001029ba(*puVar2,local_40,local_50);
      }
      FUN_0010287c(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001025a6(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_00103120(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101f04(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010277c(void)

{
  return;
}




void FUN_001030eb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103297(param_1,param_2,param_3);
  return;
}




void FUN_00103040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d2c(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a67(8,param_2);
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




void FUN_00103216(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033c0(param_2);
  uVar2 = FUN_001033c0(param_1);
  FUN_001033d2(uVar2,uVar1,param_3);
  return;
}




void FUN_001037d6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00103ac9(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102d2c(undefined8 param_1)

{
  return param_1;
}




void FUN_001027e8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103755(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c42(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f38(param_1);
  local_18 = FUN_00101f8f(&local_38,&local_20);
  local_20 = FUN_001024f4(local_30);
  uVar1 = FUN_00102540(&local_20,local_18);
  FUN_00101fd4(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001024f4(local_30);
  FUN_00102540(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ca6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010300f(param_1,param_2,param_3);
  return;
}




void FUN_00102bec(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ffc(param_1,param_2);
  return;
}




undefined8 FUN_001026ee(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001027e8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c0c(void)

{
  return;
}




void FUN_00103098(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103c90(void)

{
  return;
}




void FUN_00103edf(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010281c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d2c(param_3);
  uVar2 = FUN_00102d16(param_1);
  FUN_00102d3e(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103be0(void)

{
  return;
}




void FUN_00103904(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010335b(undefined8 param_1)

{
  FUN_001033a8(param_1);
  return;
}




void FUN_0010363d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103672(param_1,param_2,param_3);
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




void * FUN_00103672(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103c64(void)

{
  return;
}




void FUN_001037ab(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103084(void)

{
  return;
}




void FUN_001030b6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103266(param_1,param_2,param_3);
  return;
}




void FUN_00102630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c16(param_1,param_3);
                    /* try { // try from 0010266a to 0010266e has its CatchHandler @ 00102671 */
  FUN_00102c4c(param_1,param_2);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




void FUN_00103440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103531(param_2);
  uVar2 = FUN_00103531(param_1);
  FUN_00103557(uVar2,uVar1,param_3);
  return;
}




void FUN_00101a9e(undefined8 param_1)

{
  FUN_00101ade(param_1);
  return;
}




void FUN_00102c4c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b30(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00101e7a(void)

{
  return;
}




void FUN_001034fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035c5(param_1,param_2,param_3);
  return;
}




void FUN_00103c38(void)

{
  return;
}




void FUN_00102ef6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103136(param_1,param_2,param_3);
  return;
}




void FUN_00102f2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010261e(param_1);
  FUN_00103167(uVar1);
  return;
}




void FUN_00102d3e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d2c(param_3);
  FUN_00103040(param_1,param_2,uVar1);
  return;
}




void FUN_00102f81(undefined8 param_1,undefined8 param_2)

{
  FUN_001031d0(param_1,param_2,0);
  return;
}




undefined8 FUN_00103e05(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001038b1(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d08(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010261e(param_2);
  FUN_001025cd(&local_31,uVar1);
  uVar1 = FUN_001025a6(param_2);
                    /* try { // try from 00101d6e to 00101d72 has its CatchHandler @ 00101ddb */
  FUN_00102630(param_1,uVar1,&local_31);
  FUN_00101b0a(&local_31);
  uVar2 = FUN_00101ec4(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001026ee(param_2);
  uVar4 = FUN_00102696(param_2);
                    /* try { // try from 00101dbc to 00101dc0 has its CatchHandler @ 00101df9 */
  uVar1 = FUN_00102746(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103932(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_00102a40(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f2c(param_1);
  lVar2 = FUN_001025a6(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001025a6(local_40);
  local_30 = FUN_001025a6(local_40);
  plVar3 = (long *)FUN_00102f52(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001025a6(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f2c(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f2c(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong * FUN_00103379(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102c16(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bec(param_1,param_2);
  FUN_00101e48(param_1);
  return;
}




void FUN_00103781(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00102ea6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c9b(void)

{
  return;
}




void FUN_00103136(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010330d(param_1,param_2,param_3);
  return;
}




void FUN_00102d7b(undefined8 param_1,undefined8 param_2)

{
  FUN_00103084(param_1,param_2);
  return;
}




void FUN_00101abe(undefined8 param_1)

{
  FUN_00101a9e(param_1);
  return;
}




void FUN_00103f80(void)

{
  return;
}




void FUN_00101ed6(undefined8 param_1,undefined8 param_2)

{
  FUN_001027bd(param_1,param_2);
  return;
}




void FUN_00103266(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103440(param_1,param_2,param_3);
  return;
}




void FUN_00103801(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103557(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ea6(param_3);
  uVar2 = FUN_00102ea6(local_28);
  uVar3 = FUN_00102ea6(local_20);
  uVar1 = FUN_0010363d(uVar3,uVar2,uVar1);
  FUN_00103120(&local_30,uVar1);
  return;
}




void FUN_001033d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ea6(param_3);
  uVar2 = FUN_001034db(local_28);
  uVar3 = FUN_001034db(local_20);
  uVar1 = FUN_001034fc(uVar3,uVar2,uVar1);
  FUN_00103120(&local_30,uVar1);
  return;
}




void FUN_00103c85(void)

{
  return;
}




void FUN_00101a7e(undefined8 param_1)

{
  FUN_00101b0a(param_1);
  return;
}




undefined8 FUN_00101bc4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f04(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001016b8(void)

{
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101abe(local_58);
  local_68 = (undefined *)0x0;
  local_68 = (undefined *)malloc(0x32);
  if (local_68 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_68 = 0;
  local_60 = FUN_00101bc4(local_58);
  FUN_00101c14(local_38,&local_60);
                    /* try { // try from 0010174a to 001017df has its CatchHandler @ 0010182b */
  FUN_00101c42(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bc4(local_58);
  FUN_00101c14(local_38,&local_60);
  FUN_00101c42(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bc4(local_58);
  FUN_00101c14(local_38,&local_60);
  FUN_00101c42(local_58,local_38[0],1,&local_68);
  FUN_00101d08(local_38,local_58);
                    /* try { // try from 001017e7 to 001017eb has its CatchHandler @ 00101816 */
  FUN_00101509(local_38);
  FUN_00101b7c(local_38);
  FUN_00101b7c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bf6(void)

{
  return;
}




undefined8 FUN_00101ec4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ffc(void)

{
  return;
}




void FUN_001027bd(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d03(param_1,param_2);
  return;
}




undefined8 FUN_00101a67(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102e26(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ca6(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00103628(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101b7c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ec4(param_1);
  FUN_00101ed6(*param_1,param_1[1],uVar1);
  FUN_00101b2a(param_1);
  return;
}




undefined8 FUN_00101f26(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c22(void)

{
  return;
}




void FUN_00103965(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001033a8(void)

{
  return 0xfffffffffffffff;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00102cdc(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00102faf(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103098(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001036d5(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101e48(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_001028b0(undefined8 param_1)

{
  FUN_00102d16(param_1);
  return;
}




undefined8 FUN_00103cdd(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103ca6,local_18);
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




undefined8 FUN_00103e28(undefined8 *param_1)

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




void FUN_0010287c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d16(param_1);
  FUN_00102d7b(*param_1,uVar1);
  return;
}




undefined8 FUN_00101a02(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036d5("Calling good()...");
  FUN_001019f2();
  FUN_001036d5("Finished good()");
  FUN_001036d5("Calling bad()...");
  FUN_001016b8();
  FUN_001036d5("Finished bad()");
  return 0;
}




void FUN_00103c6f(void)

{
  return;
}




void FUN_00101ade(undefined8 param_1)

{
  FUN_00101e28(param_1);
  FUN_00101e48(param_1);
  return;
}




void FUN_001031d0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001033a8(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00102bbf(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bec(param_1,param_2);
  return param_1;
}




int FUN_00103bc6(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103c17(void)

{
  return;
}




void FUN_0010296a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e26(param_2);
  uVar2 = FUN_00102e26(param_1);
  FUN_00102e38(uVar2,uVar1,param_3);
  return;
}




void FUN_00102d03(void)

{
  return;
}




void FUN_0010382c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001033c0(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c59(void)

{
  return;
}




void FUN_001029ba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ea6(param_2);
  uVar2 = FUN_00102ea6(param_1);
  FUN_00102eb8(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c7a(void)

{
  return;
}




ulong FUN_001039c5(long param_1,ulong param_2,long param_3)

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




void FUN_001019f2(void)

{
  FUN_00101855();
  return;
}




long FUN_00102d16(long param_1)

{
  return param_1 + 8;
}




void FUN_0010300f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103216(param_1,param_2,param_3);
  return;
}




void FUN_00103c2d(void)

{
  return;
}




void FUN_00101855(void)

{
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101abe(local_58);
  local_68 = (undefined *)0x0;
  local_68 = (undefined *)malloc(100);
  if (local_68 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_68 = 0;
  local_60 = FUN_00101bc4(local_58);
  FUN_00101c14(local_38,&local_60);
                    /* try { // try from 001018e7 to 0010197c has its CatchHandler @ 001019c8 */
  FUN_00101c42(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bc4(local_58);
  FUN_00101c14(local_38,&local_60);
  FUN_00101c42(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bc4(local_58);
  FUN_00101c14(local_38,&local_60);
  FUN_00101c42(local_58,local_38[0],1,&local_68);
  FUN_00101d08(local_38,local_58);
                    /* try { // try from 00101984 to 00101988 has its CatchHandler @ 001019b3 */
  FUN_001015ce(local_38);
  FUN_00101b7c(local_38);
  FUN_00101b7c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b67(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102faf(param_2);
  uVar2 = FUN_00102faf(param_1);
  FUN_00102df1(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010330d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102ea6(param_1);
  uVar1 = FUN_00103490(uVar1,param_2,param_3);
  FUN_00103120(&local_10,uVar1);
  return;
}




undefined8 * FUN_00103490(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00102a0b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ef6(param_1,param_2,param_3);
  return;
}




void * FUN_001035c5(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101c14(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f26(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00101e8a(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010278b(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00102da5(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103098(&local_18,param_1);
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




void FUN_00103c01(void)

{
  return;
}




void FUN_00101b0a(undefined8 param_1)

{
  FUN_00101e7a(param_1);
  return;
}




void FUN_00101509(undefined8 param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101694(param_1,2);
  __ptr = (void *)*puVar1;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)((long)__ptr + local_88) = local_78[local_88];
  }
  *(undefined *)((long)__ptr + 99) = 0;
  FUN_001036d5(__ptr);
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e28(undefined8 param_1)

{
  FUN_0010277c(param_1);
  return;
}




void FUN_00102912(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102da5(param_2);
  uVar2 = FUN_00102da5(param_1);
  FUN_00102df1(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103beb(void)

{
  return;
}




void FUN_00103c4e(void)

{
  return;
}




void FUN_0010278b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cdc(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010280a(undefined8 param_1)

{
  return param_1;
}




long FUN_001028ce(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f26(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f26(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101b2a(long *param_1)

{
  FUN_00101e8a(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a7e(param_1);
  return;
}




undefined8 FUN_00103bb7(void)

{
  return 0;
}




void FUN_00103531(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103628(&local_10);
  FUN_00102e26(uVar1);
  return;
}




undefined8 FUN_001024f4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f04(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ec0(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




long FUN_00101f8f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010280a(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010280a(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00102696(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027e8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00103297(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_0010261e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101f38(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027e8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103857(undefined4 param_1)

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




undefined8 FUN_001025cd(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102bbf(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102df1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030b6(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102b30(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f81(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_00102540(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f04(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103ba8(void)

{
  return 1;
}




bool FUN_00103daa(pthread_t *param_1)

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




void FUN_00102746(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ca6(param_1,param_2,param_3);
  return;
}




void FUN_00102eb8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}



