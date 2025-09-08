
void FUN_001023c4(undefined8 param_1)

{
  FUN_0010298a(param_1);
  return;
}




void FUN_00104064(void)

{
  return;
}




void FUN_001040c7(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00102602(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102284(param_1);
  local_50 = FUN_0010229a(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001020eb(local_58);
    local_59 = FUN_0010192e(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_0010282a(local_58);
    }
    else {
      local_58 = FUN_00102962(local_58);
    }
  }
  FUN_00102266(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a62(param_1);
    cVar1 = FUN_001018c0(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102ab2(local_38,&local_58,&local_50);
      goto LAB_00102784;
    }
    FUN_001027fe(&local_48);
  }
  uVar2 = FUN_001025a4(local_48);
  cVar1 = FUN_0010192e(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_0010286c(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102ab2(local_38,&local_58,&local_50);
  }
LAB_00102784:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001031ae(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00103c22(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001028e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101be0(param_2);
  uVar2 = FUN_001029a0(param_1);
  FUN_00102b18(uVar2,uVar1);
  return;
}




void FUN_001025c2(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a50(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_001018c0(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_00101c9e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103fc9(void)

{
  return 1;
}




void FUN_00104330(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101968(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c4c(param_1,param_2);
  return;
}




void FUN_00102cb4(void)

{
  return;
}




void FUN_00101c4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023c4(param_2);
  uVar1 = FUN_001023e2(uVar1);
  FUN_001023f4(param_1,uVar1);
  return;
}




void FUN_00101c14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c02(param_2);
  FUN_0010238c(param_1,uVar1);
  return;
}




void FUN_00104001(void)

{
  return;
}




void FUN_00103d53(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




int FUN_00103fe7(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00104038(void)

{
  return;
}




void FUN_001043a0(void)

{
  return;
}




long FUN_00103724(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001038d0(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103934(param_2);
                    /* try { // try from 00103793 to 00103825 has its CatchHandler @ 00103851 */
    uVar2 = FUN_00103724(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_0010394a(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001038d0(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103934(local_38);
      uVar2 = FUN_00103724(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_0010394a(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_00101b82(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102266(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103504(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103606(local_18,param_1);
  FUN_00103624(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010406f(void)

{
  return;
}




undefined8 FUN_00101cc2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0010241e(param_1);
  uVar2 = FUN_00101cb0(param_4);
  uVar3 = FUN_00101c9e(param_3);
  uVar4 = FUN_00101c8c(param_2);
  FUN_0010244a(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_00104226(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103cfa(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010282a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00103fd8(void)

{
  return 0;
}




undefined8 FUN_001029a0(undefined8 param_1)

{
  return param_1;
}




void FUN_00101636(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_64;
  ulong local_60;
  char *local_58;
  size_t local_50;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = 2;
  puVar1 = (undefined8 *)FUN_0010174c(param_1,&local_64);
  local_58 = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_18 = 0;
  local_50 = strlen(local_58);
  for (local_60 = 0; local_60 < local_50; local_60 = local_60 + 1) {
    local_48[local_60] = local_58[local_60];
  }
  local_18 = local_18 & 0xff;
  FUN_00103af6(local_58);
  free(local_58);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001027a0(long param_1)

{
  return param_1 + 0x18;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




void FUN_00103aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_0010399a(param_3);
  puVar3 = (undefined8 *)FUN_00101723(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00102b42(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cc8(param_1,param_2,param_3);
  return;
}




void FUN_00103893(undefined8 param_1)

{
  FUN_0010312a(param_1);
  return;
}




void FUN_00101be0(long param_1)

{
  FUN_0010236e(param_1 + 0x20);
  return;
}




void FUN_00102dd9(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010322e(local_88);
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  local_58[0] = 0;
                    /* try { // try from 00102e65 to 00102ece has its CatchHandler @ 00102f1a */
  puVar1 = (undefined8 *)FUN_0010174c(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_0010174c(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_0010174c(local_88,local_58);
  *puVar1 = __s;
  FUN_0010326e(local_58,local_88);
                    /* try { // try from 00102ed6 to 00102eda has its CatchHandler @ 00102f05 */
  FUN_00101549(local_58);
  FUN_0010324e(local_58);
  FUN_0010324e(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ba2(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010320e(undefined8 param_1)

{
  FUN_00103298(param_1);
  return;
}




void FUN_0010407a(void)

{
  return;
}




undefined8 FUN_00102a62(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102266(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b4e(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102928(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029a0(param_1);
  FUN_00102b42(uVar1,param_2,1);
  return;
}




void FUN_00102228(undefined8 param_1,undefined8 param_2)

{
  FUN_001028e4(param_1,param_2);
  FUN_00102928(param_1,param_2);
  return;
}




void FUN_0010409b(void)

{
  return;
}




undefined8 FUN_00102578(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_0010322e(undefined8 param_1)

{
  FUN_0010320e(param_1);
  return;
}




long FUN_0010258e(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00102d08(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d5a(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_001027fe(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00104090(void)

{
  return;
}




void FUN_00101bd2(void)

{
  return;
}




undefined8 FUN_00101c02(undefined8 param_1)

{
  return param_1;
}




void FUN_0010236e(undefined8 param_1)

{
  FUN_00102978(param_1);
  return;
}




void FUN_00103606(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001023e2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102ca2(undefined8 param_1)

{
  return param_1;
}




undefined4 FUN_0010192e(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




long FUN_001034ee(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00104059(void)

{
  return;
}




void FUN_00103d86(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00104085(void)

{
  return;
}




undefined8 FUN_00101955(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101723(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001033be(undefined8 param_1)

{
  FUN_00103568(param_1);
  return;
}




undefined8 FUN_00101992(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c02(param_2);
  FUN_00101c14(param_1,uVar1);
  return param_1;
}




long FUN_00103157(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_001028ce(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102962(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103b76(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102266(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001032f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102284(param_1);
  FUN_001033fe(param_1,uVar1);
  FUN_001031ee(param_1);
  return;
}




void FUN_00103bcc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




bool FUN_001041cb(pthread_t *param_1)

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




void FUN_001027b6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a50(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a50(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010402d(void)

{
  return;
}




void FUN_00103b1c(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined4 FUN_001018e6(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101bd2(param_1);
  return unaff_EBX;
}




undefined8 FUN_00103624(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010229a(param_1);
  uVar2 = FUN_0010370e(param_2);
  uVar1 = FUN_00103724(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001027a0(param_1);
  uVar2 = FUN_00103893(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010258e(param_1);
  uVar2 = FUN_001038b1(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00102f47(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010322e(local_88);
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,0x31);
  *(undefined *)((long)__s + 0x31) = 0;
  local_58[0] = 0;
                    /* try { // try from 00102fd3 to 0010303c has its CatchHandler @ 00103088 */
  puVar1 = (undefined8 *)FUN_0010174c(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_0010174c(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_0010174c(local_88,local_58);
  *puVar1 = __s;
  FUN_0010326e(local_58,local_88);
                    /* try { // try from 00103044 to 00103048 has its CatchHandler @ 00103073 */
  FUN_00101636(local_58);
  FUN_0010324e(local_58);
  FUN_0010324e(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010394a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00101c8c(undefined8 param_1)

{
  return param_1;
}




void FUN_00101739(void)

{
  return;
}




void FUN_0010324e(undefined8 param_1)

{
  FUN_001032f4(param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101d42(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102528(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010229a(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001025a4(local_50);
    cVar2 = FUN_0010192e(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001025a4(local_50);
      cVar2 = FUN_0010192e(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_0010286c(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010258e(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010258e(local_60);
          local_48[1] = 0;
          FUN_001025c2(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102840(local_48);
          uVar6 = FUN_001025a4(*puVar5);
          cVar2 = FUN_0010192e(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102602(local_60,param_3);
          }
          else {
            lVar3 = FUN_0010282a(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001025c2(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001027b6(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001027a0(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001027a0(local_60);
        uVar6 = FUN_001027a0(local_60);
        FUN_001027b6(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001027fe(local_48);
        uVar6 = FUN_001025a4(*puVar5);
        cVar2 = FUN_0010192e(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102602(local_60,param_3);
        }
        else {
          lVar3 = FUN_0010282a(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001025c2(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001027b6(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001020d0;
  }
  lVar3 = FUN_00102578(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101de4:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010258e(local_60);
    uVar6 = FUN_001025a4(*puVar5);
    cVar2 = FUN_0010192e(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101de4;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010258e(local_60);
    local_48[1] = 0;
    FUN_001025c2(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102602(local_60,param_3);
  }
LAB_001020d0:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_0010404e(void)

{
  return;
}




undefined8 * FUN_00102840(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_0010241e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029a0(param_1);
  FUN_001029b2(uVar1,1);
  return;
}




undefined8 FUN_001022b0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001020eb(local_38);
    cVar1 = FUN_0010192e(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_0010282a(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102962(local_38);
    }
  }
  FUN_00102266(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102dbb(undefined8 param_1)

{
  FUN_001023c4(param_1);
  return;
}




void FUN_00103d25(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102afa(undefined8 param_1)

{
  FUN_00102ca2(param_1);
  return;
}




void FUN_00104017(void)

{
  return;
}




undefined8
FUN_001019ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101cb0(param_5);
  uVar2 = FUN_00101c9e(param_4);
  uVar3 = FUN_00101c8c(param_3);
  local_40 = FUN_00101cc2(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a68 to 00101aab has its CatchHandler @ 00101ae9 */
  uVar1 = FUN_001020eb(local_40);
  local_38 = FUN_00101d42(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102228(param_1,local_40);
    FUN_00102266(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010213e(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_001018a2(undefined8 param_1)

{
  FUN_00101b82(param_1);
  return;
}




void FUN_001030b5(void)

{
  FUN_00102f47();
  return;
}




undefined8 FUN_00102528(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102266(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00104022(void)

{
  return;
}




void FUN_00104300(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001032d4(undefined8 param_1)

{
  FUN_001033ee(param_1);
  return;
}




void FUN_00102bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c8c(param_3);
  uVar1 = FUN_00101c9e(param_4);
  FUN_00101968(local_38,uVar1);
  FUN_00101cb0(param_5);
  uVar1 = FUN_00101723(0x10,param_2);
                    /* try { // try from 00102c4c to 00102c50 has its CatchHandler @ 00102c53 */
  FUN_00102d08(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103468(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103577(param_1,param_2);
  FUN_001035f2(param_1,param_2);
  FUN_00103184(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102978(undefined8 param_1)

{
  return param_1;
}




void FUN_0010326e(undefined8 param_1,undefined8 param_2)

{
  FUN_00103332(param_1,param_2);
  return;
}




undefined8 FUN_00102284(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_001019ca(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001025a4(undefined8 param_1)

{
  FUN_001020eb(param_1);
  return;
}




undefined8 FUN_001036cc(undefined8 param_1,undefined8 param_2)

{
  FUN_001035c8(param_1,param_2);
  return param_1;
}




void FUN_001035f2(void)

{
  return;
}




undefined8 FUN_001030c5(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103af6("Calling good()...");
  FUN_001030b5();
  FUN_00103af6("Finished good()");
  FUN_00103af6("Calling bad()...");
  FUN_00102dd9();
  FUN_00103af6("Finished bad()");
  return 0;
}




ulong FUN_00103de6(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00105094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103184(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001031ae(param_1);
  return;
}




void FUN_00104043(void)

{
  return;
}




undefined8 FUN_00104249(undefined8 *param_1)

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




void FUN_00103298(long param_1)

{
  FUN_001033be(param_1);
  FUN_001033de(param_1);
  FUN_00103184(param_1 + 8);
  return;
}




void FUN_00103c78(undefined4 param_1)

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




void FUN_001039f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101723(0x30,param_2);
  uVar1 = FUN_0010399a(param_3);
  uVar2 = FUN_00101be0(param_2);
  uVar3 = FUN_001029a0(param_1);
  FUN_00103a66(uVar3,uVar2,uVar1);
  return;
}




void FUN_00102d5a(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d9d(param_2);
  puVar2 = (undefined4 *)FUN_001023e2(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_00101cb0(undefined8 param_1)

{
  return param_1;
}




void FUN_00103af6(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102a50(undefined8 param_1)

{
  return param_1;
}




void FUN_001033de(void)

{
  return;
}




void FUN_001038b1(undefined8 param_1)

{
  FUN_00103157(param_1);
  return;
}




void FUN_00102b74(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102cf0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101490();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00103bf7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001035c8(undefined8 param_1,undefined8 param_2)

{
  FUN_001036fa(param_1,param_2);
  return;
}




undefined8 FUN_0010399a(undefined8 param_1)

{
  return param_1;
}




void FUN_0010286c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a50(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




long FUN_0010229a(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00102cf0(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00103c4d(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102d9d(undefined8 param_1)

{
  FUN_00102dbb(param_1);
  return;
}




undefined8 FUN_0010298a(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00102c8f(undefined8 param_1)

{
  return param_1;
}




void FUN_00101549(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_64;
  ulong local_60;
  char *local_58;
  size_t local_50;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = 2;
  puVar1 = (undefined8 *)FUN_0010174c(param_1,&local_64);
  local_58 = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_18 = 0;
  local_50 = strlen(local_58);
  for (local_60 = 0; local_60 < local_50; local_60 = local_60 + 1) {
    local_48[local_60] = local_58[local_60];
  }
  local_18 = local_18 & 0xff;
  FUN_00103af6(local_58);
  free(local_58);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b32(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010229a(param_1);
  uVar2 = FUN_00102284(param_1);
  FUN_001022b0(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_0010400c(void)

{
  return;
}




undefined8
FUN_0010213e(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010229a(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001025a4(param_3);
      uVar5 = FUN_001020eb(param_4);
      cVar1 = FUN_0010192e(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001021c2;
      }
    }
  }
  bVar2 = true;
LAB_001021c2:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102266(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001036fa(void)

{
  return;
}




void FUN_001040a6(void)

{
  return;
}




void FUN_00103960(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_0010399a(param_2);
  FUN_001039ac(uVar1,uVar2);
  return;
}




void FUN_0010238c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c02(param_2);
  FUN_001023f4(param_1,uVar1);
  return;
}




void FUN_001042e1(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103a66(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010399a(param_3);
  FUN_00103aa4(param_1,param_2,uVar1);
  return;
}




void FUN_00103cd2(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010244a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101723(0x30,param_2);
  uVar1 = FUN_00101cb0(param_5);
  uVar2 = FUN_00101c9e(param_4);
  uVar3 = FUN_00101c8c(param_3);
  uVar4 = FUN_00101be0(param_2);
  uVar5 = FUN_001029a0(param_1);
                    /* try { // try from 001024d9 to 001024dd has its CatchHandler @ 001024e0 */
  FUN_001029e0(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




long FUN_0010174c(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101878(param_1,param_2);
  local_28 = FUN_001018a2(param_1);
  cVar2 = FUN_001018c0(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001018e6(param_1);
    uVar3 = FUN_0010190c(&local_38);
    cVar2 = FUN_0010192e(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001017ec;
    }
  }
  bVar1 = true;
LAB_001017ec:
  if (bVar1) {
    uVar3 = FUN_00101955(param_2);
    FUN_00101992(local_30,uVar3);
    FUN_001019ca(&local_28,&local_38);
    local_38 = FUN_001019ec(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_0010190c(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00102b18(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cb4(param_1,param_2);
  return;
}




undefined8 FUN_001040fe(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001040c7,local_18);
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




undefined8 FUN_0010370e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001034d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103332(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103468(param_1,param_2);
  lVar1 = FUN_001034d8(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001034ee(param_1);
                    /* try { // try from 0010338d to 00103391 has its CatchHandler @ 00103397 */
    uVar3 = FUN_00103504(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




ulong FUN_00103eea(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010509c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102ab2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c8f(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a50(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001033fe(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_0010282a(local_28);
    FUN_001033fe(param_1,uVar1);
    lVar2 = FUN_00102962(local_28);
    FUN_00102228(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00102cc8(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001029e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101cb0(param_5);
  uVar2 = FUN_00101c9e(param_4);
  uVar3 = FUN_00101c8c(param_3);
  FUN_00102bc4(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001023f4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c02(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_001042c2(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001031ee(undefined8 param_1)

{
  FUN_001032d4(param_1);
  return;
}




undefined4 * FUN_001038d0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001028ac(param_2);
  puVar2 = (undefined4 *)FUN_00103960(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_001033ee(void)

{
  return;
}




undefined8 FUN_00103577(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001036cc(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001020eb(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001028ac(param_1);
  FUN_001028ce(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001040bc(void)

{
  return;
}




undefined8 FUN_001039ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010241e(param_1);
  uVar2 = FUN_0010399a(param_2);
  FUN_001039f8(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103568(void)

{
  return;
}




void FUN_001028ac(long param_1)

{
  FUN_00102afa(param_1 + 0x20);
  return;
}




void FUN_00101878(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b32(param_1,param_2);
  return;
}




void FUN_001029b2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b74(param_1,param_2,0);
  return;
}




long FUN_0010312a(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_001040b1(void)

{
  return;
}




void FUN_0010190c(undefined8 *param_1)

{
  FUN_00101be0(*param_1);
  return;
}



