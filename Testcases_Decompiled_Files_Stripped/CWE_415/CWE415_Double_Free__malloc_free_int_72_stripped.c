
undefined8 FUN_0010356d(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010289c(&local_10);
  return *puVar1;
}




void FUN_001037bf(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103f33(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010396b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010378d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102eca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f38(param_3);
  uVar2 = FUN_00102f38(local_28);
  uVar3 = FUN_00102f38(local_20);
  uVar1 = FUN_0010317d(uVar3,uVar2,uVar1);
  FUN_001031b2(&local_30,uVar1);
  return;
}




long FUN_00101582(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_001031f9(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001033ed(param_1);
  puVar1 = (undefined8 *)FUN_0010340b(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




ulong * FUN_00102fe4(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103cd5(void)

{
  return;
}




void FUN_001015a6(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b50(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(400);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_68);
  local_60 = FUN_00101c56(local_58);
  FUN_00101ca6(local_38,&local_60);
                    /* try { // try from 0010163d to 001016d2 has its CatchHandler @ 0010171e */
  FUN_00101cd4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c56(local_58);
  FUN_00101ca6(local_38,&local_60);
  FUN_00101cd4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c56(local_58);
  FUN_00101ca6(local_38,&local_60);
  FUN_00101cd4(local_58,local_38[0],1,&local_68);
  FUN_00101d9a(local_38,local_58);
                    /* try { // try from 001016da to 001016de has its CatchHandler @ 00101709 */
  FUN_001014e9(local_38);
  FUN_00101c0e(local_38);
  FUN_00101c0e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102066(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102ad2(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102586(local_80);
      local_60 = FUN_00102960(&local_88,&local_78);
      local_70 = FUN_00102bc2(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101f56(local_80);
                    /* try { // try from 00102370 to 001023fb has its CatchHandler @ 001024b3 */
      FUN_00102a9d(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101f56(local_80);
      puVar2 = (undefined8 *)FUN_00101fb8(&local_88);
      local_70 = FUN_00102bf9(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101f56(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101fb8(&local_88);
      local_70 = FUN_00102bf9(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101f56(local_80);
      FUN_00101f68(*local_80,local_80[1],uVar1);
      FUN_00101f1c(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001028ae(local_38,param_1,param_4);
                    /* try { // try from 001020f0 to 001022c3 has its CatchHandler @ 00102495 */
      local_50 = FUN_00102942(local_38);
      local_78 = FUN_00101c56(local_80);
      local_48 = FUN_00102960(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101f56(local_80);
        FUN_001029a4(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101fb8(&local_88);
        FUN_001029fc(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101fb8(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101fb8(&local_88);
        FUN_00102a4c(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101f56(local_80);
        lVar4 = FUN_00102a9d(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101f56(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101fb8(&local_88);
        FUN_001029a4(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101fb8(&local_88);
        FUN_00102a4c(*puVar2,local_40,local_50);
      }
      FUN_0010290e(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102638(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_001031b2(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101f96(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010280e(void)

{
  return;
}




void FUN_0010317d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103329(param_1,param_2,param_3);
  return;
}




void FUN_001030d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102dbe(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101afa(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101520(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101582(param_1,2);
  free((void *)*puVar1);
  return;
}




void FUN_001032a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103452(param_2);
  uVar2 = FUN_00103452(param_1);
  FUN_00103464(uVar2,uVar1,param_3);
  return;
}




void FUN_00103868(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00103b5b(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102dbe(undefined8 param_1)

{
  return param_1;
}




void FUN_0010287a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001037e7(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101fca(param_1);
  local_18 = FUN_00102021(&local_38,&local_20);
  local_20 = FUN_00102586(local_30);
  uVar1 = FUN_001025d2(&local_20,local_18);
  FUN_00102066(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102586(local_30);
  FUN_001025d2(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030a1(param_1,param_2,param_3);
  return;
}




void FUN_00102c7e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010308e(param_1,param_2);
  return;
}




undefined8 FUN_00102780(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010287a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c9e(void)

{
  return;
}




void FUN_0010312a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103d22(void)

{
  return;
}




void FUN_00103f71(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001028ae(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102dbe(param_3);
  uVar2 = FUN_00102da8(param_1);
  FUN_00102dd0(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103c72(void)

{
  return;
}




void FUN_00103996(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001033ed(undefined8 param_1)

{
  FUN_0010343a(param_1);
  return;
}




void FUN_001036cf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103704(param_1,param_2,param_3);
  return;
}




void FUN_00103fa0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void * FUN_00103704(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103cf6(void)

{
  return;
}




void FUN_0010383d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103116(void)

{
  return;
}




void FUN_00103148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032f8(param_1,param_2,param_3);
  return;
}




void FUN_001026c2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ca8(param_1,param_3);
                    /* try { // try from 001026fc to 00102700 has its CatchHandler @ 00102703 */
  FUN_00102cde(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_001034d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001035c3(param_2);
  uVar2 = FUN_001035c3(param_1);
  FUN_001035e9(uVar2,uVar1,param_3);
  return;
}




void FUN_00101b30(undefined8 param_1)

{
  FUN_00101b70(param_1);
  return;
}




void FUN_00102cde(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102bc2(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00101f0c(void)

{
  return;
}




void FUN_0010358e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103657(param_1,param_2,param_3);
  return;
}




void FUN_00103cca(void)

{
  return;
}




void FUN_00102f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031c8(param_1,param_2,param_3);
  return;
}




void FUN_00102fbe(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026b0(param_1);
  FUN_001031f9(uVar1);
  return;
}




void FUN_00102dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102dbe(param_3);
  FUN_001030d2(param_1,param_2,uVar1);
  return;
}




void FUN_00103013(undefined8 param_1,undefined8 param_2)

{
  FUN_00103262(param_1,param_2,0);
  return;
}




undefined8 FUN_00103e97(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103943(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d9a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001026b0(param_2);
  FUN_0010265f(&local_31,uVar1);
  uVar1 = FUN_00102638(param_2);
                    /* try { // try from 00101e00 to 00101e04 has its CatchHandler @ 00101e6d */
  FUN_001026c2(param_1,uVar1,&local_31);
  FUN_00101b9c(&local_31);
  uVar2 = FUN_00101f56(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102780(param_2);
  uVar4 = FUN_00102728(param_2);
                    /* try { // try from 00101e4e to 00101e52 has its CatchHandler @ 00101e8b */
  uVar1 = FUN_001027d8(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001039c4(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_00102ad2(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102fbe(param_1);
  lVar2 = FUN_00102638(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102638(local_40);
  local_30 = FUN_00102638(local_40);
  plVar3 = (long *)FUN_00102fe4(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102638(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102fbe(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102fbe(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong * FUN_0010340b(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ee0)();
  return;
}




void FUN_00102ca8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c7e(param_1,param_2);
  FUN_00101eda(param_1);
  return;
}




void FUN_00103813(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00102f38(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d2d(void)

{
  return;
}




void FUN_001031c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010339f(param_1,param_2,param_3);
  return;
}




void FUN_00102e0d(undefined8 param_1,undefined8 param_2)

{
  FUN_00103116(param_1,param_2);
  return;
}




void FUN_00101b50(undefined8 param_1)

{
  FUN_00101b30(param_1);
  return;
}




void FUN_00104010(void)

{
  return;
}




void FUN_00101f68(undefined8 param_1,undefined8 param_2)

{
  FUN_0010284f(param_1,param_2);
  return;
}




void FUN_001032f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034d2(param_1,param_2,param_3);
  return;
}




void FUN_00103893(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001035e9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f38(param_3);
  uVar2 = FUN_00102f38(local_28);
  uVar3 = FUN_00102f38(local_20);
  uVar1 = FUN_001036cf(uVar3,uVar2,uVar1);
  FUN_001031b2(&local_30,uVar1);
  return;
}




void FUN_00103464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f38(param_3);
  uVar2 = FUN_0010356d(local_28);
  uVar3 = FUN_0010356d(local_20);
  uVar1 = FUN_0010358e(uVar3,uVar2,uVar1);
  FUN_001031b2(&local_30,uVar1);
  return;
}




void FUN_00103d17(void)

{
  return;
}




void FUN_00101b10(undefined8 param_1)

{
  FUN_00101b9c(param_1);
  return;
}




undefined8 FUN_00101c56(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f96(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101748(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b50(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(400);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = FUN_00101c56(local_58);
  FUN_00101ca6(local_38,&local_60);
                    /* try { // try from 001017d3 to 00101868 has its CatchHandler @ 001018b4 */
  FUN_00101cd4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c56(local_58);
  FUN_00101ca6(local_38,&local_60);
  FUN_00101cd4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c56(local_58);
  FUN_00101ca6(local_38,&local_60);
  FUN_00101cd4(local_58,local_38[0],1,&local_68);
  FUN_00101d9a(local_38,local_58);
                    /* try { // try from 00101870 to 00101874 has its CatchHandler @ 0010189f */
  FUN_00101520(local_38);
  FUN_00101c0e(local_38);
  FUN_00101c0e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c88(void)

{
  return;
}




undefined8 FUN_00101f56(undefined8 param_1)

{
  return param_1;
}




void FUN_0010308e(void)

{
  return;
}




void FUN_0010284f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d95(param_1,param_2);
  return;
}




undefined8 FUN_00101afa(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102eb8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d38(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001036ba(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101c0e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f56(param_1);
  FUN_00101f68(*param_1,param_1[1],uVar1);
  FUN_00101bbc(param_1);
  return;
}




undefined8 FUN_00101fb8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103cb4(void)

{
  return;
}




void FUN_001039f7(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_0010343a(void)

{
  return 0xfffffffffffffff;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101430();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_00102d6e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00103041(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010312a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103767(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101eda(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00102942(undefined8 param_1)

{
  FUN_00102da8(param_1);
  return;
}




undefined8 FUN_00103d6f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d38,local_18);
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




undefined8 FUN_00103eba(undefined8 *param_1)

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




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_0010290e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102da8(param_1);
  FUN_00102e0d(*param_1,uVar1);
  return;
}




undefined8 FUN_00101a95(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103767("Calling good()...");
  FUN_00101a80();
  FUN_00103767("Finished good()");
  FUN_00103767("Calling bad()...");
  FUN_001015a6();
  FUN_00103767("Finished bad()");
  return 0;
}




void FUN_00103d01(void)

{
  return;
}




void FUN_00101b70(undefined8 param_1)

{
  FUN_00101eba(param_1);
  FUN_00101eda(param_1);
  return;
}




void FUN_00103262(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010343a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00102c51(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c7e(param_1,param_2);
  return param_1;
}




int FUN_00103c58(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103ca9(void)

{
  return;
}




void FUN_001029fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102eb8(param_2);
  uVar2 = FUN_00102eb8(param_1);
  FUN_00102eca(uVar2,uVar1,param_3);
  return;
}




void FUN_00102d95(void)

{
  return;
}




void FUN_001038be(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103452(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ceb(void)

{
  return;
}




void FUN_00102a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f38(param_2);
  uVar2 = FUN_00102f38(param_1);
  FUN_00102f4a(uVar2,uVar1,param_3);
  return;
}




void FUN_00103d0c(void)

{
  return;
}




ulong FUN_00103a57(long param_1,ulong param_2,long param_3)

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




void FUN_00101a80(void)

{
  FUN_00101748();
  FUN_001018de();
  return;
}




long FUN_00102da8(long param_1)

{
  return param_1 + 8;
}




void FUN_001030a1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032a8(param_1,param_2,param_3);
  return;
}




void FUN_00103cbf(void)

{
  return;
}




void FUN_001018de(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b50(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(400);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_68);
  local_60 = FUN_00101c56(local_58);
  FUN_00101ca6(local_38,&local_60);
                    /* try { // try from 00101975 to 00101a0a has its CatchHandler @ 00101a56 */
  FUN_00101cd4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c56(local_58);
  FUN_00101ca6(local_38,&local_60);
  FUN_00101cd4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c56(local_58);
  FUN_00101ca6(local_38,&local_60);
  FUN_00101cd4(local_58,local_38[0],1,&local_68);
  FUN_00101d9a(local_38,local_58);
                    /* try { // try from 00101a12 to 00101a16 has its CatchHandler @ 00101a41 */
  FUN_00101557(local_38);
  FUN_00101c0e(local_38);
  FUN_00101c0e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102bf9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103041(param_2);
  uVar2 = FUN_00103041(param_1);
  FUN_00102e83(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010339f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102f38(param_1);
  uVar1 = FUN_00103522(uVar1,param_2,param_3);
  FUN_001031b2(&local_10,uVar1);
  return;
}




undefined8 * FUN_00103522(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00102a9d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f88(param_1,param_2,param_3);
  return;
}




void * FUN_00103657(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101ca6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101fb8(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00101f1c(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010281d(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00102e37(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010312a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001014e9(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101582(param_1,2);
  free((void *)*puVar1);
  return;
}




void FUN_00103c93(void)

{
  return;
}




void FUN_00101b9c(undefined8 param_1)

{
  FUN_00101f0c(param_1);
  return;
}




void FUN_00101557(undefined8 param_1)

{
  FUN_00101582(param_1,2);
  return;
}




void FUN_00101eba(undefined8 param_1)

{
  FUN_0010280e(param_1);
  return;
}




void FUN_001029a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e37(param_2);
  uVar2 = FUN_00102e37(param_1);
  FUN_00102e83(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103c7d(void)

{
  return;
}




void FUN_00103ce0(void)

{
  return;
}




void FUN_0010281d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d6e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010289c(undefined8 param_1)

{
  return param_1;
}




long FUN_00102960(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101fb8(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101fb8(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101bbc(long *param_1)

{
  FUN_00101f1c(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101b10(param_1);
  return;
}




undefined8 FUN_00103c49(void)

{
  return 0;
}




void FUN_001035c3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001036ba(&local_10);
  FUN_00102eb8(uVar1);
  return;
}




undefined8 FUN_00102586(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f96(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f52(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




long FUN_00102021(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010289c(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010289c(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00102728(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010287a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00103329(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_001026b0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101fca(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010287a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001038e9(undefined4 param_1)

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




undefined8 FUN_0010265f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102c51(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102e83(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103148(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102bc2(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103013(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_001025d2(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f96(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103c3a(void)

{
  return 1;
}




bool FUN_00103e3c(pthread_t *param_1)

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




void FUN_001027d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d38(param_1,param_2,param_3);
  return;
}




void FUN_00102f4a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}



