
void FUN_00101c44(undefined8 param_1)

{
  FUN_001020be(param_1);
  return;
}




void FUN_00103c6f(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103f56(void)

{
  return;
}




undefined4 FUN_00101dba(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00102b66(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103701(undefined8 param_1)

{
  return param_1;
}




void FUN_0010205a(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001028da(local_18,param_1);
  FUN_001028f8(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d98(undefined8 *param_1)

{
  FUN_001021e6(*param_1);
  return;
}




void FUN_00103a40(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




long FUN_001018b0(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103fae(void)

{
  return;
}




void FUN_00103fda(void)

{
  return;
}




undefined8
FUN_00102744(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102a1e(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102d28(param_3);
      uVar5 = FUN_001026f1(param_4);
      cVar1 = FUN_00101dba(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001027c8;
      }
    }
  }
  bVar2 = true;
LAB_001027c8:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010282e(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00104193(undefined8 *param_1)

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




void FUN_00101870(void)

{
  return;
}




undefined8 FUN_0010185a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103ac0(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010386d(undefined8 param_1)

{
  FUN_00102b48(param_1);
  return;
}




void FUN_00103a98(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103b97(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103fb9(void)

{
  return;
}




undefined8 FUN_001032d6(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103fe5(void)

{
  return;
}




void FUN_00104011(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101569(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101988(local_88);
                    /* try { // try from 001015a4 to 0010162e has its CatchHandler @ 0010167a */
  pvVar1 = operator_new__(10);
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101a8c(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101a8c(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101a8c(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001019c8(local_58,local_88);
                    /* try { // try from 00101636 to 0010163a has its CatchHandler @ 00101665 */
  FUN_001038de(local_58);
  FUN_001019a8(local_58);
  FUN_001019a8(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103052(undefined8 param_1,undefined8 param_2)

{
  FUN_0010289c(param_1,param_2);
  return param_1;
}




void FUN_00103c9d(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101908(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00103fcf(void)

{
  return;
}




void FUN_00103f77(void)

{
  return;
}




void FUN_00103812(undefined8 param_1)

{
  FUN_0010386d(param_1);
  return;
}




void FUN_00101e56(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103a66(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102138(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102a1e(param_1);
  uVar2 = FUN_00101cee(param_1);
  FUN_00102a34(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00101de1(undefined8 param_1)

{
  return param_1;
}




void FUN_001034f6(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_001022a4(undefined8 param_1)

{
  return param_1;
}




void FUN_001032eb(undefined8 param_1,undefined8 param_2)

{
  FUN_0010351e(param_1,param_2,0);
  return;
}




void FUN_001017e5(void)

{
  FUN_001016a7();
  return;
}




void FUN_001029a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001021e6(param_2);
  uVar2 = FUN_00103256(param_1);
  FUN_00103268(uVar2,uVar1);
  return;
}




void FUN_0010365e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103701(param_2);
  FUN_00103714(uVar1,uVar2);
  return;
}




void FUN_00102ba2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103256(param_1);
  FUN_001032eb(uVar1,1);
  return;
}




void FUN_00103cd0(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00102208(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103639(undefined8 param_1)

{
  return param_1;
}




void FUN_001020be(void)

{
  return;
}




void FUN_001019a8(undefined8 param_1)

{
  FUN_00101a4e(param_1);
  return;
}




undefined8 FUN_00103f13(void)

{
  return 1;
}




void FUN_00101d2e(undefined8 param_1)

{
  FUN_00102188(param_1);
  return;
}




void FUN_00102bce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010185a(0x30,param_2);
  uVar1 = FUN_001022b6(param_5);
  uVar2 = FUN_001022a4(param_4);
  uVar3 = FUN_00102292(param_3);
  uVar4 = FUN_001021e6(param_2);
  uVar5 = FUN_00103256(param_1);
                    /* try { // try from 00102c5d to 00102c61 has its CatchHandler @ 00102c64 */
  FUN_00103319(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00101d4c(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_0010289c(undefined8 param_1,undefined8 param_2)

{
  FUN_00103080(param_1,param_2);
  return;
}




undefined8 FUN_00101e1e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102208(param_2);
  FUN_0010221a(param_1,uVar1);
  return param_1;
}




ulong FUN_00103e34(long param_1,ulong param_2,long param_3)

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




void FUN_001016a7(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101988(local_88);
                    /* try { // try from 001016e2 to 0010176c has its CatchHandler @ 001017b8 */
  pvVar1 = operator_new__(0xb);
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101a8c(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101a8c(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101a8c(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001019c8(local_58,local_88);
                    /* try { // try from 00101774 to 00101778 has its CatchHandler @ 001017a3 */
  FUN_0010398f(local_58);
  FUN_001019a8(local_58);
  FUN_001019a8(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




undefined8 FUN_001017f5(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a40("Calling good()...");
  FUN_001017e5();
  FUN_00103a40("Finished good()");
  FUN_00103a40("Calling bad()...");
  FUN_00101569();
  FUN_00103a40("Finished bad()");
  return 0;
}




long FUN_00101a8c(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101d04(param_1,param_2);
  local_28 = FUN_00101d2e(param_1);
  cVar2 = FUN_00101d4c(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101d72(param_1);
    uVar3 = FUN_00101d98(&local_38);
    cVar2 = FUN_00101dba(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101b2c;
    }
  }
  bVar1 = true;
LAB_00101b2c:
  if (bVar1) {
    uVar3 = FUN_00101de1(param_2);
    FUN_00101e1e(local_30,uVar3);
    FUN_00101e56(&local_28,&local_38);
    local_38 = FUN_00101e78(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101d98(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00103237(undefined8 param_1)

{
  FUN_001018b0(param_1);
  return;
}




void FUN_00101c64(void)

{
  return;
}




void FUN_001026f1(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010301a(param_1);
  FUN_0010303c(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ffb(void)

{
  return;
}




undefined8 FUN_0010303c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103c44(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010388c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103701(param_3);
  puVar3 = (undefined8 *)FUN_0010185a(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




ulong FUN_00103d30(long param_1,ulong param_2,long param_3)

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




long FUN_00102f24(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00102b10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102208(param_2);
  FUN_00102b78(param_1,uVar1);
  return;
}




long FUN_00102044(long param_1)

{
  return param_1 + 0x10;
}




void FUN_0010422b(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001020cd(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00104048(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104011,local_18);
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




undefined8 FUN_0010364c(undefined8 param_1)

{
  return param_1;
}




void FUN_001019c8(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bb8(param_1,param_2);
  return;
}




undefined8 FUN_00104170(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102d46(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103389(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00103698(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00103fc4(void)

{
  return;
}




void FUN_00103f6c(void)

{
  return;
}




void FUN_00101df4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102252(param_1,param_2);
  return;
}




void FUN_00103b6c(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010356e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102292(param_3);
  uVar1 = FUN_001022a4(param_4);
  FUN_00101df4(local_38,uVar1);
  FUN_001022b6(param_5);
  uVar1 = FUN_0010185a(0x10,param_2);
                    /* try { // try from 001035f6 to 001035fa has its CatchHandler @ 001035fd */
  FUN_001036b0(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103256(undefined8 param_1)

{
  return param_1;
}




void FUN_001029e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103256(param_1);
  FUN_00103292(uVar1,param_2,1);
  return;
}




void FUN_001033ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103639(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103389(param_3);
  param_1[1] = *puVar1;
  return;
}




long FUN_00101883(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_00102cac(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010282e(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101948(undefined8 param_1)

{
  FUN_00101a2e(param_1);
  return;
}




void FUN_00103c1c(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8
FUN_00101e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_001022b6(param_5);
  uVar2 = FUN_001022a4(param_4);
  uVar3 = FUN_00102292(param_3);
  local_40 = FUN_001022c8(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101ef4 to 00101f37 has its CatchHandler @ 00101f75 */
  uVar1 = FUN_001026f1(local_40);
  local_38 = FUN_00102348(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001020fa(param_1,local_40);
    FUN_0010282e(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102744(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00101c84(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001020cd(local_28);
    FUN_00101c84(param_1,uVar1);
    lVar2 = FUN_001020e3(local_28);
    FUN_001020fa(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00101a4e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101cee(param_1);
  FUN_00101c84(param_1,uVar1);
  FUN_00101948(param_1);
  return;
}




undefined8 FUN_001028f8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102a1e(param_1);
  uVar2 = FUN_00103094(param_2);
  uVar1 = FUN_001030aa(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102f24(param_1);
  uVar2 = FUN_00103219(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102d12(param_1);
  uVar2 = FUN_00103237(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00103830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103701(param_3);
  FUN_0010388c(param_1,param_2,uVar1);
  return;
}




void FUN_00104006(void)

{
  return;
}




void FUN_00102252(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b48(param_2);
  uVar1 = FUN_00102b66(uVar1);
  FUN_00102b78(param_1,uVar1);
  return;
}




void FUN_00103b16(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec0)();
  return;
}




bool FUN_00104115(pthread_t *param_1)

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




long FUN_00102a1e(long param_1)

{
  return param_1 + 8;
}




void FUN_00101d04(undefined8 param_1,undefined8 param_2)

{
  FUN_00102138(param_1,param_2);
  return;
}




undefined8 FUN_0010339c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010282e(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b41(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103fa3(void)

{
  return;
}




void FUN_00102d28(undefined8 param_1)

{
  FUN_001026f1(param_1);
  return;
}




undefined8 FUN_001022c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102ba2(param_1);
  uVar2 = FUN_001022b6(param_4);
  uVar3 = FUN_001022a4(param_3);
  uVar4 = FUN_00102292(param_2);
  FUN_00102bce(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00102fda(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103389(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_001020e3(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102cfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_001019f2(long param_1)

{
  FUN_00101c44(param_1);
  FUN_00101c64(param_1);
  FUN_001018de(param_1 + 8);
  return;
}




undefined4 FUN_00101d72(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_001021d8(param_1);
  return unaff_EBX;
}




void FUN_00103268(undefined8 param_1,undefined8 param_2)

{
  FUN_001034e2(param_1,param_2);
  return;
}




void FUN_00103219(undefined8 param_1)

{
  FUN_00101883(param_1);
  return;
}




undefined8 FUN_00102a34(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001026f1(local_38);
    cVar1 = FUN_00101dba(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001020cd(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001020e3(local_38);
    }
  }
  FUN_0010282e(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001038de(undefined8 param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  undefined4 local_2c;
  void *local_28;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 2;
  puVar1 = (undefined8 *)FUN_00101a8c(param_1,&local_2c);
  local_28 = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  memcpy(local_28,local_1b,sVar2 + 1);
  FUN_00103a40(local_28);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b48(undefined8 param_1)

{
  FUN_001032d6(param_1);
  return;
}




void FUN_00103bc2(undefined4 param_1)

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




void FUN_00103f82(void)

{
  return;
}




long FUN_00102d12(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00103760(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103812(param_2);
  puVar2 = (undefined4 *)FUN_00102b66(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_001034cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001028c6(void)

{
  return;
}




void FUN_001018de(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00101908(param_1);
  return;
}




void FUN_0010351e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103698(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_001021e6(long param_1)

{
  FUN_00102af2(param_1 + 0x20);
  return;
}




void FUN_00104280(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102f3a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103389(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103389(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103319(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_001022b6(param_5);
  uVar2 = FUN_001022a4(param_4);
  uVar3 = FUN_00102292(param_3);
  FUN_0010356e(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001022b6(undefined8 param_1)

{
  return param_1;
}




void FUN_001036b0(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103760(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001030aa(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103452(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001034b6(param_2);
                    /* try { // try from 00103119 to 001031ab has its CatchHandler @ 001031d7 */
    uVar2 = FUN_001030aa(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001034cc(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103452(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001034b6(local_38);
      uVar2 = FUN_001030aa(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001034cc(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined4 * FUN_00103452(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010301a(param_2);
  puVar2 = (undefined4 *)FUN_0010365e(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00101fbe(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010284c(param_1,param_2);
  FUN_001028c6(param_1,param_2);
  FUN_001018de(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a2e(undefined8 param_1)

{
  FUN_00101c74(param_1);
  return;
}




undefined8 FUN_0010284c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103052(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00103714(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ba2(param_1);
  uVar2 = FUN_00103701(param_2);
  FUN_001037a4(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_001028da(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001020fa(undefined8 param_1,undefined8 param_2)

{
  FUN_001029a0(param_1,param_2);
  FUN_001029e4(param_1,param_2);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102cac(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102a1e(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102d28(local_50);
    cVar2 = FUN_00101dba(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102d28(local_50);
      cVar2 = FUN_00101dba(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102fda(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102d12(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102d12(local_60);
          local_48[1] = 0;
          FUN_00102d46(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102fae(local_48);
          uVar6 = FUN_00102d28(*puVar5);
          cVar2 = FUN_00101dba(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102d86(local_60,param_3);
          }
          else {
            lVar3 = FUN_001020cd(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102d46(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102f3a(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102f24(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102f24(local_60);
        uVar6 = FUN_00102f24(local_60);
        FUN_00102f3a(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102f82(local_48);
        uVar6 = FUN_00102d28(*puVar5);
        cVar2 = FUN_00101dba(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102d86(local_60,param_3);
        }
        else {
          lVar3 = FUN_001020cd(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102d46(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102f3a(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001026d6;
  }
  lVar3 = FUN_00102cfc(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_001023ea:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102d12(local_60);
    uVar6 = FUN_00102d28(*puVar5);
    cVar2 = FUN_00101dba(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_001023ea;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102d12(local_60);
    local_48[1] = 0;
    FUN_00102d46(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102d86(local_60,param_3);
  }
LAB_001026d6:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103aec(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




void FUN_001042f0(void)

{
  return;
}




void FUN_00101988(undefined8 param_1)

{
  FUN_00101968(param_1);
  return;
}




void FUN_00103292(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034f6(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103f22(void)

{
  return 0;
}




void FUN_00103434(undefined8 param_1)

{
  FUN_0010364c(param_1);
  return;
}




void FUN_00101bb8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00101fbe(param_1,param_2);
  lVar1 = FUN_0010202e(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00102044(param_1);
                    /* try { // try from 00101c13 to 00101c17 has its CatchHandler @ 00101c1d */
    uVar3 = FUN_0010205a(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00103f98(void)

{
  return;
}




void FUN_001034e2(void)

{
  return;
}




void FUN_001037a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010185a(0x30,param_2);
  uVar1 = FUN_00103701(param_3);
  uVar2 = FUN_001021e6(param_2);
  uVar3 = FUN_00103256(param_1);
  FUN_00103830(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00101cee(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102292(undefined8 param_1)

{
  return param_1;
}




void FUN_0010424a(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103f61(void)

{
  return;
}




undefined8 FUN_001032c4(undefined8 param_1)

{
  return param_1;
}




void FUN_0010301a(long param_1)

{
  FUN_00103434(param_1 + 0x20);
  return;
}




undefined8 FUN_00102d86(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101cee(param_1);
  local_50 = FUN_00102a1e(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001026f1(local_58);
    local_59 = FUN_00101dba(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001020cd(local_58);
    }
    else {
      local_58 = FUN_001020e3(local_58);
    }
  }
  FUN_0010282e(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_0010339c(param_1);
    cVar1 = FUN_00101d4c(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_001033ec(local_38,&local_58,&local_50);
      goto LAB_00102f08;
    }
    FUN_00102f82(&local_48);
  }
  uVar2 = FUN_00102d28(local_48);
  cVar1 = FUN_00101dba(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102fda(local_38,&local_48,&local_40);
  }
  else {
    FUN_001033ec(local_38,&local_58,&local_50);
  }
LAB_00102f08:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010398f(undefined8 param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  undefined4 local_2c;
  void *local_28;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 2;
  puVar1 = (undefined8 *)FUN_00101a8c(param_1,&local_2c);
  local_28 = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  memcpy(local_28,local_1b,sVar2 + 1);
  FUN_00103a40(local_28);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010221a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102208(param_2);
  FUN_00102b10(param_1,uVar1);
  return;
}




undefined8 * FUN_00102fae(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_0010282e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010420c(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001021d8(void)

{
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




void FUN_00101c74(void)

{
  return;
}




void FUN_00103f8d(void)

{
  return;
}




void FUN_00103ff0(void)

{
  return;
}




void FUN_00102b78(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102208(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00103389(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_00102f82(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00103094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101968(undefined8 param_1)

{
  FUN_001019f2(param_1);
  return;
}




void FUN_00103f4b(void)

{
  return;
}




undefined8 FUN_001034b6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103080(void)

{
  return;
}




undefined8 FUN_0010202e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102188(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010282e(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102af2(undefined8 param_1)

{
  FUN_001032c4(param_1);
  return;
}




int FUN_00103f31(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}



