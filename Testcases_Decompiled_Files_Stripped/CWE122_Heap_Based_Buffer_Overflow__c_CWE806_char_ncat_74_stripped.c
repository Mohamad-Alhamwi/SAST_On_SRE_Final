
void FUN_00102242(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103ffe(void)

{
  return;
}




void FUN_00104061(void)

{
  return;
}




void FUN_00102426(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001016ff(0x30,param_2);
  uVar1 = FUN_00101c8c(param_5);
  uVar2 = FUN_00101c7a(param_4);
  uVar3 = FUN_00101c68(param_3);
  uVar4 = FUN_00101bbc(param_2);
  uVar5 = FUN_0010297c(param_1);
                    /* try { // try from 001024b5 to 001024b9 has its CatchHandler @ 001024bc */
  FUN_001029bc(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00102f23(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010320a(local_88);
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,0x31);
  *(undefined *)((long)__s + 0x31) = 0;
  local_58[0] = 0;
                    /* try { // try from 00102faf to 00103018 has its CatchHandler @ 00103064 */
  puVar1 = (undefined8 *)FUN_00101728(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101728(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101728(local_88,local_58);
  *puVar1 = __s;
  FUN_0010324a(local_58,local_88);
                    /* try { // try from 00103020 to 00103024 has its CatchHandler @ 0010304f */
  FUN_00101634(local_58);
  FUN_0010322a(local_58);
  FUN_0010322a(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103af8(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 * FUN_001027da(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001023fa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010297c(param_1);
  FUN_0010298e(uVar1,1);
  return;
}




void FUN_00101634(undefined8 param_1)

{
  undefined8 *puVar1;
  size_t __n;
  long in_FS_OFFSET;
  undefined4 local_54;
  char *local_50;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 2;
  puVar1 = (undefined8 *)FUN_00101728(param_1,&local_54);
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
  local_18 = 0;
  __n = strlen(local_50);
  strncat(local_48,local_50,__n);
  local_18 = local_18 & 0xff;
  FUN_00103ad2(local_50);
  free(local_50);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101bae(void)

{
  return;
}




void FUN_00103cd6(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




bool FUN_001041a7(pthread_t *param_1)

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




void FUN_001042bd(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010187e(undefined8 param_1)

{
  FUN_00101b5e(param_1);
  return;
}




void FUN_00102af4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c90(param_1,param_2);
  return;
}




void FUN_00101b0e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102276(param_1);
  uVar2 = FUN_00102260(param_1);
  FUN_0010228c(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8
FUN_001019c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c8c(param_5);
  uVar2 = FUN_00101c7a(param_4);
  uVar3 = FUN_00101c68(param_3);
  local_40 = FUN_00101c9e(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a44 to 00101a87 has its CatchHandler @ 00101ac5 */
  uVar1 = FUN_001020c7(local_40);
  local_38 = FUN_00101d1e(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102204(param_1,local_40);
    FUN_00102242(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010211a(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00103d62(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103bfe(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103d2f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




int FUN_00103fc3(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00104202(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001035ce(void)

{
  return;
}




void FUN_001042dc(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00101931(undefined8 param_1)

{
  return param_1;
}




void FUN_001033ba(void)

{
  return;
}




void FUN_00104009(void)

{
  return;
}




undefined8 FUN_00101bde(undefined8 param_1)

{
  return param_1;
}




void FUN_0010429e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00104082(void)

{
  return;
}




void FUN_00103ba8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102580(undefined8 param_1)

{
  FUN_001020c7(param_1);
  return;
}




void FUN_00103d01(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001028aa(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec0)();
  return;
}




undefined8 FUN_00102504(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102242(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103926(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001029bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c8c(param_5);
  uVar2 = FUN_00101c7a(param_4);
  uVar3 = FUN_00101c68(param_3);
  FUN_00102ba0(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001035e2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010196e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bde(param_2);
  FUN_00101bf0(param_1,uVar1);
  return param_1;
}




void FUN_00102ca4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103a42(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103976(param_3);
  FUN_00103a80(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001030a1(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103ad2("Calling good()...");
  FUN_00103091();
  FUN_00103ad2("Finished good()");
  FUN_00103ad2("Calling bad()...");
  FUN_00102db5();
  FUN_00103ad2("Finished bad()");
  return 0;
}




void FUN_00104014(void)

{
  return;
}




undefined8 FUN_00102954(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103988(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023fa(param_1);
  uVar2 = FUN_00103976(param_2);
  FUN_001039d4(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_00102806(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00101c7a(undefined8 param_1)

{
  return param_1;
}




void FUN_00104035(void)

{
  return;
}




void FUN_001023a0(undefined8 param_1)

{
  FUN_00102966(param_1);
  return;
}




long FUN_00103106(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_001023be(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c68(param_3);
  uVar1 = FUN_00101c7a(param_4);
  FUN_00101944(local_38,uVar1);
  FUN_00101c8c(param_5);
  uVar1 = FUN_001016ff(0x10,param_2);
                    /* try { // try from 00102c28 to 00102c2c has its CatchHandler @ 00102c2f */
  FUN_00102ce4(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0010256a(long param_1)

{
  return param_1 + 0x20;
}




void FUN_0010402a(void)

{
  return;
}




void FUN_00101944(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c28(param_1,param_2);
  return;
}




void FUN_001019a6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8
FUN_0010211a(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102276(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102580(param_3);
      uVar5 = FUN_001020c7(param_4);
      cVar1 = FUN_0010190a(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_0010219e;
      }
    }
  }
  bVar2 = true;
LAB_0010219e:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102242(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




long FUN_001034ca(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00102260(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102ad6(undefined8 param_1)

{
  FUN_00102c7e(param_1);
  return;
}




long FUN_00101728(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101854(param_1,param_2);
  local_28 = FUN_0010187e(param_1);
  cVar2 = FUN_0010189c(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001018c2(param_1);
    uVar3 = FUN_001018e8(&local_38);
    cVar2 = FUN_0010190a(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001017c8;
    }
  }
  bVar1 = true;
LAB_001017c8:
  if (bVar1) {
    uVar3 = FUN_00101931(param_2);
    FUN_0010196e(local_30,uVar3);
    FUN_001019a6(&local_28,&local_38);
    local_38 = FUN_001019c8(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001018e8(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_0010339a(undefined8 param_1)

{
  FUN_00103544(param_1);
  return;
}




void FUN_00103ff3(void)

{
  return;
}




void FUN_00103c29(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010401f(void)

{
  return;
}




void FUN_00104380(void)

{
  return;
}




void FUN_00101854(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b0e(param_1,param_2);
  return;
}




void FUN_0010322a(undefined8 param_1)

{
  FUN_001032d0(param_1);
  return;
}




undefined8 FUN_0010189c(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00102d97(undefined8 param_1)

{
  FUN_001023a0(param_1);
  return;
}




void FUN_00102792(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a2c(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a2c(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 * FUN_0010281c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001039d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001016ff(0x30,param_2);
  uVar1 = FUN_00103976(param_3);
  uVar2 = FUN_00101bbc(param_2);
  uVar3 = FUN_0010297c(param_1);
  FUN_00103a42(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00101c8c(undefined8 param_1)

{
  return param_1;
}




void FUN_001031ea(undefined8 param_1)

{
  FUN_00103274(param_1);
  return;
}




void FUN_00103a80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103976(param_3);
  puVar3 = (undefined8 *)FUN_001016ff(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8 FUN_00104225(undefined8 *param_1)

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




void FUN_00104077(void)

{
  return;
}




undefined8 FUN_00102554(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_00103fb4(void)

{
  return 0;
}




undefined8 FUN_00103976(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001016ff(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001034e0(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035e2(local_18,param_1);
  FUN_00103600(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102ccc(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_001036ea(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00101b5e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102242(&local_18,param_1 + 8);
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




long FUN_00103133(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00101bf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bde(param_2);
  FUN_00102368(param_1,uVar1);
  return;
}




void FUN_00103fe8(void)

{
  return;
}




void FUN_0010259e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a2c(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_0010228c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001020c7(local_38);
    cVar1 = FUN_0010190a(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102806(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010293e(local_38);
    }
  }
  FUN_00102242(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001020c7(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102888(param_1);
  FUN_001028aa(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c90(void)

{
  return;
}




void FUN_00103bd3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010297c(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103ec6(long param_1,ulong param_2,long param_3)

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




void FUN_001018e8(undefined8 *param_1)

{
  FUN_00101bbc(*param_1);
  return;
}




void FUN_00101569(undefined8 param_1)

{
  undefined8 *puVar1;
  size_t __n;
  long in_FS_OFFSET;
  undefined4 local_54;
  char *local_50;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 2;
  puVar1 = (undefined8 *)FUN_00101728(param_1,&local_54);
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
  local_18 = 0;
  __n = strlen(local_50);
  strncat(local_48,local_50,__n);
  local_18 = local_18 & 0xff;
  FUN_00103ad2(local_50);
  free(local_50);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ce4(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d36(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102368(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bde(param_2);
  FUN_001023d0(param_1,uVar1);
  return;
}




void FUN_001036d6(void)

{
  return;
}




undefined8 FUN_00103fa5(void)

{
  return 1;
}




undefined8 FUN_001040da(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001040a3,local_18);
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




void FUN_001031ca(undefined8 param_1)

{
  FUN_001032b0(param_1);
  return;
}




undefined8 FUN_00102a3e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102242(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001032d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102260(param_1);
  FUN_001033da(param_1,uVar1);
  FUN_001031ca(param_1);
  return;
}




void FUN_00102848(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a2c(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103160(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010318a(param_1);
  return;
}




undefined8 FUN_00101c9e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001023fa(param_1);
  uVar2 = FUN_00101c8c(param_4);
  uVar3 = FUN_00101c7a(param_3);
  uVar4 = FUN_00101c68(param_2);
  FUN_00102426(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined4 FUN_001018c2(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101bae(param_1);
  return unaff_EBX;
}




void FUN_001023d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bde(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00103544(void)

{
  return;
}




undefined8 FUN_001034b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102d36(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d79(param_2);
  puVar2 = (undefined4 *)FUN_001023be(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00103c54(undefined4 param_1)

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




void FUN_00102db5(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010320a(local_88);
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  local_58[0] = 0;
                    /* try { // try from 00102e41 to 00102eaa has its CatchHandler @ 00102ef6 */
  puVar1 = (undefined8 *)FUN_00101728(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101728(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101728(local_88,local_58);
  *puVar1 = __s;
  FUN_0010324a(local_58,local_88);
                    /* try { // try from 00102eb2 to 00102eb6 has its CatchHandler @ 00102ee1 */
  FUN_00101569(local_58);
  FUN_0010322a(local_58);
  FUN_0010322a(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fdd(void)

{
  return;
}




void FUN_0010408d(void)

{
  return;
}




void FUN_0010318a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00103b52(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined4 * FUN_001038ac(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102888(param_2);
  puVar2 = (undefined4 *)FUN_0010393c(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_00102c6b(undefined8 param_1)

{
  return param_1;
}




void FUN_00101bbc(long param_1)

{
  FUN_0010234a(param_1 + 0x20);
  return;
}




void FUN_0010393c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103976(param_2);
  FUN_00103988(uVar1,uVar2);
  return;
}




undefined8 FUN_0010293e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010324a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010330e(param_1,param_2);
  return;
}




undefined8 FUN_00103600(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102276(param_1);
  uVar2 = FUN_001036ea(param_2);
  uVar1 = FUN_00103700(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_0010277c(param_1);
  uVar2 = FUN_0010386f(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010256a(param_1);
  uVar2 = FUN_0010388d(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_00102a2c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ad2(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103444(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103553(param_1,param_2);
  FUN_001035ce(param_1,param_2);
  FUN_00103160(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010386f(undefined8 param_1)

{
  FUN_00103106(param_1);
  return;
}




undefined8 FUN_001025de(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102260(param_1);
  local_50 = FUN_00102276(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001020c7(local_58);
    local_59 = FUN_0010190a(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102806(local_58);
    }
    else {
      local_58 = FUN_0010293e(local_58);
    }
  }
  FUN_00102242(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a3e(param_1);
    cVar1 = FUN_0010189c(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a8e(local_38,&local_58,&local_50);
      goto LAB_00102760;
    }
    FUN_001027da(&local_48);
  }
  uVar2 = FUN_00102580(local_48);
  cVar1 = FUN_0010190a(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102848(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a8e(local_38,&local_58,&local_50);
  }
LAB_00102760:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101d1e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102504(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102276(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102580(local_50);
    cVar2 = FUN_0010190a(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102580(local_50);
      cVar2 = FUN_0010190a(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102848(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010256a(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010256a(local_60);
          local_48[1] = 0;
          FUN_0010259e(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010281c(local_48);
          uVar6 = FUN_00102580(*puVar5);
          cVar2 = FUN_0010190a(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001025de(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102806(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_0010259e(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102792(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_0010277c(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_0010277c(local_60);
        uVar6 = FUN_0010277c(local_60);
        FUN_00102792(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001027da(local_48);
        uVar6 = FUN_00102580(*puVar5);
        cVar2 = FUN_0010190a(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001025de(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102806(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_0010259e(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102792(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001020ac;
  }
  lVar3 = FUN_00102554(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101dc0:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010256a(local_60);
    uVar6 = FUN_00102580(*puVar5);
    cVar2 = FUN_0010190a(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101dc0;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010256a(local_60);
    local_48[1] = 0;
    FUN_0010259e(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001025de(local_60,param_3);
  }
LAB_001020ac:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00102b50(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102ccc(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00103b2a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102c7e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102888(long param_1)

{
  FUN_00102ad6(param_1 + 0x20);
  return;
}




void FUN_00102a8e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c6b(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a2c(param_3);
  param_1[1] = *puVar1;
  return;
}




ulong FUN_00103dc2(long param_1,ulong param_2,long param_3)

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




undefined4 FUN_0010190a(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00101c68(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103553(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001036a8(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00104040(void)

{
  return;
}




long FUN_00103700(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001038ac(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103910(param_2);
                    /* try { // try from 0010376f to 00103801 has its CatchHandler @ 0010382d */
    uVar2 = FUN_00103700(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103926(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001038ac(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103910(local_38);
      uVar2 = FUN_00103700(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103926(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00102204(undefined8 param_1,undefined8 param_2)

{
  FUN_001028c0(param_1,param_2);
  FUN_00102904(param_1,param_2);
  return;
}




void FUN_001040a3(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00103910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103b7e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010234a(undefined8 param_1)

{
  FUN_00102954(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




void FUN_0010298e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b50(param_1,param_2,0);
  return;
}




void FUN_0010406c(void)

{
  return;
}




void FUN_001035a4(undefined8 param_1,undefined8 param_2)

{
  FUN_001036d6(param_1,param_2);
  return;
}




void FUN_0010330e(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103444(param_1,param_2);
  lVar1 = FUN_001034b4(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001034ca(param_1);
                    /* try { // try from 00103369 to 0010336d has its CatchHandler @ 00103373 */
    uVar3 = FUN_001034e0(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_0010320a(undefined8 param_1)

{
  FUN_001031ea(param_1);
  return;
}




void FUN_00103cae(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102966(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001032b0(undefined8 param_1)

{
  FUN_001033ca(param_1);
  return;
}




void FUN_00102b1e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ca4(param_1,param_2,param_3);
  return;
}




void FUN_00102904(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010297c(param_1);
  FUN_00102b1e(uVar1,param_2,1);
  return;
}




long FUN_00102276(long param_1)

{
  return param_1 + 8;
}




void FUN_00104098(void)

{
  return;
}




void FUN_00104310(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103091(void)

{
  FUN_00102f23();
  return;
}




undefined8 FUN_001036a8(undefined8 param_1,undefined8 param_2)

{
  FUN_001035a4(param_1,param_2);
  return param_1;
}




void FUN_00103274(long param_1)

{
  FUN_0010339a(param_1);
  FUN_001033ba(param_1);
  FUN_00103160(param_1 + 8);
  return;
}




void FUN_001033da(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102806(local_28);
    FUN_001033da(param_1,uVar1);
    lVar2 = FUN_0010293e(local_28);
    FUN_00102204(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00101c28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023a0(param_2);
  uVar1 = FUN_001023be(uVar1);
  FUN_001023d0(param_1,uVar1);
  return;
}




void FUN_00104056(void)

{
  return;
}




void FUN_0010388d(undefined8 param_1)

{
  FUN_00103133(param_1);
  return;
}




void FUN_001033ca(void)

{
  return;
}




long FUN_0010277c(long param_1)

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




void FUN_001028c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101bbc(param_2);
  uVar2 = FUN_0010297c(param_1);
  FUN_00102af4(uVar2,uVar1);
  return;
}




void FUN_00102d79(undefined8 param_1)

{
  FUN_00102d97(param_1);
  return;
}




void FUN_0010404b(void)

{
  return;
}




void FUN_00101715(void)

{
  return;
}



