
undefined8 FUN_0010184d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103ada("Calling good()...");
  FUN_0010183d();
  FUN_00103ada("Finished good()");
  FUN_00103ada("Calling bad()...");
  FUN_00101589();
  FUN_00103ada("Finished bad()");
  return 0;
}




void FUN_00103888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103759(param_3);
  FUN_001038e4(param_1,param_2,uVar1);
  return;
}




void FUN_00103b86(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101a00(undefined8 param_1)

{
  FUN_00101aa6(param_1);
  return;
}




undefined8 FUN_00102320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102bfa(param_1);
  uVar2 = FUN_0010230e(param_4);
  uVar3 = FUN_001022fc(param_3);
  uVar4 = FUN_001022ea(param_2);
  FUN_00102c26(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103371(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0010230e(param_5);
  uVar2 = FUN_001022fc(param_4);
  uVar3 = FUN_001022ea(param_3);
  FUN_001035c6(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00101ccc(void)

{
  return;
}




void FUN_001019e0(undefined8 param_1)

{
  FUN_001019c0(param_1);
  return;
}




void FUN_00103576(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001036f0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




ulong FUN_00103ece(long param_1,ulong param_2,long param_3)

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




void FUN_00103d09(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102116(void)

{
  return;
}




void FUN_0010401c(void)

{
  return;
}




undefined8 FUN_001036a4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103fad(void)

{
  return 1;
}




undefined8 FUN_0010350e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00103691(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010376c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102bfa(param_1);
  uVar2 = FUN_00103759(param_2);
  FUN_001037fc(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103d37(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




long FUN_00102f7c(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103ff0(void)

{
  return;
}




undefined8 FUN_00102bbe(undefined8 param_1)

{
  return param_1;
}




void FUN_001038c5(undefined8 param_1)

{
  FUN_00102ba0(param_1);
  return;
}




undefined8 FUN_0010422d(undefined8 *param_1)

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




void FUN_0010407f(void)

{
  return;
}




ulong FUN_00103dca(long param_1,ulong param_2,long param_3)

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




void FUN_00103c06(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010348c(undefined8 param_1)

{
  FUN_001036a4(param_1);
  return;
}




void FUN_00101aa6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d46(param_1);
  FUN_00101cdc(param_1,uVar1);
  FUN_001019a0(param_1);
  return;
}




void FUN_001035c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022ea(param_3);
  uVar1 = FUN_001022fc(param_4);
  FUN_00101e4c(local_38,uVar1);
  FUN_0010230e(param_5);
  uVar1 = FUN_001018b2(0x10,param_2);
                    /* try { // try from 0010364e to 00103652 has its CatchHandler @ 00103655 */
  FUN_00103708(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101da4(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00101a20(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c10(param_1,param_2);
  return;
}




void FUN_00103271(undefined8 param_1)

{
  FUN_001018db(param_1);
  return;
}




undefined8
FUN_00101ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_0010230e(param_5);
  uVar2 = FUN_001022fc(param_4);
  uVar3 = FUN_001022ea(param_3);
  local_40 = FUN_00102320(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101f4c to 00101f8f has its CatchHandler @ 00101fcd */
  uVar1 = FUN_00102749(local_40);
  local_38 = FUN_001023a0(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102152(param_1,local_40);
    FUN_00102886(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010279c(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00102f92(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001033e1(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001033e1(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010223e(long param_1)

{
  FUN_00102b4a(param_1 + 0x20);
  return;
}




undefined8 FUN_0010331c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102749(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103072(param_1);
  FUN_00103094(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001042e4(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001038e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103759(param_3);
  puVar3 = (undefined8 *)FUN_001018b2(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8 FUN_00101e39(undefined8 param_1)

{
  return param_1;
}




void FUN_001032c0(undefined8 param_1,undefined8 param_2)

{
  FUN_0010353a(param_1,param_2);
  return;
}




void FUN_00101cdc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102125(local_28);
    FUN_00101cdc(param_1,uVar1);
    lVar2 = FUN_0010213b(local_28);
    FUN_00102152(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00103ada(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101960(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8
FUN_0010279c(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102a76(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102d80(param_3);
      uVar5 = FUN_00102749(param_4);
      cVar1 = FUN_00101e12(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102820;
      }
    }
  }
  bVar2 = true;
LAB_00102820:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102886(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001019a0(undefined8 param_1)

{
  FUN_00101a86(param_1);
  return;
}




void FUN_00102152(undefined8 param_1,undefined8 param_2)

{
  FUN_001029f8(param_1,param_2);
  FUN_00102a3c(param_1,param_2);
  return;
}




void FUN_00101a86(undefined8 param_1)

{
  FUN_00101ccc(param_1);
  return;
}




void FUN_00103a08(undefined8 param_1)

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
  puVar1 = (undefined8 *)FUN_00101ae4(param_1,&local_54);
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
  strncpy(local_48,local_50,__n);
  local_18 = local_18 & 0xff;
  FUN_00103ada(local_50);
  if (local_50 != (char *)0x0) {
    operator_delete__(local_50);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001016e3(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019e0(local_88);
                    /* try { // try from 00101713 to 001017c4 has its CatchHandler @ 00101810 */
  __s = operator_new__(100);
  memset(__s,0x41,0x31);
  *(undefined *)((long)__s + 0x31) = 0;
  local_58[0] = 0;
  puVar1 = (undefined8 *)FUN_00101ae4(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101ae4(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101ae4(local_88,local_58);
  *puVar1 = __s;
  FUN_00101a20(local_58,local_88);
                    /* try { // try from 001017cc to 001017d0 has its CatchHandler @ 001017fb */
  FUN_00103a08(local_58);
  FUN_00101a00(local_58);
  FUN_00101a00(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102d54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_001018b2(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001020b2(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102932(local_18,param_1);
  FUN_00102950(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




int FUN_00103fcb(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102ba0(undefined8 param_1)

{
  FUN_0010332e(param_1);
  return;
}




void FUN_0010386a(undefined8 param_1)

{
  FUN_001038c5(param_1);
  return;
}




undefined8 FUN_00103524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103936(undefined8 param_1)

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
  puVar1 = (undefined8 *)FUN_00101ae4(param_1,&local_54);
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
  strncpy(local_48,local_50,__n);
  local_18 = local_18 & 0xff;
  FUN_00103ada(local_50);
  if (local_50 != (char *)0x0) {
    operator_delete__(local_50);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001029f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010223e(param_2);
  uVar2 = FUN_001032ae(param_1);
  FUN_001032c0(uVar2,uVar1);
  return;
}




undefined8 FUN_001022fc(undefined8 param_1)

{
  return param_1;
}




void FUN_0010408a(void)

{
  return;
}




void FUN_00101cbc(void)

{
  return;
}




void FUN_00104032(void)

{
  return;
}




undefined8 FUN_00101d46(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103ffb(void)

{
  return;
}




void FUN_001032ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010354e(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e3) */
/* WARNING: Removing unreachable block (ram,0x001014ef) */

void FUN_001014d0(void)

{
  return;
}




void FUN_00104011(void)

{
  return;
}




void FUN_00102932(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010332e(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103d6a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103bdb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101a4a(long param_1)

{
  FUN_00101c9c(param_1);
  FUN_00101cbc(param_1);
  FUN_00101936(param_1 + 8);
  return;
}




undefined8 FUN_00103759(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001032ae(undefined8 param_1)

{
  return param_1;
}




void FUN_00104069(void)

{
  return;
}




void FUN_00104074(void)

{
  return;
}




long FUN_00102d6a(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_00102260(undefined8 param_1)

{
  return param_1;
}




void FUN_00103072(long param_1)

{
  FUN_0010348c(param_1 + 0x20);
  return;
}




void FUN_001042c5(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_0010420a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102886(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001037fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001018b2(0x30,param_2);
  uVar1 = FUN_00103759(param_3);
  uVar2 = FUN_0010223e(param_2);
  uVar3 = FUN_001032ae(param_1);
  FUN_00103888(uVar3,uVar2,uVar1);
  return;
}




long FUN_00101ae4(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101d5c(param_1,param_2);
  local_28 = FUN_00101d86(param_1);
  cVar2 = FUN_00101da4(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101dca(param_1);
    uVar3 = FUN_00101df0(&local_38);
    cVar2 = FUN_00101e12(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101b84;
    }
  }
  bVar1 = true;
LAB_00101b84:
  if (bVar1) {
    uVar3 = FUN_00101e39(param_2);
    FUN_00101e76(local_30,uVar3);
    FUN_00101eae(&local_28,&local_38);
    local_38 = FUN_00101ed0(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101df0(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




long FUN_001018db(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_0010405e(void)

{
  return;
}




void FUN_00101589(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019e0(local_88);
                    /* try { // try from 001015b9 to 0010166a has its CatchHandler @ 001016b6 */
  __s = operator_new__(100);
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  local_58[0] = 0;
  puVar1 = (undefined8 *)FUN_00101ae4(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101ae4(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101ae4(local_88,local_58);
  *puVar1 = __s;
  FUN_00101a20(local_58,local_88);
                    /* try { // try from 00101672 to 00101676 has its CatchHandler @ 001016a1 */
  FUN_00103936(local_58);
  FUN_00101a00(local_58);
  FUN_00101a00(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102230(void)

{
  return;
}




bool FUN_001041af(pthread_t *param_1)

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




undefined4 * FUN_001034aa(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103072(param_2);
  puVar2 = (undefined4 *)FUN_001036b6(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103fe5(void)

{
  return;
}




undefined8 FUN_00101e76(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102260(param_2);
  FUN_00102272(param_1,uVar1);
  return param_1;
}




undefined8 FUN_001036f0(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00104380(void)

{
  return;
}




void FUN_00104006(void)

{
  return;
}




void FUN_00102272(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102260(param_2);
  FUN_00102b68(param_1,uVar1);
  return;
}




void FUN_00101936(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00101960(param_1);
  return;
}




void FUN_00103032(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001033e1(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103708(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_001037b8(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103cde(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010291e(void)

{
  return;
}




undefined8 FUN_00102086(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102b4a(undefined8 param_1)

{
  FUN_0010331c(param_1);
  return;
}




void FUN_00101d5c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102190(param_1,param_2);
  return;
}




undefined8 FUN_001028a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030aa(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101524) */
/* WARNING: Removing unreachable block (ram,0x00101530) */

void FUN_00101500(void)

{
  return;
}




void FUN_001019c0(undefined8 param_1)

{
  FUN_00101a4a(param_1);
  return;
}




void FUN_00102d80(undefined8 param_1)

{
  FUN_00102749(param_1);
  return;
}




undefined8 FUN_00102d04(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102886(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001022aa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ba0(param_2);
  uVar1 = FUN_00102bbe(uVar1);
  FUN_00102bd0(param_1,uVar1);
  return;
}




void FUN_0010353a(void)

{
  return;
}




undefined8 FUN_0010230e(undefined8 param_1)

{
  return param_1;
}




void FUN_001037b8(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010386a(param_2);
  puVar2 = (undefined4 *)FUN_00102bbe(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00103c31(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001028f4(undefined8 param_1,undefined8 param_2)

{
  FUN_001030d8(param_1,param_2);
  return;
}




undefined8 FUN_001033f4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102886(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001030ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102190(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102a76(param_1);
  uVar2 = FUN_00101d46(param_1);
  FUN_00102a8c(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_0010328f(undefined8 param_1)

{
  FUN_00101908(param_1);
  return;
}




undefined4 FUN_00101e12(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00104048(void)

{
  return;
}




void FUN_00102a3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001032ae(param_1);
  FUN_001032ea(uVar1,param_2,1);
  return;
}




undefined8 * FUN_00102fda(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00102016(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001028a4(param_1,param_2);
  FUN_0010291e(param_1,param_2);
  FUN_00101936(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103343(undefined8 param_1,undefined8 param_2)

{
  FUN_00103576(param_1,param_2,0);
  return;
}




void FUN_00102c26(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001018b2(0x30,param_2);
  uVar1 = FUN_0010230e(param_5);
  uVar2 = FUN_001022fc(param_4);
  uVar3 = FUN_001022ea(param_3);
  uVar4 = FUN_0010223e(param_2);
  uVar5 = FUN_001032ae(param_1);
                    /* try { // try from 00102cb5 to 00102cb9 has its CatchHandler @ 00102cbc */
  FUN_00103371(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001030aa(undefined8 param_1,undefined8 param_2)

{
  FUN_001028f4(param_1,param_2);
  return param_1;
}




void FUN_00101c10(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00102016(param_1,param_2);
  lVar1 = FUN_00102086(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010209c(param_1);
                    /* try { // try from 00101c6b to 00101c6f has its CatchHandler @ 00101c75 */
    uVar3 = FUN_001020b2(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_001014d0();
    DAT_00109020 = 1;
    return;
  }
  return;
}




undefined8 FUN_0010213b(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001033e1(undefined8 param_1)

{
  return param_1;
}




void FUN_001040a0(void)

{
  return;
}




undefined8 FUN_001021e0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102886(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d86(undefined8 param_1)

{
  FUN_001021e0(param_1);
  return;
}




long FUN_0010209c(long param_1)

{
  return param_1 + 0x10;
}




void FUN_001036b6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103759(param_2);
  FUN_0010376c(uVar1,uVar2);
  return;
}




void FUN_00104053(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108eb8)();
  return;
}




void FUN_00102d9e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001033e1(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_001040e2(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001040ab,local_18);
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




void FUN_00103b00(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00103094(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010183d(void)

{
  FUN_001016e3();
  return;
}




void FUN_00103cb6(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




long FUN_00103102(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001034aa(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_0010350e(param_2);
                    /* try { // try from 00103171 to 00103203 has its CatchHandler @ 0010322f */
    uVar2 = FUN_00103102(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103524(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001034aa(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_0010350e(local_38);
      uVar2 = FUN_00103102(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103524(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00103444(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103691(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001033e1(param_3);
  param_1[1] = *puVar1;
  return;
}




long FUN_00101908(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_001042a6(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101eae(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010403d(void)

{
  return;
}




void FUN_00103bb0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102dde(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101d46(param_1);
  local_50 = FUN_00102a76(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102749(local_58);
    local_59 = FUN_00101e12(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102125(local_58);
    }
    else {
      local_58 = FUN_0010213b(local_58);
    }
  }
  FUN_00102886(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001033f4(param_1);
    cVar1 = FUN_00101da4(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103444(local_38,&local_58,&local_50);
      goto LAB_00102f60;
    }
    FUN_00102fda(&local_48);
  }
  uVar2 = FUN_00102d80(local_48);
  cVar1 = FUN_00101e12(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103032(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103444(local_38,&local_58,&local_50);
  }
LAB_00102f60:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102b68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102260(param_2);
  FUN_00102bd0(param_1,uVar1);
  return;
}




undefined8 FUN_00102950(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102a76(param_1);
  uVar2 = FUN_001030ec(param_2);
  uVar1 = FUN_00103102(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102f7c(param_1);
  uVar2 = FUN_00103271(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102d6a(param_1);
  uVar2 = FUN_0010328f(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00104095(void)

{
  return;
}




void FUN_0010354e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101e4c(undefined8 param_1,undefined8 param_2)

{
  FUN_001022aa(param_1,param_2);
  return;
}




undefined8 FUN_00102a8c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102749(local_38);
    cVar1 = FUN_00101e12(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102125(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010213b(local_38);
    }
  }
  FUN_00102886(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00102125(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00104027(void)

{
  return;
}




void FUN_00101df0(undefined8 *param_1)

{
  FUN_0010223e(*param_1);
  return;
}




void FUN_001018c8(void)

{
  return;
}




void FUN_00103c5c(undefined4 param_1)

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




undefined8 FUN_00103fbc(void)

{
  return 0;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_001023a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102d04(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102a76(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102d80(local_50);
    cVar2 = FUN_00101e12(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102d80(local_50);
      cVar2 = FUN_00101e12(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103032(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102d6a(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102d6a(local_60);
          local_48[1] = 0;
          FUN_00102d9e(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00103006(local_48);
          uVar6 = FUN_00102d80(*puVar5);
          cVar2 = FUN_00101e12(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102dde(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102125(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102d9e(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102f92(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102f7c(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102f7c(local_60);
        uVar6 = FUN_00102f7c(local_60);
        FUN_00102f92(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102fda(local_48);
        uVar6 = FUN_00102d80(*puVar5);
        cVar2 = FUN_00101e12(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102dde(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102125(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102d9e(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102f92(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_0010272e;
  }
  lVar3 = FUN_00102d54(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102442:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102d6a(local_60);
    uVar6 = FUN_00102d80(*puVar5);
    cVar2 = FUN_00101e12(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102442;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102d6a(local_60);
    local_48[1] = 0;
    FUN_00102d9e(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102dde(local_60,param_3);
  }
LAB_0010272e:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 * FUN_00103006(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




long FUN_00102a76(long param_1)

{
  return param_1 + 8;
}




void FUN_00102bfa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001032ae(param_1);
  FUN_00103343(uVar1,1);
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




void FUN_001040ab(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103b5a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001030d8(void)

{
  return;
}




void FUN_00102bd0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102260(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00101c9c(undefined8 param_1)

{
  FUN_00102116(param_1);
  return;
}




undefined4 FUN_00101dca(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102230(param_1);
  return unaff_EBX;
}




undefined8 FUN_001022ea(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b32(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}



