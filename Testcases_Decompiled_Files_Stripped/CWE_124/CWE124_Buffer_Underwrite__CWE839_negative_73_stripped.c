
void FUN_00101f02(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010220e(param_2);
  FUN_00102220(param_1,uVar1);
  return;
}




undefined8 FUN_001016c4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101756(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101bb2(undefined8 param_1)

{
  FUN_00101c12(param_1);
  return;
}




void FUN_0010234d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001024b2(param_1,param_2,param_3);
  return;
}




void FUN_00101c12(undefined8 param_1)

{
  FUN_00101d90(param_1);
  FUN_00101b3c(param_1);
  return;
}




ulong FUN_001028e4(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102056(undefined8 param_1,undefined8 param_2)

{
  FUN_0010233a(param_1,param_2);
  return;
}




void FUN_00102b57(void)

{
  return;
}




undefined8 FUN_00102bfc(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102bc5,local_18);
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




void FUN_0010218c(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102b78(void)

{
  return;
}




void FUN_001014fa(undefined8 param_1)

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
  piVar1 = (int *)FUN_00101666(param_1);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_0010264c(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_001025f4("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010274b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001023a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102507(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_00102280(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102380(undefined8 param_1)

{
  FUN_001024d9(param_1,1);
  return;
}




void FUN_001017c6(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101bd2(local_58);
  local_5c = 0xfffffffb;
                    /* try { // try from 0010180a to 00101847 has its CatchHandler @ 00101893 */
  FUN_00101c8a(local_58,&local_5c);
  FUN_00101c8a(local_58,&local_5c);
  FUN_00101c8a(local_58,&local_5c);
  FUN_00101cc4(local_38,local_58);
                    /* try { // try from 0010184f to 00101853 has its CatchHandler @ 0010187e */
  FUN_00101449(local_38);
  FUN_00101bf2(local_38);
  FUN_00101bf2(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b36(void)

{
  return;
}




void FUN_00102b0a(void)

{
  return;
}




void FUN_001022ca(undefined8 *param_1)

{
  FUN_00102490(*param_1);
  return;
}




void FUN_001024d9(undefined8 param_1,undefined8 param_2)

{
  FUN_0010257a(param_1,param_2,0);
  return;
}




void FUN_00102baf(void)

{
  return;
}




undefined8 FUN_00101f8a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102262(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102b2b(void)

{
  return;
}




void FUN_00101dc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101774(local_20);
    uVar3 = FUN_00102044(param_1);
    FUN_00102056(uVar3,uVar2);
    FUN_00102080(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102851(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102dc0(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102720(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001018bd(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101bd2(local_58);
  local_5c = 7;
                    /* try { // try from 00101901 to 0010193e has its CatchHandler @ 0010198a */
  FUN_00101c8a(local_58,&local_5c);
  FUN_00101c8a(local_58,&local_5c);
  FUN_00101c8a(local_58,&local_5c);
  FUN_00101cc4(local_38,local_58);
                    /* try { // try from 00101946 to 0010194a has its CatchHandler @ 00101975 */
  FUN_001014fa(local_38);
  FUN_00101bf2(local_38);
  FUN_00101bf2(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102776(undefined4 param_1)

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




void FUN_00102dfe(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_001025dc(void)

{
  return 0x555555555555555;
}




void FUN_0010261a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001027f8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101e3e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_001020af(param_3);
  p_Var2 = (_List_node_base *)FUN_001020c2(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010218c(param_1,1);
  return;
}




void FUN_00101666(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001016c4(param_1);
  FUN_00101710(&local_18);
  FUN_00101734(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e30(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101aab(void)

{
  FUN_001018bd();
  FUN_001019b4();
  return;
}




void FUN_0010251a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_001020af(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101b25(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102b41(void)

{
  return;
}




void FUN_001022ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001020af(param_2);
  uVar2 = FUN_001016c4(param_1);
  FUN_00101e3e(param_1,uVar2,uVar1);
  return;
}




void FUN_001019b4(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101bd2(local_58);
  local_5c = 0xfffffffb;
                    /* try { // try from 001019f8 to 00101a35 has its CatchHandler @ 00101a81 */
  FUN_00101c8a(local_58,&local_5c);
  FUN_00101c8a(local_58,&local_5c);
  FUN_00101c8a(local_58,&local_5c);
  FUN_00101cc4(local_38,local_58);
                    /* try { // try from 00101a3d to 00101a41 has its CatchHandler @ 00101a6c */
  FUN_001015ab(local_38);
  FUN_00101bf2(local_38);
  FUN_00101bf2(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101db0(void)

{
  return;
}




void FUN_00102b83(void)

{
  return;
}




void FUN_00101c3e(undefined8 param_1)

{
  FUN_00101db0(param_1);
  return;
}




void FUN_001023de(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010234d(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00101b92(undefined8 param_1)

{
  FUN_00101c3e(param_1);
  return;
}




void FUN_00102823(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101b5c(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101b3c(undefined8 param_1)

{
  FUN_00101b5c(param_1);
  return;
}




void FUN_00101bf2(undefined8 param_1)

{
  FUN_00101c5e(param_1);
  return;
}




void FUN_00101449(undefined8 param_1)

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
  piVar1 = (int *)FUN_00101666(param_1);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_0010264c(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_001025f4("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101756(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




void FUN_00102b99(void)

{
  return;
}




void FUN_0010257a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001025dc(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




ulong FUN_001029e8(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030e8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010233a(void)

{
  return;
}




void FUN_001026ca(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101734(undefined8 *param_1)

{
  FUN_00101774(*param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f08)();
  return;
}




void FUN_001015ab(undefined8 param_1)

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
  piVar2 = (int *)FUN_00101666(param_1);
  iVar1 = *piVar2;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_001025f4("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_0010264c(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c8a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001016c4(param_1);
  FUN_00101e3e(param_1,uVar1,param_2);
  return;
}




void FUN_00101cc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101ef0(param_2);
  FUN_00101e9f(&local_21,uVar1);
  FUN_00101f02(param_1,&local_21);
  FUN_00101c3e(&local_21);
  uVar1 = FUN_00101f8a(param_2);
  uVar2 = FUN_00101f3a(param_2);
                    /* try { // try from 00101d50 to 00101d54 has its CatchHandler @ 00101d57 */
  FUN_00101fd6(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101ac0(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001025f4("Calling good()...");
  FUN_00101aab();
  FUN_001025f4("Finished good()");
  FUN_001025f4("Calling bad()...");
  FUN_001017c6();
  FUN_001025f4("Finished bad()");
  return 0;
}




undefined8 FUN_00101ef0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b8e(void)

{
  return;
}




int FUN_00102ae5(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102ba4(void)

{
  return;
}




void FUN_00101fd6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_00102280(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001022ca(&local_18);
    FUN_001022ec(local_10,uVar2);
    FUN_001022a6(&local_18);
  }
  return;
}




void FUN_001027d0(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101390();
    DAT_00106020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00101e9f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021b6(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_0010220e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ddf(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102262(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001020c2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102380(param_1);
  uVar2 = FUN_00102044(param_1);
  FUN_001023a4(local_38,uVar2,uVar1);
  uVar3 = FUN_001020af(param_2);
  uVar4 = FUN_00101774(uVar1);
  FUN_0010241d(uVar2,uVar4,uVar3);
  FUN_0010245a(local_38,0);
  FUN_001023de(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102b6d(void)

{
  return;
}




void FUN_0010247c(void)

{
  return;
}




undefined8 FUN_00102d24(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001021e4(undefined8 param_1,undefined8 param_2)

{
  FUN_0010247c(param_1,param_2);
  return;
}




undefined8 FUN_001025ca(undefined8 param_1)

{
  return param_1;
}




void FUN_00102aff(void)

{
  return;
}




void FUN_00101774(long param_1)

{
  FUN_00101796(param_1 + 0x10);
  return;
}




undefined8 FUN_00102044(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001020af(undefined8 param_1)

{
  return param_1;
}




void FUN_001024b2(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001026f5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102bc5(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102ea0(void)

{
  return;
}




void FUN_00102bba(void)

{
  return;
}




bool FUN_00102cc9(pthread_t *param_1)

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




void FUN_00102674(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102884(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




long * FUN_00101710(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102490(long param_1)

{
  FUN_0010255c(param_1 + 0x10);
  return;
}




long FUN_0010245a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00101c5e(undefined8 param_1)

{
  FUN_00101dc0(param_1);
  FUN_00101b92(param_1);
  return;
}




void FUN_00101d90(undefined8 param_1)

{
  FUN_00102034(param_1);
  return;
}




undefined8 FUN_00102ac7(void)

{
  return 1;
}




void FUN_0010264c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101796(undefined8 param_1)

{
  FUN_001017b4(param_1);
  return;
}




void FUN_00101bd2(undefined8 param_1)

{
  FUN_00101bb2(param_1);
  return;
}




undefined8 * FUN_001022a6(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010241d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020af(param_3);
  FUN_0010251a(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001021b6(undefined8 param_1,undefined8 param_2)

{
  FUN_001021e4(param_1,param_2);
  return param_1;
}




void FUN_0010255c(undefined8 param_1)

{
  FUN_001025ca(param_1);
  return;
}




void FUN_00102b62(void)

{
  return;
}




undefined8 FUN_001017b4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102507(undefined8 param_1)

{
  return param_1;
}




void FUN_001025f4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102ad6(void)

{
  return 0;
}




void FUN_00102b4c(void)

{
  return;
}




void FUN_001026a0(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101b25(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




void FUN_00102220(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010220e(param_2);
  FUN_001021e4(param_1,uVar1);
  FUN_00101b3c(param_1);
  return;
}




undefined8 FUN_00101f3a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102262(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102034(void)

{
  return;
}




void FUN_00102080(undefined8 param_1,undefined8 param_2)

{
  FUN_0010234d(param_1,param_2,1);
  return;
}




void FUN_00102b20(void)

{
  return;
}




void FUN_00102b15(void)

{
  return;
}




undefined8 FUN_00102d47(undefined8 *param_1)

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



