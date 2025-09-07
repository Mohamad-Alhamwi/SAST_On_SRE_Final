
undefined8 FUN_00103100(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00103388(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103c18(void)

{
  return;
}




void * FUN_001035a5(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




ulong * FUN_00103359(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102b47(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f8f(param_2);
  uVar2 = FUN_00102f8f(param_1);
  FUN_00102dd1(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102e98(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00102c86(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fef(param_1,param_2,param_3);
  return;
}




void FUN_00103945(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101b5c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ea4(param_1);
  FUN_00101eb6(*param_1,param_1[1],uVar1);
  FUN_00101b0a(param_1);
  return;
}




void FUN_00101c22(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f18(param_1);
  local_18 = FUN_00101f6f(&local_38,&local_20);
  local_20 = FUN_001024d4(local_30);
  uVar1 = FUN_00102520(&local_20,local_18);
  FUN_00101fb4(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001024d4(local_30);
  FUN_00102520(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e86(param_3);
  uVar2 = FUN_00102e86(local_28);
  uVar3 = FUN_00102e86(local_20);
  uVar1 = FUN_001030cb(uVar3,uVar2,uVar1);
  FUN_00103100(&local_30,uVar1);
  return;
}




void FUN_00101a9e(undefined8 param_1)

{
  FUN_00101a7e(param_1);
  return;
}




void FUN_00101eb6(undefined8 param_1,undefined8 param_2)

{
  FUN_0010279d(param_1,param_2);
  return;
}




undefined8 FUN_00102e06(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d1e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d0c(param_3);
  FUN_00103020(param_1,param_2,uVar1);
  return;
}




void FUN_00103ebf(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102f0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025fe(param_1);
  FUN_00103147(uVar1);
  return;
}




undefined8 * FUN_00103470(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_001036db(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001028f2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d85(param_2);
  uVar2 = FUN_00102d85(param_1);
  FUN_00102dd1(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00101f18(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027c8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001033a0(undefined8 param_1)

{
  return param_1;
}




long FUN_0010169a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_001027fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d0c(param_3);
  uVar2 = FUN_00102cf6(param_1);
  FUN_00102d1e(*param_1,uVar2,uVar1);
  return;
}




void FUN_0010279d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ce3(param_1,param_2);
  return;
}




void FUN_00101e6a(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010276b(param_1,param_2,param_3);
  }
  return;
}




void FUN_00103837(undefined4 param_1)

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




undefined8 FUN_00102d85(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103078(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103bcb(void)

{
  return;
}




void FUN_00103c2e(void)

{
  return;
}




void FUN_00101fb4(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a20(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001024d4(local_80);
      local_60 = FUN_001028ae(&local_88,&local_78);
      local_70 = FUN_00102b10(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101ea4(local_80);
                    /* try { // try from 001022be to 00102349 has its CatchHandler @ 00102401 */
      FUN_001029eb(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101ea4(local_80);
      puVar2 = (undefined8 *)FUN_00101f06(&local_88);
      local_70 = FUN_00102b47(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101ea4(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f06(&local_88);
      local_70 = FUN_00102b47(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101ea4(local_80);
      FUN_00101eb6(*local_80,local_80[1],uVar1);
      FUN_00101e6a(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001027fc(local_38,param_1,param_4);
                    /* try { // try from 0010203e to 00102211 has its CatchHandler @ 001023e3 */
      local_50 = FUN_00102890(local_38);
      local_78 = FUN_00101ba4(local_80);
      local_48 = FUN_001028ae(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101ea4(local_80);
        FUN_001028f2(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f06(&local_88);
        FUN_0010294a(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f06(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f06(&local_88);
        FUN_0010299a(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101ea4(local_80);
        lVar4 = FUN_001029eb(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101ea4(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f06(&local_88);
        FUN_001028f2(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f06(&local_88);
        FUN_0010299a(*puVar2,local_40,local_50);
      }
      FUN_0010285c(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010378b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103608(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102fdc(void)

{
  return;
}




long FUN_00103277(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00103c39(void)

{
  return;
}




void FUN_001032ed(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e86(param_1);
  uVar1 = FUN_00103470(uVar1,param_2,param_3);
  FUN_00103100(&local_10,uVar1);
  return;
}




undefined8 FUN_00103b88(void)

{
  return 1;
}




void FUN_00103420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103511(param_2);
  uVar2 = FUN_00103511(param_1);
  FUN_00103537(uVar2,uVar1,param_3);
  return;
}




void FUN_00102d5b(undefined8 param_1,undefined8 param_2)

{
  FUN_00103064(param_1,param_2);
  return;
}




void FUN_00102dd1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103096(param_1,param_2,param_3);
  return;
}




void FUN_00101e28(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103096(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103246(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001027ea(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001019e2(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036b5("Calling good()...");
  FUN_001019d2();
  FUN_001036b5("Finished good()");
  FUN_001036b5("Calling bad()...");
  FUN_001016be();
  FUN_001036b5("Finished bad()");
  return 0;
}




void FUN_00103116(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032ed(param_1,param_2,param_3);
  return;
}




void FUN_00103912(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102bf6(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bcc(param_1,param_2);
  FUN_00101e28(param_1);
  return;
}




void FUN_00103ea0(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102c2c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b10(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_0010294a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e06(param_2);
  uVar2 = FUN_00102e06(param_1);
  FUN_00102e18(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c86(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102cbc(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103c02(void)

{
  return;
}




void FUN_00103537(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e86(param_3);
  uVar2 = FUN_00102e86(local_28);
  uVar3 = FUN_00102e86(local_20);
  uVar1 = FUN_0010361d(uVar3,uVar2,uVar1);
  FUN_00103100(&local_30,uVar1);
  return;
}




void FUN_001016be(void)

{
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a9e(local_58);
  local_68 = (undefined *)0x0;
                    /* try { // try from 001016f3 to 001017d2 has its CatchHandler @ 0010181e */
  local_68 = (undefined *)operator_new__(0x32);
  *local_68 = 0;
  local_60 = FUN_00101ba4(local_58);
  FUN_00101bf4(local_38,&local_60);
  FUN_00101c22(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101ba4(local_58);
  FUN_00101bf4(local_38,&local_60);
  FUN_00101c22(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101ba4(local_58);
  FUN_00101bf4(local_38,&local_60);
  FUN_00101c22(local_58,local_38[0],1,&local_68);
  FUN_00101ce8(local_38,local_58);
                    /* try { // try from 001017da to 001017de has its CatchHandler @ 00101809 */
  FUN_00101549(local_38);
  FUN_00101b5c(local_38);
  FUN_00101b5c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010361d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103652(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001026ce(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001027c8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102fef(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031f6(param_1,param_2,param_3);
  return;
}




void FUN_00103c70(void)

{
  return;
}




void FUN_001027c8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001033b2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e86(param_3);
  uVar2 = FUN_001034bb(local_28);
  uVar3 = FUN_001034bb(local_20);
  uVar1 = FUN_001034dc(uVar3,uVar2,uVar1);
  FUN_00103100(&local_30,uVar1);
  return;
}




undefined8 FUN_00102b9f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bcc(param_1,param_2);
  return param_1;
}




void FUN_00103bd6(void)

{
  return;
}




undefined8 FUN_00102e86(undefined8 param_1)

{
  return param_1;
}




void FUN_0010299a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e86(param_2);
  uVar2 = FUN_00102e86(param_1);
  FUN_00102e98(uVar2,uVar1,param_3);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ec8)();
  return;
}




void FUN_00103c44(void)

{
  return;
}




void FUN_00101a7e(undefined8 param_1)

{
  FUN_00101abe(param_1);
  return;
}




ulong * FUN_00102f32(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_001034bb(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001027ea(&local_10);
  return *puVar1;
}




void FUN_001031b0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103388(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00103078(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103bc0(void)

{
  return;
}




void FUN_00101549(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010169a(param_1,2);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncat(__dest,local_78,100);
  FUN_001036b5(__dest);
  if (__dest != (char *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001037e1(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101a5e(undefined8 param_1)

{
  FUN_00101aea(param_1);
  return;
}




long FUN_00102cf6(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00101f06(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102b10(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f61(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103be1(void)

{
  return;
}




void FUN_00103246(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103420(param_1,param_2,param_3);
  return;
}




void FUN_00101abe(undefined8 param_1)

{
  FUN_00101e08(param_1);
  FUN_00101e28(param_1);
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




void FUN_001038b9(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103c65(void)

{
  return;
}




undefined8 FUN_00103e08(undefined8 *param_1)

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




void * FUN_00103652(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103c4f(void)

{
  return;
}




void FUN_00103020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d0c(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a47(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010285c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cf6(param_1);
  FUN_00102d5b(*param_1,uVar1);
  return;
}




void FUN_00102ce3(void)

{
  return;
}




void FUN_0010333b(undefined8 param_1)

{
  FUN_00103388(param_1);
  return;
}




void FUN_001019d2(void)

{
  FUN_00101848();
  return;
}




undefined8 FUN_00102520(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101ee4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103bec(void)

{
  return;
}




void FUN_00103c0d(void)

{
  return;
}




void FUN_00103c5a(void)

{
  return;
}




undefined8 FUN_001024d4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ee4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103b97(void)

{
  return 0;
}




void FUN_00102ed6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103116(param_1,param_2,param_3);
  return;
}




void FUN_0010276b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cbc(param_1,param_2,param_3);
  return;
}




void FUN_00103761(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00103cbd(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c86,local_18);
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




void FUN_00103891(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001025fe(undefined8 param_1)

{
  return param_1;
}




void FUN_00102890(undefined8 param_1)

{
  FUN_00102cf6(param_1);
  return;
}




void FUN_001034dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035a5(param_1,param_2,param_3);
  return;
}




void FUN_00103064(void)

{
  return;
}




ulong FUN_00103aa9(long param_1,ulong param_2,long param_3)

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




void FUN_00102610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bf6(param_1,param_3);
                    /* try { // try from 0010264a to 0010264e has its CatchHandler @ 00102651 */
  FUN_00102c2c(param_1,param_2);
  return;
}




int FUN_00103ba6(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001036b5(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001038e4(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




long FUN_001028ae(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f06(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f06(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00102d0c(undefined8 param_1)

{
  return param_1;
}




void FUN_0010275c(void)

{
  return;
}




undefined8 FUN_00102f8f(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103078(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001030cb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103277(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102676(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027c8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001031f6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033a0(param_2);
  uVar2 = FUN_001033a0(param_1);
  FUN_001033b2(uVar2,uVar1,param_3);
  return;
}




void FUN_001015f1(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010169a(param_1,2);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncat(__dest,local_78,100);
  FUN_001036b5(__dest);
  if (__dest != (char *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101a47(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001029eb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ed6(param_1,param_2,param_3);
  return;
}




void FUN_0010380c(char param_1)

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




undefined8 FUN_001025ad(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b9f(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101848(void)

{
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a9e(local_58);
  local_68 = (undefined *)0x0;
                    /* try { // try from 0010187d to 0010195c has its CatchHandler @ 001019a8 */
  local_68 = (undefined *)operator_new__(100);
  *local_68 = 0;
  local_60 = FUN_00101ba4(local_58);
  FUN_00101bf4(local_38,&local_60);
  FUN_00101c22(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101ba4(local_58);
  FUN_00101bf4(local_38,&local_60);
  FUN_00101c22(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101ba4(local_58);
  FUN_00101bf4(local_38,&local_60);
  FUN_00101c22(local_58,local_38[0],1,&local_68);
  FUN_00101ce8(local_38,local_58);
                    /* try { // try from 00101964 to 00101968 has its CatchHandler @ 00101993 */
  FUN_001015f1(local_38);
  FUN_00101b5c(local_38);
  FUN_00101b5c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103e81(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103c7b(void)

{
  return;
}




void FUN_001037b6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103de5(void *param_1)

{
  free(param_1);
  return 1;
}




ulong FUN_001039a5(long param_1,ulong param_2,long param_3)

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




void FUN_00101ee4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_00101f6f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001027ea(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001027ea(param_2);
  return lVar1 - *plVar2 >> 3;
}




long FUN_00102586(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_00103735(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103147(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_0010333b(param_1);
  puVar1 = (undefined8 *)FUN_00103359(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_00101ba4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ee4(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c23(void)

{
  return;
}




void FUN_00101b0a(long *param_1)

{
  FUN_00101e6a(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a5e(param_1);
  return;
}




void FUN_00101e5a(void)

{
  return;
}




bool FUN_00103d8a(pthread_t *param_1)

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




void FUN_00103f60(void)

{
  return;
}




void FUN_00102f61(undefined8 param_1,undefined8 param_2)

{
  FUN_001031b0(param_1,param_2,0);
  return;
}




void FUN_00101e08(undefined8 param_1)

{
  FUN_0010275c(param_1);
  return;
}




void FUN_00103ef0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101aea(undefined8 param_1)

{
  FUN_00101e5a(param_1);
  return;
}




void FUN_00103511(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103608(&local_10);
  FUN_00102e06(uVar1);
  return;
}




void FUN_00101ce8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001025fe(param_2);
  FUN_001025ad(&local_31,uVar1);
  uVar1 = FUN_00102586(param_2);
                    /* try { // try from 00101d4e to 00101d52 has its CatchHandler @ 00101dbb */
  FUN_00102610(param_1,uVar1,&local_31);
  FUN_00101aea(&local_31);
  uVar2 = FUN_00101ea4(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001026ce(param_2);
  uVar4 = FUN_00102676(param_2);
                    /* try { // try from 00101d9c to 00101da0 has its CatchHandler @ 00101dd9 */
  uVar1 = FUN_00102726(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00102a20(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f0c(param_1);
  lVar2 = FUN_00102586(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102586(local_40);
  local_30 = FUN_00102586(local_40);
  plVar3 = (long *)FUN_00102f32(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102586(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f0c(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f0c(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102726(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c86(param_1,param_2,param_3);
  return;
}




void FUN_00101bf4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f06(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_0010370d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103bf7(void)

{
  return;
}




undefined8 FUN_00101ea4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102bcc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fdc(param_1,param_2);
  return;
}



