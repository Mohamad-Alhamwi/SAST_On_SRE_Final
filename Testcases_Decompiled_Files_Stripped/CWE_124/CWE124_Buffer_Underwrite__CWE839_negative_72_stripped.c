
void * FUN_00103757(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00103968(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104110(void)

{
  return;
}




ulong FUN_00103b57(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050f8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010393d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001030c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001027ba(param_1);
  FUN_001032fd(uVar1);
  return;
}




void FUN_00101b89(void)

{
  FUN_00101893();
  FUN_00101a0e();
  return;
}




long FUN_0010342d(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_001031a7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033ac(param_1,param_2,param_3);
  return;
}




void FUN_00103e01(void)

{
  return;
}




undefined8 FUN_00101b9e(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103867("Calling good()...");
  FUN_00101b89();
  FUN_00103867("Finished good()");
  FUN_00103867("Calling bad()...");
  FUN_00101718();
  FUN_00103867("Finished bad()");
  return 0;
}




undefined8 FUN_00102769(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102d5b(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00102832(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102984(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001033ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103556(param_2);
  uVar2 = FUN_00103556(param_1);
  FUN_00103568(uVar2,uVar1,param_3);
  return;
}




void FUN_00102170(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102bdc(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102690(local_80);
      local_60 = FUN_00102a6a(&local_88,&local_78);
      local_70 = FUN_00102ccc(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00102060(local_80);
                    /* try { // try from 0010247a to 00102505 has its CatchHandler @ 001025bd */
      FUN_00102ba7(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00102060(local_80);
      puVar2 = (undefined8 *)FUN_001020c2(&local_88);
      local_70 = FUN_00102d03(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00102060(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_001020c2(&local_88);
      local_70 = FUN_00102d03(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00102060(local_80);
      FUN_00102072(*local_80,local_80[1],uVar1);
      FUN_00102026(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_001029b8(local_38,param_1,param_4);
                    /* try { // try from 001021fa to 001023cd has its CatchHandler @ 0010259f */
      local_50 = FUN_00102a4c(local_38);
      local_78 = FUN_00101d60(local_80);
      local_48 = FUN_00102a6a(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00102060(local_80);
        FUN_00102aae(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_001020c2(&local_88);
        FUN_00102b06(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_001020c2(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_001020c2(&local_88);
        FUN_00102b56(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00102060(local_80);
        lVar4 = FUN_00102ba7(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00102060(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_001020c2(&local_88);
        FUN_00102aae(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_001020c2(&local_88);
        FUN_00102b56(*puVar2,local_40,local_50);
      }
      FUN_00102a18(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001029a6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103366(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010353e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




void FUN_00103281(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010342d(param_1,param_2,param_3);
  return;
}




void FUN_00101893(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c5a(local_58);
  local_64 = 7;
  local_60 = FUN_00101d60(local_58);
  FUN_00101db0(local_38,&local_60);
                    /* try { // try from 00101903 to 00101998 has its CatchHandler @ 001019e4 */
  FUN_00101dde(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101d60(local_58);
  FUN_00101db0(local_38,&local_60);
  FUN_00101dde(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101d60(local_58);
  FUN_00101db0(local_38,&local_60);
  FUN_00101dde(local_58,local_38[0],1,&local_64);
  FUN_00101ea4(local_38,local_58);
                    /* try { // try from 001019a0 to 001019a4 has its CatchHandler @ 001019cf */
  FUN_0010157f(local_38);
  FUN_00101d18(local_38);
  FUN_00101d18(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001034f1(undefined8 param_1)

{
  FUN_0010353e(param_1);
  return;
}




void FUN_00103a43(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ee8)();
  return;
}




void FUN_00103d72(void)

{
  return;
}




void FUN_00102f8d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010324c(param_1,param_2,param_3);
  return;
}




void FUN_00102a4c(undefined8 param_1)

{
  FUN_00102eb2(param_1);
  return;
}




void FUN_00103993(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102016(void)

{
  return;
}




undefined8 FUN_00102ec8(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e78(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102959(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e9f(param_1,param_2);
  return;
}




void FUN_00103dca(void)

{
  return;
}




void FUN_001032cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034a3(param_1,param_2,param_3);
  return;
}




bool FUN_00103f3c(pthread_t *param_1)

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




void FUN_00102aae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f41(param_2);
  uVar2 = FUN_00102f41(param_1);
  FUN_00102f8d(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103d9e(void)

{
  return;
}




ulong FUN_00103c5b(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00105100,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103042(param_3);
  uVar2 = FUN_0010366d(local_28);
  uVar3 = FUN_0010366d(local_20);
  uVar1 = FUN_0010368e(uVar3,uVar2,uVar1);
  FUN_001032b6(&local_30,uVar1);
  return;
}




void FUN_001038bf(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001038e7(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103e22(void)

{
  return;
}




void FUN_001039e9(undefined4 param_1)

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




undefined8 FUN_001032b6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001032fd(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_001034f1(param_1);
  puVar1 = (undefined8 *)FUN_0010350f(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00102918(void)

{
  return;
}




void FUN_0010157f(undefined8 param_1)

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
  piVar1 = (int *)FUN_001016f4(param_1,2);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_001038bf(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00103867("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001036c3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001037ba(&local_10);
  FUN_00102fc2(uVar1);
  return;
}




void FUN_00101cc6(long *param_1)

{
  FUN_00102026(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00101c1a(param_1);
  return;
}




long FUN_00102eb2(long param_1)

{
  return param_1 + 8;
}




void FUN_001020a0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_001037ba(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103df6(void)

{
  return;
}




undefined8 FUN_00103147(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010322e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103194(void)

{
  return;
}




undefined8 FUN_00102fc2(undefined8 param_1)

{
  return param_1;
}




void FUN_001031d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102ec8(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101c03(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00104071(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103af7(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102026(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102927(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00103d3a(void)

{
  return 1;
}




void FUN_00102d88(undefined8 param_1,undefined8 param_2)

{
  FUN_00103194(param_1,param_2);
  return;
}




void FUN_001035d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001036c3(param_2);
  uVar2 = FUN_001036c3(param_1);
  FUN_001036e9(uVar2,uVar1,param_3);
  return;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101410();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_00102e9f(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_001039be(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




ulong * FUN_001030ea(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00103f97(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001033fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035d6(param_1,param_2,param_3);
  return;
}




void FUN_00102fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103042(param_3);
  uVar2 = FUN_00103042(local_28);
  uVar3 = FUN_00103042(local_20);
  uVar1 = FUN_00103281(uVar3,uVar2,uVar1);
  FUN_001032b6(&local_30,uVar1);
  return;
}




void FUN_00101d18(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102060(param_1);
  FUN_00102072(*param_1,param_1[1],uVar1);
  FUN_00101cc6(param_1);
  return;
}




long FUN_0010212b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001029a6(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001029a6(param_2);
  return lVar1 - *plVar2 >> 2;
}




ulong * FUN_0010350f(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103a6b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void * FUN_00103804(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_0010368e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103757(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103e6f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103e38,local_18);
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




void FUN_00101ca6(undefined8 param_1)

{
  FUN_00102016(param_1);
  return;
}




void FUN_00101fc4(undefined8 param_1)

{
  FUN_00102918(param_1);
  return;
}




undefined8 FUN_00101c03(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103db4(void)

{
  return;
}




undefined8 FUN_001020d4(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102984(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010322e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102a18(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102eb2(param_1);
  FUN_00102f17(*param_1,uVar1);
  return;
}




void FUN_00101c7a(undefined8 param_1)

{
  FUN_00101fc4(param_1);
  FUN_00101fe4(param_1);
  return;
}




void FUN_0010308e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032cc(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103fba(undefined8 *param_1)

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




void FUN_0010388d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101ea4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001027ba(param_2);
  FUN_00102769(&local_31,uVar1);
  uVar1 = FUN_00102742(param_2);
                    /* try { // try from 00101f0a to 00101f0e has its CatchHandler @ 00101f77 */
  FUN_001027cc(param_1,uVar1,&local_31);
  FUN_00101ca6(&local_31);
  uVar2 = FUN_00102060(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010288a(param_2);
  uVar4 = FUN_00102832(param_2);
                    /* try { // try from 00101f58 to 00101f5c has its CatchHandler @ 00101f95 */
  uVar1 = FUN_001028e2(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001014c9(undefined8 param_1)

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
  piVar1 = (int *)FUN_001016f4(param_1,2);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_001038bf(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00103867("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102690(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020a0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103de0(void)

{
  return;
}




undefined8 FUN_00103d49(void)

{
  return 0;
}




undefined4 * FUN_00103626(undefined4 *param_1,long param_2,undefined4 *param_3)

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




long FUN_001016f4(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_00102eda(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ec8(param_3);
  FUN_001031d8(param_1,param_2,uVar1);
  return;
}




void FUN_0010321a(void)

{
  return;
}




void FUN_00103913(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102072(undefined8 param_1,undefined8 param_2)

{
  FUN_00102959(param_1,param_2);
  return;
}




void FUN_00102b56(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103042(param_2);
  uVar2 = FUN_00103042(param_1);
  FUN_00103054(uVar2,uVar1,param_3);
  return;
}




void FUN_00104033(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001040a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101635(undefined8 param_1)

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
  piVar2 = (int *)FUN_001016f4(param_1,2);
  iVar1 = *piVar2;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_00103867("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_001038bf(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b06(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102fc2(param_2);
  uVar2 = FUN_00102fc2(param_1);
  FUN_00102fd4(uVar2,uVar1,param_3);
  return;
}




void FUN_00101c5a(undefined8 param_1)

{
  FUN_00101c3a(param_1);
  return;
}




void FUN_00103e2d(void)

{
  return;
}




undefined8 FUN_00101d60(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020a0(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001034a3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103042(param_1);
  uVar1 = FUN_00103626(uVar1,param_2,param_3);
  FUN_001032b6(&local_10,uVar1);
  return;
}




void FUN_00102e42(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031a7(param_1,param_2,param_3);
  return;
}




void FUN_00103d93(void)

{
  return;
}




void FUN_00103dd5(void)

{
  return;
}




undefined8 FUN_00102ccc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103119(param_1,param_2);
  }
  return uVar1;
}




void FUN_00102f17(undefined8 param_1,undefined8 param_2)

{
  FUN_0010321a(param_1,param_2);
  return;
}




void FUN_00103a96(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_0010366d(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001029a6(&local_10);
  return *puVar1;
}




void FUN_00103e17(void)

{
  return;
}




void FUN_00102d03(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103147(param_2);
  uVar2 = FUN_00103147(param_1);
  FUN_00102f8d(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103e38(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




int FUN_00103d58(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101c3a(undefined8 param_1)

{
  FUN_00101c7a(param_1);
  return;
}




undefined8 FUN_00102f41(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010322e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010324c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033fc(param_1,param_2,param_3);
  return;
}




void FUN_00103deb(void)

{
  return;
}




void FUN_00101c1a(undefined8 param_1)

{
  FUN_00101ca6(param_1);
  return;
}




void FUN_00102de8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102ccc(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




undefined8 FUN_00103556(undefined8 param_1)

{
  return param_1;
}




void FUN_001036e9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103042(param_3);
  uVar2 = FUN_00103042(local_28);
  uVar3 = FUN_00103042(local_20);
  uVar1 = FUN_001037cf(uVar3,uVar2,uVar1);
  FUN_001032b6(&local_30,uVar1);
  return;
}




undefined8 FUN_00102d5b(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d88(param_1,param_2);
  return param_1;
}




void FUN_00103867(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101fe4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_001020c2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103042(undefined8 param_1)

{
  return param_1;
}




void FUN_00101718(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c5a(local_58);
  local_64 = 0xfffffffb;
  local_60 = FUN_00101d60(local_58);
  FUN_00101db0(local_38,&local_60);
                    /* try { // try from 00101788 to 0010181d has its CatchHandler @ 00101869 */
  FUN_00101dde(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101d60(local_58);
  FUN_00101db0(local_38,&local_60);
  FUN_00101dde(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101d60(local_58);
  FUN_00101db0(local_38,&local_60);
  FUN_00101dde(local_58,local_38[0],1,&local_64);
  FUN_00101ea4(local_38,local_58);
                    /* try { // try from 00101825 to 00101829 has its CatchHandler @ 00101854 */
  FUN_001014c9(local_38);
  FUN_00101d18(local_38);
  FUN_00101d18(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103dbf(void)

{
  return;
}




void FUN_00101db0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001020c2(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00101a0e(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c5a(local_58);
  local_64 = 0xfffffffb;
  local_60 = FUN_00101d60(local_58);
  FUN_00101db0(local_38,&local_60);
                    /* try { // try from 00101a7e to 00101b13 has its CatchHandler @ 00101b5f */
  FUN_00101dde(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101d60(local_58);
  FUN_00101db0(local_38,&local_60);
  FUN_00101dde(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101d60(local_58);
  FUN_00101db0(local_38,&local_60);
  FUN_00101dde(local_58,local_38[0],1,&local_64);
  FUN_00101ea4(local_38,local_58);
                    /* try { // try from 00101b1b to 00101b1f has its CatchHandler @ 00101b4a */
  FUN_00101635(local_38);
  FUN_00101d18(local_38);
  FUN_00101d18(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102060(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00102bdc(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_001030c4(param_1);
  lVar2 = FUN_00102742(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102742(local_40);
  local_30 = FUN_00102742(local_40);
  plVar3 = (long *)FUN_001030ea(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102742(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_001030c4(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_001030c4(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103da9(void)

{
  return;
}




void FUN_00103e0c(void)

{
  return;
}




void FUN_001029b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102ec8(param_3);
  uVar2 = FUN_00102eb2(param_1);
  FUN_00102eda(*param_1,uVar2,uVar1);
  return;
}




long FUN_00102a6a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001020c2(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001020c2(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00102ba7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010308e(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_00101dde(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_001020d4(param_1);
  local_18 = FUN_0010212b(&local_38,&local_20);
  local_20 = FUN_00102690(local_30);
  uVar1 = FUN_001026dc(&local_20,local_18);
  FUN_00102170(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102690(local_30);
  FUN_001026dc(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d88(void)

{
  return;
}




void FUN_001037cf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103804(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001027ba(undefined8 param_1)

{
  return param_1;
}




long FUN_00102742(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_00102927(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e78(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010353e(void)

{
  return 0x1fffffffffffffff;
}




void FUN_001028e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e42(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001026dc(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_001020a0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ac4(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_0010288a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102984(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103054(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00102db2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d88(param_1,param_2);
  FUN_00101fe4(param_1);
  return;
}




void FUN_001027cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102db2(param_1,param_3);
                    /* try { // try from 00102806 to 0010280a has its CatchHandler @ 0010280d */
  FUN_00102de8(param_1,param_2);
  return;
}




void FUN_00103d7d(void)

{
  return;
}




void FUN_00104052(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102984(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103119(undefined8 param_1,undefined8 param_2)

{
  FUN_00103366(param_1,param_2,0);
  return;
}



