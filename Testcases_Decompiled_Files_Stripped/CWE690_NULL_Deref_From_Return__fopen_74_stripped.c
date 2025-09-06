
void FUN_0010344e(undefined8 param_1,undefined8 param_2)

{
  FUN_00103580(param_1,param_2);
  return;
}




void FUN_00103737(undefined8 param_1)

{
  FUN_00102fdd(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101470();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_001022f2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102874(param_1);
  FUN_00102886(uVar1,1);
  return;
}




long FUN_00102fdd(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined4 FUN_001017ba(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101aa6(param_1);
  return unaff_EBX;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_0010317a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102158(param_1);
  FUN_00103284(param_1,uVar1);
  FUN_00103074(param_1);
  return;
}




void FUN_001039d4(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001038ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103820(param_3);
  FUN_0010392a(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00101b96(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001022f2(param_1);
  uVar2 = FUN_00101b84(param_4);
  uVar3 = FUN_00101b72(param_3);
  uVar4 = FUN_00101b60(param_2);
  FUN_0010231e(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103b80(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103264(void)

{
  return;
}




void FUN_001039fc(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001030d4(undefined8 param_1)

{
  FUN_0010317a(param_1);
  return;
}




void FUN_00103244(undefined8 param_1)

{
  FUN_001033ee(param_1);
  return;
}




long FUN_00103374(long param_1)

{
  return param_1 + 0x10;
}




void FUN_0010392a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103820(param_3);
  puVar3 = (undefined8 *)FUN_001015f6(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_001029ce(undefined8 param_1)

{
  FUN_00102b76(param_1);
  return;
}




void FUN_00103aa8(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001027fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102874(param_1);
  FUN_00102a16(uVar1,param_2,1);
  return;
}




void FUN_00103478(void)

{
  return;
}




void FUN_00103edf(void)

{
  return;
}




void FUN_00103e87(void)

{
  return;
}




void FUN_001039a2(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_001037d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103094(undefined8 param_1)

{
  FUN_0010311e(param_1);
  return;
}




void FUN_0010160c(void)

{
  return;
}




void FUN_001031b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001032ee(param_1,param_2);
  lVar1 = FUN_0010335e(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103374(param_1);
                    /* try { // try from 00103213 to 00103217 has its CatchHandler @ 0010321d */
    uVar3 = FUN_0010338a(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_00101866(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ad6(param_2);
  FUN_00101ae8(param_1,uVar1);
  return param_1;
}




void FUN_00101529(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  FILE *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101620(param_1,&local_1c);
  local_18 = (FILE *)*puVar1;
  fclose(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c2e(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102c71(param_2);
  puVar2 = (undefined4 *)FUN_001022b6(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00101ae8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ad6(param_2);
  FUN_00102260(param_1,uVar1);
  return;
}




void FUN_001029ec(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b88(param_1,param_2);
  return;
}




long FUN_0010216e(long param_1)

{
  return param_1 + 8;
}




void FUN_00102f3b(void)

{
  FUN_00102df4();
  return;
}




undefined8 FUN_001023fc(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010213a(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f00(void)

{
  return;
}




void FUN_0010348c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101a56(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010213a(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102cad(void)

{
  FILE *pFVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030b4(local_88);
                    /* try { // try from 00102cf1 to 00102d7b has its CatchHandler @ 00102dc7 */
  pFVar1 = fopen("file.txt","w+");
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101620(local_88,local_58);
  *puVar2 = pFVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101620(local_88,local_58);
  *puVar2 = pFVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101620(local_88,local_58);
  *puVar2 = pFVar1;
  FUN_001030f4(local_58,local_88);
                    /* try { // try from 00102d83 to 00102d87 has its CatchHandler @ 00102db2 */
  FUN_00101529(local_58);
  FUN_001030d4(local_58);
  FUN_001030d4(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001017e0(undefined8 *param_1)

{
  FUN_00101ab4(*param_1);
  return;
}




void FUN_00103580(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed0)();
  return;
}




undefined8 FUN_0010244c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8
FUN_00102012(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010216e(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102478(param_3);
      uVar5 = FUN_00101fbf(param_4);
      cVar1 = FUN_00101802(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102096;
      }
    }
  }
  bVar2 = true;
LAB_00102096:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010213a(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_001015f6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00103552(undefined8 param_1,undefined8 param_2)

{
  FUN_0010344e(param_1,param_2);
  return param_1;
}




undefined8 FUN_001040cf(undefined8 *param_1)

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




void FUN_00102886(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a48(param_1,param_2,0);
  return;
}




void FUN_00103f37(void)

{
  return;
}




undefined8 FUN_00101b84(undefined8 param_1)

{
  return param_1;
}




void FUN_00103a52(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001027b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101ab4(param_2);
  uVar2 = FUN_00102874(param_1);
  FUN_001029ec(uVar2,uVar1);
  return;
}




undefined8 FUN_001033fd(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103552(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001030f4(undefined8 param_1,undefined8 param_2)

{
  FUN_001031b8(param_1,param_2);
  return;
}




undefined8 FUN_001034aa(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010216e(param_1);
  uVar2 = FUN_00103594(param_2);
  uVar1 = FUN_001035aa(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102674(param_1);
  uVar2 = FUN_00103719(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102462(param_1);
  uVar2 = FUN_00103737(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00103f2c(void)

{
  return;
}




undefined8 * FUN_001026d2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_001022b6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e92(void)

{
  return;
}




undefined8 FUN_00101794(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103bd9(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103f42(void)

{
  return;
}




undefined4 FUN_00101802(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00103ad3(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102df4(void)

{
  FILE *pFVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030b4(local_88);
                    /* try { // try from 00102e38 to 00102ec2 has its CatchHandler @ 00102f0e */
  pFVar1 = fopen("file.txt","w+");
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101620(local_88,local_58);
  *puVar2 = pFVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101620(local_88,local_58);
  *puVar2 = pFVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101620(local_88,local_58);
  *puVar2 = pFVar1;
  FUN_001030f4(local_58,local_88);
                    /* try { // try from 00102eca to 00102ece has its CatchHandler @ 00102ef9 */
  FUN_0010158c(local_58);
  FUN_001030d4(local_58);
  FUN_001030d4(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001040ac(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103b58(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




long FUN_00102674(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_00102f4b(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010397c("Calling good()...");
  FUN_00102f3b();
  FUN_0010397c("Finished good()");
  FUN_0010397c("Calling bad()...");
  FUN_00102cad();
  FUN_0010397c("Finished bad()");
  return 0;
}




void FUN_0010397c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001037ba(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010158c(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  FILE *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101620(param_1,&local_1c);
  local_18 = (FILE *)*puVar1;
  if (local_18 != (FILE *)0x0) {
    fclose(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010335e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102c8f(undefined8 param_1)

{
  FUN_00102298(param_1);
  return;
}




undefined8 FUN_00103e5e(void)

{
  return 0;
}




int FUN_00103e6d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001028b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101b84(param_5);
  uVar2 = FUN_00101b72(param_4);
  uVar3 = FUN_00101b60(param_3);
  FUN_00102a98(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102184(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00101fbf(local_38);
    cVar1 = FUN_00101802(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001026fe(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102836(local_38);
    }
  }
  FUN_0010213a(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00102b63(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ef5(void)

{
  return;
}




void FUN_00103ed4(void)

{
  return;
}




long FUN_00102462(long param_1)

{
  return param_1 + 0x20;
}




void FUN_001033ee(void)

{
  return;
}




long FUN_00101620(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_0010174c(param_1,param_2);
  local_28 = FUN_00101776(param_1);
  cVar2 = FUN_00101794(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001017ba(param_1);
    uVar3 = FUN_001017e0(&local_38);
    cVar2 = FUN_00101802(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001016c0;
    }
  }
  bVar1 = true;
LAB_001016c0:
  if (bVar1) {
    uVar3 = FUN_00101829(param_2);
    FUN_00101866(local_30,uVar3);
    FUN_0010189e(&local_28,&local_38);
    local_38 = FUN_001018c0(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001017e0(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_00103e4f(void)

{
  return 1;
}




undefined8 FUN_00102158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103ec9(void)

{
  return;
}




void FUN_001030b4(undefined8 param_1)

{
  FUN_00103094(param_1);
  return;
}




void FUN_00103a7d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101ab4(long param_1)

{
  FUN_00102242(param_1 + 0x20);
  return;
}




void FUN_00103284(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001026fe(local_28);
    FUN_00103284(param_1,uVar1);
    lVar2 = FUN_00102836(local_28);
    FUN_001020fc(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00103f16(void)

{
  return;
}




void FUN_00103afe(undefined4 param_1)

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




void FUN_00102242(undefined8 param_1)

{
  FUN_0010284c(param_1);
  return;
}




void FUN_00102a98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b60(param_3);
  uVar1 = FUN_00101b72(param_4);
  FUN_0010183c(local_38,uVar1);
  FUN_00101b84(param_5);
  uVar1 = FUN_001015f6(0x10,param_2);
                    /* try { // try from 00102b20 to 00102b24 has its CatchHandler @ 00102b27 */
  FUN_00102bdc(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001032ee(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001033fd(param_1,param_2);
  FUN_00103478(param_1,param_2);
  FUN_0010300a(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010387e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001015f6(0x30,param_2);
  uVar1 = FUN_00103820(param_3);
  uVar2 = FUN_00101ab4(param_2);
  uVar3 = FUN_00102874(param_1);
  FUN_001038ec(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001024d6(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102158(param_1);
  local_50 = FUN_0010216e(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00101fbf(local_58);
    local_59 = FUN_00101802(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001026fe(local_58);
    }
    else {
      local_58 = FUN_00102836(local_58);
    }
  }
  FUN_0010213a(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102936(param_1);
    cVar1 = FUN_00101794(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102986(local_38,&local_58,&local_50);
      goto LAB_00102658;
    }
    FUN_001026d2(&local_48);
  }
  uVar2 = FUN_00102478(local_48);
  cVar1 = FUN_00101802(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102740(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102986(local_38,&local_58,&local_50);
  }
LAB_00102658:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00101b60(undefined8 param_1)

{
  return param_1;
}




void FUN_00102780(long param_1)

{
  FUN_001029ce(param_1 + 0x20);
  return;
}




undefined8 FUN_00101829(undefined8 param_1)

{
  return param_1;
}




void FUN_00102478(undefined8 param_1)

{
  FUN_00101fbf(param_1);
  return;
}




void FUN_00104186(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00103f84(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103f4d,local_18);
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




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




bool FUN_00104051(pthread_t *param_1)

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




undefined8 FUN_00102924(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102874(undefined8 param_1)

{
  return param_1;
}




void FUN_00102260(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ad6(param_2);
  FUN_001022c8(param_1,uVar1);
  return;
}




void FUN_0010311e(long param_1)

{
  FUN_00103244(param_1);
  FUN_00103264(param_1);
  FUN_0010300a(param_1 + 8);
  return;
}




void FUN_001022c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ad6(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_0010338a(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010348c(local_18,param_1);
  FUN_001034aa(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001037e6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103820(param_2);
  FUN_00103832(uVar1,uVar2);
  return;
}




void FUN_00102496(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102924(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103034(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_00102bc4(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00103f21(void)

{
  return;
}




void FUN_001020fc(undefined8 param_1,undefined8 param_2)

{
  FUN_001027b8(param_1,param_2);
  FUN_001027fc(param_1,param_2);
  return;
}




void FUN_00102c71(undefined8 param_1)

{
  FUN_00102c8f(param_1);
  return;
}




void FUN_00101a06(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010216e(param_1);
  uVar2 = FUN_00102158(param_1);
  FUN_00102184(param_1,uVar2,uVar1,param_2);
  return;
}




ulong FUN_00103c6c(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001026fe(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102a16(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b9c(param_1,param_2,param_3);
  return;
}




void FUN_00101b20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102298(param_2);
  uVar1 = FUN_001022b6(uVar1);
  FUN_001022c8(param_1,uVar1);
  return;
}




void FUN_00104148(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00104167(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




long FUN_00102fb0(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_0010285e(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00104230(void)

{
  return;
}




void FUN_00102b88(void)

{
  return;
}




void FUN_0010174c(undefined8 param_1,undefined8 param_2)

{
  FUN_00101a06(param_1,param_2);
  return;
}




void FUN_00101fbf(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102780(param_1);
  FUN_001027a2(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010300a(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103034(param_1);
  return;
}




void FUN_00103ea8(void)

{
  return;
}




void FUN_0010213a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010183c(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b20(param_1,param_2);
  return;
}




undefined8 FUN_00101b72(undefined8 param_1)

{
  return param_1;
}




void FUN_00103274(void)

{
  return;
}




ulong FUN_00103d70(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102936(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010213a(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ebe(void)

{
  return;
}




undefined8 FUN_00103594(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102b76(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103832(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001022f2(param_1);
  uVar2 = FUN_00103820(param_2);
  FUN_0010387e(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00102bdc(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102c2e(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103074(undefined8 param_1)

{
  FUN_0010315a(param_1);
  return;
}




void FUN_00103eea(void)

{
  return;
}




undefined8 FUN_00101ad6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c0c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined4 * FUN_00103756(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102780(param_2);
  puVar2 = (undefined4 *)FUN_001037e6(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00102986(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b63(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102924(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_001027a2(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010268a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102924(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102924(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103e9d(void)

{
  return;
}




void FUN_0010315a(undefined8 param_1)

{
  FUN_00103274(param_1);
  return;
}




void FUN_00101aa6(void)

{
  return;
}




void FUN_00102740(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102924(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101c16(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001023fc(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010216e(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102478(local_50);
    cVar2 = FUN_00101802(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102478(local_50);
      cVar2 = FUN_00101802(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102740(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102462(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102462(local_60);
          local_48[1] = 0;
          FUN_00102496(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102714(local_48);
          uVar6 = FUN_00102478(*puVar5);
          cVar2 = FUN_00101802(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001024d6(local_60,param_3);
          }
          else {
            lVar3 = FUN_001026fe(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102496(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010268a(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102674(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102674(local_60);
        uVar6 = FUN_00102674(local_60);
        FUN_0010268a(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001026d2(local_48);
        uVar6 = FUN_00102478(*puVar5);
        cVar2 = FUN_00101802(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001024d6(local_60,param_3);
        }
        else {
          lVar3 = FUN_001026fe(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102496(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010268a(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00101fa4;
  }
  lVar3 = FUN_0010244c(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101cb8:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102462(local_60);
    uVar6 = FUN_00102478(*puVar5);
    cVar2 = FUN_00101802(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101cb8;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102462(local_60);
    local_48[1] = 0;
    FUN_00102496(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001024d6(local_60,param_3);
  }
LAB_00101fa4:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103bab(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001041c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8
FUN_001018c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101b84(param_5);
  uVar2 = FUN_00101b72(param_4);
  uVar3 = FUN_00101b60(param_3);
  local_40 = FUN_00101b96(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 0010193c to 0010197f has its CatchHandler @ 001019bd */
  uVar1 = FUN_00101fbf(local_40);
  local_38 = FUN_00101c16(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001020fc(param_1,local_40);
    FUN_0010213a(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102012(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_00103820(undefined8 param_1)

{
  return param_1;
}




void FUN_00103a28(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010231e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001015f6(0x30,param_2);
  uVar1 = FUN_00101b84(param_5);
  uVar2 = FUN_00101b72(param_4);
  uVar3 = FUN_00101b60(param_3);
  uVar4 = FUN_00101ab4(param_2);
  uVar5 = FUN_00102874(param_1);
                    /* try { // try from 001023ad to 001023b1 has its CatchHandler @ 001023b4 */
  FUN_001028b4(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00102a48(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102bc4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 * FUN_00102714(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_0010284c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f0b(void)

{
  return;
}




void FUN_00103eb3(void)

{
  return;
}




void FUN_00103719(undefined8 param_1)

{
  FUN_00102fb0(param_1);
  return;
}




void FUN_00102b9c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00102836(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103f4d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101776(undefined8 param_1)

{
  FUN_00101a56(param_1);
  return;
}




void FUN_0010189e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102298(undefined8 param_1)

{
  FUN_0010285e(param_1);
  return;
}




long FUN_001035aa(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103756(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001037ba(param_2);
                    /* try { // try from 00103619 to 001036ab has its CatchHandler @ 001036d7 */
    uVar2 = FUN_001035aa(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001037d0(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103756(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001037ba(local_38);
      uVar2 = FUN_001035aa(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001037d0(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}



