
undefined8 FUN_00101e0c(undefined8 param_1)

{
  return param_1;
}




void FUN_00101eba(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102926(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001023da(local_80);
      local_60 = FUN_001027b4(&local_88,&local_78);
      local_70 = FUN_00102a16(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101daa(local_80);
                    /* try { // try from 001021c4 to 0010224f has its CatchHandler @ 00102307 */
      FUN_001028f1(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101daa(local_80);
      puVar2 = (undefined8 *)FUN_00101e0c(&local_88);
      local_70 = FUN_00102a4d(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101daa(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101e0c(&local_88);
      local_70 = FUN_00102a4d(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101daa(local_80);
      FUN_00101dbc(*local_80,local_80[1],uVar1);
      FUN_00101d70(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102702(local_38,param_1,param_4);
                    /* try { // try from 00101f44 to 00102117 has its CatchHandler @ 001022e9 */
      local_50 = FUN_00102796(local_38);
      local_78 = FUN_00101aaa(local_80);
      local_48 = FUN_001027b4(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101daa(local_80);
        FUN_001027f8(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101e0c(&local_88);
        FUN_00102850(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101e0c(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101e0c(&local_88);
        FUN_001028a0(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101daa(local_80);
        lVar4 = FUN_001028f1(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101daa(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101e0c(&local_88);
        FUN_001027f8(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101e0c(&local_88);
        FUN_001028a0(*puVar2,local_40,local_50);
      }
      FUN_00102762(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00103c90(pthread_t *param_1)

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




void FUN_00103417(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010350e(&local_10);
  FUN_00102d0c(uVar1);
  return;
}




void FUN_001018d8(void)

{
  FUN_0010174e();
  return;
}




int FUN_00103aac(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103b08(void)

{
  return;
}




void FUN_00103dc5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010314c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103006(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102e12(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102504(param_1);
  FUN_0010304d(uVar1);
  return;
}




void FUN_001026ce(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001036e7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102e95(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f7e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001015c4(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019a4(local_58);
  local_68 = (void *)0x0;
  local_68 = realloc((void *)0x0,8);
  local_60 = FUN_00101aaa(local_58);
  FUN_00101afa(local_38,&local_60);
                    /* try { // try from 00101643 to 001016d8 has its CatchHandler @ 00101724 */
  FUN_00101b28(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101aaa(local_58);
  FUN_00101afa(local_38,&local_60);
  FUN_00101b28(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101aaa(local_58);
  FUN_00101afa(local_38,&local_60);
  FUN_00101b28(local_58,local_38[0],1,&local_68);
  FUN_00101bee(local_38,local_58);
                    /* try { // try from 001016e0 to 001016e4 has its CatchHandler @ 0010170f */
  FUN_001014e9(local_38);
  FUN_00101a62(local_38);
  FUN_00101a62(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102662(void)

{
  return;
}




undefined8 FUN_001024b3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102aa5(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102ee2(void)

{
  return;
}




void FUN_00103797(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001019f0(undefined8 param_1)

{
  FUN_00101d60(param_1);
  return;
}




void FUN_001028a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d8c(param_2);
  uVar2 = FUN_00102d8c(param_1);
  FUN_00102d9e(uVar2,uVar1,param_3);
  return;
}




void FUN_0010343d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d8c(param_3);
  uVar2 = FUN_00102d8c(local_28);
  uVar3 = FUN_00102d8c(local_20);
  uVar1 = FUN_00103523(uVar3,uVar2,uVar1);
  FUN_00103006(&local_30,uVar1);
  return;
}




void FUN_00102f6a(void)

{
  return;
}




undefined8 FUN_00102c8b(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f7e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001028f1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ddc(param_1,param_2,param_3);
  return;
}




void FUN_001030fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001032a6(param_2);
  uVar2 = FUN_001032a6(param_1);
  FUN_001032b8(uVar2,uVar1,param_3);
  return;
}




void FUN_00101dbc(undefined8 param_1,undefined8 param_2)

{
  FUN_001026a3(param_1,param_2);
  return;
}




void FUN_00103b29(void)

{
  return;
}




void FUN_00103712(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102516(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102afc(param_1,param_3);
                    /* try { // try from 00102550 to 00102554 has its CatchHandler @ 00102557 */
  FUN_00102b32(param_1,param_2);
  return;
}




void FUN_00103af2(void)

{
  return;
}




undefined8 FUN_00102aa5(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ad2(param_1,param_2);
  return param_1;
}




void FUN_00103da6(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101e1e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001026ce(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102504(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d87(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101d0e(undefined8 param_1)

{
  FUN_00102662(param_1);
  return;
}




void FUN_00103b3f(void)

{
  return;
}




void FUN_00103326(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103417(param_2);
  uVar2 = FUN_00103417(param_1);
  FUN_0010343d(uVar2,uVar1,param_3);
  return;
}




void FUN_00101dea(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010301c(param_1,param_2,param_3);
  return;
}




long FUN_0010317d(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_0010257c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001026ce(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010384b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103adc(void)

{
  return;
}




void FUN_00103691(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_0010248c(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00102c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c12(param_3);
  FUN_00102f26(param_1,param_2,uVar1);
  return;
}




void FUN_00102e67(undefined8 param_1,undefined8 param_2)

{
  FUN_001030b6(param_1,param_2,0);
  return;
}




void FUN_00103613(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ef5(param_1,param_2,param_3);
  return;
}




void FUN_00102c61(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f6a(param_1,param_2);
  return;
}




undefined8 FUN_001023da(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dea(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001019a4(undefined8 param_1)

{
  FUN_00101984(param_1);
  return;
}




void FUN_00102fd1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010317d(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102a16(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102e67(param_1,param_2);
  }
  return uVar1;
}




void * FUN_001034ab(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00102c12(undefined8 param_1)

{
  return param_1;
}




void FUN_001026a3(undefined8 param_1,undefined8 param_2)

{
  FUN_00102be9(param_1,param_2);
  return;
}




void FUN_00102796(undefined8 param_1)

{
  FUN_00102bfc(param_1);
  return;
}




ulong FUN_00102926(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102e12(param_1);
  lVar2 = FUN_0010248c(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010248c(local_40);
  local_30 = FUN_0010248c(local_40);
  plVar3 = (long *)FUN_00102e38(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010248c(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102e12(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102e12(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103e60(void)

{
  return;
}




void FUN_00103b8c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_0010304d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103241(param_1);
  puVar1 = (undefined8 *)FUN_0010325f(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00102671(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bc2(param_1,param_2,param_3);
  return;
}




void FUN_00102bc2(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001015a0(param_1,2);
  __ptr = (undefined4 *)*puVar1;
  *__ptr = 1;
  __ptr[1] = 1;
  FUN_00103818(__ptr);
  free(__ptr);
  return;
}




undefined8 FUN_0010194d(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103523(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103558(param_1,param_2,param_3);
  return;
}




void FUN_001035e1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001019c4(undefined8 param_1)

{
  FUN_00101d0e(param_1);
  FUN_00101d2e(param_1);
  return;
}




void FUN_00102702(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102c12(param_3);
  uVar2 = FUN_00102bfc(param_1);
  FUN_00102c24(*param_1,uVar2,uVar1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




void * FUN_00103558(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00102850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d0c(param_2);
  uVar2 = FUN_00102d0c(param_1);
  FUN_00102d1e(uVar2,uVar1,param_3);
  return;
}




void FUN_001037ea(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010314c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103326(param_1,param_2,param_3);
  return;
}




void FUN_00101bee(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102504(param_2);
  FUN_001024b3(&local_31,uVar1);
  uVar1 = FUN_0010248c(param_2);
                    /* try { // try from 00101c54 to 00101c58 has its CatchHandler @ 00101cc1 */
  FUN_00102516(param_1,uVar1,&local_31);
  FUN_001019f0(&local_31);
  uVar2 = FUN_00101daa(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001025d4(param_2);
  uVar4 = FUN_0010257c(param_2);
                    /* try { // try from 00101ca2 to 00101ca6 has its CatchHandler @ 00101cdf */
  uVar1 = FUN_0010262c(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010301c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031f3(param_1,param_2,param_3);
  return;
}




long FUN_00102bfc(long param_1)

{
  return param_1 + 8;
}




void FUN_00102b32(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102a16(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




undefined8 FUN_0010350e(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001036bc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103b1e(void)

{
  return;
}




undefined8 FUN_00102d8c(undefined8 param_1)

{
  return param_1;
}




long FUN_001027b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101e0c(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101e0c(param_2);
  return lVar1 - *plVar2 >> 3;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_0010262c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b8c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001026f0(undefined8 param_1)

{
  return param_1;
}




void FUN_001032b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d8c(param_3);
  uVar2 = FUN_001033c1(local_28);
  uVar3 = FUN_001033c1(local_20);
  uVar1 = FUN_001033e2(uVar3,uVar2,uVar1);
  FUN_00103006(&local_30,uVar1);
  return;
}




void FUN_00102f26(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102c12(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010194d(8,param_2);
  *puVar2 = uVar1;
  return;
}




ulong FUN_001038ab(long param_1,ulong param_2,long param_3)

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




void FUN_00103241(undefined8 param_1)

{
  FUN_0010328e(param_1);
  return;
}




void FUN_00102afc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ad2(param_1,param_2);
  FUN_00101d2e(param_1);
  return;
}




void FUN_00101a10(long *param_1)

{
  FUN_00101d70(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101964(param_1);
  return;
}




void FUN_00101d60(void)

{
  return;
}




ulong * FUN_0010325f(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103b55(void)

{
  return;
}




undefined8 * FUN_00103376(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00103818(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00103bc3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103b8c,local_18);
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




void FUN_00103b4a(void)

{
  return;
}




void FUN_001031f3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102d8c(param_1);
  uVar1 = FUN_00103376(uVar1,param_2,param_3);
  FUN_00103006(&local_10,uVar1);
  return;
}




void FUN_00101b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101e1e(param_1);
  local_18 = FUN_00101e75(&local_38,&local_20);
  local_20 = FUN_001023da(local_30);
  uVar1 = FUN_00102426(&local_20,local_18);
  FUN_00101eba(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001023da(local_30);
  FUN_00102426(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102762(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102bfc(param_1);
  FUN_00102c61(*param_1,uVar1);
  return;
}




void FUN_001030b6(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010328e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00102a4d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e95(param_2);
  uVar2 = FUN_00102e95(param_1);
  FUN_00102cd7(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102f7e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101541(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001015a0(param_1,2);
  __ptr = (undefined4 *)*puVar1;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    FUN_00103818(__ptr);
    free(__ptr);
  }
  return;
}




long FUN_00101e75(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001026f0(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001026f0(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103b76(void)

{
  return;
}




void FUN_00101a62(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101daa(param_1);
  FUN_00101dbc(*param_1,param_1[1],uVar1);
  FUN_00101a10(param_1);
  return;
}




undefined8 FUN_00102d0c(undefined8 param_1)

{
  return param_1;
}




void FUN_001027f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c8b(param_2);
  uVar2 = FUN_00102c8b(param_1);
  FUN_00102cd7(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101984(undefined8 param_1)

{
  FUN_001019c4(param_1);
  return;
}




void FUN_0010373d(undefined4 param_1)

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




undefined8 FUN_00102426(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101dea(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102ef5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030fc(param_1,param_2,param_3);
  return;
}




ulong * FUN_00102e38(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_001033c1(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001026f0(&local_10);
  return *puVar1;
}




void FUN_001033e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034ab(param_1,param_2,param_3);
  return;
}




void FUN_00103b81(void)

{
  return;
}




void FUN_00101afa(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101e0c(param_2);
  *param_1 = *puVar1;
  return;
}




ulong FUN_001039af(long param_1,ulong param_2,long param_3)

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




void FUN_00102d1e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d8c(param_3);
  uVar2 = FUN_00102d8c(local_28);
  uVar3 = FUN_00102d8c(local_20);
  uVar1 = FUN_00102fd1(uVar3,uVar2,uVar1);
  FUN_00103006(&local_30,uVar1);
  return;
}




void FUN_00103667(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102be9(void)

{
  return;
}




void FUN_00103df0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_001018e8(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001035bb("Calling good()...");
  FUN_001018d8();
  FUN_001035bb("Finished good()");
  FUN_001035bb("Calling bad()...");
  FUN_001015c4();
  FUN_001035bb("Finished bad()");
  return 0;
}




void FUN_00103b6b(void)

{
  return;
}




void FUN_00101d70(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102671(param_1,param_2,param_3);
  }
  return;
}




void FUN_0010174e(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019a4(local_58);
  local_68 = (void *)0x0;
  local_68 = realloc((void *)0x0,8);
  local_60 = FUN_00101aaa(local_58);
  FUN_00101afa(local_38,&local_60);
                    /* try { // try from 001017cd to 00101862 has its CatchHandler @ 001018ae */
  FUN_00101b28(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101aaa(local_58);
  FUN_00101afa(local_38,&local_60);
  FUN_00101b28(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101aaa(local_58);
  FUN_00101afa(local_38,&local_60);
  FUN_00101b28(local_58,local_38[0],1,&local_68);
  FUN_00101bee(local_38,local_58);
                    /* try { // try from 0010186a to 0010186e has its CatchHandler @ 00101899 */
  FUN_00101541(local_38);
  FUN_00101a62(local_38);
  FUN_00101a62(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103d0e(undefined8 *param_1)

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




void FUN_00102d9e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




undefined8 FUN_00103ceb(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103b13(void)

{
  return;
}




void FUN_00103b34(void)

{
  return;
}




void FUN_00103b60(void)

{
  return;
}




undefined8 FUN_001025d4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001026ce(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103a8e(void)

{
  return 1;
}




void FUN_00101964(undefined8 param_1)

{
  FUN_001019f0(param_1);
  return;
}




void FUN_001035bb(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001037bf(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
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




undefined8 FUN_00101aaa(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dea(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ae7(void)

{
  return;
}




void FUN_0010363b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010328e(void)

{
  return 0xfffffffffffffff;
}




undefined8 FUN_00101daa(undefined8 param_1)

{
  return param_1;
}




void FUN_00102cd7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f9c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001032a6(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ad2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ee2(param_1,param_2);
  return;
}




void FUN_00103ad1(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




long FUN_001015a0(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00103ac6(void)

{
  return;
}




undefined8 FUN_00103a9d(void)

{
  return 0;
}




void FUN_00101d2e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103afd(void)

{
  return;
}



