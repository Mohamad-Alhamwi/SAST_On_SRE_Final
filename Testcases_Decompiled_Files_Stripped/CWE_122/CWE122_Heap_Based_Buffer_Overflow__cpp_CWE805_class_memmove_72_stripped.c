
undefined8 FUN_001034e5(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102814(&local_10);
  return *puVar1;
}




void FUN_00103737(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103eab(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001038e3(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103705(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102e42(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102eb0(param_3);
  uVar2 = FUN_00102eb0(local_28);
  uVar3 = FUN_00102eb0(local_20);
  uVar1 = FUN_001030f5(uVar3,uVar2,uVar1);
  FUN_0010312a(&local_30,uVar1);
  return;
}




void FUN_001015ed(undefined8 param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_348;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001016d2(param_1,2);
  __dest = (undefined4 *)*puVar1;
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_338[local_348 * 2] = 0;
    local_338[local_348 * 2 + 1] = 0;
  }
  memmove(__dest,local_338,800);
  FUN_00103737(*__dest);
  if (__dest != (undefined4 *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103171(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103365(param_1);
  puVar1 = (undefined8 *)FUN_00103383(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




ulong * FUN_00102f5c(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c4d(void)

{
  return;
}




long FUN_001016d2(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00101fde(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a4a(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001024fe(local_80);
      local_60 = FUN_001028d8(&local_88,&local_78);
      local_70 = FUN_00102b3a(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101ece(local_80);
                    /* try { // try from 001022e8 to 00102373 has its CatchHandler @ 0010242b */
      FUN_00102a15(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101ece(local_80);
      puVar2 = (undefined8 *)FUN_00101f30(&local_88);
      local_70 = FUN_00102b71(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101ece(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f30(&local_88);
      local_70 = FUN_00102b71(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101ece(local_80);
      FUN_00101ee0(*local_80,local_80[1],uVar1);
      FUN_00101e94(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102826(local_38,param_1,param_4);
                    /* try { // try from 00102068 to 0010223b has its CatchHandler @ 0010240d */
      local_50 = FUN_001028ba(local_38);
      local_78 = FUN_00101bce(local_80);
      local_48 = FUN_001028d8(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101ece(local_80);
        FUN_0010291c(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f30(&local_88);
        FUN_00102974(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f30(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f30(&local_88);
        FUN_001029c4(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101ece(local_80);
        lVar4 = FUN_00102a15(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101ece(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f30(&local_88);
        FUN_0010291c(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f30(&local_88);
        FUN_001029c4(*puVar2,local_40,local_50);
      }
      FUN_00102886(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001025b0(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_0010312a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101f0e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102786(void)

{
  return;
}




void FUN_001030f5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032a1(param_1,param_2,param_3);
  return;
}




void FUN_0010304a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d36(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a71(8,param_2);
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




void FUN_00103220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033ca(param_2);
  uVar2 = FUN_001033ca(param_1);
  FUN_001033dc(uVar2,uVar1,param_3);
  return;
}




void FUN_001037e0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00103ad3(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102d36(undefined8 param_1)

{
  return param_1;
}




void FUN_001027f2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010375f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f42(param_1);
  local_18 = FUN_00101f99(&local_38,&local_20);
  local_20 = FUN_001024fe(local_30);
  uVar1 = FUN_0010254a(&local_20,local_18);
  FUN_00101fde(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001024fe(local_30);
  FUN_0010254a(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103019(param_1,param_2,param_3);
  return;
}




void FUN_00102bf6(undefined8 param_1,undefined8 param_2)

{
  FUN_00103006(param_1,param_2);
  return;
}




undefined8 FUN_001026f8(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001027f2(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c16(void)

{
  return;
}




void FUN_001030a2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103c9a(void)

{
  return;
}




void FUN_00103ee9(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102826(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d36(param_3);
  uVar2 = FUN_00102d20(param_1);
  FUN_00102d48(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103bea(void)

{
  return;
}




void FUN_0010390e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103365(undefined8 param_1)

{
  FUN_001033b2(param_1);
  return;
}




void FUN_00103647(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010367c(param_1,param_2,param_3);
  return;
}




void FUN_00103f20(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void * FUN_0010367c(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103c6e(void)

{
  return;
}




void FUN_001037b5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010308e(void)

{
  return;
}




void FUN_001030c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103270(param_1,param_2,param_3);
  return;
}




void FUN_0010263a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c20(param_1,param_3);
                    /* try { // try from 00102674 to 00102678 has its CatchHandler @ 0010267b */
  FUN_00102c56(param_1,param_2);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




void FUN_0010344a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010353b(param_2);
  uVar2 = FUN_0010353b(param_1);
  FUN_00103561(uVar2,uVar1,param_3);
  return;
}




void FUN_00101aa8(undefined8 param_1)

{
  FUN_00101ae8(param_1);
  return;
}




void FUN_00102c56(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b3a(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00101e84(void)

{
  return;
}




void FUN_00103506(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035cf(param_1,param_2,param_3);
  return;
}




void FUN_00103c42(void)

{
  return;
}




void FUN_00102f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103140(param_1,param_2,param_3);
  return;
}




void FUN_00102f36(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102628(param_1);
  FUN_00103171(uVar1);
  return;
}




void FUN_00102d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d36(param_3);
  FUN_0010304a(param_1,param_2,uVar1);
  return;
}




void FUN_00102f8b(undefined8 param_1,undefined8 param_2)

{
  FUN_001031da(param_1,param_2,0);
  return;
}




undefined8 FUN_00103e0f(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001038bb(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d12(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102628(param_2);
  FUN_001025d7(&local_31,uVar1);
  uVar1 = FUN_001025b0(param_2);
                    /* try { // try from 00101d78 to 00101d7c has its CatchHandler @ 00101de5 */
  FUN_0010263a(param_1,uVar1,&local_31);
  FUN_00101b14(&local_31);
  uVar2 = FUN_00101ece(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001026f8(param_2);
  uVar4 = FUN_001026a0(param_2);
                    /* try { // try from 00101dc6 to 00101dca has its CatchHandler @ 00101e03 */
  uVar1 = FUN_00102750(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010393c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_00102a4a(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f36(param_1);
  lVar2 = FUN_001025b0(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001025b0(local_40);
  local_30 = FUN_001025b0(local_40);
  plVar3 = (long *)FUN_00102f5c(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001025b0(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f36(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f36(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong * FUN_00103383(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102c20(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bf6(param_1,param_2);
  FUN_00101e52(param_1);
  return;
}




void FUN_0010378b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00102eb0(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ca5(void)

{
  return;
}




void FUN_00103140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103317(param_1,param_2,param_3);
  return;
}




void FUN_00102d85(undefined8 param_1,undefined8 param_2)

{
  FUN_0010308e(param_1,param_2);
  return;
}




void FUN_00101ac8(undefined8 param_1)

{
  FUN_00101aa8(param_1);
  return;
}




void FUN_00103f90(void)

{
  return;
}




void FUN_00101ee0(undefined8 param_1,undefined8 param_2)

{
  FUN_001027c7(param_1,param_2);
  return;
}




void FUN_00103270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010344a(param_1,param_2,param_3);
  return;
}




void FUN_0010380b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103561(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102eb0(param_3);
  uVar2 = FUN_00102eb0(local_28);
  uVar3 = FUN_00102eb0(local_20);
  uVar1 = FUN_00103647(uVar3,uVar2,uVar1);
  FUN_0010312a(&local_30,uVar1);
  return;
}




void FUN_001033dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102eb0(param_3);
  uVar2 = FUN_001034e5(local_28);
  uVar3 = FUN_001034e5(local_20);
  uVar1 = FUN_00103506(uVar3,uVar2,uVar1);
  FUN_0010312a(&local_30,uVar1);
  return;
}




void FUN_00103c8f(void)

{
  return;
}




void FUN_00101a88(undefined8 param_1)

{
  FUN_00101b14(param_1);
  return;
}




undefined8 FUN_00101bce(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f0e(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001016f6(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ac8(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 0010172b to 00101803 has its CatchHandler @ 0010184f */
  local_68 = operator_new__(400);
  local_60 = FUN_00101bce(local_58);
  FUN_00101c1e(local_38,&local_60);
  FUN_00101c4c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bce(local_58);
  FUN_00101c1e(local_38,&local_60);
  FUN_00101c4c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bce(local_58);
  FUN_00101c1e(local_38,&local_60);
  FUN_00101c4c(local_58,local_38[0],1,&local_68);
  FUN_00101d12(local_38,local_58);
                    /* try { // try from 0010180b to 0010180f has its CatchHandler @ 0010183a */
  FUN_00101509(local_38);
  FUN_00101b86(local_38);
  FUN_00101b86(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c00(void)

{
  return;
}




undefined8 FUN_00101ece(undefined8 param_1)

{
  return param_1;
}




void FUN_00103006(void)

{
  return;
}




void FUN_001027c7(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d0d(param_1,param_2);
  return;
}




undefined8 FUN_00101a71(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102e30(undefined8 param_1)

{
  return param_1;
}




void FUN_00103cb0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00103632(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101b86(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ece(param_1);
  FUN_00101ee0(*param_1,param_1[1],uVar1);
  FUN_00101b34(param_1);
  return;
}




undefined8 FUN_00101f30(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c2c(void)

{
  return;
}




void FUN_0010396f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001033b2(void)

{
  return 0xfffffffffffffff;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00102ce6(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00102fb9(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030a2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001036df(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101e52(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_001028ba(undefined8 param_1)

{
  FUN_00102d20(param_1);
  return;
}




undefined8 FUN_00103ce7(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103cb0,local_18);
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




undefined8 FUN_00103e32(undefined8 *param_1)

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




void FUN_00102886(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d20(param_1);
  FUN_00102d85(*param_1,uVar1);
  return;
}




undefined8 FUN_00101a0c(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036df("Calling good()...");
  FUN_001019fc();
  FUN_001036df("Finished good()");
  FUN_001036df("Calling bad()...");
  FUN_001016f6();
  FUN_001036df("Finished bad()");
  return 0;
}




void FUN_00103c79(void)

{
  return;
}




void FUN_00101ae8(undefined8 param_1)

{
  FUN_00101e32(param_1);
  FUN_00101e52(param_1);
  return;
}




void FUN_001031da(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001033b2(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00102bc9(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bf6(param_1,param_2);
  return param_1;
}




int FUN_00103bd0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103c21(void)

{
  return;
}




void FUN_00102974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e30(param_2);
  uVar2 = FUN_00102e30(param_1);
  FUN_00102e42(uVar2,uVar1,param_3);
  return;
}




void FUN_00102d0d(void)

{
  return;
}




void FUN_00103836(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001033ca(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c63(void)

{
  return;
}




void FUN_001029c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102eb0(param_2);
  uVar2 = FUN_00102eb0(param_1);
  FUN_00102ec2(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c84(void)

{
  return;
}




ulong FUN_001039cf(long param_1,ulong param_2,long param_3)

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




void FUN_001019fc(void)

{
  FUN_00101879();
  return;
}




long FUN_00102d20(long param_1)

{
  return param_1 + 8;
}




void FUN_00103019(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103220(param_1,param_2,param_3);
  return;
}




void FUN_00103c37(void)

{
  return;
}




void FUN_00101879(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ac8(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 001018ae to 00101986 has its CatchHandler @ 001019d2 */
  local_68 = operator_new__(800);
  local_60 = FUN_00101bce(local_58);
  FUN_00101c1e(local_38,&local_60);
  FUN_00101c4c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bce(local_58);
  FUN_00101c1e(local_38,&local_60);
  FUN_00101c4c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bce(local_58);
  FUN_00101c1e(local_38,&local_60);
  FUN_00101c4c(local_58,local_38[0],1,&local_68);
  FUN_00101d12(local_38,local_58);
                    /* try { // try from 0010198e to 00101992 has its CatchHandler @ 001019bd */
  FUN_001015ed(local_38);
  FUN_00101b86(local_38);
  FUN_00101b86(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b71(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102fb9(param_2);
  uVar2 = FUN_00102fb9(param_1);
  FUN_00102dfb(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103317(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102eb0(param_1);
  uVar1 = FUN_0010349a(uVar1,param_2,param_3);
  FUN_0010312a(&local_10,uVar1);
  return;
}




undefined8 * FUN_0010349a(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00102a15(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f00(param_1,param_2,param_3);
  return;
}




void * FUN_001035cf(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101c1e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f30(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00101e94(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102795(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00102daf(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030a2(&local_18,param_1);
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




void FUN_00103c0b(void)

{
  return;
}




void FUN_00101b14(undefined8 param_1)

{
  FUN_00101e84(param_1);
  return;
}




void FUN_00101509(undefined8 param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_348;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001016d2(param_1,2);
  __dest = (undefined4 *)*puVar1;
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_338[local_348 * 2] = 0;
    local_338[local_348 * 2 + 1] = 0;
  }
  memmove(__dest,local_338,800);
  FUN_00103737(*__dest);
  if (__dest != (undefined4 *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e32(undefined8 param_1)

{
  FUN_00102786(param_1);
  return;
}




void FUN_0010291c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102daf(param_2);
  uVar2 = FUN_00102daf(param_1);
  FUN_00102dfb(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103bf5(void)

{
  return;
}




void FUN_00103c58(void)

{
  return;
}




void FUN_00102795(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ce6(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102814(undefined8 param_1)

{
  return param_1;
}




long FUN_001028d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f30(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f30(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101b34(long *param_1)

{
  FUN_00101e94(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a88(param_1);
  return;
}




undefined8 FUN_00103bc1(void)

{
  return 0;
}




void FUN_0010353b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103632(&local_10);
  FUN_00102e30(uVar1);
  return;
}




undefined8 FUN_001024fe(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f0e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103eca(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




long FUN_00101f99(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102814(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102814(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_001026a0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027f2(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001032a1(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_00102628(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101f42(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027f2(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103861(undefined4 param_1)

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




undefined8 FUN_001025d7(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102bc9(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102dfb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030c0(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102b3a(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f8b(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_0010254a(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f0e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103bb2(void)

{
  return 1;
}




bool FUN_00103db4(pthread_t *param_1)

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




void FUN_00102750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cb0(param_1,param_2,param_3);
  return;
}




void FUN_00102ec2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}



