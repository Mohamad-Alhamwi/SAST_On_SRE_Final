
undefined8 FUN_0010357b(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001028aa(&local_10);
  return *puVar1;
}




void FUN_001037cd(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103f41(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103979(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010379b(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f46(param_3);
  uVar2 = FUN_00102f46(local_28);
  uVar3 = FUN_00102f46(local_20);
  uVar1 = FUN_0010318b(uVar3,uVar2,uVar1);
  FUN_001031c0(&local_30,uVar1);
  return;
}




void FUN_0010161e(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101734(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *puVar1 = local_88;
  puVar1[1] = local_80;
  puVar1[2] = local_78;
  puVar1[3] = local_70;
  puVar1[4] = local_68;
  puVar1[5] = local_60;
  puVar1[6] = local_58;
  puVar1[7] = local_50;
  puVar1[8] = local_48;
  puVar1[9] = local_40;
  puVar1[10] = local_38;
  puVar1[0xb] = local_30;
  *(uint *)(puVar1 + 0xc) = local_28;
  *(undefined *)((long)puVar1 + 99) = 0;
  FUN_00103775(puVar1);
  free(puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103207(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001033fb(param_1);
  puVar1 = (undefined8 *)FUN_00103419(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




ulong * FUN_00102ff2(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103ce3(void)

{
  return;
}




long FUN_00101734(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00102074(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102ae0(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102594(local_80);
      local_60 = FUN_0010296e(&local_88,&local_78);
      local_70 = FUN_00102bd0(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101f64(local_80);
                    /* try { // try from 0010237e to 00102409 has its CatchHandler @ 001024c1 */
      FUN_00102aab(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101f64(local_80);
      puVar2 = (undefined8 *)FUN_00101fc6(&local_88);
      local_70 = FUN_00102c07(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101f64(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101fc6(&local_88);
      local_70 = FUN_00102c07(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101f64(local_80);
      FUN_00101f76(*local_80,local_80[1],uVar1);
      FUN_00101f2a(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001028bc(local_38,param_1,param_4);
                    /* try { // try from 001020fe to 001022d1 has its CatchHandler @ 001024a3 */
      local_50 = FUN_00102950(local_38);
      local_78 = FUN_00101c64(local_80);
      local_48 = FUN_0010296e(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101f64(local_80);
        FUN_001029b2(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101fc6(&local_88);
        FUN_00102a0a(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101fc6(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101fc6(&local_88);
        FUN_00102a5a(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101f64(local_80);
        lVar4 = FUN_00102aab(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101f64(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101fc6(&local_88);
        FUN_001029b2(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101fc6(&local_88);
        FUN_00102a5a(*puVar2,local_40,local_50);
      }
      FUN_0010291c(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102646(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_001031c0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101fa4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010281c(void)

{
  return;
}




void FUN_0010318b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103337(param_1,param_2,param_3);
  return;
}




void FUN_001030e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102dcc(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101b07(8,param_2);
  *puVar2 = uVar1;
  return;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101450();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_001032b6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103460(param_2);
  uVar2 = FUN_00103460(param_1);
  FUN_00103472(uVar2,uVar1,param_3);
  return;
}




void FUN_00103876(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00103b69(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102dcc(undefined8 param_1)

{
  return param_1;
}




void FUN_00102888(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001037f5(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ce2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101fd8(param_1);
  local_18 = FUN_0010202f(&local_38,&local_20);
  local_20 = FUN_00102594(local_30);
  uVar1 = FUN_001025e0(&local_20,local_18);
  FUN_00102074(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102594(local_30);
  FUN_001025e0(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d46(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030af(param_1,param_2,param_3);
  return;
}




void FUN_00102c8c(undefined8 param_1,undefined8 param_2)

{
  FUN_0010309c(param_1,param_2);
  return;
}




undefined8 FUN_0010278e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102888(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103cac(void)

{
  return;
}




void FUN_00103138(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103d30(void)

{
  return;
}




void FUN_00103f7f(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001028bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102dcc(param_3);
  uVar2 = FUN_00102db6(param_1);
  FUN_00102dde(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103c80(void)

{
  return;
}




void FUN_001039a4(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001033fb(undefined8 param_1)

{
  FUN_00103448(param_1);
  return;
}




void FUN_001036dd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103712(param_1,param_2,param_3);
  return;
}




void FUN_00103fb0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void * FUN_00103712(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103d04(void)

{
  return;
}




void FUN_0010384b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103124(void)

{
  return;
}




void FUN_00103156(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103306(param_1,param_2,param_3);
  return;
}




void FUN_001026d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cb6(param_1,param_3);
                    /* try { // try from 0010270a to 0010270e has its CatchHandler @ 00102711 */
  FUN_00102cec(param_1,param_2);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ed8)();
  return;
}




void FUN_001034e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001035d1(param_2);
  uVar2 = FUN_001035d1(param_1);
  FUN_001035f7(uVar2,uVar1,param_3);
  return;
}




void FUN_00101b3e(undefined8 param_1)

{
  FUN_00101b7e(param_1);
  return;
}




void FUN_00102cec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102bd0(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00101f1a(void)

{
  return;
}




void FUN_0010359c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103665(param_1,param_2,param_3);
  return;
}




void FUN_00103cd8(void)

{
  return;
}




void FUN_00102f96(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031d6(param_1,param_2,param_3);
  return;
}




void FUN_00102fcc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026be(param_1);
  FUN_00103207(uVar1);
  return;
}




void FUN_00102dde(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102dcc(param_3);
  FUN_001030e0(param_1,param_2,uVar1);
  return;
}




void FUN_00103021(undefined8 param_1,undefined8 param_2)

{
  FUN_00103270(param_1,param_2,0);
  return;
}




undefined8 FUN_00103ea5(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103951(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101da8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001026be(param_2);
  FUN_0010266d(&local_31,uVar1);
  uVar1 = FUN_00102646(param_2);
                    /* try { // try from 00101e0e to 00101e12 has its CatchHandler @ 00101e7b */
  FUN_001026d0(param_1,uVar1,&local_31);
  FUN_00101baa(&local_31);
  uVar2 = FUN_00101f64(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010278e(param_2);
  uVar4 = FUN_00102736(param_2);
                    /* try { // try from 00101e5c to 00101e60 has its CatchHandler @ 00101e99 */
  uVar1 = FUN_001027e6(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001039d2(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_00102ae0(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102fcc(param_1);
  lVar2 = FUN_00102646(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102646(local_40);
  local_30 = FUN_00102646(local_40);
  plVar3 = (long *)FUN_00102ff2(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102646(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102fcc(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102fcc(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong * FUN_00103419(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102cb6(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c8c(param_1,param_2);
  FUN_00101ee8(param_1);
  return;
}




void FUN_00103821(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00102f46(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d3b(void)

{
  return;
}




void FUN_001031d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033ad(param_1,param_2,param_3);
  return;
}




void FUN_00102e1b(undefined8 param_1,undefined8 param_2)

{
  FUN_00103124(param_1,param_2);
  return;
}




void FUN_00101b5e(undefined8 param_1)

{
  FUN_00101b3e(param_1);
  return;
}




void FUN_00104020(void)

{
  return;
}




void FUN_00101f76(undefined8 param_1,undefined8 param_2)

{
  FUN_0010285d(param_1,param_2);
  return;
}




void FUN_00103306(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034e0(param_1,param_2,param_3);
  return;
}




void FUN_001038a1(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001035f7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f46(param_3);
  uVar2 = FUN_00102f46(local_28);
  uVar3 = FUN_00102f46(local_20);
  uVar1 = FUN_001036dd(uVar3,uVar2,uVar1);
  FUN_001031c0(&local_30,uVar1);
  return;
}




void FUN_00103472(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f46(param_3);
  uVar2 = FUN_0010357b(local_28);
  uVar3 = FUN_0010357b(local_20);
  uVar1 = FUN_0010359c(uVar3,uVar2,uVar1);
  FUN_001031c0(&local_30,uVar1);
  return;
}




void FUN_00103d25(void)

{
  return;
}




void FUN_00101b1e(undefined8 param_1)

{
  FUN_00101baa(param_1);
  return;
}




undefined8 FUN_00101c64(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101fa4(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101758(void)

{
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b5e(local_58);
  local_68 = (undefined *)0x0;
  local_68 = (undefined *)malloc(0x32);
  if (local_68 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_68 = 0;
  local_60 = FUN_00101c64(local_58);
  FUN_00101cb4(local_38,&local_60);
                    /* try { // try from 001017ea to 0010187f has its CatchHandler @ 001018cb */
  FUN_00101ce2(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c64(local_58);
  FUN_00101cb4(local_38,&local_60);
  FUN_00101ce2(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c64(local_58);
  FUN_00101cb4(local_38,&local_60);
  FUN_00101ce2(local_58,local_38[0],1,&local_68);
  FUN_00101da8(local_38,local_58);
                    /* try { // try from 00101887 to 0010188b has its CatchHandler @ 001018b6 */
  FUN_00101509(local_38);
  FUN_00101c1c(local_38);
  FUN_00101c1c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c96(void)

{
  return;
}




undefined8 FUN_00101f64(undefined8 param_1)

{
  return param_1;
}




void FUN_0010309c(void)

{
  return;
}




void FUN_0010285d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102da3(param_1,param_2);
  return;
}




undefined8 FUN_00101b07(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102ec6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d46(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001036c8(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101c1c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f64(param_1);
  FUN_00101f76(*param_1,param_1[1],uVar1);
  FUN_00101bca(param_1);
  return;
}




undefined8 FUN_00101fc6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103cc2(void)

{
  return;
}




void FUN_00103a05(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00103448(void)

{
  return 0xfffffffffffffff;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00102d7c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_0010304f(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103138(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103775(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101ee8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00102950(undefined8 param_1)

{
  FUN_00102db6(param_1);
  return;
}




undefined8 FUN_00103d7d(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d46,local_18);
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




undefined8 FUN_00103ec8(undefined8 *param_1)

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




void FUN_0010291c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102db6(param_1);
  FUN_00102e1b(*param_1,uVar1);
  return;
}




undefined8 FUN_00101aa2(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103775("Calling good()...");
  FUN_00101a92();
  FUN_00103775("Finished good()");
  FUN_00103775("Calling bad()...");
  FUN_00101758();
  FUN_00103775("Finished bad()");
  return 0;
}




void FUN_00103d0f(void)

{
  return;
}




void FUN_00101b7e(undefined8 param_1)

{
  FUN_00101ec8(param_1);
  FUN_00101ee8(param_1);
  return;
}




void FUN_00103270(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103448(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00102c5f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c8c(param_1,param_2);
  return param_1;
}




int FUN_00103c66(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103cb7(void)

{
  return;
}




void FUN_00102a0a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ec6(param_2);
  uVar2 = FUN_00102ec6(param_1);
  FUN_00102ed8(uVar2,uVar1,param_3);
  return;
}




void FUN_00102da3(void)

{
  return;
}




void FUN_001038cc(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103460(undefined8 param_1)

{
  return param_1;
}




void FUN_00103cf9(void)

{
  return;
}




void FUN_00102a5a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f46(param_2);
  uVar2 = FUN_00102f46(param_1);
  FUN_00102f58(uVar2,uVar1,param_3);
  return;
}




void FUN_00103d1a(void)

{
  return;
}




ulong FUN_00103a65(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101a92(void)

{
  FUN_001018f5();
  return;
}




long FUN_00102db6(long param_1)

{
  return param_1 + 8;
}




void FUN_001030af(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032b6(param_1,param_2,param_3);
  return;
}




void FUN_00103ccd(void)

{
  return;
}




void FUN_001018f5(void)

{
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b5e(local_58);
  local_68 = (undefined *)0x0;
  local_68 = (undefined *)malloc(100);
  if (local_68 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_68 = 0;
  local_60 = FUN_00101c64(local_58);
  FUN_00101cb4(local_38,&local_60);
                    /* try { // try from 00101987 to 00101a1c has its CatchHandler @ 00101a68 */
  FUN_00101ce2(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c64(local_58);
  FUN_00101cb4(local_38,&local_60);
  FUN_00101ce2(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c64(local_58);
  FUN_00101cb4(local_38,&local_60);
  FUN_00101ce2(local_58,local_38[0],1,&local_68);
  FUN_00101da8(local_38,local_58);
                    /* try { // try from 00101a24 to 00101a28 has its CatchHandler @ 00101a53 */
  FUN_0010161e(local_38);
  FUN_00101c1c(local_38);
  FUN_00101c1c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c07(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010304f(param_2);
  uVar2 = FUN_0010304f(param_1);
  FUN_00102e91(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001033ad(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102f46(param_1);
  uVar1 = FUN_00103530(uVar1,param_2,param_3);
  FUN_001031c0(&local_10,uVar1);
  return;
}




undefined8 * FUN_00103530(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00102aab(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f96(param_1,param_2,param_3);
  return;
}




void * FUN_00103665(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101cb4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101fc6(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00101f2a(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010282b(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00102e45(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103138(&local_18,param_1);
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




void FUN_00103ca1(void)

{
  return;
}




void FUN_00101baa(undefined8 param_1)

{
  FUN_00101f1a(param_1);
  return;
}




void FUN_00101509(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101734(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *puVar1 = local_88;
  puVar1[1] = local_80;
  puVar1[2] = local_78;
  puVar1[3] = local_70;
  puVar1[4] = local_68;
  puVar1[5] = local_60;
  puVar1[6] = local_58;
  puVar1[7] = local_50;
  puVar1[8] = local_48;
  puVar1[9] = local_40;
  puVar1[10] = local_38;
  puVar1[0xb] = local_30;
  *(uint *)(puVar1 + 0xc) = local_28;
  *(undefined *)((long)puVar1 + 99) = 0;
  FUN_00103775(puVar1);
  free(puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ec8(undefined8 param_1)

{
  FUN_0010281c(param_1);
  return;
}




void FUN_001029b2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e45(param_2);
  uVar2 = FUN_00102e45(param_1);
  FUN_00102e91(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103c8b(void)

{
  return;
}




void FUN_00103cee(void)

{
  return;
}




void FUN_0010282b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d7c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001028aa(undefined8 param_1)

{
  return param_1;
}




long FUN_0010296e(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101fc6(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101fc6(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101bca(long *param_1)

{
  FUN_00101f2a(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101b1e(param_1);
  return;
}




undefined8 FUN_00103c57(void)

{
  return 0;
}




void FUN_001035d1(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001036c8(&local_10);
  FUN_00102ec6(uVar1);
  return;
}




undefined8 FUN_00102594(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101fa4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f60(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




long FUN_0010202f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001028aa(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001028aa(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00102736(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102888(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00103337(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_001026be(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101fd8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102888(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001038f7(undefined4 param_1)

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




undefined8 FUN_0010266d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102c5f(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102e91(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103156(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102bd0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103021(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_001025e0(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101fa4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103c48(void)

{
  return 1;
}




bool FUN_00103e4a(pthread_t *param_1)

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




void FUN_001027e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d46(param_1,param_2,param_3);
  return;
}




void FUN_00102f58(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}



