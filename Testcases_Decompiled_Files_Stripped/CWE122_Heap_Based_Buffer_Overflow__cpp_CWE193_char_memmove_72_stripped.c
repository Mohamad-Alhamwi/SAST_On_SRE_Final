
undefined8 FUN_0010348d(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001027bc(&local_10);
  return *puVar1;
}




void FUN_001036df(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103e53(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010388b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001036ad(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102dea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e58(param_3);
  uVar2 = FUN_00102e58(local_28);
  uVar3 = FUN_00102e58(local_20);
  uVar1 = FUN_0010309d(uVar3,uVar2,uVar1);
  FUN_001030d2(&local_30,uVar1);
  return;
}




void FUN_001015d1(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010167a(param_1,2);
  __dest = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  memmove(__dest,local_1b,sVar2 + 1);
  FUN_00103687(__dest);
  if (__dest != (void *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103119(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_0010330d(param_1);
  puVar1 = (undefined8 *)FUN_0010332b(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




ulong * FUN_00102f04(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103bf5(void)

{
  return;
}




long FUN_0010167a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00101f86(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_001029f2(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001024a6(local_80);
      local_60 = FUN_00102880(&local_88,&local_78);
      local_70 = FUN_00102ae2(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101e76(local_80);
                    /* try { // try from 00102290 to 0010231b has its CatchHandler @ 001023d3 */
      FUN_001029bd(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101e76(local_80);
      puVar2 = (undefined8 *)FUN_00101ed8(&local_88);
      local_70 = FUN_00102b19(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101e76(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101ed8(&local_88);
      local_70 = FUN_00102b19(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101e76(local_80);
      FUN_00101e88(*local_80,local_80[1],uVar1);
      FUN_00101e3c(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001027ce(local_38,param_1,param_4);
                    /* try { // try from 00102010 to 001021e3 has its CatchHandler @ 001023b5 */
      local_50 = FUN_00102862(local_38);
      local_78 = FUN_00101b76(local_80);
      local_48 = FUN_00102880(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101e76(local_80);
        FUN_001028c4(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101ed8(&local_88);
        FUN_0010291c(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101ed8(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101ed8(&local_88);
        FUN_0010296c(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101e76(local_80);
        lVar4 = FUN_001029bd(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101e76(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101ed8(&local_88);
        FUN_001028c4(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101ed8(&local_88);
        FUN_0010296c(*puVar2,local_40,local_50);
      }
      FUN_0010282e(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102558(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_001030d2(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101eb6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010272e(void)

{
  return;
}




void FUN_0010309d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103249(param_1,param_2,param_3);
  return;
}




void FUN_00102ff2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102cde(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a19(8,param_2);
  *puVar2 = uVar1;
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




void FUN_001031c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103372(param_2);
  uVar2 = FUN_00103372(param_1);
  FUN_00103384(uVar2,uVar1,param_3);
  return;
}




void FUN_00103788(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00103a7b(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102cde(undefined8 param_1)

{
  return param_1;
}




void FUN_0010279a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103707(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101eea(param_1);
  local_18 = FUN_00101f41(&local_38,&local_20);
  local_20 = FUN_001024a6(local_30);
  uVar1 = FUN_001024f2(&local_20,local_18);
  FUN_00101f86(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001024a6(local_30);
  FUN_001024f2(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fc1(param_1,param_2,param_3);
  return;
}




void FUN_00102b9e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fae(param_1,param_2);
  return;
}




undefined8 FUN_001026a0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010279a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103bbe(void)

{
  return;
}




void FUN_0010304a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103c42(void)

{
  return;
}




void FUN_00103e91(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001027ce(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102cde(param_3);
  uVar2 = FUN_00102cc8(param_1);
  FUN_00102cf0(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103b92(void)

{
  return;
}




void FUN_001038b6(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010330d(undefined8 param_1)

{
  FUN_0010335a(param_1);
  return;
}




void FUN_001035ef(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103624(param_1,param_2,param_3);
  return;
}




void FUN_00103ec0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void * FUN_00103624(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103c16(void)

{
  return;
}




void FUN_0010375d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103036(void)

{
  return;
}




void FUN_00103068(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103218(param_1,param_2,param_3);
  return;
}




void FUN_001025e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bc8(param_1,param_3);
                    /* try { // try from 0010261c to 00102620 has its CatchHandler @ 00102623 */
  FUN_00102bfe(param_1,param_2);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed0)();
  return;
}




void FUN_001033f2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034e3(param_2);
  uVar2 = FUN_001034e3(param_1);
  FUN_00103509(uVar2,uVar1,param_3);
  return;
}




void FUN_00101a50(undefined8 param_1)

{
  FUN_00101a90(param_1);
  return;
}




void FUN_00102bfe(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102ae2(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00101e2c(void)

{
  return;
}




void FUN_001034ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103577(param_1,param_2,param_3);
  return;
}




void FUN_00103bea(void)

{
  return;
}




void FUN_00102ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030e8(param_1,param_2,param_3);
  return;
}




void FUN_00102ede(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025d0(param_1);
  FUN_00103119(uVar1);
  return;
}




void FUN_00102cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cde(param_3);
  FUN_00102ff2(param_1,param_2,uVar1);
  return;
}




void FUN_00102f33(undefined8 param_1,undefined8 param_2)

{
  FUN_00103182(param_1,param_2,0);
  return;
}




undefined8 FUN_00103db7(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103863(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101cba(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001025d0(param_2);
  FUN_0010257f(&local_31,uVar1);
  uVar1 = FUN_00102558(param_2);
                    /* try { // try from 00101d20 to 00101d24 has its CatchHandler @ 00101d8d */
  FUN_001025e2(param_1,uVar1,&local_31);
  FUN_00101abc(&local_31);
  uVar2 = FUN_00101e76(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001026a0(param_2);
  uVar4 = FUN_00102648(param_2);
                    /* try { // try from 00101d6e to 00101d72 has its CatchHandler @ 00101dab */
  uVar1 = FUN_001026f8(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001038e4(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_001029f2(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102ede(param_1);
  lVar2 = FUN_00102558(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102558(local_40);
  local_30 = FUN_00102558(local_40);
  plVar3 = (long *)FUN_00102f04(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102558(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102ede(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102ede(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong * FUN_0010332b(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102bc8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b9e(param_1,param_2);
  FUN_00101dfa(param_1);
  return;
}




void FUN_00103733(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00102e58(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c4d(void)

{
  return;
}




void FUN_001030e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032bf(param_1,param_2,param_3);
  return;
}




void FUN_00102d2d(undefined8 param_1,undefined8 param_2)

{
  FUN_00103036(param_1,param_2);
  return;
}




void FUN_00101a70(undefined8 param_1)

{
  FUN_00101a50(param_1);
  return;
}




void FUN_00103f30(void)

{
  return;
}




void FUN_00101e88(undefined8 param_1,undefined8 param_2)

{
  FUN_0010276f(param_1,param_2);
  return;
}




void FUN_00103218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033f2(param_1,param_2,param_3);
  return;
}




void FUN_001037b3(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103509(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e58(param_3);
  uVar2 = FUN_00102e58(local_28);
  uVar3 = FUN_00102e58(local_20);
  uVar1 = FUN_001035ef(uVar3,uVar2,uVar1);
  FUN_001030d2(&local_30,uVar1);
  return;
}




void FUN_00103384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e58(param_3);
  uVar2 = FUN_0010348d(local_28);
  uVar3 = FUN_0010348d(local_20);
  uVar1 = FUN_001034ae(uVar3,uVar2,uVar1);
  FUN_001030d2(&local_30,uVar1);
  return;
}




void FUN_00103c37(void)

{
  return;
}




void FUN_00101a30(undefined8 param_1)

{
  FUN_00101abc(param_1);
  return;
}




undefined8 FUN_00101b76(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eb6(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010169e(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a70(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 001016d3 to 001017ab has its CatchHandler @ 001017f7 */
  local_68 = operator_new__(10);
  local_60 = FUN_00101b76(local_58);
  FUN_00101bc6(local_38,&local_60);
  FUN_00101bf4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b76(local_58);
  FUN_00101bc6(local_38,&local_60);
  FUN_00101bf4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b76(local_58);
  FUN_00101bc6(local_38,&local_60);
  FUN_00101bf4(local_58,local_38[0],1,&local_68);
  FUN_00101cba(local_38,local_58);
                    /* try { // try from 001017b3 to 001017b7 has its CatchHandler @ 001017e2 */
  FUN_00101529(local_38);
  FUN_00101b2e(local_38);
  FUN_00101b2e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ba8(void)

{
  return;
}




undefined8 FUN_00101e76(undefined8 param_1)

{
  return param_1;
}




void FUN_00102fae(void)

{
  return;
}




void FUN_0010276f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cb5(param_1,param_2);
  return;
}




undefined8 FUN_00101a19(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102dd8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c58(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001035da(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101b2e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e76(param_1);
  FUN_00101e88(*param_1,param_1[1],uVar1);
  FUN_00101adc(param_1);
  return;
}




undefined8 FUN_00101ed8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bd4(void)

{
  return;
}




void FUN_00103917(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_0010335a(void)

{
  return 0xfffffffffffffff;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_00102c8e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00102f61(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010304a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103687(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101dfa(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00102862(undefined8 param_1)

{
  FUN_00102cc8(param_1);
  return;
}




undefined8 FUN_00103c8f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c58,local_18);
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




undefined8 FUN_00103dda(undefined8 *param_1)

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




void FUN_0010282e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cc8(param_1);
  FUN_00102d2d(*param_1,uVar1);
  return;
}




undefined8 FUN_001019b4(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103687("Calling good()...");
  FUN_001019a4();
  FUN_00103687("Finished good()");
  FUN_00103687("Calling bad()...");
  FUN_0010169e();
  FUN_00103687("Finished bad()");
  return 0;
}




void FUN_00103c21(void)

{
  return;
}




void FUN_00101a90(undefined8 param_1)

{
  FUN_00101dda(param_1);
  FUN_00101dfa(param_1);
  return;
}




void FUN_00103182(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010335a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00102b71(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b9e(param_1,param_2);
  return param_1;
}




int FUN_00103b78(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103bc9(void)

{
  return;
}




void FUN_0010291c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dd8(param_2);
  uVar2 = FUN_00102dd8(param_1);
  FUN_00102dea(uVar2,uVar1,param_3);
  return;
}




void FUN_00102cb5(void)

{
  return;
}




void FUN_001037de(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103372(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c0b(void)

{
  return;
}




void FUN_0010296c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e58(param_2);
  uVar2 = FUN_00102e58(param_1);
  FUN_00102e6a(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c2c(void)

{
  return;
}




ulong FUN_00103977(long param_1,ulong param_2,long param_3)

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




void FUN_001019a4(void)

{
  FUN_00101821();
  return;
}




long FUN_00102cc8(long param_1)

{
  return param_1 + 8;
}




void FUN_00102fc1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031c8(param_1,param_2,param_3);
  return;
}




void FUN_00103bdf(void)

{
  return;
}




void FUN_00101821(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a70(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 00101856 to 0010192e has its CatchHandler @ 0010197a */
  local_68 = operator_new__(0xb);
  local_60 = FUN_00101b76(local_58);
  FUN_00101bc6(local_38,&local_60);
  FUN_00101bf4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b76(local_58);
  FUN_00101bc6(local_38,&local_60);
  FUN_00101bf4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b76(local_58);
  FUN_00101bc6(local_38,&local_60);
  FUN_00101bf4(local_58,local_38[0],1,&local_68);
  FUN_00101cba(local_38,local_58);
                    /* try { // try from 00101936 to 0010193a has its CatchHandler @ 00101965 */
  FUN_001015d1(local_38);
  FUN_00101b2e(local_38);
  FUN_00101b2e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b19(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f61(param_2);
  uVar2 = FUN_00102f61(param_1);
  FUN_00102da3(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001032bf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e58(param_1);
  uVar1 = FUN_00103442(uVar1,param_2,param_3);
  FUN_001030d2(&local_10,uVar1);
  return;
}




undefined8 * FUN_00103442(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_001029bd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ea8(param_1,param_2,param_3);
  return;
}




void * FUN_00103577(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101bc6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101ed8(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00101e3c(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010273d(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00102d57(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010304a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00103bb3(void)

{
  return;
}




void FUN_00101abc(undefined8 param_1)

{
  FUN_00101e2c(param_1);
  return;
}




void FUN_00101529(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010167a(param_1,2);
  __dest = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  memmove(__dest,local_1b,sVar2 + 1);
  FUN_00103687(__dest);
  if (__dest != (void *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101dda(undefined8 param_1)

{
  FUN_0010272e(param_1);
  return;
}




void FUN_001028c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d57(param_2);
  uVar2 = FUN_00102d57(param_1);
  FUN_00102da3(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103b9d(void)

{
  return;
}




void FUN_00103c00(void)

{
  return;
}




void FUN_0010273d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c8e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001027bc(undefined8 param_1)

{
  return param_1;
}




long FUN_00102880(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101ed8(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101ed8(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101adc(long *param_1)

{
  FUN_00101e3c(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a30(param_1);
  return;
}




undefined8 FUN_00103b69(void)

{
  return 0;
}




void FUN_001034e3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001035da(&local_10);
  FUN_00102dd8(uVar1);
  return;
}




undefined8 FUN_001024a6(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eb6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103e72(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




long FUN_00101f41(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001027bc(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001027bc(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00102648(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010279a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00103249(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_001025d0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101eea(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010279a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103809(undefined4 param_1)

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




undefined8 FUN_0010257f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b71(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102da3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103068(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102ae2(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f33(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_001024f2(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101eb6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103b5a(void)

{
  return 1;
}




bool FUN_00103d5c(pthread_t *param_1)

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




void FUN_001026f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c58(param_1,param_2,param_3);
  return;
}




void FUN_00102e6a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}



