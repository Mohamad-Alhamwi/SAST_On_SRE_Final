
void FUN_001024ce(undefined8 param_1)

{
  FUN_00102a94(param_1);
  return;
}




void FUN_00104294(void)

{
  return;
}




void FUN_001042f7(void)

{
  return;
}




undefined8 FUN_0010270c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char local_59;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = FUN_0010238e(param_1);
  local_50 = FUN_001023a4(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001021f5(local_58);
    local_59 = FUN_00101a38(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102934(local_58);
    }
    else {
      local_58 = FUN_00102a6c(local_58);
    }
  }
  FUN_00102370(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102b6c(param_1);
    cVar1 = FUN_001019ca(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102bbc(local_38,&local_58,&local_50);
      goto LAB_0010288e;
    }
    FUN_00102908(&local_48);
  }
  uVar2 = FUN_001026ae(local_48);
  cVar1 = FUN_00101a38(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102976(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102bbc(local_38,&local_58,&local_50);
  }
LAB_0010288e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001033ca(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001033f4(param_1);
  return;
}




void FUN_00103e32(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001029ee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101cea(param_2);
  uVar2 = FUN_00102aaa(param_1);
  FUN_00102c22(uVar2,uVar1);
  return;
}




void FUN_001026cc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102b5a(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_001019ca(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_00101da8(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00104125(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050ec,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010453b(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101a72(undefined8 param_1,undefined8 param_2)

{
  FUN_00101d56(param_1,param_2);
  return;
}




void FUN_00102dbe(void)

{
  return;
}




void FUN_00101d56(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024ce(param_2);
  uVar1 = FUN_001024ec(uVar1);
  FUN_001024fe(param_1,uVar1);
  return;
}




void FUN_00101d1e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d0c(param_2);
  FUN_00102496(param_1,uVar1);
  return;
}




int FUN_00104222(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103f60(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00104213(void)

{
  return 0;
}




void FUN_00104268(void)

{
  return;
}




void FUN_00104570(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00103954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00101c8c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102370(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00103734(long param_1)

{
  return param_1 + 0x10;
}




void FUN_0010429f(void)

{
  return;
}




undefined8 FUN_00101dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102528(param_1);
  uVar2 = FUN_00101dba(param_4);
  uVar3 = FUN_00101da8(param_3);
  uVar4 = FUN_00101d96(param_2);
  FUN_00102554(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




bool FUN_00104406(pthread_t *param_1)

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




void FUN_00103f0d(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00104204(void)

{
  return 1;
}




undefined8 FUN_00102aaa(undefined8 param_1)

{
  return param_1;
}




void FUN_0010171b(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  piVar1 = (int *)FUN_00101856(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if ((local_1c < 0) || (9 < local_1c)) {
    FUN_00103d31("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103d89(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001028aa(long param_1)

{
  return param_1 + 0x18;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00103cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103be0(param_3);
  FUN_00103cea(param_1,param_2,uVar1);
  return;
}




void FUN_00102c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102dd2(param_1,param_2,param_3);
  return;
}




long FUN_0010396a(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103b16(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103b7a(param_2);
                    /* try { // try from 001039d9 to 00103a6b has its CatchHandler @ 00103a97 */
    uVar2 = FUN_0010396a(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103b90(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103b16(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103b7a(local_38);
      uVar2 = FUN_0010396a(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103b90(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00101cea(long param_1)

{
  FUN_00102478(param_1 + 0x20);
  return;
}




void FUN_00102ee2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103474(local_88);
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_58[0] = 0;
                    /* try { // try from 00102f78 to 00102fdb has its CatchHandler @ 00103027 */
  puVar4 = (uint *)FUN_00101856(local_88,local_58);
  *puVar4 = uVar1;
  local_58[0] = 1;
  puVar4 = (uint *)FUN_00101856(local_88,local_58);
  *puVar4 = uVar1;
  local_58[0] = 2;
  puVar4 = (uint *)FUN_00101856(local_88,local_58);
  *puVar4 = uVar1;
  FUN_001034b4(local_58,local_88);
                    /* try { // try from 00102fe3 to 00102fe7 has its CatchHandler @ 00103012 */
  FUN_00101509(local_58);
  FUN_00103494(local_58);
  FUN_00103494(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103db1(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103434(undefined8 param_1)

{
  FUN_0010351a(param_1);
  return;
}




void FUN_001042aa(void)

{
  return;
}




undefined8 FUN_00102b6c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102370(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103d57(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102a32(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102aaa(param_1);
  FUN_00102c4c(uVar1,param_2,1);
  return;
}




void FUN_00102332(undefined8 param_1,undefined8 param_2)

{
  FUN_001029ee(param_1,param_2);
  FUN_00102a32(param_1,param_2);
  return;
}




void FUN_001042cb(void)

{
  return;
}




undefined8 FUN_00102682(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00103454(undefined8 param_1)

{
  FUN_001034de(param_1);
  return;
}




long FUN_00102698(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00102e12(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102e64(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_00102908(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001042c0(void)

{
  return;
}




void FUN_00101cdc(void)

{
  return;
}




undefined8 FUN_00101d0c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102478(undefined8 param_1)

{
  FUN_00102a82(param_1);
  return;
}




void FUN_00103838(void)

{
  return;
}




undefined8 FUN_001024ec(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102dac(undefined8 param_1)

{
  return param_1;
}




undefined4 FUN_00101a38(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_0010371e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104289(void)

{
  return;
}




void FUN_00103f8e(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001042b5(void)

{
  return;
}




undefined8 FUN_00101a5f(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010182d(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101450();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00103578(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001036ae(param_1,param_2);
  lVar1 = FUN_0010371e(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103734(param_1);
                    /* try { // try from 001035d3 to 001035d7 has its CatchHandler @ 001035dd */
    uVar3 = FUN_0010374a(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_00101a9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d0c(param_2);
  FUN_00101d1e(param_1,uVar1);
  return param_1;
}




long FUN_00103370(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_001029d8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102a6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103d89(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102370(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010351a(undefined8 param_1)

{
  FUN_00103634(param_1);
  return;
}




void FUN_00103ddd(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




void FUN_001045e0(void)

{
  return;
}




undefined8 FUN_00104339(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104302,local_18);
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




void FUN_001028c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b5a(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102b5a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010425d(void)

{
  return;
}




void FUN_00103d31(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined4 FUN_001019f0(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101cdc(param_1);
  return unaff_EBX;
}




void FUN_0010384c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103054(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103474(local_88);
  local_58[0] = 0;
                    /* try { // try from 001030a8 to 0010310b has its CatchHandler @ 00103157 */
  puVar1 = (undefined4 *)FUN_00101856(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101856(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101856(local_88,local_58);
  *puVar1 = 7;
  FUN_001034b4(local_58,local_88);
                    /* try { // try from 00103113 to 00103117 has its CatchHandler @ 00103142 */
  FUN_00101612(local_58);
  FUN_00103494(local_58);
  FUN_00103494(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103b7a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00101d96(undefined8 param_1)

{
  return param_1;
}




void FUN_00101843(void)

{
  return;
}




void FUN_00103474(undefined8 param_1)

{
  FUN_00103454(param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  lVar3 = FUN_00102632(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001023a4(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001026ae(local_50);
    cVar2 = FUN_00101a38(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001026ae(local_50);
      cVar2 = FUN_00101a38(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102976(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102698(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102698(local_60);
          local_48[1] = 0;
          FUN_001026cc(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010294a(local_48);
          uVar6 = FUN_001026ae(*puVar5);
          cVar2 = FUN_00101a38(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010270c(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102934(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001026cc(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001028c0(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001028aa(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001028aa(local_60);
        uVar6 = FUN_001028aa(local_60);
        FUN_001028c0(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102908(local_48);
        uVar6 = FUN_001026ae(*puVar5);
        cVar2 = FUN_00101a38(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010270c(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102934(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001026cc(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001028c0(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001021da;
  }
  lVar3 = FUN_00102682(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101eee:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102698(local_60);
    uVar6 = FUN_001026ae(*puVar5);
    cVar2 = FUN_00101a38(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101eee;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102698(local_60);
    local_48[1] = 0;
    FUN_001026cc(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010270c(local_60,param_3);
  }
LAB_001021da:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_0010427e(void)

{
  return;
}




undefined8 * FUN_0010294a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00102528(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102aaa(param_1);
  FUN_00102abc(uVar1,1);
  return;
}




undefined8 FUN_001023ba(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  while (local_38 != 0) {
    uVar2 = FUN_001021f5(local_38);
    cVar1 = FUN_00101a38(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102934(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102a6c(local_38);
    }
  }
  FUN_00102370(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102ec4(undefined8 param_1)

{
  FUN_001024ce(param_1);
  return;
}




void FUN_00103f35(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102c04(undefined8 param_1)

{
  FUN_00102dac(param_1);
  return;
}




void FUN_00104247(void)

{
  return;
}




undefined8
FUN_00101af6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101dba(param_5);
  uVar2 = FUN_00101da8(param_4);
  uVar3 = FUN_00101d96(param_3);
  local_40 = FUN_00101dcc(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101b72 to 00101bb5 has its CatchHandler @ 00101bf3 */
  uVar1 = FUN_001021f5(local_40);
  local_38 = FUN_00101e4c(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102332(param_1,local_40);
    FUN_00102370(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102248(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_001019ac(undefined8 param_1)

{
  FUN_00101c8c(param_1);
  return;
}




void FUN_00103184(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103474(local_88);
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_58[0] = 0;
                    /* try { // try from 0010321a to 0010327d has its CatchHandler @ 001032c9 */
  puVar4 = (uint *)FUN_00101856(local_88,local_58);
  *puVar4 = uVar1;
  local_58[0] = 1;
  puVar4 = (uint *)FUN_00101856(local_88,local_58);
  *puVar4 = uVar1;
  local_58[0] = 2;
  puVar4 = (uint *)FUN_00101856(local_88,local_58);
  *puVar4 = uVar1;
  FUN_001034b4(local_58,local_88);
                    /* try { // try from 00103285 to 00103289 has its CatchHandler @ 001032b4 */
  FUN_0010171b(local_58);
  FUN_00103494(local_58);
  FUN_00103494(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102632(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102370(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined4 * FUN_00103b16(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001029b6(param_2);
  puVar2 = (undefined4 *)FUN_00103ba6(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00104252(void)

{
  return;
}




void FUN_0010451c(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001034de(long param_1)

{
  FUN_00103604(param_1);
  FUN_00103624(param_1);
  FUN_001033ca(param_1 + 8);
  return;
}




void FUN_00102cce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d96(param_3);
  uVar1 = FUN_00101da8(param_4);
  FUN_00101a72(local_38,uVar1);
  FUN_00101dba(param_5);
  uVar1 = FUN_0010182d(8,param_2);
                    /* try { // try from 00102d56 to 00102d5a has its CatchHandler @ 00102d5d */
  FUN_00102e12(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103644(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102934(local_28);
    FUN_00103644(param_1,uVar1);
    lVar2 = FUN_00102a6c(local_28);
    FUN_00102332(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00102a82(undefined8 param_1)

{
  return param_1;
}




void FUN_00103494(undefined8 param_1)

{
  FUN_0010353a(param_1);
  return;
}




undefined8 FUN_0010238e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00101ad4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001026ae(undefined8 param_1)

{
  FUN_001021f5(param_1);
  return;
}




undefined8 FUN_0010386a(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001023a4(param_1);
  uVar2 = FUN_00103954(param_2);
  uVar1 = FUN_0010396a(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001028aa(param_1);
  uVar2 = FUN_00103ad9(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102698(param_1);
  uVar2 = FUN_00103af7(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_0010380e(undefined8 param_1,undefined8 param_2)

{
  FUN_00103940(param_1,param_2);
  return;
}




void FUN_001032f6(void)

{
  FUN_00103054();
  FUN_00103184();
  return;
}




void FUN_00103fc1(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




long FUN_0010339d(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00104273(void)

{
  return;
}




undefined8 FUN_00104461(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001034b4(undefined8 param_1,undefined8 param_2)

{
  FUN_00103578(param_1,param_2);
  return;
}




void FUN_00103e88(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103bf2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102528(param_1);
  uVar2 = FUN_00103be0(param_2);
  FUN_00103c3e(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00102e64(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102ea6(param_2);
  puVar2 = (undefined4 *)FUN_001024ec(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




undefined8 FUN_00101dba(undefined8 param_1)

{
  return param_1;
}




void FUN_00103cea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00103be0(param_3);
  puVar2 = (undefined8 *)FUN_0010182d(8,param_2);
  *puVar2 = *puVar1;
  return;
}




undefined8 FUN_00102b5a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103604(undefined8 param_1)

{
  FUN_001037ae(param_1);
  return;
}




void FUN_00103ad9(undefined8 param_1)

{
  FUN_00103370(param_1);
  return;
}




void FUN_00102c7e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102dfa(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_00101509(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  piVar1 = (int *)FUN_00101856(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_00103d31("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103d89(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103e07(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001037bd(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103912(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103ba6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103be0(param_2);
  FUN_00103bf2(uVar1,uVar2);
  return;
}




void FUN_00102976(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b5a(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




long FUN_001023a4(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00102dfa(void)

{
  return 0x333333333333333;
}




void FUN_00103e5d(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102ea6(undefined8 param_1)

{
  FUN_00102ec4(param_1);
  return;
}




undefined8 FUN_00102a94(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00102d99(undefined8 param_1)

{
  return param_1;
}




void FUN_00101612(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  piVar1 = (int *)FUN_00101856(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_00103d31("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103d89(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023a4(param_1);
  uVar2 = FUN_0010238e(param_1);
  FUN_001023ba(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_0010423c(void)

{
  return;
}




undefined8
FUN_00102248(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    p_Var3 = (_Rb_tree_node_base *)FUN_001023a4(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001026ae(param_3);
      uVar5 = FUN_001021f5(param_4);
      cVar1 = FUN_00101a38(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001022cc;
      }
    }
  }
  bVar2 = true;
LAB_001022cc:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102370(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00103912(undefined8 param_1,undefined8 param_2)

{
  FUN_0010380e(param_1,param_2);
  return param_1;
}




void FUN_001042d6(void)

{
  return;
}




undefined8 FUN_00103b90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102496(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d0c(param_2);
  FUN_001024fe(param_1,uVar1);
  return;
}




void FUN_001044fd(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103c3e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010182d(0x28,param_2);
  uVar1 = FUN_00103be0(param_3);
  uVar2 = FUN_00101cea(param_2);
  uVar3 = FUN_00102aaa(param_1);
  FUN_00103cac(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103eb3(undefined4 param_1)

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




void FUN_00102554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010182d(0x28,param_2);
  uVar1 = FUN_00101dba(param_5);
  uVar2 = FUN_00101da8(param_4);
  uVar3 = FUN_00101d96(param_3);
  uVar4 = FUN_00101cea(param_2);
  uVar5 = FUN_00102aaa(param_1);
                    /* try { // try from 001025e3 to 001025e7 has its CatchHandler @ 001025ea */
  FUN_00102aea(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




long FUN_00101856(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined local_39;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = FUN_00101982(param_1,param_2);
  local_28 = FUN_001019ac(param_1);
  cVar2 = FUN_001019ca(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001019f0(param_1);
    uVar3 = FUN_00101a16(&local_38);
    cVar2 = FUN_00101a38(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001018f6;
    }
  }
  bVar1 = true;
LAB_001018f6:
  if (bVar1) {
    uVar3 = FUN_00101a5f(param_2);
    FUN_00101a9c(local_30,uVar3);
    FUN_00101ad4(&local_28,&local_38);
    local_38 = FUN_00101af6(param_1,local_28,&DAT_00105008,local_30,&local_39);
  }
  lVar4 = FUN_00101a16(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




void FUN_00102c22(undefined8 param_1,undefined8 param_2)

{
  FUN_00102dbe(param_1,param_2);
  return;
}




void FUN_00104302(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103940(void)

{
  return;
}




void FUN_001036ae(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001037bd(param_1,param_2);
  FUN_00103838(param_1,param_2);
  FUN_001033ca(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010353a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010238e(param_1);
  FUN_00103644(param_1,uVar1);
  FUN_00103434(param_1);
  return;
}




ulong FUN_00104021(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050e4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102bbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102d99(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102b5a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103634(void)

{
  return;
}




void FUN_00102dd2(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102aea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101dba(param_5);
  uVar2 = FUN_00101da8(param_4);
  uVar3 = FUN_00101d96(param_3);
  FUN_00102cce(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001024fe(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d0c(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00104484(undefined8 *param_1)

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




void FUN_001033f4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00103af7(undefined8 param_1)

{
  FUN_0010339d(param_1);
  return;
}




void FUN_00103624(void)

{
  return;
}




void FUN_001037ae(void)

{
  return;
}




void FUN_001021f5(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001029b6(param_1);
  FUN_001029d8(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001042ec(void)

{
  return;
}




undefined8 FUN_00103be0(undefined8 param_1)

{
  return param_1;
}




void FUN_0010374a(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010384c(local_18,param_1);
  FUN_0010386a(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001029b6(long param_1)

{
  FUN_00102c04(param_1 + 0x20);
  return;
}




void FUN_00101982(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c3c(param_1,param_2);
  return;
}




void FUN_00102abc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c7e(param_1,param_2,0);
  return;
}




undefined8 FUN_0010330b(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103d31("Calling good()...");
  FUN_001032f6();
  FUN_00103d31("Finished good()");
  FUN_00103d31("Calling bad()...");
  FUN_00102ee2();
  FUN_00103d31("Finished bad()");
  return 0;
}




void FUN_001042e1(void)

{
  return;
}




void FUN_00101a16(undefined8 *param_1)

{
  FUN_00101cea(*param_1);
  return;
}



