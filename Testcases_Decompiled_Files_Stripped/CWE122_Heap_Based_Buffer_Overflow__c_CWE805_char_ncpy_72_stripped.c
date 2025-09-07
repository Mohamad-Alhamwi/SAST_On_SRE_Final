
undefined8 FUN_0010334b(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010267a(&local_10);
  return *puVar1;
}




long FUN_0010369e(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




bool FUN_00103d97(pthread_t *param_1)

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




void FUN_00103819(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001035f1(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010369e(param_1,2);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(__dest,local_78,99);
  __dest[99] = '\0';
  FUN_001036c2(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d16(param_3);
  uVar2 = FUN_00102d16(local_28);
  uVar3 = FUN_00102d16(local_20);
  uVar1 = FUN_00102f5b(uVar3,uVar2,uVar1);
  FUN_00102f90(&local_30,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




undefined8 FUN_00102fd7(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001031cb(param_1);
  puVar1 = (undefined8 *)FUN_001031e9(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




ulong * FUN_00102dc2(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c0f(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101470();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00101e44(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_001028b0(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102364(local_80);
      local_60 = FUN_0010273e(&local_88,&local_78);
      local_70 = FUN_001029a0(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101d34(local_80);
                    /* try { // try from 0010214e to 001021d9 has its CatchHandler @ 00102291 */
      FUN_0010287b(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101d34(local_80);
      puVar2 = (undefined8 *)FUN_00101d96(&local_88);
      local_70 = FUN_001029d7(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101d34(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101d96(&local_88);
      local_70 = FUN_001029d7(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101d34(local_80);
      FUN_00101d46(*local_80,local_80[1],uVar1);
      FUN_00101cfa(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010268c(local_38,param_1,param_4);
                    /* try { // try from 00101ece to 001020a1 has its CatchHandler @ 00102273 */
      local_50 = FUN_00102720(local_38);
      local_78 = FUN_00101a34(local_80);
      local_48 = FUN_0010273e(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101d34(local_80);
        FUN_00102782(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101d96(&local_88);
        FUN_001027da(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101d96(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101d96(&local_88);
        FUN_0010282a(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101d34(local_80);
        lVar4 = FUN_0010287b(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101d34(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101d96(&local_88);
        FUN_00102782(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101d96(&local_88);
        FUN_0010282a(*puVar2,local_40,local_50);
      }
      FUN_001026ec(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102416(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_00102f90(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101d74(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001025ec(void)

{
  return;
}




void FUN_00102f5b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103107(param_1,param_2,param_3);
  return;
}




void FUN_00102eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102b9c(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001018d8(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103086(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103230(param_2);
  uVar2 = FUN_00103230(param_1);
  FUN_00103242(uVar2,uVar1,param_3);
  return;
}




void FUN_00103742(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010391f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102b9c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102658(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001036c2(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101ab2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101da8(param_1);
  local_18 = FUN_00101dff(&local_38,&local_20);
  local_20 = FUN_00102364(local_30);
  uVar1 = FUN_001023b0(&local_20,local_18);
  FUN_00101e44(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102364(local_30);
  FUN_001023b0(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b16(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e7f(param_1,param_2,param_3);
  return;
}




void FUN_00102a5c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e6c(param_1,param_2);
  return;
}




undefined8 FUN_0010255e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102658(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103bd8(void)

{
  return;
}




void FUN_00102f08(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103c5c(void)

{
  return;
}




undefined8 FUN_00103e15(undefined8 *param_1)

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




void FUN_0010268c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102b9c(param_3);
  uVar2 = FUN_00102b86(param_1);
  FUN_00102bae(*param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00103b95(void)

{
  return 1;
}




void FUN_00103844(undefined4 param_1)

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




void FUN_001031cb(undefined8 param_1)

{
  FUN_00103218(param_1);
  return;
}




void FUN_001034ad(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034e2(param_1,param_2,param_3);
  return;
}




void FUN_00103e8e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void * FUN_001034e2(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103c30(void)

{
  return;
}




void FUN_0010371a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102ef4(void)

{
  return;
}




void FUN_00102f26(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030d6(param_1,param_2,param_3);
  return;
}




void FUN_001024a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102a86(param_1,param_3);
                    /* try { // try from 001024da to 001024de has its CatchHandler @ 001024e1 */
  FUN_00102abc(param_1,param_2);
  return;
}




void FUN_001032b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033a1(param_2);
  uVar2 = FUN_001033a1(param_1);
  FUN_001033c7(uVar2,uVar1,param_3);
  return;
}




void FUN_0010190e(undefined8 param_1)

{
  FUN_0010194e(param_1);
  return;
}




void FUN_00102abc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_001029a0(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00101cea(void)

{
  return;
}




void FUN_0010336c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103435(param_1,param_2,param_3);
  return;
}




void FUN_00103c04(void)

{
  return;
}




void FUN_00102d66(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fa6(param_1,param_2,param_3);
  return;
}




void FUN_00102d9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010248e(param_1);
  FUN_00102fd7(uVar1);
  return;
}




void FUN_00102bae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b9c(param_3);
  FUN_00102eb0(param_1,param_2,uVar1);
  return;
}




void FUN_00102df1(undefined8 param_1,undefined8 param_2)

{
  FUN_00103040(param_1,param_2,0);
  return;
}




void FUN_00103c93(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001037ee(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101b78(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010248e(param_2);
  FUN_0010243d(&local_31,uVar1);
  uVar1 = FUN_00102416(param_2);
                    /* try { // try from 00101bde to 00101be2 has its CatchHandler @ 00101c4b */
  FUN_001024a0(param_1,uVar1,&local_31);
  FUN_0010197a(&local_31);
  uVar2 = FUN_00101d34(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010255e(param_2);
  uVar4 = FUN_00102506(param_2);
                    /* try { // try from 00101c2c to 00101c30 has its CatchHandler @ 00101c69 */
  uVar1 = FUN_001025b6(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010389e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_001028b0(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102d9c(param_1);
  lVar2 = FUN_00102416(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102416(local_40);
  local_30 = FUN_00102416(local_40);
  plVar3 = (long *)FUN_00102dc2(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102416(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102d9c(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102d9c(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong * FUN_001031e9(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102a86(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a5c(param_1,param_2);
  FUN_00101cb8(param_1);
  return;
}




void FUN_001036e8(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102d16(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c67(void)

{
  return;
}




void FUN_00102fa6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010317d(param_1,param_2,param_3);
  return;
}




void FUN_00102beb(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ef4(param_1,param_2);
  return;
}




void FUN_0010192e(undefined8 param_1)

{
  FUN_0010190e(param_1);
  return;
}




void FUN_00103ead(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101d46(undefined8 param_1,undefined8 param_2)

{
  FUN_0010262d(param_1,param_2);
  return;
}




void FUN_001030d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032b0(param_1,param_2,param_3);
  return;
}




void FUN_0010376e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001033c7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d16(param_3);
  uVar2 = FUN_00102d16(local_28);
  uVar3 = FUN_00102d16(local_20);
  uVar1 = FUN_001034ad(uVar3,uVar2,uVar1);
  FUN_00102f90(&local_30,uVar1);
  return;
}




void FUN_00103242(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d16(param_3);
  uVar2 = FUN_0010334b(local_28);
  uVar3 = FUN_0010334b(local_20);
  uVar1 = FUN_0010336c(uVar3,uVar2,uVar1);
  FUN_00102f90(&local_30,uVar1);
  return;
}




void FUN_00103c51(void)

{
  return;
}




void FUN_001018ee(undefined8 param_1)

{
  FUN_0010197a(param_1);
  return;
}




undefined8 FUN_00101a34(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d74(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101529(void)

{
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010192e(local_58);
  local_68 = (undefined *)0x0;
  local_68 = (undefined *)malloc(0x32);
  if (local_68 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_68 = 0;
  local_60 = FUN_00101a34(local_58);
  FUN_00101a84(local_38,&local_60);
                    /* try { // try from 001015bb to 00101650 has its CatchHandler @ 0010169c */
  FUN_00101ab2(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a34(local_58);
  FUN_00101a84(local_38,&local_60);
  FUN_00101ab2(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a34(local_58);
  FUN_00101a84(local_38,&local_60);
  FUN_00101ab2(local_58,local_38[0],1,&local_68);
  FUN_00101b78(local_38,local_58);
                    /* try { // try from 00101658 to 0010165c has its CatchHandler @ 00101687 */
  FUN_00103545(local_38);
  FUN_001019ec(local_38);
  FUN_001019ec(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




int FUN_00103bb3(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101d34(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e6c(void)

{
  return;
}




void FUN_0010262d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b73(param_1,param_2);
  return;
}




undefined8 FUN_001018d8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102c96(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c72(void)

{
  return;
}




undefined8 FUN_00103498(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001019ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d34(param_1);
  FUN_00101d46(*param_1,param_1[1],uVar1);
  FUN_0010199a(param_1);
  return;
}




undefined8 FUN_00101d96(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bee(void)

{
  return;
}




void FUN_00103f70(void)

{
  return;
}




void FUN_001038c6(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103ecc(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00103218(void)

{
  return 0xfffffffffffffff;
}




void FUN_00102b4c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00102e1f(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f08(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103545(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010369e(param_1,2);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(__dest,local_78,99);
  __dest[99] = '\0';
  FUN_001036c2(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cb8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00102720(undefined8 param_1)

{
  FUN_00102b86(param_1);
  return;
}




void FUN_00103c7d(void)

{
  return;
}




undefined8 FUN_00103cca(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c93,local_18);
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




void FUN_00103f00(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001026ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b86(param_1);
  FUN_00102beb(*param_1,uVar1);
  return;
}




undefined8 FUN_00101873(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036c2("Calling good()...");
  FUN_00101863();
  FUN_001036c2("Finished good()");
  FUN_001036c2("Calling bad()...");
  FUN_00101529();
  FUN_001036c2("Finished bad()");
  return 0;
}




void FUN_00103c3b(void)

{
  return;
}




void FUN_0010194e(undefined8 param_1)

{
  FUN_00101c98(param_1);
  FUN_00101cb8(param_1);
  return;
}




void FUN_00103040(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103218(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00102a2f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a5c(param_1,param_2);
  return param_1;
}




ulong FUN_00103ab6(long param_1,ulong param_2,long param_3)

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




void FUN_00103be3(void)

{
  return;
}




void FUN_001027da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c96(param_2);
  uVar2 = FUN_00102c96(param_1);
  FUN_00102ca8(uVar2,uVar1,param_3);
  return;
}




void FUN_00102b73(void)

{
  return;
}




void FUN_00103798(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103230(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c25(void)

{
  return;
}




void FUN_0010282a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d16(param_2);
  uVar2 = FUN_00102d16(param_1);
  FUN_00102d28(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c46(void)

{
  return;
}




void FUN_001038f1(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101863(void)

{
  FUN_001016c6();
  return;
}




long FUN_00102b86(long param_1)

{
  return param_1 + 8;
}




void FUN_00102e7f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103086(param_1,param_2,param_3);
  return;
}




void FUN_00103bf9(void)

{
  return;
}




void FUN_001016c6(void)

{
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010192e(local_58);
  local_68 = (undefined *)0x0;
  local_68 = (undefined *)malloc(100);
  if (local_68 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_68 = 0;
  local_60 = FUN_00101a34(local_58);
  FUN_00101a84(local_38,&local_60);
                    /* try { // try from 00101758 to 001017ed has its CatchHandler @ 00101839 */
  FUN_00101ab2(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a34(local_58);
  FUN_00101a84(local_38,&local_60);
  FUN_00101ab2(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a34(local_58);
  FUN_00101a84(local_38,&local_60);
  FUN_00101ab2(local_58,local_38[0],1,&local_68);
  FUN_00101b78(local_38,local_58);
                    /* try { // try from 001017f5 to 001017f9 has its CatchHandler @ 00101824 */
  FUN_001035f1(local_38);
  FUN_001019ec(local_38);
  FUN_001019ec(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001029d7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e1f(param_2);
  uVar2 = FUN_00102e1f(param_1);
  FUN_00102c61(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010317d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102d16(param_1);
  uVar1 = FUN_00103300(uVar1,param_2,param_3);
  FUN_00102f90(&local_10,uVar1);
  return;
}




undefined8 * FUN_00103300(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_0010287b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d66(param_1,param_2,param_3);
  return;
}




void * FUN_00103435(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101a84(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101d96(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00101cfa(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001025fb(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00102c15(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f08(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed0)();
  return;
}




void FUN_00103bcd(void)

{
  return;
}




void FUN_0010197a(undefined8 param_1)

{
  FUN_00101cea(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_00101c98(undefined8 param_1)

{
  FUN_001025ec(param_1);
  return;
}




void FUN_00102782(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c15(param_2);
  uVar2 = FUN_00102c15(param_1);
  FUN_00102c61(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00103ba4(void)

{
  return 0;
}




void FUN_00103c1a(void)

{
  return;
}




void FUN_001025fb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b4c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010267a(undefined8 param_1)

{
  return param_1;
}




long FUN_0010273e(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101d96(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101d96(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_0010199a(long *param_1)

{
  FUN_00101cfa(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_001018ee(param_1);
  return;
}




ulong FUN_001039b2(long param_1,ulong param_2,long param_3)

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




void FUN_001033a1(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103498(&local_10);
  FUN_00102c96(uVar1);
  return;
}




undefined8 FUN_00102364(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d74(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103df2(void *param_1)

{
  free(param_1);
  return 1;
}




long FUN_00101dff(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010267a(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010267a(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00102506(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102658(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00103107(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_0010248e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101da8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102658(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001037c3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010243d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a2f(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102c61(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f26(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001029a0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102df1(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_001023b0(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101d74(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103952(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103c88(void)

{
  return;
}




void FUN_001025b6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b16(param_1,param_2,param_3);
  return;
}




void FUN_00102d28(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}



