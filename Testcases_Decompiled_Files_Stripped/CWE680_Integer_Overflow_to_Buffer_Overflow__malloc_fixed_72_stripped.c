
void FUN_00102c24(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00102c74(undefined8 param_1)

{
  return param_1;
}




long FUN_00101620(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_00103b60(void)

{
  return;
}




void FUN_00103b6b(void)

{
  return;
}




void FUN_00101dd2(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001026d3(param_1,param_2,param_3);
  }
  return;
}




void FUN_00103795(undefined4 param_1)

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




void FUN_00103817(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103613(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102ef3(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102fda(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103d43(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103b4a(void)

{
  return;
}




void FUN_00101a06(undefined8 param_1)

{
  FUN_001019e6(param_1);
  return;
}




void FUN_00103693(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102636(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102730(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e70(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102566(param_1);
  FUN_001030a9(uVar1);
  return;
}




void FUN_00102d39(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ff8(param_1,param_2,param_3);
  return;
}




void FUN_001036bf(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103dfe(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101a26(undefined8 param_1)

{
  FUN_00101d70(param_1);
  FUN_00101d90(param_1);
  return;
}




void FUN_001027f8(undefined8 param_1)

{
  FUN_00102c5e(param_1);
  return;
}




undefined8 FUN_00103062(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_0010343a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103503(param_1,param_2,param_3);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101430();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_0010373f(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010324f(param_1,param_2,param_3);
  return;
}




ulong FUN_00103903(long param_1,ulong param_2,long param_3)

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




void FUN_00102b94(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102a78(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




void FUN_00101f1c(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102988(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_0010243c(local_80);
      local_60 = FUN_00102816(&local_88,&local_78);
      local_70 = FUN_00102a78(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101e0c(local_80);
                    /* try { // try from 00102226 to 001022b1 has its CatchHandler @ 00102369 */
      FUN_00102953(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101e0c(local_80);
      puVar2 = (undefined8 *)FUN_00101e6e(&local_88);
      local_70 = FUN_00102aaf(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00101e0c(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101e6e(&local_88);
      local_70 = FUN_00102aaf(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101e0c(local_80);
      FUN_00101e1e(*local_80,local_80[1],uVar1);
      FUN_00101dd2(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00102764(local_38,param_1,param_4);
                    /* try { // try from 00101fa6 to 00102179 has its CatchHandler @ 0010234b */
      local_50 = FUN_001027f8(local_38);
      local_78 = FUN_00101b0c(local_80);
      local_48 = FUN_00102816(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101e0c(local_80);
        FUN_0010285a(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_00101e6e(&local_88);
        FUN_001028b2(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101e6e(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101e6e(&local_88);
        FUN_00102902(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00101e0c(local_80);
        lVar4 = FUN_00102953(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101e0c(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101e6e(&local_88);
        FUN_0010285a(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101e6e(&local_88);
        FUN_00102902(*puVar2,local_40,local_50);
      }
      FUN_001027c4(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103d66(undefined8 *param_1)

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




void FUN_00102d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102dee(param_3);
  uVar2 = FUN_00102dee(local_28);
  uVar3 = FUN_00102dee(local_20);
  uVar1 = FUN_0010302d(uVar3,uVar2,uVar1);
  FUN_00103062(&local_30,uVar1);
  return;
}




void FUN_001031a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103382(param_1,param_2,param_3);
  return;
}




void FUN_00101ac4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e0c(param_1);
  FUN_00101e1e(*param_1,param_1[1],uVar1);
  FUN_00101a72(param_1);
  return;
}




void FUN_00102c4b(void)

{
  return;
}




undefined8 FUN_00102d6e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010194a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103613("Calling good()...");
  FUN_0010193a();
  FUN_00103613("Finished good()");
  FUN_00103613("Calling bad()...");
  FUN_00101644();
  FUN_00103613("Finished bad()");
  return 0;
}




undefined8 FUN_00102a78(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102ec5(param_1,param_2);
  }
  return uVar1;
}




void FUN_00101d90(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00102bee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f53(param_1,param_2,param_3);
  return;
}




void * FUN_001035b0(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00101dc2(void)

{
  return;
}




undefined8 FUN_00102dee(undefined8 param_1)

{
  return param_1;
}




void FUN_001026c4(void)

{
  return;
}




void FUN_00103b1e(void)

{
  return;
}




undefined8 FUN_00103c1b(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103be4,local_18);
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




void FUN_00103bb8(void)

{
  return;
}




undefined8 FUN_00102ced(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102fda(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined4 * FUN_001033d2(undefined4 *param_1,long param_2,undefined4 *param_3)

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




void FUN_0010366b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101584(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_00101620(param_1,2);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_0010366b(*__ptr);
  free(__ptr);
  return;
}




ulong * FUN_001032bb(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102c86(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c74(param_3);
  FUN_00102f84(param_1,param_2,uVar1);
  return;
}




void FUN_00102764(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102c74(param_3);
  uVar2 = FUN_00102c5e(param_1);
  FUN_00102c86(*param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00103419(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102752(&local_10);
  return *puVar1;
}




void FUN_001037ef(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103112(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001032ea(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




undefined8 FUN_0010243c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e4c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103382(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010346f(param_2);
  uVar2 = FUN_0010346f(param_1);
  FUN_00103495(uVar2,uVar1,param_3);
  return;
}




void FUN_00101c50(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102566(param_2);
  FUN_00102515(&local_31,uVar1);
  uVar1 = FUN_001024ee(param_2);
                    /* try { // try from 00101cb6 to 00101cba has its CatchHandler @ 00101d23 */
  FUN_00102578(param_1,uVar1,&local_31);
  FUN_00101a52(&local_31);
  uVar2 = FUN_00101e0c(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102636(param_2);
  uVar4 = FUN_001025de(param_2);
                    /* try { // try from 00101d04 to 00101d08 has its CatchHandler @ 00101d41 */
  uVar1 = FUN_0010268e(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ec5(undefined8 param_1,undefined8 param_2)

{
  FUN_00103112(param_1,param_2,0);
  return;
}




void FUN_00102fc6(void)

{
  return;
}




undefined8 FUN_001030a9(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_0010329d(param_1);
  puVar1 = (undefined8 *)FUN_001032bb(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_00103af5(void)

{
  return 0;
}




void FUN_00103870(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101d70(undefined8 param_1)

{
  FUN_001026c4(param_1);
  return;
}




ulong * FUN_00102e96(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_001032ea(void)

{
  return 0x1fffffffffffffff;
}




undefined8 FUN_00101b0c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e4c(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103ae6(void)

{
  return 1;
}




undefined8 FUN_00102566(undefined8 param_1)

{
  return param_1;
}




void FUN_00102705(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c4b(param_1,param_2);
  return;
}




undefined8 FUN_00101e0c(undefined8 param_1)

{
  return param_1;
}




void FUN_001027c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c5e(param_1);
  FUN_00102cc3(*param_1,uVar1);
  return;
}




undefined8 FUN_001019af(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102f53(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103158(param_1,param_2,param_3);
  return;
}




void FUN_00103bc3(void)

{
  return;
}




void FUN_0010302d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031d9(param_1,param_2,param_3);
  return;
}




ulong FUN_00103a07(long param_1,ulong param_2,long param_3)

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




void FUN_00103bad(void)

{
  return;
}




ulong FUN_00102988(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102e70(param_1);
  lVar2 = FUN_001024ee(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001024ee(local_40);
  local_30 = FUN_001024ee(local_40);
  plVar3 = (long *)FUN_00102e96(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001024ee(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102e70(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102e70(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103b76(void)

{
  return;
}




void FUN_00103842(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102dee(param_3);
  uVar2 = FUN_00103419(local_28);
  uVar3 = FUN_00103419(local_20);
  uVar1 = FUN_0010343a(uVar3,uVar2,uVar1);
  FUN_00103062(&local_30,uVar1);
  return;
}




void FUN_0010329d(undefined8 param_1)

{
  FUN_001032ea(param_1);
  return;
}




bool FUN_00103ce8(pthread_t *param_1)

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




undefined8 FUN_00103566(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103ba2(void)

{
  return;
}




void FUN_00102fda(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102e3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103078(param_1,param_2,param_3);
  return;
}




int FUN_00103b04(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102f40(void)

{
  return;
}




void FUN_00103ec0(void)

{
  return;
}




void FUN_00103714(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010324f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102dee(param_1);
  uVar1 = FUN_001033d2(uVar1,param_2,param_3);
  FUN_00103062(&local_10,uVar1);
  return;
}




void FUN_00103b34(void)

{
  return;
}




long FUN_00102816(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101e6e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101e6e(param_2);
  return lVar1 - *plVar2 >> 2;
}




undefined8 FUN_00102b07(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b34(param_1,param_2);
  return param_1;
}




void FUN_00103b29(void)

{
  return;
}




undefined8 FUN_00101e6e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102953(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e3a(param_1,param_2,param_3);
  return;
}




void FUN_00102f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102c74(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_001019af(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001038a3(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103302(param_2);
  uVar2 = FUN_00103302(param_1);
  FUN_00103314(uVar2,uVar1,param_3);
  return;
}




void FUN_00103b97(void)

{
  return;
}




void FUN_0010376a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103bce(void)

{
  return;
}




void FUN_00102578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b5e(param_1,param_3);
                    /* try { // try from 001025b2 to 001025b6 has its CatchHandler @ 001025b9 */
  FUN_00102b94(param_1,param_2);
  return;
}




long FUN_00102c5e(long param_1)

{
  return param_1 + 8;
}




long FUN_001024ee(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_0010285a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ced(param_2);
  uVar2 = FUN_00102ced(param_1);
  FUN_00102d39(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101e1e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102705(param_1,param_2);
  return;
}




void FUN_00103495(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102dee(param_3);
  uVar2 = FUN_00102dee(local_28);
  uVar3 = FUN_00102dee(local_20);
  uVar1 = FUN_0010357b(uVar3,uVar2,uVar1);
  FUN_00103062(&local_30,uVar1);
  return;
}




void FUN_00102ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031a8(param_1,param_2,param_3);
  return;
}




void FUN_001017bf(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a06(local_58);
  local_64 = 0x14;
  local_60 = FUN_00101b0c(local_58);
  FUN_00101b5c(local_38,&local_60);
                    /* try { // try from 0010182f to 001018c4 has its CatchHandler @ 00101910 */
  FUN_00101b8a(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101b0c(local_58);
  FUN_00101b5c(local_38,&local_60);
  FUN_00101b8a(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101b0c(local_58);
  FUN_00101b5c(local_38,&local_60);
  FUN_00101b8a(local_58,local_38[0],1,&local_64);
  FUN_00101c50(local_38,local_58);
                    /* try { // try from 001018cc to 001018d0 has its CatchHandler @ 001018fb */
  FUN_00101584(local_38);
  FUN_00101ac4(local_38);
  FUN_00101ac4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102752(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ddf(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102cc3(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fc6(param_1,param_2);
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_00101620(param_1,2);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_0010366b(*__ptr);
  free(__ptr);
  return;
}




void FUN_00101644(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a06(local_58);
  local_64 = 0x40000001;
  local_60 = FUN_00101b0c(local_58);
  FUN_00101b5c(local_38,&local_60);
                    /* try { // try from 001016b4 to 00101749 has its CatchHandler @ 00101795 */
  FUN_00101b8a(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101b0c(local_58);
  FUN_00101b5c(local_38,&local_60);
  FUN_00101b8a(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101b0c(local_58);
  FUN_00101b5c(local_38,&local_60);
  FUN_00101b8a(local_58,local_38[0],1,&local_64);
  FUN_00101c50(local_38,local_58);
                    /* try { // try from 00101751 to 00101755 has its CatchHandler @ 00101780 */
  FUN_001014e9(local_38);
  FUN_00101ac4(local_38);
  FUN_00101ac4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103639(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001036e9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102902(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dee(param_2);
  uVar2 = FUN_00102dee(param_1);
  FUN_00102e00(uVar2,uVar1,param_3);
  return;
}




void FUN_00101e4c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void * FUN_00103503(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00103b8c(void)

{
  return;
}




void FUN_00103b81(void)

{
  return;
}




void FUN_001019e6(undefined8 param_1)

{
  FUN_00101a26(param_1);
  return;
}




void FUN_00103be4(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00103302(undefined8 param_1)

{
  return param_1;
}




void FUN_001026d3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c24(param_1,param_2,param_3);
  return;
}




void FUN_001019c6(undefined8 param_1)

{
  FUN_00101a52(param_1);
  return;
}




void FUN_00101b8a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101e80(param_1);
  local_18 = FUN_00101ed7(&local_38,&local_20);
  local_20 = FUN_0010243c(local_30);
  uVar1 = FUN_00102488(&local_20,local_18);
  FUN_00101f1c(local_30,uVar1,param_3,param_4);
  local_20 = FUN_0010243c(local_30);
  FUN_00102488(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b3f(void)

{
  return;
}




void FUN_00103bd9(void)

{
  return;
}




void FUN_00103b55(void)

{
  return;
}




undefined8 FUN_00102488(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00101e4c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102b34(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f40(param_1,param_2);
  return;
}




void FUN_0010268e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bee(param_1,param_2,param_3);
  return;
}




void FUN_00101a52(undefined8 param_1)

{
  FUN_00101dc2(param_1);
  return;
}




undefined8 FUN_00101e80(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102730(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00101ed7(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102752(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102752(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_0010357b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035b0(param_1,param_2,param_3);
  return;
}




void FUN_0010193a(void)

{
  FUN_001017bf();
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




void FUN_00103e50(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102e00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00102730(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00102515(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b07(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103e1d(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001028b2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d6e(param_2);
  uVar2 = FUN_00102d6e(param_1);
  FUN_00102d80(uVar2,uVar1,param_3);
  return;
}




void FUN_00102b5e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b34(param_1,param_2);
  FUN_00101d90(param_1);
  return;
}




void FUN_0010346f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103566(&local_10);
  FUN_00102d6e(uVar1);
  return;
}




long FUN_001031d9(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_00101a72(long *param_1)

{
  FUN_00101dd2(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_001019c6(param_1);
  return;
}




undefined8 FUN_001025de(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102730(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b5c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101e6e(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00102aaf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ef3(param_2);
  uVar2 = FUN_00102ef3(param_1);
  FUN_00102d39(uVar2,uVar1,param_3,param_4);
  return;
}



