
void FUN_00102350(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bc6(param_2);
  FUN_001023b8(param_1,uVar1);
  return;
}




void FUN_00103ff5(void)

{
  return;
}




void FUN_00104058(void)

{
  return;
}




void FUN_00102586(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a14(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103120(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010314a(param_1);
  return;
}




void FUN_00103b93(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102892(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102568(undefined8 param_1)

{
  FUN_001020af(param_1);
  return;
}




void FUN_00101866(undefined8 param_1)

{
  FUN_00101b46(param_1);
  return;
}




undefined8 FUN_00101c50(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103e86(long param_1,ulong param_2,long param_3)

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




void FUN_0010429c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00101919(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c66(undefined8 param_1)

{
  return param_1;
}




void FUN_00101bd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bc6(param_2);
  FUN_00102350(param_1,uVar1);
  return;
}




undefined8 FUN_00101bc6(undefined8 param_1)

{
  return param_1;
}




int FUN_00103f83(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103cc1(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00103f74(void)

{
  return 0;
}




void FUN_00103fc9(void)

{
  return;
}




void FUN_001042d0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_001036aa(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101af6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010225e(param_1);
  uVar2 = FUN_00102248(param_1);
  FUN_00102274(param_1,uVar2,uVar1,param_2);
  return;
}




long FUN_0010348a(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00104000(void)

{
  return;
}




undefined8 FUN_00101c74(undefined8 param_1)

{
  return param_1;
}




bool FUN_00104167(pthread_t *param_1)

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




void FUN_00103c6e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 * FUN_001027c2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00103f65(void)

{
  return 1;
}




undefined8 FUN_0010294e(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101569(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_54;
  char *local_50;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 2;
  puVar1 = (undefined8 *)FUN_00101710(param_1,&local_54);
  local_50 = (char *)*puVar1;
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
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  strcpy(local_48,local_50);
  FUN_00103a92(local_50);
  if (local_50 != (char *)0x0) {
    operator_delete__(local_50);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001025c6(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102248(param_1);
  local_50 = FUN_0010225e(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001020af(local_58);
    local_59 = FUN_001018f2(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001027ee(local_58);
    }
    else {
      local_58 = FUN_00102926(local_58);
    }
  }
  FUN_0010222a(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a26(param_1);
    cVar1 = FUN_00101884(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a76(local_38,&local_58,&local_50);
      goto LAB_00102748;
    }
    FUN_001027c2(&local_48);
  }
  uVar2 = FUN_00102568(local_48);
  cVar1 = FUN_001018f2(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102830(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a76(local_38,&local_58,&local_50);
  }
LAB_00102748:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103a02(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103936(param_3);
  FUN_00103a40(param_1,param_2,uVar1);
  return;
}




void FUN_00102adc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c78(param_1,param_2);
  return;
}




long FUN_001036c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010386c(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001038d0(param_2);
                    /* try { // try from 0010372f to 001037c1 has its CatchHandler @ 001037ed */
    uVar2 = FUN_001036c0(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001038e6(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010386c(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001038d0(local_38);
      uVar2 = FUN_001036c0(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001038e6(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00101b96(void)

{
  return;
}




void FUN_00102d7f(undefined8 param_1)

{
  FUN_00102388(param_1);
  return;
}




void FUN_00103b12(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010318a(undefined8 param_1)

{
  FUN_00103270(param_1);
  return;
}




void FUN_0010400b(void)

{
  return;
}




undefined8 FUN_00102a14(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ab8(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001028a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101ba4(param_2);
  uVar2 = FUN_00102964(param_1);
  FUN_00102adc(uVar2,uVar1);
  return;
}




undefined8
FUN_00102102(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010225e(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102568(param_3);
      uVar5 = FUN_001020af(param_4);
      cVar1 = FUN_001018f2(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102186;
      }
    }
  }
  bVar2 = true;
LAB_00102186:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010222a(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_0010402c(void)

{
  return;
}




undefined8 FUN_001024ec(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010222a(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001031aa(undefined8 param_1)

{
  FUN_00103234(param_1);
  return;
}




undefined8 FUN_0010253c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_00102cb4(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_0010277a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a14(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a14(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00104021(void)

{
  return;
}




undefined8 FUN_00101b46(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010222a(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101ba4(long param_1)

{
  FUN_00102332(param_1 + 0x20);
  return;
}




undefined8 FUN_00102274(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001020af(local_38);
    cVar1 = FUN_001018f2(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001027ee(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102926(local_38);
    }
  }
  FUN_0010222a(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_0010358e(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec0)();
  return;
}




void FUN_00102388(undefined8 param_1)

{
  FUN_0010294e(param_1);
  return;
}




undefined8 FUN_00102c53(undefined8 param_1)

{
  return param_1;
}




void FUN_001018d0(undefined8 *param_1)

{
  FUN_00101ba4(*param_1);
  return;
}




undefined8 FUN_00103474(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103fea(void)

{
  return;
}




void FUN_00103cef(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00104016(void)

{
  return;
}




undefined4 FUN_001018f2(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00101628(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_54;
  char *local_50;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 2;
  puVar1 = (undefined8 *)FUN_00101710(param_1,&local_54);
  local_50 = (char *)*puVar1;
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
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  strcpy(local_48,local_50);
  FUN_00103a92(local_50);
  if (local_50 != (char *)0x0) {
    operator_delete__(local_50);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001032ce(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103404(param_1,param_2);
  lVar1 = FUN_00103474(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010348a(param_1);
                    /* try { // try from 00103329 to 0010332d has its CatchHandler @ 00103333 */
    uVar3 = FUN_001034a0(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_0010192c(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c10(param_1,param_2);
  return;
}




long FUN_001030c6(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00102870(long param_1)

{
  FUN_00102abe(param_1 + 0x20);
  return;
}




void FUN_001028ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102964(param_1);
  FUN_00102b06(uVar1,param_2,1);
  return;
}




void FUN_00103aea(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001021ec(undefined8 param_1,undefined8 param_2)

{
  FUN_001028a8(param_1,param_2);
  FUN_001028ec(param_1,param_2);
  return;
}




void FUN_00103270(undefined8 param_1)

{
  FUN_0010338a(param_1);
  return;
}




void FUN_00103b3e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00104340(void)

{
  return;
}




undefined8 FUN_0010409a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104063,local_18);
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




long FUN_00102764(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103fbe(void)

{
  return;
}




void FUN_00103a92(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00101884(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_001035a2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102d9d(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031ca(local_88);
                    /* try { // try from 00102dcd to 00102e7e has its CatchHandler @ 00102eca */
  __s = operator_new__(100);
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  local_58[0] = 0;
  puVar1 = (undefined8 *)FUN_00101710(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101710(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101710(local_88,local_58);
  *puVar1 = __s;
  FUN_0010320a(local_58,local_88);
                    /* try { // try from 00102e86 to 00102e8a has its CatchHandler @ 00102eb5 */
  FUN_00101569(local_58);
  FUN_001031ea(local_58);
  FUN_001031ea(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001038d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00101c10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102388(param_2);
  uVar1 = FUN_001023a6(uVar1);
  FUN_001023b8(param_1,uVar1);
  return;
}




undefined8 FUN_001016e7(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001031ca(undefined8 param_1)

{
  FUN_001031aa(param_1);
  return;
}




undefined8 FUN_00101c86(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001023e2(param_1);
  uVar2 = FUN_00101c74(param_4);
  uVar3 = FUN_00101c62(param_3);
  uVar4 = FUN_00101c50(param_2);
  FUN_0010240e(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103fdf(void)

{
  return;
}




undefined8 FUN_001027ee(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001023b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bc6(param_2);
  *param_1 = uVar1;
  return;
}




long FUN_0010225e(long param_1)

{
  return param_1 + 8;
}




void FUN_00102d61(undefined8 param_1)

{
  FUN_00102d7f(param_1);
  return;
}




void FUN_00103c96(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102a76(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c53(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a14(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103fa8(void)

{
  return;
}




void FUN_0010198e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010183c(undefined8 param_1,undefined8 param_2)

{
  FUN_00101af6(param_1,param_2);
  return;
}




void FUN_00102ef7(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031ca(local_88);
                    /* try { // try from 00102f27 to 00102fd8 has its CatchHandler @ 00103024 */
  __s = operator_new__(100);
  memset(__s,0x41,0x31);
  *(undefined *)((long)__s + 0x31) = 0;
  local_58[0] = 0;
  puVar1 = (undefined8 *)FUN_00101710(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101710(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101710(local_88,local_58);
  *puVar1 = __s;
  FUN_0010320a(local_58,local_88);
                    /* try { // try from 00102fe0 to 00102fe4 has its CatchHandler @ 0010300f */
  FUN_00101628(local_58);
  FUN_001031ea(local_58);
  FUN_001031ea(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010240e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001016e7(0x30,param_2);
  uVar1 = FUN_00101c74(param_5);
  uVar2 = FUN_00101c62(param_4);
  uVar3 = FUN_00101c50(param_3);
  uVar4 = FUN_00101ba4(param_2);
  uVar5 = FUN_00102964(param_1);
                    /* try { // try from 0010249d to 001024a1 has its CatchHandler @ 001024a4 */
  FUN_001029a4(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined4 * FUN_0010386c(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102870(param_2);
  puVar2 = (undefined4 *)FUN_001038fc(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103fb3(void)

{
  return;
}




void FUN_0010427d(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103234(long param_1)

{
  FUN_0010335a(param_1);
  FUN_0010337a(param_1);
  FUN_00103120(param_1 + 8);
  return;
}




void FUN_00102b38(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102cb4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_0010339a(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001027ee(local_28);
    FUN_0010339a(param_1,uVar1);
    lVar2 = FUN_00102926(local_28);
    FUN_001021ec(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00102926(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001031ea(undefined8 param_1)

{
  FUN_00103290(param_1);
  return;
}




void FUN_0010222a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




undefined8 FUN_00101956(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bc6(param_2);
  FUN_00101bd8(param_1,uVar1);
  return param_1;
}




long FUN_00102552(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_001035c0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010225e(param_1);
  uVar2 = FUN_001036aa(param_2);
  uVar1 = FUN_001036c0(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102764(param_1);
  uVar2 = FUN_0010382f(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102552(param_1);
  uVar2 = FUN_0010384d(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00103564(undefined8 param_1,undefined8 param_2)

{
  FUN_00103696(param_1,param_2);
  return;
}




void FUN_00103051(void)

{
  FUN_00102ef7();
  return;
}




void FUN_00103d22(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




long FUN_001030f3(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103fd4(void)

{
  return;
}




undefined8 FUN_001041c2(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010320a(undefined8 param_1,undefined8 param_2)

{
  FUN_001032ce(param_1,param_2);
  return;
}




void FUN_00103be9(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103948(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023e2(param_1);
  uVar2 = FUN_00103936(param_2);
  FUN_00103994(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00102ccc(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d1e(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101c62(undefined8 param_1)

{
  return param_1;
}




void FUN_00103a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103936(param_3);
  puVar3 = (undefined8 *)FUN_001016e7(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_001029a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c74(param_5);
  uVar2 = FUN_00101c62(param_4);
  uVar3 = FUN_00101c50(param_3);
  FUN_00102b88(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_0010335a(undefined8 param_1)

{
  FUN_00103504(param_1);
  return;
}




void FUN_0010382f(undefined8 param_1)

{
  FUN_001030c6(param_1);
  return;
}




void FUN_00102b06(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c8c(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




void FUN_00103b68(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103513(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103668(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001038fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103936(param_2);
  FUN_00103948(uVar1,uVar2);
  return;
}




undefined8 * FUN_00102804(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00102248(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102c8c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103bbe(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102d1e(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d61(param_2);
  puVar2 = (undefined4 *)FUN_001023a6(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_0010293c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c50(param_3);
  uVar1 = FUN_00101c62(param_4);
  FUN_0010192c(local_38,uVar1);
  FUN_00101c74(param_5);
  uVar1 = FUN_001016e7(0x10,param_2);
                    /* try { // try from 00102c10 to 00102c14 has its CatchHandler @ 00102c17 */
  FUN_00102ccc(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_001014b0();
    DAT_00109020 = 1;
    return;
  }
  return;
}




undefined8
FUN_001019b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c74(param_5);
  uVar2 = FUN_00101c62(param_4);
  uVar3 = FUN_00101c50(param_3);
  local_40 = FUN_00101c86(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a2c to 00101a6f has its CatchHandler @ 00101aad */
  uVar1 = FUN_001020af(local_40);
  local_38 = FUN_00101d06(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001021ec(param_1,local_40);
    FUN_0010222a(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102102(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00103f9d(void)

{
  return;
}




void FUN_001020af(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102870(param_1);
  FUN_00102892(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103668(undefined8 param_1,undefined8 param_2)

{
  FUN_00103564(param_1,param_2);
  return param_1;
}




void FUN_00104037(void)

{
  return;
}




undefined8 FUN_001038e6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102332(undefined8 param_1)

{
  FUN_0010293c(param_1);
  return;
}




void FUN_0010425e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001016e7(0x30,param_2);
  uVar1 = FUN_00103936(param_3);
  uVar2 = FUN_00101ba4(param_2);
  uVar3 = FUN_00102964(param_1);
  FUN_00103a02(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103c14(undefined4 param_1)

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




void FUN_001023e2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102964(param_1);
  FUN_00102976(uVar1,1);
  return;
}




void FUN_001016fd(void)

{
  return;
}




void FUN_00102abe(undefined8 param_1)

{
  FUN_00102c66(param_1);
  return;
}




void FUN_00104063(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103696(void)

{
  return;
}




void FUN_00103404(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103513(param_1,param_2);
  FUN_0010358e(param_1,param_2);
  FUN_00103120(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103290(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102248(param_1);
  FUN_0010339a(param_1,uVar1);
  FUN_0010318a(param_1);
  return;
}




ulong FUN_00103d82(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102a26(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010222a(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010338a(void)

{
  return;
}




void FUN_00102c78(void)

{
  return;
}




void FUN_00102976(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b38(param_1,param_2,0);
  return;
}




undefined8 FUN_001023a6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001041e5(undefined8 *param_1)

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




void FUN_0010314a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_0010384d(undefined8 param_1)

{
  FUN_001030f3(param_1);
  return;
}




void FUN_0010337a(void)

{
  return;
}




void FUN_00103504(void)

{
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101d06(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001024ec(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010225e(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102568(local_50);
    cVar2 = FUN_001018f2(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102568(local_50);
      cVar2 = FUN_001018f2(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102830(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102552(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102552(local_60);
          local_48[1] = 0;
          FUN_00102586(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102804(local_48);
          uVar6 = FUN_00102568(*puVar5);
          cVar2 = FUN_001018f2(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001025c6(local_60,param_3);
          }
          else {
            lVar3 = FUN_001027ee(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102586(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010277a(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102764(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102764(local_60);
        uVar6 = FUN_00102764(local_60);
        FUN_0010277a(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001027c2(local_48);
        uVar6 = FUN_00102568(*puVar5);
        cVar2 = FUN_001018f2(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001025c6(local_60,param_3);
        }
        else {
          lVar3 = FUN_001027ee(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102586(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010277a(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102094;
  }
  lVar3 = FUN_0010253c(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101da8:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102552(local_60);
    uVar6 = FUN_00102568(*puVar5);
    cVar2 = FUN_001018f2(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101da8;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102552(local_60);
    local_48[1] = 0;
    FUN_00102586(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001025c6(local_60,param_3);
  }
LAB_00102094:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_0010404d(void)

{
  return;
}




undefined8 FUN_00103936(undefined8 param_1)

{
  return param_1;
}




void FUN_001034a0(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035a2(local_18,param_1);
  FUN_001035c0(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102830(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a14(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




long FUN_00101710(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_0010183c(param_1,param_2);
  local_28 = FUN_00101866(param_1);
  cVar2 = FUN_00101884(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001018aa(param_1);
    uVar3 = FUN_001018d0(&local_38);
    cVar2 = FUN_001018f2(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001017b0;
    }
  }
  bVar1 = true;
LAB_001017b0:
  if (bVar1) {
    uVar3 = FUN_00101919(param_2);
    FUN_00101956(local_30,uVar3);
    FUN_0010198e(&local_28,&local_38);
    local_38 = FUN_001019b0(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001018d0(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_00102964(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103061(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a92("Calling good()...");
  FUN_00103051();
  FUN_00103a92("Finished good()");
  FUN_00103a92("Calling bad()...");
  FUN_00102d9d();
  FUN_00103a92("Finished bad()");
  return 0;
}




void FUN_00104042(void)

{
  return;
}




undefined4 FUN_001018aa(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b96(param_1);
  return unaff_EBX;
}



