
void FUN_00103825(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103bb0(void)

{
  return 0;
}




void FUN_00103c26(void)

{
  return;
}




undefined8 FUN_00103ba1(void)

{
  return 1;
}




void FUN_00103038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001031e2(param_2);
  uVar2 = FUN_001031e2(param_1);
  FUN_001031f4(uVar2,uVar1,param_3);
  return;
}




void FUN_00101c6a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_0010345f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103494(param_1,param_2,param_3);
  return;
}




ulong * FUN_0010319b(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103ed8(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101c9c(void)

{
  return;
}




void FUN_00102734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102bc7(param_2);
  uVar2 = FUN_00102bc7(param_1);
  FUN_00102c13(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010282d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d18(param_1,param_2,param_3);
  return;
}




void * FUN_001033e7(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_0010263e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102b4e(param_3);
  uVar2 = FUN_00102b38(param_1);
  FUN_00102b60(*param_1,uVar2,uVar1);
  return;
}




void FUN_00102a6e(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102952(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103379(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102cc8(param_3);
  uVar2 = FUN_00102cc8(local_28);
  uVar3 = FUN_00102cc8(local_20);
  uVar1 = FUN_0010345f(uVar3,uVar2,uVar1);
  FUN_00102f42(&local_30,uVar1);
  return;
}




undefined8 * FUN_001032b2(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00101b2a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102440(param_2);
  FUN_001023ef(&local_31,uVar1);
  uVar1 = FUN_001023c8(param_2);
                    /* try { // try from 00101b90 to 00101b94 has its CatchHandler @ 00101bfd */
  FUN_00102452(param_1,uVar1,&local_31);
  FUN_0010192c(&local_31);
  uVar2 = FUN_00101ce6(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102510(param_2);
  uVar4 = FUN_001024b8(param_2);
                    /* try { // try from 00101bde to 00101be2 has its CatchHandler @ 00101c1b */
  uVar1 = FUN_00102568(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001034f7(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_348;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001036aa(param_1,2);
  __dest = (void *)*puVar1;
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_338[local_348 * 2] = 0;
    local_338[local_348 * 2 + 1] = 0;
  }
  memmove(__dest,local_338,800);
  FUN_0010392b(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001014e9(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018e0(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(400);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = FUN_001019e6(local_58);
  FUN_00101a36(local_38,&local_60);
                    /* try { // try from 00101574 to 00101609 has its CatchHandler @ 00101655 */
  FUN_00101a64(local_58,local_38[0],1,&local_68);
  local_60 = FUN_001019e6(local_58);
  FUN_00101a36(local_38,&local_60);
  FUN_00101a64(local_58,local_38[0],1,&local_68);
  local_60 = FUN_001019e6(local_58);
  FUN_00101a36(local_38,&local_60);
  FUN_00101a64(local_58,local_38[0],1,&local_68);
  FUN_00101b2a(local_38,local_58);
                    /* try { // try from 00101611 to 00101615 has its CatchHandler @ 00101640 */
  FUN_001034f7(local_38);
  FUN_0010199e(local_38);
  FUN_0010199e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101815(void)

{
  FUN_0010167f();
  return;
}




undefined8 FUN_001019e6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d26(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103bef(void)

{
  return;
}




undefined8 FUN_00101825(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036ce("Calling good()...");
  FUN_00101815();
  FUN_001036ce("Finished good()");
  FUN_001036ce("Calling bad()...");
  FUN_001014e9();
  FUN_001036ce("Finished bad()");
  return 0;
}




undefined8 FUN_0010188a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103c5d(void)

{
  return;
}




void FUN_00102ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103088(param_1,param_2,param_3);
  return;
}




void FUN_00102b25(void)

{
  return;
}




int FUN_00103bbf(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_001024b8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010260a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e31(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103038(param_1,param_2,param_3);
  return;
}




void FUN_00102da3(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ff2(param_1,param_2,0);
  return;
}




void FUN_00102a0e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e1e(param_1,param_2);
  return;
}




bool FUN_00103da3(pthread_t *param_1)

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




void FUN_0010331e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033e7(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102b4e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c89(void)

{
  return;
}




void FUN_00103c31(void)

{
  return;
}




void FUN_001036f4(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010395e(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




ulong FUN_001039be(long param_1,ulong param_2,long param_3)

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




void FUN_00103be4(void)

{
  return;
}




undefined8 FUN_001032fd(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010262c(&local_10);
  return *puVar1;
}




void FUN_00103353(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010344a(&local_10);
  FUN_00102c48(uVar1);
  return;
}




void FUN_00102989(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dd1(param_2);
  uVar2 = FUN_00102dd1(param_1);
  FUN_00102c13(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010192c(undefined8 param_1)

{
  FUN_00101c9c(param_1);
  return;
}




void FUN_001037cf(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_00101db1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010262c(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010262c(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102e1e(void)

{
  return;
}




void FUN_001025ad(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102afe(param_1,param_2,param_3);
  return;
}




void FUN_00103850(undefined4 param_1)

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




void FUN_00103eb9(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010312f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102cc8(param_1);
  uVar1 = FUN_001032b2(uVar1,param_2,param_3);
  FUN_00102f42(&local_10,uVar1);
  return;
}




void FUN_0010317d(undefined8 param_1)

{
  FUN_001031ca(param_1);
  return;
}




void FUN_00102f0d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030b9(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001031ca(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103c1b(void)

{
  return;
}




undefined8 FUN_00102510(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010260a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c3c(void)

{
  return;
}




void FUN_00102cda(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103726(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001018e0(undefined8 param_1)

{
  FUN_001018c0(param_1);
  return;
}




undefined8 FUN_00102dd1(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102eba(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001018c0(undefined8 param_1)

{
  FUN_00101900(param_1);
  return;
}




void FUN_00103bd9(void)

{
  return;
}




void FUN_00103088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103262(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010344a(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00102f42(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101df6(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102862(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102316(local_80);
      local_60 = FUN_001026f0(&local_88,&local_78);
      local_70 = FUN_00102952(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101ce6(local_80);
                    /* try { // try from 00102100 to 0010218b has its CatchHandler @ 00102243 */
      FUN_0010282d(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101ce6(local_80);
      puVar2 = (undefined8 *)FUN_00101d48(&local_88);
      local_70 = FUN_00102989(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101ce6(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101d48(&local_88);
      local_70 = FUN_00102989(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101ce6(local_80);
      FUN_00101cf8(*local_80,local_80[1],uVar1);
      FUN_00101cac(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010263e(local_38,param_1,param_4);
                    /* try { // try from 00101e80 to 00102053 has its CatchHandler @ 00102225 */
      local_50 = FUN_001026d2(local_38);
      local_78 = FUN_001019e6(local_80);
      local_48 = FUN_001026f0(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101ce6(local_80);
        FUN_00102734(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101d48(&local_88);
        FUN_0010278c(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101d48(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101d48(&local_88);
        FUN_001027dc(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101ce6(local_80);
        lVar4 = FUN_0010282d(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101ce6(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101d48(&local_88);
        FUN_00102734(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101d48(&local_88);
        FUN_001027dc(*puVar2,local_40,local_50);
      }
      FUN_0010269e(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010262c(undefined8 param_1)

{
  return param_1;
}




void FUN_001035d0(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_348;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001036aa(param_1,2);
  __dest = (void *)*puVar1;
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_338[local_348 * 2] = 0;
    local_338[local_348 * 2 + 1] = 0;
  }
  memmove(__dest,local_338,800);
  FUN_0010392b(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bfa(void)

{
  return;
}




void FUN_001038d2(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001037a4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101d5a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010260a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102440(undefined8 param_1)

{
  return param_1;
}




void FUN_00101cac(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001025ad(param_1,param_2,param_3);
  }
  return;
}




void FUN_00103c9f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010260a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001031f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102cc8(param_3);
  uVar2 = FUN_001032fd(local_28);
  uVar3 = FUN_001032fd(local_20);
  uVar1 = FUN_0010331e(uVar3,uVar2,uVar1);
  FUN_00102f42(&local_30,uVar1);
  return;
}




void FUN_00102afe(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00101d48(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ff2(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001031ca(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_0010392b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001023ef(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029e1(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101900(undefined8 param_1)

{
  FUN_00101c4a(param_1);
  FUN_00101c6a(param_1);
  return;
}




void FUN_0010269e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b38(param_1);
  FUN_00102b9d(*param_1,uVar1);
  return;
}




undefined8 FUN_00103e21(undefined8 *param_1)

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




void FUN_00103c47(void)

{
  return;
}




void FUN_0010374e(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010199e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ce6(param_1);
  FUN_00101cf8(*param_1,param_1[1],uVar1);
  FUN_0010194c(param_1);
  return;
}




void FUN_00102e62(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102b4e(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010188a(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_001031e2(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103ac2(long param_1,ulong param_2,long param_3)

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




void FUN_0010167f(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018e0(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(800);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = FUN_001019e6(local_58);
  FUN_00101a36(local_38,&local_60);
                    /* try { // try from 0010170a to 0010179f has its CatchHandler @ 001017eb */
  FUN_00101a64(local_58,local_38[0],1,&local_68);
  local_60 = FUN_001019e6(local_58);
  FUN_00101a36(local_38,&local_60);
  FUN_00101a64(local_58,local_38[0],1,&local_68);
  local_60 = FUN_001019e6(local_58);
  FUN_00101a36(local_38,&local_60);
  FUN_00101a64(local_58,local_38[0],1,&local_68);
  FUN_00101b2a(local_38,local_58);
                    /* try { // try from 001017a7 to 001017ab has its CatchHandler @ 001017d6 */
  FUN_001035d0(local_38);
  FUN_0010199e(local_38);
  FUN_0010199e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010259e(void)

{
  return;
}




void FUN_00102b9d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ea6(param_1,param_2);
  return;
}




void FUN_0010194c(long *param_1)

{
  FUN_00101cac(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_001018a0(param_1);
  return;
}




void FUN_00102b60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b4e(param_3);
  FUN_00102e62(param_1,param_2,uVar1);
  return;
}




void FUN_00101d26(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00102316(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d26(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void * FUN_00103494(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




ulong * FUN_00102d74(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c7e(void)

{
  return;
}




undefined8 FUN_00103dfe(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00102c48(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ea6(void)

{
  return;
}




void FUN_00103c05(void)

{
  return;
}




void FUN_0010377a(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103f80(void)

{
  return;
}




void FUN_00102c5a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102cc8(param_3);
  uVar2 = FUN_00102cc8(local_28);
  uVar3 = FUN_00102cc8(local_20);
  uVar1 = FUN_00102f0d(uVar3,uVar2,uVar1);
  FUN_00102f42(&local_30,uVar1);
  return;
}




void FUN_00103c52(void)

{
  return;
}




void FUN_00101cf8(undefined8 param_1,undefined8 param_2)

{
  FUN_001025df(param_1,param_2);
  return;
}




void FUN_00102eba(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103262(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103353(param_2);
  uVar2 = FUN_00103353(param_1);
  FUN_00103379(uVar2,uVar1,param_3);
  return;
}




void FUN_00103e9a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101ce6(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d4e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102440(param_1);
  FUN_00102f89(uVar1);
  return;
}




void FUN_001036ce(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001037fa(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102cc8(undefined8 param_1)

{
  return param_1;
}




void FUN_001038fd(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102452(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102a38(param_1,param_3);
                    /* try { // try from 0010248c to 00102490 has its CatchHandler @ 00102493 */
  FUN_00102a6e(param_1,param_2);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




void FUN_001025df(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b25(param_1,param_2);
  return;
}




void FUN_00101a36(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101d48(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00102f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010312f(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103cd6(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c9f,local_18);
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




undefined8 FUN_00102362(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101d26(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c4a(undefined8 param_1)

{
  FUN_0010259e(param_1);
  return;
}




void FUN_00102568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ac8(param_1,param_2,param_3);
  return;
}




void FUN_00102c13(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ed8(param_1,param_2,param_3);
  return;
}




void FUN_00103c94(void)

{
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




void FUN_00102ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e31(param_1,param_2,param_3);
  return;
}




long FUN_00102b38(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00102bc7(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102eba(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001018a0(undefined8 param_1)

{
  FUN_0010192c(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




long FUN_001023c8(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00103c73(void)

{
  return;
}




void FUN_001038aa(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010278c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c48(param_2);
  uVar2 = FUN_00102c48(param_1);
  FUN_00102c5a(uVar2,uVar1,param_3);
  return;
}




long FUN_001026f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101d48(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101d48(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_001029e1(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a0e(param_1,param_2);
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




long FUN_001036aa(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_00102952(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102da3(param_1,param_2);
  }
  return uVar1;
}




void FUN_00101a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101d5a(param_1);
  local_18 = FUN_00101db1(&local_38,&local_20);
  local_20 = FUN_00102316(local_30);
  uVar1 = FUN_00102362(&local_20,local_18);
  FUN_00101df6(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102316(local_30);
  FUN_00102362(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001026d2(undefined8 param_1)

{
  FUN_00102b38(param_1);
  return;
}




void FUN_00103c10(void)

{
  return;
}




ulong FUN_00102862(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102d4e(param_1);
  lVar2 = FUN_001023c8(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001023c8(local_40);
  local_30 = FUN_001023c8(local_40);
  plVar3 = (long *)FUN_00102d74(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001023c8(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102d4e(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102d4e(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00102f89(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_0010317d(param_1);
  puVar1 = (undefined8 *)FUN_0010319b(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00102d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f58(param_1,param_2,param_3);
  return;
}




void FUN_001027dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cc8(param_2);
  uVar2 = FUN_00102cc8(param_1);
  FUN_00102cda(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c68(void)

{
  return;
}




void FUN_00102a38(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a0e(param_1,param_2);
  FUN_00101c6a(param_1);
  return;
}




long FUN_001030b9(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}



