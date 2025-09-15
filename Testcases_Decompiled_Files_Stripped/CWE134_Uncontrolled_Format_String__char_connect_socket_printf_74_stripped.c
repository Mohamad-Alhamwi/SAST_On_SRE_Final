
void FUN_0010486e(undefined8 param_1,undefined8 param_2)

{
  FUN_00104932(param_1,param_2);
  return;
}




void FUN_00104a68(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104b77(param_1,param_2);
  FUN_00104bf2(param_1,param_2);
  FUN_00104784(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00103438(param_1);
  uVar2 = FUN_00102cca(param_4);
  uVar3 = FUN_00102cb8(param_3);
  uVar4 = FUN_00102ca6(param_2);
  FUN_00103464(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_00103ca9(undefined8 param_1)

{
  return param_1;
}




void FUN_0010415d(void)

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
  FUN_0010482e(local_e8);
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
                    /* try { // try from 0010423d to 001042be has its CatchHandler @ 00104316 */
  plVar1 = (long *)FUN_00102766(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 1;
  plVar1 = (long *)FUN_00102766(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 2;
  plVar1 = (long *)FUN_00102766(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  FUN_0010486e(local_b8,local_e8);
                    /* try { // try from 001042c9 to 001042cd has its CatchHandler @ 001042fe */
  FUN_00102671(local_b8);
  FUN_0010484e(local_b8);
  FUN_0010484e(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104d0e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104c06(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102982(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c66(param_1,param_2);
  return;
}




undefined8 FUN_00104fac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103438(param_1);
  uVar2 = FUN_00104f9a(param_2);
  FUN_00104ff8(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_001046c5(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001050f6("Calling good()...");
  FUN_001046b0();
  FUN_001050f6("Finished good()");
  FUN_001050f6("Calling bad()...");
  FUN_00103df3();
  FUN_001050f6("Finished bad()");
  return 0;
}




long FUN_00104d24(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00104ed0(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00104f34(param_2);
                    /* try { // try from 00104d93 to 00104e25 has its CatchHandler @ 00104e51 */
    uVar2 = FUN_00104d24(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00104f4a(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00104ed0(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00104f34(local_38);
      uVar2 = FUN_00104d24(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00104f4a(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00103d74(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103db7(param_2);
  puVar2 = (undefined4 *)FUN_001033fc(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_001046b0(void)

{
  FUN_0010415d();
  FUN_00104346();
  return;
}




void FUN_001047ee(undefined8 param_1)

{
  FUN_001048d4(param_1);
  return;
}




undefined8 FUN_00104c24(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001032b4(param_1);
  uVar2 = FUN_00104d0e(param_2);
  uVar1 = FUN_00104d24(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001037ba(param_1);
  uVar2 = FUN_00104e93(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001035a8(param_1);
  uVar2 = FUN_00104eb1(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00103886(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103a6a(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_00104f34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00103592(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00104898(long param_1)

{
  FUN_001049be(param_1);
  FUN_001049de(param_1);
  FUN_00104784(param_1 + 8);
  return;
}




void FUN_00105353(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001051cc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_001057cb(pthread_t *param_1)

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




void FUN_00104cfa(void)

{
  return;
}




void FUN_00104b04(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104c06(local_18,param_1);
  FUN_00104c24(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103d0a(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00104346(void)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined local_f8 [48];
  undefined4 local_c8 [12];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010482e(local_f8);
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
  sVar2 = strlen(local_88);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_98.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00104489 to 00104628 has its CatchHandler @ 00104680 */
    iVar1 = connect(__fd,&local_98,0x10);
    if (iVar1 != -1) {
      sVar3 = recv(__fd,local_88 + sVar2,99 - sVar2,0);
      iVar1 = (int)sVar3;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_88[(long)iVar1 + sVar2] = '\0';
        pcVar4 = strchr(local_88,0xd);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strchr(local_88,10);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  local_c8[0] = 0;
  puVar5 = (undefined8 *)FUN_00102766(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 1;
  puVar5 = (undefined8 *)FUN_00102766(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 2;
  puVar5 = (undefined8 *)FUN_00102766(local_f8,local_c8);
  *puVar5 = local_88;
  FUN_0010486e(local_c8,local_f8);
                    /* try { // try from 00104633 to 00104637 has its CatchHandler @ 00104668 */
  FUN_001026d9(local_c8);
  FUN_0010484e(local_c8);
  FUN_0010484e(local_f8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102609(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00102766(param_1,&local_1c);
  local_18 = (char *)*puVar1;
  printf(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103a6a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00105849(undefined8 *param_1)

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




undefined8 FUN_001028da(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_001038c6(long param_1)

{
  FUN_00103b14(param_1 + 0x20);
  return;
}




void FUN_00102bfa(long param_1)

{
  FUN_00103388(param_1 + 0x20);
  return;
}




void FUN_00103b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103ce2(param_1,param_2,param_3);
  return;
}




void FUN_00103105(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001038c6(param_1);
  FUN_001038e8(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_001054ea(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void _FINI_0(void)

{
  if (DAT_0010a020 == '\0') {
    if (PTR___cxa_finalize_00109fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_0010a008);
    }
    FUN_00102550();
    DAT_0010a020 = 1;
    return;
  }
  return;
}




void FUN_001048d4(undefined8 param_1)

{
  FUN_001049ee(param_1);
  return;
}




void FUN_00102752(void)

{
  return;
}




void FUN_00103b14(undefined8 param_1)

{
  FUN_00103cbc(param_1);
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109e98)();
  return;
}




void FUN_001049be(undefined8 param_1)

{
  FUN_00104b68(param_1);
  return;
}




undefined8
FUN_00103158(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001032b4(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001035be(param_3);
      uVar5 = FUN_00103105(param_4);
      cVar1 = FUN_00102948(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001031dc;
      }
    }
  }
  bVar2 = true;
LAB_001031dc:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00103280(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8
FUN_00102a06(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00102cca(param_5);
  uVar2 = FUN_00102cb8(param_4);
  uVar3 = FUN_00102ca6(param_3);
  local_40 = FUN_00102cdc(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102a82 to 00102ac5 has its CatchHandler @ 00102b03 */
  uVar1 = FUN_00103105(local_40);
  local_38 = FUN_00102d5c(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00103242(param_1,local_40);
    FUN_00103280(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00103158(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00104932(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00104a68(param_1,param_2);
  lVar1 = FUN_00104ad8(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00104aee(param_1);
                    /* try { // try from 0010498d to 00104991 has its CatchHandler @ 00104997 */
    uVar3 = FUN_00104b04(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_0010564e(void)

{
  return;
}




long FUN_001037ba(long param_1)

{
  return param_1 + 0x18;
}




void FUN_001059a0(void)

{
  return;
}




void FUN_0010560c(void)

{
  return;
}




undefined8 FUN_0010296f(undefined8 param_1)

{
  return param_1;
}




void FUN_00104eb1(undefined8 param_1)

{
  FUN_00104757(param_1);
  return;
}




undefined8 FUN_00103542(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103280(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010484e(undefined8 param_1)

{
  FUN_001048f4(param_1);
  return;
}




void FUN_00103db7(undefined8 param_1)

{
  FUN_00103dd5(param_1);
  return;
}




void FUN_001048f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010329e(param_1);
  FUN_001049fe(param_1,uVar1);
  FUN_001047ee(param_1);
  return;
}




void FUN_00105601(void)

{
  return;
}




void FUN_001033a6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c1c(param_2);
  FUN_0010340e(param_1,uVar1);
  return;
}




undefined8 FUN_00102cb8(undefined8 param_1)

{
  return param_1;
}




void FUN_001056c7(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001051f7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00105066(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104f9a(param_3);
  FUN_001050a4(param_1,param_2,uVar1);
  return;
}




void FUN_001058c2(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00105617(void)

{
  return;
}




void FUN_00105690(void)

{
  return;
}




undefined8 FUN_00104f4a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103b32(undefined8 param_1,undefined8 param_2)

{
  FUN_00103cce(param_1,param_2);
  return;
}




void FUN_00105643(void)

{
  return;
}




undefined8 FUN_00104f9a(undefined8 param_1)

{
  return param_1;
}




void FUN_001058e1(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001032ca(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00103105(local_38);
    cVar1 = FUN_00102948(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00103844(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010397c(local_38);
    }
  }
  FUN_00103280(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103b8e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103d0a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_00104ccc(undefined8 param_1,undefined8 param_2)

{
  FUN_00104bc8(param_1,param_2);
  return param_1;
}




long FUN_00104aee(long param_1)

{
  return param_1 + 0x10;
}




void FUN_001047ae(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00103acc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103ca9(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103a6a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00105176(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001051a2(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001056bc(void)

{
  return;
}




void FUN_001037d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103a6a(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103a6a(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00102c1c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010397c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




ulong FUN_001053e6(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00105900(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00105325(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103242(undefined8 param_1,undefined8 param_2)

{
  FUN_001038fe(param_1,param_2);
  FUN_00103942(param_1,param_2);
  return;
}




void FUN_0010482e(undefined8 param_1)

{
  FUN_0010480e(param_1);
  return;
}




void FUN_0010514e(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102bec(void)

{
  return;
}




void FUN_001052fa(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103d22(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103d74(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 * FUN_00104ed0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001038c6(param_2);
  puVar2 = (undefined4 *)FUN_00104f60(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00102892(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b4c(param_1,param_2);
  return;
}




long FUN_00104757(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_001055d8(void)

{
  return 0;
}




void FUN_00104f60(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00104f9a(param_2);
  FUN_00104fac(uVar1,uVar2);
  return;
}




void FUN_00102c2e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c1c(param_2);
  FUN_001033a6(param_1,uVar1);
  return;
}




void FUN_00103942(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001039ba(param_1);
  FUN_00103b5c(uVar1,param_2,1);
  return;
}




void FUN_00104784(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001047ae(param_1);
  return;
}




void FUN_00104bf2(void)

{
  return;
}




long FUN_001032b4(long param_1)

{
  return param_1 + 8;
}




void FUN_00102926(undefined8 *param_1)

{
  FUN_00102bfa(*param_1);
  return;
}




void FUN_00103438(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001039ba(param_1);
  FUN_001039cc(uVar1,1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102563) */
/* WARNING: Removing unreachable block (ram,0x0010256f) */

void FUN_00102550(void)

{
  return;
}




void FUN_00103280(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010566f(void)

{
  return;
}




void FUN_0010562d(void)

{
  return;
}




void FUN_00105638(void)

{
  return;
}




undefined8 * FUN_00103818(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_0010361c(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_0010329e(param_1);
  local_50 = FUN_001032b4(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00103105(local_58);
    local_59 = FUN_00102948(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00103844(local_58);
    }
    else {
      local_58 = FUN_0010397c(local_58);
    }
  }
  FUN_00103280(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103a7c(param_1);
    cVar1 = FUN_001028da(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103acc(local_38,&local_58,&local_50);
      goto LAB_0010379e;
    }
    FUN_00103818(&local_48);
  }
  uVar2 = FUN_001035be(local_48);
  cVar1 = FUN_00102948(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103886(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103acc(local_38,&local_58,&local_50);
  }
LAB_0010379e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001056b1(void)

{
  return;
}




void FUN_00102c66(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001033de(param_2);
  uVar1 = FUN_001033fc(uVar1);
  FUN_0010340e(param_1,uVar1);
  return;
}




void FUN_00103dd5(undefined8 param_1)

{
  FUN_001033de(param_1);
  return;
}




undefined8 FUN_00102cca(undefined8 param_1)

{
  return param_1;
}




void FUN_0010480e(undefined8 param_1)

{
  FUN_00104898(param_1);
  return;
}




void FUN_00104b68(void)

{
  return;
}




void FUN_0010569b(void)

{
  return;
}




undefined8 FUN_0010329e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103cce(void)

{
  return;
}




void FUN_001039cc(undefined8 param_1,undefined8 param_2)

{
  FUN_00103b8e(param_1,param_2,0);
  return;
}




int FUN_001055e7(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102b4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001032b4(param_1);
  uVar2 = FUN_0010329e(param_1);
  FUN_001032ca(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00103a7c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103280(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010273c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001050f6(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001033de(undefined8 param_1)

{
  FUN_001039a4(param_1);
  return;
}




undefined8 FUN_001038e8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined4 FUN_00102900(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102bec(param_1);
  return unaff_EBX;
}




void FUN_00105659(void)

{
  return;
}




void FUN_00105664(void)

{
  return;
}




void FUN_00103bde(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ca6(param_3);
  uVar1 = FUN_00102cb8(param_4);
  FUN_00102982(local_38,uVar1);
  FUN_00102cca(param_5);
  uVar1 = FUN_0010273c(0x10,param_2);
                    /* try { // try from 00103c66 to 00103c6a has its CatchHandler @ 00103c6d */
  FUN_00103d22(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001035dc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103a6a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00105685(void)

{
  return;
}




undefined8 FUN_001039a4(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001029e4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00103cbc(undefined8 param_1)

{
  return param_1;
}




void FUN_0010524d(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102b9c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103280(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x001025a4) */
/* WARNING: Removing unreachable block (ram,0x001025b0) */

void FUN_00102580(void)

{
  return;
}




undefined4 FUN_00102948(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




long FUN_0010472a(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_0010511c(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00103844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001052d2(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001049de(void)

{
  return;
}




undefined8 FUN_00103992(undefined8 param_1)

{
  return param_1;
}




void FUN_00104bc8(undefined8 param_1,undefined8 param_2)

{
  FUN_00104cfa(param_1,param_2);
  return;
}




void FUN_001039fa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102cca(param_5);
  uVar2 = FUN_00102cb8(param_4);
  uVar3 = FUN_00102ca6(param_3);
  FUN_00103bde(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103ce2(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00105386(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001028bc(undefined8 param_1)

{
  FUN_00102b9c(param_1);
  return;
}




void FUN_001050a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00104f9a(param_3);
  puVar3 = (undefined8 *)FUN_0010273c(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8 FUN_00104ad8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 * FUN_0010385a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010273c(0x30,param_2);
  uVar1 = FUN_00102cca(param_5);
  uVar2 = FUN_00102cb8(param_4);
  uVar3 = FUN_00102ca6(param_3);
  uVar4 = FUN_00102bfa(param_2);
  uVar5 = FUN_001039ba(param_1);
                    /* try { // try from 001034f3 to 001034f7 has its CatchHandler @ 001034fa */
  FUN_001039fa(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103388(undefined8 param_1)

{
  FUN_00103992(param_1);
  return;
}




void FUN_00105222(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103df3(void)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined local_f8 [48];
  undefined4 local_c8 [12];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010482e(local_f8);
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
  sVar2 = strlen(local_88);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_98.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00103f36 to 001040d5 has its CatchHandler @ 0010412d */
    iVar1 = connect(__fd,&local_98,0x10);
    if (iVar1 != -1) {
      sVar3 = recv(__fd,local_88 + sVar2,99 - sVar2,0);
      iVar1 = (int)sVar3;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_88[(long)iVar1 + sVar2] = '\0';
        pcVar4 = strchr(local_88,0xd);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strchr(local_88,10);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  local_c8[0] = 0;
  puVar5 = (undefined8 *)FUN_00102766(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 1;
  puVar5 = (undefined8 *)FUN_00102766(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 2;
  puVar5 = (undefined8 *)FUN_00102766(local_f8,local_c8);
  *puVar5 = local_88;
  FUN_0010486e(local_c8,local_f8);
                    /* try { // try from 001040e0 to 001040e4 has its CatchHandler @ 00104115 */
  FUN_00102609(local_c8);
  FUN_0010484e(local_c8);
  FUN_0010484e(local_f8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00102766(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00102892(param_1,param_2);
  local_28 = FUN_001028bc(param_1);
  cVar2 = FUN_001028da(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00102900(param_1);
    uVar3 = FUN_00102926(&local_38);
    cVar2 = FUN_00102948(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00102806;
    }
  }
  bVar1 = true;
LAB_00102806:
  if (bVar1) {
    uVar3 = FUN_0010296f(param_2);
    FUN_001029ac(local_30,uVar3);
    FUN_001029e4(&local_28,&local_38);
    local_38 = FUN_00102a06(param_1,local_28,&DAT_00106004,local_30,&local_39);
  }
  lVar4 = FUN_00102926(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_0010340e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c1c(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_001029ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c1c(param_2);
  FUN_00102c2e(param_1,uVar1);
  return param_1;
}




void FUN_00105930(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00104ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010273c(0x30,param_2);
  uVar1 = FUN_00104f9a(param_3);
  uVar2 = FUN_00102bfa(param_2);
  uVar3 = FUN_001039ba(param_1);
  FUN_00105066(uVar3,uVar2,uVar1);
  return;
}




void FUN_0010567a(void)

{
  return;
}




undefined8 FUN_001056fe(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001056c7,local_18);
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




void FUN_001026d9(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00102766(param_1,&local_1c);
  local_18 = (char *)*puVar1;
  puts(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104b77(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104ccc(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00104e93(undefined8 param_1)

{
  FUN_0010472a(param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00103542(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001032b4(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001035be(local_50);
    cVar2 = FUN_00102948(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001035be(local_50);
      cVar2 = FUN_00102948(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103886(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001035a8(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001035a8(local_60);
          local_48[1] = 0;
          FUN_001035dc(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010385a(local_48);
          uVar6 = FUN_001035be(*puVar5);
          cVar2 = FUN_00102948(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010361c(local_60,param_3);
          }
          else {
            lVar3 = FUN_00103844(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001035dc(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001037d0(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001037ba(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001037ba(local_60);
        uVar6 = FUN_001037ba(local_60);
        FUN_001037d0(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00103818(local_48);
        uVar6 = FUN_001035be(*puVar5);
        cVar2 = FUN_00102948(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010361c(local_60,param_3);
        }
        else {
          lVar3 = FUN_00103844(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001035dc(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001037d0(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001030ea;
  }
  lVar3 = FUN_00103592(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102dfe:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001035a8(local_60);
    uVar6 = FUN_001035be(*puVar5);
    cVar2 = FUN_00102948(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102dfe;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001035a8(local_60);
    local_48[1] = 0;
    FUN_001035dc(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010361c(local_60,param_3);
  }
LAB_001030ea:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_001038fe(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102bfa(param_2);
  uVar2 = FUN_001039ba(param_1);
  FUN_00103b32(uVar2,uVar1);
  return;
}




undefined8 FUN_001033fc(undefined8 param_1)

{
  return param_1;
}




void FUN_001035be(undefined8 param_1)

{
  FUN_00103105(param_1);
  return;
}




undefined8 FUN_001055c9(void)

{
  return 1;
}




void FUN_00105278(undefined4 param_1)

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




void FUN_001049fe(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00103844(local_28);
    FUN_001049fe(param_1,uVar1);
    lVar2 = FUN_0010397c(local_28);
    FUN_00103242(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_001039ba(undefined8 param_1)

{
  return param_1;
}




long FUN_001035a8(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00105622(void)

{
  return;
}




void FUN_001056a6(void)

{
  return;
}




void FUN_00102671(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00102766(param_1,&local_1c);
  local_18 = (char *)*puVar1;
  printf(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102ca6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00105826(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001049ee(void)

{
  return;
}



