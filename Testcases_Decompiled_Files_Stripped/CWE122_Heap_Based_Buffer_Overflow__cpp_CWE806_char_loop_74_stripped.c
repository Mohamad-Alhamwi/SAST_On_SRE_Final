
void FUN_00102294(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00104028(void)

{
  return;
}




void FUN_0010408b(void)

{
  return;
}




void FUN_00102478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101751(0x30,param_2);
  uVar1 = FUN_00101cde(param_5);
  uVar2 = FUN_00101ccc(param_4);
  uVar3 = FUN_00101cba(param_3);
  uVar4 = FUN_00101c0e(param_2);
  uVar5 = FUN_001029ce(param_1);
                    /* try { // try from 00102507 to 0010250b has its CatchHandler @ 0010250e */
  FUN_00102a0e(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00102f61(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103234(local_88);
                    /* try { // try from 00102f91 to 00103042 has its CatchHandler @ 0010308e */
  __s = operator_new__(100);
  memset(__s,0x41,0x31);
  *(undefined *)((long)__s + 0x31) = 0;
  local_58[0] = 0;
  puVar1 = (undefined8 *)FUN_0010177a(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_0010177a(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_0010177a(local_88,local_58);
  *puVar1 = __s;
  FUN_00103274(local_58,local_88);
                    /* try { // try from 0010304a to 0010304e has its CatchHandler @ 00103079 */
  FUN_0010165d(local_58);
  FUN_00103254(local_58);
  FUN_00103254(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b22(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 * FUN_0010282c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_0010244c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029ce(param_1);
  FUN_001029e0(uVar1,1);
  return;
}




void FUN_0010165d(undefined8 param_1)

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
  puVar1 = (undefined8 *)FUN_0010177a(param_1,&local_64);
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
  FUN_00103afc(local_58);
  if (local_58 != (char *)0x0) {
    operator_delete__(local_58);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c00(void)

{
  return;
}




void FUN_00103d00(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




bool FUN_001041d1(pthread_t *param_1)

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




void FUN_001042e7(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001018d0(undefined8 param_1)

{
  FUN_00101bb0(param_1);
  return;
}




void FUN_00102b46(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ce2(param_1,param_2);
  return;
}




void FUN_00101b60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001022c8(param_1);
  uVar2 = FUN_001022b2(param_1);
  FUN_001022de(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8
FUN_00101a1a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101cde(param_5);
  uVar2 = FUN_00101ccc(param_4);
  uVar3 = FUN_00101cba(param_3);
  local_40 = FUN_00101cf0(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a96 to 00101ad9 has its CatchHandler @ 00101b17 */
  uVar1 = FUN_00102119(local_40);
  local_38 = FUN_00101d70(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102256(param_1,local_40);
    FUN_00102294(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010216c(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00103d8c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103c28(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103d59(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




int FUN_00103fed(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_0010422c(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001035f8(void)

{
  return;
}




void FUN_00104306(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00101983(undefined8 param_1)

{
  return param_1;
}




void FUN_001033e4(void)

{
  return;
}




void FUN_00104033(void)

{
  return;
}




undefined8 FUN_00101c30(undefined8 param_1)

{
  return param_1;
}




void FUN_001042c8(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001040ac(void)

{
  return;
}




void FUN_00103bd2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001025d2(undefined8 param_1)

{
  FUN_00102119(param_1);
  return;
}




void FUN_00103d2b(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001028fc(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec0)();
  return;
}




undefined8 FUN_00102556(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102294(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102a0e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101cde(param_5);
  uVar2 = FUN_00101ccc(param_4);
  uVar3 = FUN_00101cba(param_3);
  FUN_00102bf2(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_0010360c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001019c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c30(param_2);
  FUN_00101c42(param_1,uVar1);
  return param_1;
}




void FUN_00102cf6(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001039a0(param_3);
  FUN_00103aaa(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001030cb(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103afc("Calling good()...");
  FUN_001030bb();
  FUN_00103afc("Finished good()");
  FUN_00103afc("Calling bad()...");
  FUN_00102e07();
  FUN_00103afc("Finished bad()");
  return 0;
}




void FUN_0010403e(void)

{
  return;
}




undefined8 FUN_001029a6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001039b2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010244c(param_1);
  uVar2 = FUN_001039a0(param_2);
  FUN_001039fe(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_00102858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00101ccc(undefined8 param_1)

{
  return param_1;
}




void FUN_0010405f(void)

{
  return;
}




void FUN_001023f2(undefined8 param_1)

{
  FUN_001029b8(param_1);
  return;
}




long FUN_00103130(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_00102410(undefined8 param_1)

{
  return param_1;
}




void FUN_00102bf2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cba(param_3);
  uVar1 = FUN_00101ccc(param_4);
  FUN_00101996(local_38,uVar1);
  FUN_00101cde(param_5);
  uVar1 = FUN_00101751(0x10,param_2);
                    /* try { // try from 00102c7a to 00102c7e has its CatchHandler @ 00102c81 */
  FUN_00102d36(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001025bc(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00104054(void)

{
  return;
}




void FUN_00101996(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c7a(param_1,param_2);
  return;
}




void FUN_001019f8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8
FUN_0010216c(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001022c8(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001025d2(param_3);
      uVar5 = FUN_00102119(param_4);
      cVar1 = FUN_0010195c(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001021f0;
      }
    }
  }
  bVar2 = true;
LAB_001021f0:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102294(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




long FUN_001034f4(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_001022b2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102b28(undefined8 param_1)

{
  FUN_00102cd0(param_1);
  return;
}




long FUN_0010177a(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001018a6(param_1,param_2);
  local_28 = FUN_001018d0(param_1);
  cVar2 = FUN_001018ee(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101914(param_1);
    uVar3 = FUN_0010193a(&local_38);
    cVar2 = FUN_0010195c(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0010181a;
    }
  }
  bVar1 = true;
LAB_0010181a:
  if (bVar1) {
    uVar3 = FUN_00101983(param_2);
    FUN_001019c0(local_30,uVar3);
    FUN_001019f8(&local_28,&local_38);
    local_38 = FUN_00101a1a(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_0010193a(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_001033c4(undefined8 param_1)

{
  FUN_0010356e(param_1);
  return;
}




void FUN_0010401d(void)

{
  return;
}




void FUN_00103c53(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00104049(void)

{
  return;
}




void FUN_001043b0(void)

{
  return;
}




void FUN_001018a6(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b60(param_1,param_2);
  return;
}




void FUN_00103254(undefined8 param_1)

{
  FUN_001032fa(param_1);
  return;
}




undefined8 FUN_001018ee(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00102de9(undefined8 param_1)

{
  FUN_001023f2(param_1);
  return;
}




void FUN_001027e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a7e(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a7e(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 * FUN_0010286e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001039fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101751(0x30,param_2);
  uVar1 = FUN_001039a0(param_3);
  uVar2 = FUN_00101c0e(param_2);
  uVar3 = FUN_001029ce(param_1);
  FUN_00103a6c(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00101cde(undefined8 param_1)

{
  return param_1;
}




void FUN_00103214(undefined8 param_1)

{
  FUN_0010329e(param_1);
  return;
}




void FUN_00103aaa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001039a0(param_3);
  puVar3 = (undefined8 *)FUN_00101751(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8 FUN_0010424f(undefined8 *param_1)

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




void FUN_001040a1(void)

{
  return;
}




undefined8 FUN_001025a6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_00103fde(void)

{
  return 0;
}




undefined8 FUN_001039a0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101751(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010350a(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010360c(local_18,param_1);
  FUN_0010362a(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102d1e(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_00103714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00101bb0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102294(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




long FUN_0010315d(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00101c42(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c30(param_2);
  FUN_001023ba(param_1,uVar1);
  return;
}




void FUN_00104012(void)

{
  return;
}




void FUN_001025f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a7e(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_001022de(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102119(local_38);
    cVar1 = FUN_0010195c(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102858(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102990(local_38);
    }
  }
  FUN_00102294(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102119(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001028da(param_1);
  FUN_001028fc(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ce2(void)

{
  return;
}




void FUN_00103bfd(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001029ce(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103ef0(long param_1,ulong param_2,long param_3)

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




void FUN_0010193a(undefined8 *param_1)

{
  FUN_00101c0e(*param_1);
  return;
}




void FUN_00101569(undefined8 param_1)

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
  puVar1 = (undefined8 *)FUN_0010177a(param_1,&local_64);
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
  FUN_00103afc(local_58);
  if (local_58 != (char *)0x0) {
    operator_delete__(local_58);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d36(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d88(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001023ba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c30(param_2);
  FUN_00102422(param_1,uVar1);
  return;
}




void FUN_00103700(void)

{
  return;
}




undefined8 FUN_00103fcf(void)

{
  return 1;
}




undefined8 FUN_00104104(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001040cd,local_18);
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




void FUN_001031f4(undefined8 param_1)

{
  FUN_001032da(param_1);
  return;
}




undefined8 FUN_00102a90(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102294(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001032fa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022b2(param_1);
  FUN_00103404(param_1,uVar1);
  FUN_001031f4(param_1);
  return;
}




void FUN_0010289a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a7e(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_0010318a(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001031b4(param_1);
  return;
}




undefined8 FUN_00101cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0010244c(param_1);
  uVar2 = FUN_00101cde(param_4);
  uVar3 = FUN_00101ccc(param_3);
  uVar4 = FUN_00101cba(param_2);
  FUN_00102478(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined4 FUN_00101914(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101c00(param_1);
  return unaff_EBX;
}




void FUN_00102422(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c30(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_0010356e(void)

{
  return;
}




undefined8 FUN_001034de(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102d88(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102dcb(param_2);
  puVar2 = (undefined4 *)FUN_00102410(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00103c7e(undefined4 param_1)

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




void FUN_00102e07(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103234(local_88);
                    /* try { // try from 00102e37 to 00102ee8 has its CatchHandler @ 00102f34 */
  __s = operator_new__(100);
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  local_58[0] = 0;
  puVar1 = (undefined8 *)FUN_0010177a(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_0010177a(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_0010177a(local_88,local_58);
  *puVar1 = __s;
  FUN_00103274(local_58,local_88);
                    /* try { // try from 00102ef0 to 00102ef4 has its CatchHandler @ 00102f1f */
  FUN_00101569(local_58);
  FUN_00103254(local_58);
  FUN_00103254(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104007(void)

{
  return;
}




void FUN_001040b7(void)

{
  return;
}




void FUN_001031b4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00103b7c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined4 * FUN_001038d6(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001028da(param_2);
  puVar2 = (undefined4 *)FUN_00103966(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_00102cbd(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c0e(long param_1)

{
  FUN_0010239c(param_1 + 0x20);
  return;
}




void FUN_00103966(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001039a0(param_2);
  FUN_001039b2(uVar1,uVar2);
  return;
}




undefined8 FUN_00102990(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103274(undefined8 param_1,undefined8 param_2)

{
  FUN_00103338(param_1,param_2);
  return;
}




undefined8 FUN_0010362a(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001022c8(param_1);
  uVar2 = FUN_00103714(param_2);
  uVar1 = FUN_0010372a(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001027ce(param_1);
  uVar2 = FUN_00103899(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001025bc(param_1);
  uVar2 = FUN_001038b7(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_00102a7e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103afc(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010346e(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010357d(param_1,param_2);
  FUN_001035f8(param_1,param_2);
  FUN_0010318a(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103899(undefined8 param_1)

{
  FUN_00103130(param_1);
  return;
}




undefined8 FUN_00102630(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001022b2(param_1);
  local_50 = FUN_001022c8(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102119(local_58);
    local_59 = FUN_0010195c(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102858(local_58);
    }
    else {
      local_58 = FUN_00102990(local_58);
    }
  }
  FUN_00102294(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a90(param_1);
    cVar1 = FUN_001018ee(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102ae0(local_38,&local_58,&local_50);
      goto LAB_001027b2;
    }
    FUN_0010282c(&local_48);
  }
  uVar2 = FUN_001025d2(local_48);
  cVar1 = FUN_0010195c(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_0010289a(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102ae0(local_38,&local_58,&local_50);
  }
LAB_001027b2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102556(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001022c8(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001025d2(local_50);
    cVar2 = FUN_0010195c(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001025d2(local_50);
      cVar2 = FUN_0010195c(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_0010289a(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001025bc(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001025bc(local_60);
          local_48[1] = 0;
          FUN_001025f0(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010286e(local_48);
          uVar6 = FUN_001025d2(*puVar5);
          cVar2 = FUN_0010195c(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102630(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102858(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001025f0(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001027e4(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001027ce(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001027ce(local_60);
        uVar6 = FUN_001027ce(local_60);
        FUN_001027e4(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010282c(local_48);
        uVar6 = FUN_001025d2(*puVar5);
        cVar2 = FUN_0010195c(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102630(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102858(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001025f0(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001027e4(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001020fe;
  }
  lVar3 = FUN_001025a6(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101e12:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001025bc(local_60);
    uVar6 = FUN_001025d2(*puVar5);
    cVar2 = FUN_0010195c(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101e12;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001025bc(local_60);
    local_48[1] = 0;
    FUN_001025f0(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102630(local_60,param_3);
  }
LAB_001020fe:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00102ba2(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102d1e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00103b54(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102cd0(undefined8 param_1)

{
  return param_1;
}




void FUN_001028da(long param_1)

{
  FUN_00102b28(param_1 + 0x20);
  return;
}




void FUN_00102ae0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102cbd(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a7e(param_3);
  param_1[1] = *puVar1;
  return;
}




ulong FUN_00103dec(long param_1,ulong param_2,long param_3)

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




undefined4 FUN_0010195c(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00101cba(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010357d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001036d2(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010406a(void)

{
  return;
}




long FUN_0010372a(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001038d6(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_0010393a(param_2);
                    /* try { // try from 00103799 to 0010382b has its CatchHandler @ 00103857 */
    uVar2 = FUN_0010372a(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103950(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001038d6(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_0010393a(local_38);
      uVar2 = FUN_0010372a(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103950(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00102256(undefined8 param_1,undefined8 param_2)

{
  FUN_00102912(param_1,param_2);
  FUN_00102956(param_1,param_2);
  return;
}




void FUN_001040cd(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_0010393a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103ba8(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010239c(undefined8 param_1)

{
  FUN_001029a6(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




void FUN_001029e0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ba2(param_1,param_2,0);
  return;
}




void FUN_00104096(void)

{
  return;
}




void FUN_001035ce(undefined8 param_1,undefined8 param_2)

{
  FUN_00103700(param_1,param_2);
  return;
}




void FUN_00103338(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010346e(param_1,param_2);
  lVar1 = FUN_001034de(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001034f4(param_1);
                    /* try { // try from 00103393 to 00103397 has its CatchHandler @ 0010339d */
    uVar3 = FUN_0010350a(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00103234(undefined8 param_1)

{
  FUN_00103214(param_1);
  return;
}




void FUN_00103cd8(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001029b8(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001032da(undefined8 param_1)

{
  FUN_001033f4(param_1);
  return;
}




void FUN_00102b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cf6(param_1,param_2,param_3);
  return;
}




void FUN_00102956(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029ce(param_1);
  FUN_00102b70(uVar1,param_2,1);
  return;
}




long FUN_001022c8(long param_1)

{
  return param_1 + 8;
}




void FUN_001040c2(void)

{
  return;
}




void FUN_00104340(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001030bb(void)

{
  FUN_00102f61();
  return;
}




undefined8 FUN_001036d2(undefined8 param_1,undefined8 param_2)

{
  FUN_001035ce(param_1,param_2);
  return param_1;
}




void FUN_0010329e(long param_1)

{
  FUN_001033c4(param_1);
  FUN_001033e4(param_1);
  FUN_0010318a(param_1 + 8);
  return;
}




void FUN_00103404(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102858(local_28);
    FUN_00103404(param_1,uVar1);
    lVar2 = FUN_00102990(local_28);
    FUN_00102256(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00101c7a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023f2(param_2);
  uVar1 = FUN_00102410(uVar1);
  FUN_00102422(param_1,uVar1);
  return;
}




void FUN_00104080(void)

{
  return;
}




void FUN_001038b7(undefined8 param_1)

{
  FUN_0010315d(param_1);
  return;
}




void FUN_001033f4(void)

{
  return;
}




long FUN_001027ce(long param_1)

{
  return param_1 + 0x18;
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




void FUN_00102912(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101c0e(param_2);
  uVar2 = FUN_001029ce(param_1);
  FUN_00102b46(uVar2,uVar1);
  return;
}




void FUN_00102dcb(undefined8 param_1)

{
  FUN_00102de9(param_1);
  return;
}




void FUN_00104075(void)

{
  return;
}




void FUN_00101767(void)

{
  return;
}



