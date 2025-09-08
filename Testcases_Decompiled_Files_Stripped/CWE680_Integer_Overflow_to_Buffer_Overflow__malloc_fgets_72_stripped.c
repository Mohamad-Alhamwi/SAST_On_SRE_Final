
void FUN_001028e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d79(param_2);
  uVar2 = FUN_00102d79(param_1);
  FUN_00102dc5(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102c20(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b04(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




undefined8 FUN_001034a5(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001027de(&local_10);
  return *puVar1;
}




void FUN_00103c70(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102dc5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103084(param_1,param_2,param_3);
  return;
}




void FUN_00102bea(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bc0(param_1,param_2);
  FUN_00101e1c(param_1);
  return;
}




void FUN_00101cdc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001025f2(param_2);
  FUN_001025a1(&local_31,uVar1);
  uVar1 = FUN_0010257a(param_2);
                    /* try { // try from 00101d42 to 00101d46 has its CatchHandler @ 00101daf */
  FUN_00102604(param_1,uVar1,&local_31);
  FUN_00101ade(&local_31);
  uVar2 = FUN_00101e98(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001026c2(param_2);
  uVar4 = FUN_0010266a(param_2);
                    /* try { // try from 00101d90 to 00101d94 has its CatchHandler @ 00101dcd */
  uVar1 = FUN_0010271a(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bea(param_1,param_3);
                    /* try { // try from 0010263e to 00102642 has its CatchHandler @ 00102645 */
  FUN_00102c20(param_1,param_2);
  return;
}




undefined8 FUN_00101e98(undefined8 param_1)

{
  return param_1;
}




void FUN_00103104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032db(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001025a1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b93(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




long FUN_0010257a(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_00103e8a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




int FUN_00103b90(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




long FUN_00101f63(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001027de(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001027de(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00103821(undefined4 param_1)

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




undefined8 FUN_001026c2(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001027bc(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103df2(undefined8 *param_1)

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




long FUN_00102cea(long param_1)

{
  return param_1 + 8;
}




void FUN_00102ec6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103104(param_1,param_2,param_3);
  return;
}




void FUN_00101ade(undefined8 param_1)

{
  FUN_00101e4e(param_1);
  return;
}




void FUN_00102c7a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fdf(param_1,param_2,param_3);
  return;
}




void FUN_00101a52(undefined8 param_1)

{
  FUN_00101ade(param_1);
  return;
}




void FUN_00103c18(void)

{
  return;
}




void FUN_001019c7(void)

{
  FUN_0010184c();
  return;
}




void FUN_00103052(void)

{
  return;
}




void FUN_00103baa(void)

{
  return;
}




undefined8 FUN_001024c8(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ed8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103329(undefined8 param_1)

{
  FUN_00103376(param_1);
  return;
}




void FUN_00103c4f(void)

{
  return;
}




void FUN_001034fb(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001035f2(&local_10);
  FUN_00102dfa(uVar1);
  return;
}




undefined8 FUN_00102f7f(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103066(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c39(void)

{
  return;
}




undefined8 FUN_00102dfa(undefined8 param_1)

{
  return param_1;
}




void FUN_00102791(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cd7(param_1,param_2);
  return;
}




void FUN_00102b3b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f7f(param_2);
  uVar2 = FUN_00102f7f(param_1);
  FUN_00102dc5(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103521(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e7a(param_3);
  uVar2 = FUN_00102e7a(local_28);
  uVar3 = FUN_00102e7a(local_20);
  uVar1 = FUN_00103607(uVar3,uVar2,uVar1);
  FUN_001030ee(&local_30,uVar1);
  return;
}




undefined8 FUN_00102b93(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bc0(param_1,param_2);
  return param_1;
}




void FUN_001031e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010338e(param_2);
  uVar2 = FUN_0010338e(param_1);
  FUN_001033a0(uVar2,uVar1,param_3);
  return;
}




void FUN_00102cd7(void)

{
  return;
}




void FUN_00101fa8(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a14(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001024c8(local_80);
      local_60 = FUN_001028a2(&local_88,&local_78);
      local_70 = FUN_00102b04(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101e98(local_80);
                    /* try { // try from 001022b2 to 0010233d has its CatchHandler @ 001023f5 */
      FUN_001029df(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101e98(local_80);
      puVar2 = (undefined8 *)FUN_00101efa(&local_88);
      local_70 = FUN_00102b3b(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00101e98(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101efa(&local_88);
      local_70 = FUN_00102b3b(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101e98(local_80);
      FUN_00101eaa(*local_80,local_80[1],uVar1);
      FUN_00101e5e(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_001027f0(local_38,param_1,param_4);
                    /* try { // try from 00102032 to 00102205 has its CatchHandler @ 001023d7 */
      local_50 = FUN_00102884(local_38);
      local_78 = FUN_00101b98(local_80);
      local_48 = FUN_001028a2(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101e98(local_80);
        FUN_001028e6(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_00101efa(&local_88);
        FUN_0010293e(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101efa(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101efa(&local_88);
        FUN_0010298e(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00101e98(local_80);
        lVar4 = FUN_001029df(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101e98(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101efa(&local_88);
        FUN_001028e6(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101efa(&local_88);
        FUN_0010298e(*puVar2,local_40,local_50);
      }
      FUN_00102850(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102514(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00101ed8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102884(undefined8 param_1)

{
  FUN_00102cea(param_1);
  return;
}




void FUN_0010392f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101a3c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010293e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dfa(param_2);
  uVar2 = FUN_00102dfa(param_1);
  FUN_00102e0c(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001030ee(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101e4e(void)

{
  return;
}




void FUN_001037f6(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103ea9(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101e5e(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010275f(param_1,param_2,param_3);
  }
  return;
}




void FUN_00101afe(long *param_1)

{
  FUN_00101e5e(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00101a52(param_1);
  return;
}




void FUN_001036f7(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101eaa(undefined8 param_1,undefined8 param_2)

{
  FUN_00102791(param_1,param_2);
  return;
}




void FUN_0010340e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034fb(param_2);
  uVar2 = FUN_001034fb(param_1);
  FUN_00103521(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102d79(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103066(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e7a(param_3);
  uVar2 = FUN_00102e7a(local_28);
  uVar3 = FUN_00102e7a(local_20);
  uVar1 = FUN_001030b9(uVar3,uVar2,uVar1);
  FUN_001030ee(&local_30,uVar1);
  return;
}




void FUN_00103c44(void)

{
  return;
}




void FUN_001015c4(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_00101660(param_1,2);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_001036f7(*__ptr);
  free(__ptr);
  return;
}




void FUN_001027bc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010369f(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103c5a(void)

{
  return;
}




undefined8 FUN_001019d7(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010369f("Calling good()...");
  FUN_001019c7();
  FUN_0010369f("Finished good()");
  FUN_0010369f("Calling bad()...");
  FUN_00101684();
  FUN_0010369f("Finished bad()");
  return 0;
}




void FUN_00102cb0(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103c2e(void)

{
  return;
}




void FUN_00101dfc(undefined8 param_1)

{
  FUN_00102750(param_1);
  return;
}




ulong FUN_0010398f(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040b8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong * FUN_00103347(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103bd6(void)

{
  return;
}




undefined8 FUN_001025f2(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e98(param_1);
  FUN_00101eaa(*param_1,param_1[1],uVar1);
  FUN_00101afe(param_1);
  return;
}




void * FUN_0010358f(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_0010271a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c7a(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102d00(undefined8 param_1)

{
  return param_1;
}




void FUN_001029df(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ec6(param_1,param_2,param_3);
  return;
}




void FUN_00102850(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cea(param_1);
  FUN_00102d4f(*param_1,uVar1);
  return;
}




void FUN_001032db(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e7a(param_1);
  uVar1 = FUN_0010345e(uVar1,param_2,param_3);
  FUN_001030ee(&local_10,uVar1);
  return;
}




void FUN_00103e6b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102fdf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031e4(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101efa(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c16(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f0c(param_1);
  local_18 = FUN_00101f63(&local_38,&local_20);
  local_20 = FUN_001024c8(local_30);
  uVar1 = FUN_00102514(&local_20,local_18);
  FUN_00101fa8(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001024c8(local_30);
  FUN_00102514(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103376(void)

{
  return 0x1fffffffffffffff;
}




undefined8 FUN_00102b04(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f51(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103bcb(void)

{
  return;
}




void * FUN_0010363c(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00103084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103234(param_1,param_2,param_3);
  return;
}




void FUN_001037a0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102e7a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001035f2(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_001027de(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a72(undefined8 param_1)

{
  FUN_00101ab2(param_1);
  return;
}




void FUN_00101ed8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102bc0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fcc(param_1,param_2);
  return;
}




ulong FUN_00103a93(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040c0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001038fc(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_0010338e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ee0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined4 * FUN_0010345e(undefined4 *param_1,long param_2,undefined4 *param_3)

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




void FUN_00103607(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010363c(param_1,param_2,param_3);
  return;
}




bool FUN_00103d74(pthread_t *param_1)

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




void FUN_00103c02(void)

{
  return;
}




void FUN_00103234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010340e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010266a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027bc(&local_18,&local_20);
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




void FUN_0010184c(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a92(local_58);
  local_64 = 0x14;
  local_60 = FUN_00101b98(local_58);
  FUN_00101be8(local_38,&local_60);
                    /* try { // try from 001018bc to 00101951 has its CatchHandler @ 0010199d */
  FUN_00101c16(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101b98(local_58);
  FUN_00101be8(local_38,&local_60);
  FUN_00101c16(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101b98(local_58);
  FUN_00101be8(local_38,&local_60);
  FUN_00101c16(local_58,local_38[0],1,&local_64);
  FUN_00101cdc(local_38,local_58);
                    /* try { // try from 00101959 to 0010195d has its CatchHandler @ 00101988 */
  FUN_001015c4(local_38);
  FUN_00101b50(local_38);
  FUN_00101b50(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102f51(undefined8 param_1,undefined8 param_2)

{
  FUN_0010319e(param_1,param_2,0);
  return;
}




void FUN_0010371f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103bb5(void)

{
  return;
}




void FUN_00103066(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00101a92(undefined8 param_1)

{
  FUN_00101a72(param_1);
  return;
}




void FUN_00103c65(void)

{
  return;
}




void FUN_001038ce(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103bec(void)

{
  return;
}




void FUN_00102d12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d00(param_3);
  FUN_00103010(param_1,param_2,uVar1);
  return;
}




void FUN_001027f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d00(param_3);
  uVar2 = FUN_00102cea(param_1);
  FUN_00102d12(*param_1,uVar2,uVar1);
  return;
}




void FUN_0010319e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103376(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




undefined8 FUN_00103ca7(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c70,local_18);
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




void _FINI_0(void)

{
  if (DAT_00107028 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101470();
    DAT_00107028 = 1;
    return;
  }
  return;
}




long FUN_00103265(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_00102e8c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_001030b9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103265(param_1,param_2,param_3);
  return;
}




void FUN_00101ab2(undefined8 param_1)

{
  FUN_00101dfc(param_1);
  FUN_00101e1c(param_1);
  return;
}




undefined8 FUN_00101f0c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027bc(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101684(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_74;
  undefined8 local_70;
  undefined local_68 [32];
  undefined8 local_48 [3];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a92(local_68);
  local_74 = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
                    /* try { // try from 001016db to 001017d6 has its CatchHandler @ 00101822 */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_0010369f("fgets() failed.");
  }
  else {
    local_74 = atoi(local_2e);
  }
  local_70 = FUN_00101b98(local_68);
  FUN_00101be8(local_48,&local_70);
  FUN_00101c16(local_68,local_48[0],1,&local_74);
  local_70 = FUN_00101b98(local_68);
  FUN_00101be8(local_48,&local_70);
  FUN_00101c16(local_68,local_48[0],1,&local_74);
  local_70 = FUN_00101b98(local_68);
  FUN_00101be8(local_48,&local_70);
  FUN_00101c16(local_68,local_48[0],1,&local_74);
  FUN_00101cdc(local_48,local_68);
                    /* try { // try from 001017de to 001017e2 has its CatchHandler @ 0010180d */
  FUN_00101529(local_48);
  FUN_00101b50(local_48);
  FUN_00101b50(local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010275f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cb0(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103b72(void)

{
  return 1;
}




void FUN_00103be1(void)

{
  return;
}




long FUN_001028a2(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101efa(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101efa(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00103c0d(void)

{
  return;
}




void FUN_00101529(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_00101660(param_1,2);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_001036f7(*__ptr);
  free(__ptr);
  return;
}




undefined8 FUN_00103dcf(void *param_1)

{
  free(param_1);
  return 1;
}




ulong FUN_00102a14(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102efc(param_1);
  lVar2 = FUN_0010257a(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010257a(local_40);
  local_30 = FUN_0010257a(local_40);
  plVar3 = (long *)FUN_00102f22(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010257a(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102efc(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102efc(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00101b98(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ed8(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102d00(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101a3c(4,param_2);
  *puVar2 = uVar1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




undefined8 FUN_00103b81(void)

{
  return 0;
}




void FUN_001037cb(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001036c5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103f50(void)

{
  return;
}




void FUN_00102fcc(void)

{
  return;
}




void FUN_00103775(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103135(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_00103329(param_1);
  puVar1 = (undefined8 *)FUN_00103347(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed0)();
  return;
}




ulong * FUN_00102f22(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_0010298e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e7a(param_2);
  uVar2 = FUN_00102e7a(param_1);
  FUN_00102e8c(uVar2,uVar1,param_3);
  return;
}




void FUN_001034c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010358f(param_1,param_2,param_3);
  return;
}




void FUN_00103bc0(void)

{
  return;
}




void FUN_0010374b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001038a3(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102750(void)

{
  return;
}




void FUN_00103bf7(void)

{
  return;
}




void FUN_0010387b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102d4f(undefined8 param_1,undefined8 param_2)

{
  FUN_00103052(param_1,param_2);
  return;
}




void FUN_00101be8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101efa(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00102efc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025f2(param_1);
  FUN_00103135(uVar1);
  return;
}




long FUN_00101660(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_001033a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e7a(param_3);
  uVar2 = FUN_001034a5(local_28);
  uVar3 = FUN_001034a5(local_20);
  uVar1 = FUN_001034c6(uVar3,uVar2,uVar1);
  FUN_001030ee(&local_30,uVar1);
  return;
}




void FUN_00101e1c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



