
void FUN_00103578(undefined8 param_1,undefined8 param_2)

{
  FUN_0010363c(param_1,param_2);
  return;
}




void FUN_00103772(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103881(param_1,param_2);
  FUN_001038fc(param_1,param_2);
  FUN_0010348e(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101c62(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001023be(param_1);
  uVar2 = FUN_00101c50(param_4);
  uVar3 = FUN_00101c3e(param_3);
  uVar4 = FUN_00101c2c(param_2);
  FUN_001023ea(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_00102c2f(undefined8 param_1)

{
  return param_1;
}




void FUN_00102fa5(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [12];
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
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103538(local_e8);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  local_b8[0] = 0;
                    /* try { // try from 00103085 to 00103106 has its CatchHandler @ 0010315e */
  plVar1 = (long *)FUN_001016ec(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 1;
  plVar1 = (long *)FUN_001016ec(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 2;
  plVar1 = (long *)FUN_001016ec(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  FUN_00103578(local_b8,local_e8);
                    /* try { // try from 00103111 to 00103115 has its CatchHandler @ 00103146 */
  FUN_001015db(local_b8);
  FUN_00103558(local_b8);
  FUN_00103558(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103a18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103910(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101908(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bec(param_1,param_2);
  return;
}




undefined8 FUN_00103cb6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023be(param_1);
  uVar2 = FUN_00103ca4(param_2);
  FUN_00103d02(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_001033cf(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103e00("Calling good()...");
  FUN_001033ba();
  FUN_00103e00("Finished good()");
  FUN_00103e00("Calling bad()...");
  FUN_00102d79();
  FUN_00103e00("Finished bad()");
  return 0;
}




long FUN_00103a2e(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103bda(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103c3e(param_2);
                    /* try { // try from 00103a9d to 00103b2f has its CatchHandler @ 00103b5b */
    uVar2 = FUN_00103a2e(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103c54(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103bda(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103c3e(local_38);
      uVar2 = FUN_00103a2e(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103c54(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00102cfa(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d3d(param_2);
  puVar2 = (undefined4 *)FUN_00102382(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_001033ba(void)

{
  FUN_00102fa5();
  FUN_0010318e();
  return;
}




void FUN_001034f8(undefined8 param_1)

{
  FUN_001035de(param_1);
  return;
}




undefined8 FUN_0010392e(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010223a(param_1);
  uVar2 = FUN_00103a18(param_2);
  uVar1 = FUN_00103a2e(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102740(param_1);
  uVar2 = FUN_00103b9d(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010252e(param_1);
  uVar2 = FUN_00103bbb(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_0010280c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029f0(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_00103c3e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00102518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_001035a2(long param_1)

{
  FUN_001036c8(param_1);
  FUN_001036e8(param_1);
  FUN_0010348e(param_1 + 8);
  return;
}




void FUN_0010405d(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103ed6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_001044d5(pthread_t *param_1)

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




void FUN_00103a04(void)

{
  return;
}




void FUN_0010380e(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103910(local_18,param_1);
  FUN_0010392e(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102c90(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_0010318e(void)

{
  size_t sVar1;
  char *__src;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [12];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103538(local_e8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  sVar1 = strlen(local_88);
  __src = getenv("ADD");
  if (__src != (char *)0x0) {
    strncat(local_88 + sVar1,__src,99 - sVar1);
  }
  local_b8[0] = 0;
                    /* try { // try from 001032b1 to 00103332 has its CatchHandler @ 0010338a */
  puVar2 = (undefined8 *)FUN_001016ec(local_e8,local_b8);
  *puVar2 = local_88;
  local_b8[0] = 1;
  puVar2 = (undefined8 *)FUN_001016ec(local_e8,local_b8);
  *puVar2 = local_88;
  local_b8[0] = 2;
  puVar2 = (undefined8 *)FUN_001016ec(local_e8,local_b8);
  *puVar2 = local_88;
  FUN_00103578(local_b8,local_e8);
                    /* try { // try from 0010333d to 00103341 has its CatchHandler @ 00103372 */
  FUN_0010164d(local_b8);
  FUN_00103558(local_b8);
  FUN_00103558(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101569(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_001016ec(param_1,&local_1c);
  local_18 = (char *)*puVar1;
  fprintf(stdout,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001029f0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104553(undefined8 *param_1)

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




undefined8 FUN_00101860(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_0010284c(long param_1)

{
  FUN_00102a9a(param_1 + 0x20);
  return;
}




void FUN_00101b80(long param_1)

{
  FUN_0010230e(param_1 + 0x20);
  return;
}




void FUN_00102ae2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c68(param_1,param_2,param_3);
  return;
}




void FUN_0010208b(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010284c(param_1);
  FUN_0010286e(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_001041f4(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001035de(undefined8 param_1)

{
  FUN_001036f8(param_1);
  return;
}




void FUN_001016d9(void)

{
  return;
}




void FUN_00102a9a(undefined8 param_1)

{
  FUN_00102c42(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec0)();
  return;
}




void FUN_001036c8(undefined8 param_1)

{
  FUN_00103872(param_1);
  return;
}




undefined8
FUN_001020de(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010223a(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102544(param_3);
      uVar5 = FUN_0010208b(param_4);
      cVar1 = FUN_001018ce(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102162;
      }
    }
  }
  bVar2 = true;
LAB_00102162:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102206(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8
FUN_0010198c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c50(param_5);
  uVar2 = FUN_00101c3e(param_4);
  uVar3 = FUN_00101c2c(param_3);
  local_40 = FUN_00101c62(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a08 to 00101a4b has its CatchHandler @ 00101a89 */
  uVar1 = FUN_0010208b(local_40);
  local_38 = FUN_00101ce2(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001021c8(param_1,local_40);
    FUN_00102206(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001020de(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_0010363c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103772(param_1,param_2);
  lVar1 = FUN_001037e2(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001037f8(param_1);
                    /* try { // try from 00103697 to 0010369b has its CatchHandler @ 001036a1 */
    uVar3 = FUN_0010380e(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00104358(void)

{
  return;
}




long FUN_00102740(long param_1)

{
  return param_1 + 0x18;
}




void FUN_001046b0(void)

{
  return;
}




void FUN_00104316(void)

{
  return;
}




undefined8 FUN_001018f5(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bbb(undefined8 param_1)

{
  FUN_00103461(param_1);
  return;
}




undefined8 FUN_001024c8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102206(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103558(undefined8 param_1)

{
  FUN_001035fe(param_1);
  return;
}




void FUN_00102d3d(undefined8 param_1)

{
  FUN_00102d5b(param_1);
  return;
}




void FUN_001035fe(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102224(param_1);
  FUN_00103708(param_1,uVar1);
  FUN_001034f8(param_1);
  return;
}




void FUN_0010430b(void)

{
  return;
}




void FUN_0010232c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ba2(param_2);
  FUN_00102394(param_1,uVar1);
  return;
}




undefined8 FUN_00101c3e(undefined8 param_1)

{
  return param_1;
}




void FUN_001043d1(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103f01(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103ca4(param_3);
  FUN_00103dae(param_1,param_2,uVar1);
  return;
}




void FUN_001045cc(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00104321(void)

{
  return;
}




void FUN_0010439a(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




undefined8 FUN_00103c54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102ab8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c54(param_1,param_2);
  return;
}




void FUN_0010434d(void)

{
  return;
}




undefined8 FUN_00103ca4(undefined8 param_1)

{
  return param_1;
}




void FUN_001045eb(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00102250(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010208b(local_38);
    cVar1 = FUN_001018ce(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001027ca(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102902(local_38);
    }
  }
  FUN_00102206(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102b14(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c90(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_001039d6(undefined8 param_1,undefined8 param_2)

{
  FUN_001038d2(param_1,param_2);
  return param_1;
}




long FUN_001037f8(long param_1)

{
  return param_1 + 0x10;
}




void FUN_001034b8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00102a52(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c2f(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029f0(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103e80(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103eac(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001043c6(void)

{
  return;
}




void FUN_00102756(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029f0(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029f0(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00101ba2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102902(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




ulong FUN_001040f0(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_0010509c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010460a(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010402f(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001021c8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102884(param_1,param_2);
  FUN_001028c8(param_1,param_2);
  return;
}




void FUN_00103538(undefined8 param_1)

{
  FUN_00103518(param_1);
  return;
}




void FUN_00103e58(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101b72(void)

{
  return;
}




void FUN_00104004(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102ca8(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102cfa(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 * FUN_00103bda(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010284c(param_2);
  puVar2 = (undefined4 *)FUN_00103c6a(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00101818(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ad2(param_1,param_2);
  return;
}




long FUN_00103461(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_001042e2(void)

{
  return 0;
}




void FUN_00103c6a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103ca4(param_2);
  FUN_00103cb6(uVar1,uVar2);
  return;
}




void FUN_00101bb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ba2(param_2);
  FUN_0010232c(param_1,uVar1);
  return;
}




void FUN_001028c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102940(param_1);
  FUN_00102ae2(uVar1,param_2,1);
  return;
}




void FUN_0010348e(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001034b8(param_1);
  return;
}




void FUN_001038fc(void)

{
  return;
}




long FUN_0010223a(long param_1)

{
  return param_1 + 8;
}




void FUN_001018ac(undefined8 *param_1)

{
  FUN_00101b80(*param_1);
  return;
}




void FUN_001023be(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102940(param_1);
  FUN_00102952(uVar1,1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




void FUN_00102206(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00104379(void)

{
  return;
}




void FUN_00104337(void)

{
  return;
}




void FUN_00104342(void)

{
  return;
}




undefined8 * FUN_0010279e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_001025a2(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102224(param_1);
  local_50 = FUN_0010223a(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010208b(local_58);
    local_59 = FUN_001018ce(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001027ca(local_58);
    }
    else {
      local_58 = FUN_00102902(local_58);
    }
  }
  FUN_00102206(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a02(param_1);
    cVar1 = FUN_00101860(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a52(local_38,&local_58,&local_50);
      goto LAB_00102724;
    }
    FUN_0010279e(&local_48);
  }
  uVar2 = FUN_00102544(local_48);
  cVar1 = FUN_001018ce(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_0010280c(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a52(local_38,&local_58,&local_50);
  }
LAB_00102724:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001043bb(void)

{
  return;
}




void FUN_00101bec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102364(param_2);
  uVar1 = FUN_00102382(uVar1);
  FUN_00102394(param_1,uVar1);
  return;
}




void FUN_00102d5b(undefined8 param_1)

{
  FUN_00102364(param_1);
  return;
}




undefined8 FUN_00101c50(undefined8 param_1)

{
  return param_1;
}




void FUN_00103518(undefined8 param_1)

{
  FUN_001035a2(param_1);
  return;
}




void FUN_00103872(void)

{
  return;
}




void FUN_001043a5(void)

{
  return;
}




undefined8 FUN_00102224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102c54(void)

{
  return;
}




void FUN_00102952(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b14(param_1,param_2,0);
  return;
}




int FUN_001042f1(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101ad2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010223a(param_1);
  uVar2 = FUN_00102224(param_1);
  FUN_00102250(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00102a02(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102206(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001016c3(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103e00(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102364(undefined8 param_1)

{
  FUN_0010292a(param_1);
  return;
}




undefined8 FUN_0010286e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined4 FUN_00101886(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b72(param_1);
  return unaff_EBX;
}




void FUN_00104363(void)

{
  return;
}




void FUN_0010436e(void)

{
  return;
}




void FUN_00102b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c2c(param_3);
  uVar1 = FUN_00101c3e(param_4);
  FUN_00101908(local_38,uVar1);
  FUN_00101c50(param_5);
  uVar1 = FUN_001016c3(0x10,param_2);
                    /* try { // try from 00102bec to 00102bf0 has its CatchHandler @ 00102bf3 */
  FUN_00102ca8(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102562(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001029f0(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010438f(void)

{
  return;
}




undefined8 FUN_0010292a(undefined8 *param_1)

{
  return *param_1;
}




void FUN_0010196a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00102c42(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f57(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101b22(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102206(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void _FINI_0(void)

{
  if (DAT_00109028 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_001014b0();
    DAT_00109028 = 1;
    return;
  }
  return;
}




undefined4 FUN_001018ce(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




long FUN_00103434(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00103e26(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_001027ca(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103fdc(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001036e8(void)

{
  return;
}




undefined8 FUN_00102918(undefined8 param_1)

{
  return param_1;
}




void FUN_001038d2(undefined8 param_1,undefined8 param_2)

{
  FUN_00103a04(param_1,param_2);
  return;
}




void FUN_00102980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c50(param_5);
  uVar2 = FUN_00101c3e(param_4);
  uVar3 = FUN_00101c2c(param_3);
  FUN_00102b64(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00102c68(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00104090(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101842(undefined8 param_1)

{
  FUN_00101b22(param_1);
  return;
}




void FUN_00103dae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103ca4(param_3);
  puVar3 = (undefined8 *)FUN_001016c3(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8 FUN_001037e2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 * FUN_001027e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001023ea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001016c3(0x30,param_2);
  uVar1 = FUN_00101c50(param_5);
  uVar2 = FUN_00101c3e(param_4);
  uVar3 = FUN_00101c2c(param_3);
  uVar4 = FUN_00101b80(param_2);
  uVar5 = FUN_00102940(param_1);
                    /* try { // try from 00102479 to 0010247d has its CatchHandler @ 00102480 */
  FUN_00102980(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_0010230e(undefined8 param_1)

{
  FUN_00102918(param_1);
  return;
}




void FUN_00103f2c(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102d79(void)

{
  size_t sVar1;
  char *__src;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [12];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103538(local_e8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  sVar1 = strlen(local_88);
  __src = getenv("ADD");
  if (__src != (char *)0x0) {
    strncat(local_88 + sVar1,__src,99 - sVar1);
  }
  local_b8[0] = 0;
                    /* try { // try from 00102e9c to 00102f1d has its CatchHandler @ 00102f75 */
  puVar2 = (undefined8 *)FUN_001016ec(local_e8,local_b8);
  *puVar2 = local_88;
  local_b8[0] = 1;
  puVar2 = (undefined8 *)FUN_001016ec(local_e8,local_b8);
  *puVar2 = local_88;
  local_b8[0] = 2;
  puVar2 = (undefined8 *)FUN_001016ec(local_e8,local_b8);
  *puVar2 = local_88;
  FUN_00103578(local_b8,local_e8);
                    /* try { // try from 00102f28 to 00102f2c has its CatchHandler @ 00102f5d */
  FUN_00101569(local_b8);
  FUN_00103558(local_b8);
  FUN_00103558(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001016ec(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101818(param_1,param_2);
  local_28 = FUN_00101842(param_1);
  cVar2 = FUN_00101860(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101886(param_1);
    uVar3 = FUN_001018ac(&local_38);
    cVar2 = FUN_001018ce(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0010178c;
    }
  }
  bVar1 = true;
LAB_0010178c:
  if (bVar1) {
    uVar3 = FUN_001018f5(param_2);
    FUN_00101932(local_30,uVar3);
    FUN_0010196a(&local_28,&local_38);
    local_38 = FUN_0010198c(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001018ac(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00102394(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ba2(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00101932(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ba2(param_2);
  FUN_00101bb4(param_1,uVar1);
  return param_1;
}




void FUN_00104640(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103d02(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001016c3(0x30,param_2);
  uVar1 = FUN_00103ca4(param_3);
  uVar2 = FUN_00101b80(param_2);
  uVar3 = FUN_00102940(param_1);
  FUN_00103d70(uVar3,uVar2,uVar1);
  return;
}




void FUN_00104384(void)

{
  return;
}




undefined8 FUN_00104408(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001043d1,local_18);
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




void FUN_0010164d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_001016ec(param_1,&local_1c);
  local_18 = *puVar1;
  fprintf(stdout,"%s\n",local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103881(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001039d6(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103b9d(undefined8 param_1)

{
  FUN_00103434(param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101ce2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001024c8(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010223a(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102544(local_50);
    cVar2 = FUN_001018ce(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102544(local_50);
      cVar2 = FUN_001018ce(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_0010280c(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010252e(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010252e(local_60);
          local_48[1] = 0;
          FUN_00102562(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001027e0(local_48);
          uVar6 = FUN_00102544(*puVar5);
          cVar2 = FUN_001018ce(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001025a2(local_60,param_3);
          }
          else {
            lVar3 = FUN_001027ca(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102562(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102756(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102740(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102740(local_60);
        uVar6 = FUN_00102740(local_60);
        FUN_00102756(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010279e(local_48);
        uVar6 = FUN_00102544(*puVar5);
        cVar2 = FUN_001018ce(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001025a2(local_60,param_3);
        }
        else {
          lVar3 = FUN_001027ca(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102562(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102756(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102070;
  }
  lVar3 = FUN_00102518(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101d84:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010252e(local_60);
    uVar6 = FUN_00102544(*puVar5);
    cVar2 = FUN_001018ce(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101d84;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010252e(local_60);
    local_48[1] = 0;
    FUN_00102562(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001025a2(local_60,param_3);
  }
LAB_00102070:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00102884(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b80(param_2);
  uVar2 = FUN_00102940(param_1);
  FUN_00102ab8(uVar2,uVar1);
  return;
}




undefined8 FUN_00102382(undefined8 param_1)

{
  return param_1;
}




void FUN_00102544(undefined8 param_1)

{
  FUN_0010208b(param_1);
  return;
}




undefined8 FUN_001042d3(void)

{
  return 1;
}




void FUN_00103f82(undefined4 param_1)

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




void FUN_00103708(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001027ca(local_28);
    FUN_00103708(param_1,uVar1);
    lVar2 = FUN_00102902(local_28);
    FUN_001021c8(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00102940(undefined8 param_1)

{
  return param_1;
}




long FUN_0010252e(long param_1)

{
  return param_1 + 0x20;
}




void FUN_0010432c(void)

{
  return;
}




void FUN_001043b0(void)

{
  return;
}




void FUN_001015db(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_001016ec(param_1,&local_1c);
  local_18 = (char *)*puVar1;
  fprintf(stdout,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101c2c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104530(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001036f8(void)

{
  return;
}



